
#include <mockpp/mockpp.h>

#include <mockpp/chaining/ChainableMockObject.h>

#include <mockpp/chaining/CountedChainableMethod.h>
#include <mockpp/chaining/ChainingMockObjectSupport.h>

#define __MOCKED_CLASS_NAME(cls) Mocked##cls

#define DEF_MOCKED_CLASS_BEGIN(cls) \
class __MOCKED_CLASS_NAME(cls) \
		: public cls \
		, public MOCKPP_NS::ChainableMockObject \
{ \
public: \
	__MOCKED_CLASS_NAME(cls) () \
		: MOCKPP_NS::ChainableMockObject(MOCKPP_PCHAR(#Mocked##cls), 0) 
	

#define MOCKED_METHOD(
