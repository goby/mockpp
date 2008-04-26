
#include <mockpp/mockpp.h>

#include <mockpp/chaining/ChainableMockObject.h>

#include <mockpp/chaining/CountedChainableMethod.h>
#include <mockpp/chaining/ChainingMockObjectSupport.h>

#include <cppunit/extensions/HelperMacros.h>

using namespace mockpp;

class TestReturnObjectList: public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( TestReturnObjectList );
	CPPUNIT_TEST( testShouldBeAbleToSupportGetNextReturnObject );
	//CPPUNIT_TEST( );
	CPPUNIT_TEST_SUITE_END();

	ChainableMockObject* mockObject;

public:
	void setUp()
	{
	}

	void tearDown()
	{
	}

	void testShouldBeAbleToSupportGetNextReturnObject()
	{
		ReturnObjectList<int> returnObjectList(MOCKPP_PCHAR("ReturnObjectList"), 0);

		returnObjectList.addObjectToReturn(10);
		returnObjectList.addObjectToReturn(20);
		returnObjectList.addObjectToReturn(30);


		CPPUNIT_ASSERT_EQUAL(10, returnObjectList.nextReturnObject());
		CPPUNIT_ASSERT_EQUAL(20, returnObjectList.nextReturnObject());
		CPPUNIT_ASSERT_EQUAL(30, returnObjectList.nextReturnObject());
	}

};

CPPUNIT_TEST_SUITE_REGISTRATION( TestReturnObjectList );

