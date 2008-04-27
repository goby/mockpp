
#include <mockpp/mockpp.h>

#include <mockpp/chaining/ChainableMockObject.h>

#include <mockpp/chaining/CountedChainableMethod.h>
#include <mockpp/chaining/ChainingMockObjectSupport.h>

#include <cppunit/extensions/HelperMacros.h>

using namespace mockpp;

class TestVarArg: public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( TestVarArg );
	CPPUNIT_TEST( testShouldSupportVarArgs0 );
	CPPUNIT_TEST( testShouldSupportVarArgs1 );
	CPPUNIT_TEST( testShouldSupportVarArgs2 );
	CPPUNIT_TEST( testShouldSupportStringVarArgs );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp()
	{
	}

	void tearDown()
	{
	}

	////////////////////////////////////////////////////////
	struct Class1 : public ChainableMockObject
	{
		Class1()
			: ChainableMockObject(MOCKPP_PCHAR("Class1"), 0)
			, mocker(MOCKPP_PCHAR("printf"), this)
		{}

		int printf(const char* fmt, AnyType p1 = AnyType(), AnyType p2 = AnyType())
		{
			return mocker(fmt, p1, p2);
		}

		ChainableMockMethod<int, const char*, AnyType, AnyType> mocker;
	};

	void testShouldSupportVarArgs0()
	{
		Class1 cls;

		cls.mocker
			.expects(once())
			.with(eq("yes"))
			.will(returnValue(0));

		CPPUNIT_ASSERT_EQUAL(0, cls.printf("yes"));

		cls.verify();
	}

	void testShouldSupportVarArgs1()
	{
		Class1 cls;

		cls.mocker
			.expects(once())
			.with(eq("%d"), EQ(10))
			.will(returnValue(0));

		CPPUNIT_ASSERT_EQUAL(0, cls.printf("%d", 10));

		cls.verify();
	}

	void testShouldSupportVarArgs2()
	{
		Class1 cls;

		cls.mocker
			.expects(once())
			.with(eq("%d, %x"), EQ(10), EQ(3))
			.will(returnValue(0));

		CPPUNIT_ASSERT_EQUAL(0, cls.printf("%d, %x", 10, 3));

		cls.verify();
	}

	void testShouldSupportStringVarArgs()
	{
		Class1 cls;

		cls.mocker
			.expects(once())
			.with(eq("%d, %s"), EQ(10), EQ("abc"))
			.will(returnValue(0));

		CPPUNIT_ASSERT_EQUAL(0, cls.printf("%d, %s", 10, "abc"));

		cls.verify();
	}
};

CPPUNIT_TEST_SUITE_REGISTRATION( TestVarArg );

