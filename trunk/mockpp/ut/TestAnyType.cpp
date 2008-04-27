
#include <mockpp/mockpp.h>

#include <mockpp/chaining/ChainableMockObject.h>

#include <mockpp/chaining/CountedChainableMethod.h>
#include <mockpp/chaining/ChainingMockObjectSupport.h>

#include <cppunit/extensions/HelperMacros.h>

#include <list>

using namespace mockpp;

class TestAnyType: public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( TestAnyType );
	CPPUNIT_TEST( testShouldSupportOutBoundAReferenceParameterOfAnyType );
	CPPUNIT_TEST( testShouldForbidOutBoundAReferenceParameterOfAnyType );
	CPPUNIT_TEST( testShouldSupportOutBoundListAReferenceParameterOfAnyType );
	CPPUNIT_TEST( testShouldSupportGT );
	CPPUNIT_TEST( testShouldSupportGE );
	CPPUNIT_TEST( testShouldSupportGE1 );
	CPPUNIT_TEST( testShouldSupportGE2 );
	CPPUNIT_TEST( testShouldSupportLE );
	CPPUNIT_TEST( testShouldSupportLE1 );
	CPPUNIT_TEST( testShouldSupportLT);
	CPPUNIT_TEST( testShouldSupportMIRROR );
	CPPUNIT_TEST( testShouldSupportMIRROR1 );
	CPPUNIT_TEST( testShouldSupportMIRROR2 );
	CPPUNIT_TEST( testShouldDistinguashConstAndNonConstWhenUsingMIRROR );
	CPPUNIT_TEST( testShouldDistiguishConstAndNonConstWhenUsingMIRROR_2 );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp()
	{
	}

	void tearDown()
	{
	}

	/////////////////////////////////////////////////////////
	struct Class7 : public ChainableMockObject
   {
      Class7()
         : ChainableMockObject(MOCKPP_PCHAR("Class7"), 0)
         , mocker(MOCKPP_PCHAR("bar"), this)
      {}

      template <typename T>
      int bar(const T* p1)
      {
         return mocker.anycall<int, const T*>(p1);
      }

      ChainableMockMethod<int, AnyType> mocker;
   };

   void testShouldDistinguashConstAndNonConstWhenUsingMIRROR()
   {
      Class7 cls;

      MM mm0, mm1;

      mm0.a = 1; mm0.b = 111;
      mm1.a = 1; mm1.b = 111;

      cls.mocker
         .expects(never())
         .with(MIRROR(&mm0));

      cls.mocker
         .expects(once())
         .with(MIRROR<const MM*>(&mm0))
         .will(returnValue(10));

      CPPUNIT_ASSERT_EQUAL(10, cls.bar(&mm1));
   }

	/////////////////////////////////////////////////////
	struct Class6 : public ChainableMockObject
   {
      Class6()
         : ChainableMockObject(MOCKPP_PCHAR("Class6"), 0)
         , mocker(MOCKPP_PCHAR("bar"), this)
      {}

      template <typename T>
      int bar(const T* p1)
      {
         return mocker.anycall<int, T*>(const_cast<T*>(p1));
      }

      ChainableMockMethod<int, AnyType> mocker;
   };

   struct MM
   { int a, b; };

   void testShouldDistiguishConstAndNonConstWhenUsingMIRROR_2()
   {
      Class6 cls;

      MM mm0, mm1;

      mm0.a = 1; mm0.b = 111;
      mm1.a = 1; mm1.b = 111;

      cls.mocker
         .expects(never())
         .with(MIRROR<const MM*>(&mm0));

      cls.mocker
         .expects(once())
         .with(MIRROR(&mm0))
         .will(returnValue(10));

      CPPUNIT_ASSERT_EQUAL(10, cls.bar(&mm1));
   }

	////////////////////////////////////////////////////////
   struct Class5 : public ChainableMockObject
   {
      Class5()
         : ChainableMockObject(MOCKPP_PCHAR("Class5"), 0)
         , mocker(MOCKPP_PCHAR("bar"), this)
      {}

      template <typename T>
      int bar(const T* p1)
      {
         return mocker.anycall<int, T*>(const_cast<T*>(p1));
      }

      ChainableMockMethod<int, AnyType> mocker;
   };

   void testShouldSupportMIRROR2()
   {
      Class5 cls;

      MM mm0, mm1;

      mm0.a = 1; mm0.b = 111;
      mm1.a = 1; mm1.b = 111;

      cls.mocker
         .expects(once())
         .with(MIRROR(&mm0))
         .will(returnValue(10));

      CPPUNIT_ASSERT_EQUAL(10, cls.bar(&mm1));
   }

	////////////////////////////////////////////////////////
   struct Class4 : public ChainableMockObject
   {
      Class4()
         : ChainableMockObject(MOCKPP_PCHAR("Class4"), 0)
         , mocker(MOCKPP_PCHAR("bar"), this)
      {}

      template <typename T>
      int bar(const T* p1)
      {
         return mocker.anycall<int, const T*>(p1);
      }

      ChainableMockMethod<int, AnyType> mocker;
   };

   void testShouldSupportMIRROR1()
   {
      Class4 cls;

      MM mm0, mm1;

      mm0.a = 1; mm0.b = 111;
      mm1.a = 1; mm1.b = 111;

      cls.mocker
         .expects(once())
         .with(MIRROR<const MM*>(&mm0))
         .will(returnValue(10));


      CPPUNIT_ASSERT_EQUAL(10, cls.bar(&mm1));
   }
	////////////////////////////////////////////////////////
   struct Class3 : public ChainableMockObject
   {
      Class3()
         : ChainableMockObject(MOCKPP_PCHAR("Class3"), 0)
         , mocker(MOCKPP_PCHAR("bar"), this)
      {}

      template <typename T>
      int bar(T* p1)
      {
         return mocker.anycall<int, T*>(p1);
      }

      ChainableMockMethod<int, AnyType> mocker;
   };

	void testShouldSupportMIRROR()
   {
      Class3 cls;

		MM mm0, mm1;

		mm0.a = 1; mm0.b = 111;
		mm1.a = 1; mm1.b = 111;

      cls.mocker
         .expects(once())
         .with(MIRROR(&mm0))
         .will(returnValue(10));


      CPPUNIT_ASSERT_EQUAL(10, cls.bar(&mm1));
   }
	////////////////////////////////////////////////////////
   struct Class2 : public ChainableMockObject
   {
      Class2()
         : ChainableMockObject(MOCKPP_PCHAR("Class2"), 0)
         , mocker(MOCKPP_PCHAR("bar"), this)
      {}

      template <typename T>
      int bar(const T& p1, int p2)
      {
         return mocker.anycall<int, T>(p1, p2);
      }

      ChainableMockMethod<int, AnyType, int> mocker;
   };

   void testShouldSupportGT()
   {
      Class2 cls;

      cls.mocker
         .expects(once())
         .with(GT(3), gt(2))
         .will(returnValue(10));


      CPPUNIT_ASSERT_EQUAL(10, cls.bar(4, 3));

      cls.verify();
   }

   void testShouldSupportGE2()
   {
      Class2 cls;

      cls.mocker
         .expects(once())
         .with(GE(3), ge(2))
         .will(returnValue(10));


      CPPUNIT_ASSERT_EQUAL(10, cls.bar(3, 3));

      cls.verify();
   }

   void testShouldSupportGE1()
   {
      Class2 cls;

      cls.mocker
         .expects(once())
         .with(GE(3), ge(2))
         .will(returnValue(10));


      CPPUNIT_ASSERT_EQUAL(10, cls.bar(4, 2));

      cls.verify();
   }

   void testShouldSupportGE()
   {
      Class2 cls;

      cls.mocker
         .expects(once())
         .with(GE(3), ge(2))
         .will(returnValue(10));


      CPPUNIT_ASSERT_EQUAL(10, cls.bar(3, 2));

      cls.verify();
   }

	void testShouldSupportLE()
	{
      Class2 cls;

      cls.mocker
         .expects(once())
         .with(LE(3), le(2))
         .will(returnValue(10));


      CPPUNIT_ASSERT_EQUAL(10, cls.bar(3, 2));

      cls.verify();
	}

	void testShouldSupportLE1()
	{
      Class2 cls;

      cls.mocker
         .expects(once())
         .with(LE(3), le(2))
         .will(returnValue(10));


      CPPUNIT_ASSERT_EQUAL(10, cls.bar(2, 2));

      cls.verify();
	}

	void testShouldSupportLT()
	{
      Class2 cls;

      cls.mocker
         .expects(once())
         .with(LT(3), lt(2))
         .will(returnValue(10));


      CPPUNIT_ASSERT_EQUAL(10, cls.bar(2, 1));

      cls.verify();
	}

	////////////////////////////////////////////////////////
	struct Class1 : public ChainableMockObject
	{
		Class1()
			: ChainableMockObject(MOCKPP_PCHAR("Class1"), 0)
			, mocker(MOCKPP_PCHAR("bar"), this)
		{}

		template <typename T>
		int bar(const T& p1, int p2)
		{
			return mocker.anycall<int, const T&>(p1, p2);
		}

		ChainableMockMethod<int, AnyType, int> mocker;
	};

	void testShouldForbidOutBoundAReferenceParameterOfAnyType()
	{
		Class1 cls;

		cls.mocker
			.expects(once())
			.with(OUTBOUND((long)3), eq(2))
			.will(returnValue(10));

		long l = 0;

		bool hasException = false;
		try {
			cls.bar(l, 2);
		}
		catch(...) {
			hasException = true;
		}

		CPPUNIT_ASSERT(hasException);

		cls.verify();
	}

	////////////////////////////////////////////////////////
	struct Class0 : public ChainableMockObject
	{
		Class0()
			: ChainableMockObject(MOCKPP_PCHAR("Class0"), 0)
			, mocker(MOCKPP_PCHAR("bar"), this)
		{}

		template <typename T>
		int bar(T& p1, int p2)
		{
			return mocker.anycall<int, T&>(p1, p2);
		}

		ChainableMockMethod<int, AnyType, int> mocker;
	};

	void testShouldSupportOutBoundAReferenceParameterOfAnyType()
	{
		Class0 cls;

		cls.mocker
			.expects(once())
			.with(OUTBOUND((long)3), eq(2))
			.will(returnValue(10));

		long l = 1;

		CPPUNIT_ASSERT_EQUAL(10, cls.bar(l, 2));
		CPPUNIT_ASSERT_EQUAL((long)3, l);

		cls.verify();
	}

	void testShouldSupportOutBoundListAReferenceParameterOfAnyType()
	{
		Class0 cls;

		std::list<long> lst;
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);

		cls.mocker
			.expects(exactly(3))
			.with(OUTBOUNDL(lst), eq(2))
			.will(returnValue(0));

		long l = 1;

		CPPUNIT_ASSERT_EQUAL(0, cls.bar(l, 2));
		CPPUNIT_ASSERT_EQUAL((long)1, l);

		CPPUNIT_ASSERT_EQUAL(0, cls.bar(l, 2));
		CPPUNIT_ASSERT_EQUAL((long)2, l);

		CPPUNIT_ASSERT_EQUAL(0, cls.bar(l, 2));
		CPPUNIT_ASSERT_EQUAL((long)3, l);

		cls.verify();
	}

};

CPPUNIT_TEST_SUITE_REGISTRATION( TestAnyType );

