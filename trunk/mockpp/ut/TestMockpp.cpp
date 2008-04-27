#include <mockpp/mockpp.h>

#include <mockpp/chaining/ChainableMockObject.h>

#include <mockpp/chaining/CountedChainableMethod.h>
#include <mockpp/chaining/ChainingMockObjectSupport.h>

#include <cppunit/extensions/HelperMacros.h>

#include <list>

using namespace mockpp;

const char* foo()
{
	return __FUNCTION__;
}

int triple(int i)
{
	return i*3;
}

class TestMockpp: public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( TestMockpp );
	CPPUNIT_TEST( testShouldBeAbleToSupportPassByValue );
	CPPUNIT_TEST( testShouldBeAbleToSupportPassByReference );
	CPPUNIT_TEST( testShouldBeAbleToSupportOutBoundByReference );
	CPPUNIT_TEST( testShouldBeAbleToSupportOutBoundByValue );
	CPPUNIT_TEST( testShouldBeAbleToSupportSameForReference );
	CPPUNIT_TEST( testShouldBeAbleToSupportOnConsecutiveCalls );
	CPPUNIT_TEST( testShouldBeAbleToSupportOnConsecutiveCallsWithReference );
	CPPUNIT_TEST( testShouldBeAbleToSupportCompareArrayOfChar );
	CPPUNIT_TEST( testShouldSupportProcStub );
	CPPUNIT_TEST( testShouldSupportProcStubWithReferenceType );
	CPPUNIT_TEST( testShouldSupportProcStubWithReferenceTypeAndWillStub );
	CPPUNIT_TEST( testShouldSupportProcStubForReturningReference );
	CPPUNIT_TEST( testShouldBeAbleToSupportCompareArrayOfCharWithSpecifiedType );
	CPPUNIT_TEST( testShouldBeAbleToSupportReturnReference );
	CPPUNIT_TEST( testShouldBeAbleToSupportSetAFunctionAsStub );
	CPPUNIT_TEST( testShouldBeAbleToSupportSetAFunctionInTestCaseAsStub );
	CPPUNIT_TEST( testShouldSupportProcStubWithParametersOfConstReferenceType );
	CPPUNIT_TEST( testShouldForbidOutboundConstReference );
	CPPUNIT_TEST( testShouldBeAbleToSupportOutBoundList );
	CPPUNIT_TEST( testShouldBeAbleToCompareMemory );
	CPPUNIT_TEST( testShouldBeAbleToCompareMemoryWithImplicitPointer );
	CPPUNIT_TEST( testShouldBeAbleToCompareMemoryWithConstAddr );
	CPPUNIT_TEST_SUITE_END();

	ChainableMockObject* mockObject;

