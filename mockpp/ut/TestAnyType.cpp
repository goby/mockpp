
#include <mockpp/mockpp.h>

#include <mockpp/chaining/ChainableMockObject.h>

#include <mockpp/chaining/CountedChainableMethod.h>
#include <mockpp/chaining/ChainingMockObjectSupport.h>

#include <cppunit/extensions/HelperMacros.h>

using namespace mockpp;

class TestAnyType: public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( TestAnyType );
	CPPUNIT_TEST( testShouldSupportOutBoundAReferenceParameterOfAnyType );
	CPPUNIT_TEST( testShouldForbidOutBoundAReferenceParameterOfAnyType );
	CPPUNIT_TEST( testShouldSupportGT );
	CPPUNIT_TEST( testShouldSupportGE );
	CPPUNIT_TEST( testShouldSupportGE1 );
	CPPUNIT_TEST( testShouldSupportGE2 );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp()
	{
	}

	void tearDown()
	{
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

};

CPPUNIT_TEST_SUITE_REGISTRATION( TestAnyType );

