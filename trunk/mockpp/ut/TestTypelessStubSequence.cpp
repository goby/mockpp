
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
		MOCKPP_STL::vector<TypelessStub<int>*> vec;
		vec.push_back(new ReturnStub<int>(10));
		vec.push_back(new ReturnStub<int>(20));
		TypelessStubSequence<int> stubSequence(vec.begin(), vec.end());

		CPPUNIT_ASSERT_EQUAL(10, stubSequence.typelessInvoke());
		CPPUNIT_ASSERT_EQUAL(20, stubSequence.typelessInvoke());
	}

};

CPPUNIT_TEST_SUITE_REGISTRATION( TestReturnObjectList );