public:
	void setUp()
	{
		mockObject = new ChainableMockObject(MOCKPP_PCHAR("GlobalMockObject"), 0);
	}

	void tearDown()
	{
		mockObject->verify();
		delete mockObject;
	}

	//////////////////////////////////////////
	struct P3
	{
		P3() : result(2) {}

		int& operator() (int p)
		{
			result *= p;
			return result;
		}

		int result;
	};

	void testShouldSupportProcStubForReturningReference()
	{
		P3 proc;

		ChainableMockMethod<int&, int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		fooMocker
			.expects(exactly(2))
			.with(eq(10))
			.call(proc);
		
		int& result = fooMocker(10);

		CPPUNIT_ASSERT_EQUAL(20, result);

		result = 4;

		CPPUNIT_ASSERT_EQUAL(40, fooMocker(10));
	}

	//////////////////////////////////////////
	struct P1
	{
		int operator() (int& p)
		{
			p *= 10;
			return p*20;
		}
	};

	void testShouldSupportProcStubWithReferenceTypeAndWillStub()
	{
		P1 proc;
		int i = 10;
		int j = 5;

		ChainableMockMethod<int, int&> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		fooMocker
			.expects(once())
			.with(eq(10))
			.call(proc);

		fooMocker
			.expects(once())
			.with(eq(j))
			.will(returnValue(30));

		CPPUNIT_ASSERT_EQUAL(2000, fooMocker(i));
		CPPUNIT_ASSERT_EQUAL(100, i);

		CPPUNIT_ASSERT_EQUAL(30, fooMocker(j));
	}

	void testShouldSupportProcStubWithReferenceType()
	{
		P1 proc;
		int i = 10;

		ChainableMockMethod<int, int&> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		fooMocker
			.expects(once())
			.with(eq(10))
			.call(proc);

		CPPUNIT_ASSERT_EQUAL(2000, fooMocker(i));
		CPPUNIT_ASSERT_EQUAL(100, i);
	}

	//////////////////////////////////////////
	struct P2
	{
		int operator() (int p)
		{
			return p*20;
		}
	};

	void testShouldSupportProcStub()
	{
		P2 proc;
		int i = 10;

		ChainableMockMethod<int, int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		fooMocker
			.expects(once())
			.with(eq(10))
			.call(proc);

		CPPUNIT_ASSERT_EQUAL(200, fooMocker(i));
	}

	///////////////////////////////////////////////////////////
	struct P4
	{
		int operator() (const int& p)
		{
			return p*20;
		}
	};

	void testShouldSupportProcStubWithParametersOfConstReferenceType()
	{
		P4 proc;
		int i = 10;

		ChainableMockMethod<int, const int&> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		fooMocker
			.expects(once())
			.with(eq<const int>(i))
			.call(proc);

		CPPUNIT_ASSERT_EQUAL(200, fooMocker(i));
	}
	///////////////////////////////////////////////////////////
	void testShouldBeAbleToSupportSetAFunctionAsStub()
	{
		ChainableMockMethod<int, int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		fooMocker
			.expects(once())
			.with(eq(6))
			.will(invoke(triple));

		CPPUNIT_ASSERT(18 == fooMocker(6));
	}

	/////////////////////////////////////////////////////////////
	static int multiple2(int i)
	{
		return i*2;
	}

	void testShouldBeAbleToSupportSetAFunctionInTestCaseAsStub()
	{
		ChainableMockMethod<int, int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		fooMocker
			.expects(once())
			.with(eq(6))
			.will(invoke(multiple2));

		CPPUNIT_ASSERT(12 == fooMocker(6));
	}
	/////////////////////////////////////////////////////////////

	void testShouldBeAbleToSupportCompareArrayOfCharWithSpecifiedType()
	{
		ChainableMockMethod<int, const char*> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		const char* str = "foo";
		fooMocker
			.expects(once())
			.with(eq(str))
			.will(returnValue<int>(5));

		CPPUNIT_ASSERT_EQUAL(5, fooMocker(foo()));
	}

	void testShouldBeAbleToSupportCompareArrayOfChar()
	{
		ChainableMockMethod<int, const char*> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		const char* str = "foo";
		fooMocker
			.expects(once())
			.with(eq(str))
			.will(returnValue(5));

		CPPUNIT_ASSERT_EQUAL(5, fooMocker(foo()));
	}

	void testShouldBeAbleToSupportOnConsecutiveCalls()
	{
		ChainableMockMethod<int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	
		fooMocker.stubs()
			.will(onConsecutiveCalls(
						returnValue(1),
						returnValue(2)));

		CPPUNIT_ASSERT_EQUAL(1, fooMocker());
		CPPUNIT_ASSERT_EQUAL(2, fooMocker());
	}

	void testShouldBeAbleToSupportOnConsecutiveCallsWithReference()
	{
		int i0 = 1;
		int i1 = 2;
		ChainableMockMethod<int&> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	
		fooMocker.stubs()
			.will(onConsecutiveCalls(
						returnValue<int&>(i0),
						returnValue<int&>(i1)));

		CPPUNIT_ASSERT_EQUAL(1, fooMocker());
		CPPUNIT_ASSERT_EQUAL(2, fooMocker());
	}

	void testShouldBeAbleToSupportPassByValue()
	{
		ChainableMockMethod<int, int, int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		int i0 = 3;
		int i1 = 2;

		fooMocker
			.expects(once())
			.with(eq(i0), eq(i1))
			.will(returnValue(5));

		CPPUNIT_ASSERT(5 == fooMocker(i0, i1));
	}

	void testShouldBeAbleToSupportPassByReference()
	{
		ChainableMockMethod<int, int&, int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		int i0 = 3;
		int i1 = 2;

		fooMocker
			.expects(once())
			.with(eq(i0), eq(i1))
			.will(returnValue(5));

		CPPUNIT_ASSERT_EQUAL(5, fooMocker(i0, i1));
	}

	void testShouldBeAbleToSupportOutBoundByReference()
	{
		ChainableMockMethod<int, int&, int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		int i0 = 3;
		int i1 = 2;

		fooMocker
			.expects(once())
			.with(outBound(4), eq(i1))
			.will(returnValue(6));

		CPPUNIT_ASSERT_EQUAL(6,  fooMocker(i0, i1));
		CPPUNIT_ASSERT_EQUAL(4, i0);
	}

	void testShouldBeAbleToSupportOutBoundList()
	{
		ChainableMockMethod<int, int&, int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		int i0 = 3;
		int i1 = 2;

		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);

		fooMocker
			.expects(exactly(3))
			.with(outBoundList(lst), eq(i1))
			.will(returnValue(0));

		CPPUNIT_ASSERT_EQUAL(0,  fooMocker(i0, i1));
		CPPUNIT_ASSERT_EQUAL(1, i0);

		CPPUNIT_ASSERT_EQUAL(0,  fooMocker(i0, i1));
		CPPUNIT_ASSERT_EQUAL(2, i0);

		CPPUNIT_ASSERT_EQUAL(0,  fooMocker(i0, i1));
		CPPUNIT_ASSERT_EQUAL(3, i0);
	}

	void testShouldBeAbleToSupportOutBoundByValue()
	{
		ChainableMockMethod<int, int, int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		int i0 = 3;
		int i1 = 2;

		fooMocker
			.expects(once())
			.with(outBound(4), eq(i1))
			.will(returnValue(6));

		CPPUNIT_ASSERT_EQUAL(6, fooMocker.forward(i0, i1));
		CPPUNIT_ASSERT_EQUAL(4, i0);
	}


	void testShouldBeAbleToSupportSameForReference()
	{
		ChainableMockMethod<int&, int&, int> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		int i0 = 3;
		int i1 = 2;
		int i2 = 5;

		fooMocker
			.expects(once())
			.with(same(i0), eq(i1))
			.will(returnValue<int&>(i2));

		CPPUNIT_ASSERT_EQUAL(5, fooMocker(i0, i1));
	}

	void testShouldBeAbleToSupportReturnReference()
	{
		ChainableMockMethod<int&> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		int i = 5;

		fooMocker
			.stubs()
			.will(returnValue<int&>(i));

		CPPUNIT_ASSERT_EQUAL(5, fooMocker());

		i = 10;	

		CPPUNIT_ASSERT_EQUAL(10, fooMocker());
	}

	void testShouldBeAbleToSupportReturnConstReference()
	{
		ChainableMockMethod<const int&> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		int i = 5;

		fooMocker
			.stubs()
			.will(returnValue<const int&>(i));

		CPPUNIT_ASSERT_EQUAL(5, fooMocker());

		i = 10;	

		CPPUNIT_ASSERT_EQUAL(10, fooMocker());
	}

	void testShouldForbidOutboundConstReference()
	{
		ChainableMockMethod<void, int&> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		fooMocker
			.stubs()
			.with(outBound<int>(10));

		int i = 0;

		fooMocker(i);

		CPPUNIT_ASSERT_EQUAL(10, i);
	}

	struct MM
	{
		char a;
		int b;
	};

	void testShouldBeAbleToCompareMemory()
	{
		ChainableMockMethod<bool, MM*> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		MM m0;
		MM m1;

		memset((void*)&m0, 0, sizeof(MM));
		memset((void*)&m1, 0, sizeof(MM));

		m0.a = 1; m0.b = 2;
		m1.a = 1; m1.b = 2;

		fooMocker.stubs()
			.with(mirror(&m0))
			.will(returnValue(true));

		CPPUNIT_ASSERT(fooMocker(&m1));
	}

   void testShouldBeAbleToCompareMemoryWithConstAddr()
   {
      ChainableMockMethod<bool, const MM*> fooMocker(MOCKPP_PCHAR("foo"), mockObject);

      MM m0;
      MM m1;

      memset((void*)&m0, 0, sizeof(MM));
      memset((void*)&m1, 0, sizeof(MM));

      m0.a = 1; m0.b = 2;
      m1.a = 1; m1.b = 2;

      fooMocker.stubs()
         .with(mirror<const MM*>(&m0))
         .will(returnValue(true));

      CPPUNIT_ASSERT(fooMocker(&m1));
   }

	typedef MM* PMM;

	void testShouldBeAbleToCompareMemoryWithImplicitPointer()
	{
		ChainableMockMethod<bool, PMM> fooMocker(MOCKPP_PCHAR("foo"), mockObject);	

		MM m0;
		MM m1;

		memset((void*)&m0, 0, sizeof(MM));
		memset((void*)&m1, 0, sizeof(MM));

		m0.a = 1; m0.b = 2;
		m1.a = 1; m1.b = 2;

		fooMocker.stubs()
			.with(mirror(&m0))
			.will(returnValue(true));

		CPPUNIT_ASSERT(fooMocker(&m1));
	}
};

CPPUNIT_TEST_SUITE_REGISTRATION( TestMockpp );

