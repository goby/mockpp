#ifndef MockppIdlTestMock_H
#define MockppIdlTestMock_H

///////////////////////////////////////////////////////////////////
// Automatically generated by xml2mockpp v1.16.4.
// xml2mockpp is part of Mock Objects for C++.
// See also http://mockpp.sourceforge.net
//
// Don't edit manually unless you know what you are doing
///////////////////////////////////////////////////////////////////


#include <mockpp/mockpp.h> // always first

#include <mockpp/chaining/ChainableMockMethod.h>
#include <mockpp/chaining/ChainableMockMethod0.h>
#include <mockpp/chaining/ChainableMockMethod2.h>
#include <mockpp/chaining/ChainableMockMethod1.h>
#include <mockpp/chaining/ChainableMockMethod5.h>

#include "/home/ea/Documents/src/mockpp/trunk/mockpp/generator/mockpp2xml/mockppidl_test.h"


class MockppIdlTestMock
  : public MOCKPP_NS::ChainableMockObject
  , public MockppIdlTest
{
  public:

    MockppIdlTestMock(const MOCKPP_NS::String &name = MOCKPP_PCHAR("MockppIdlTestMock"), MOCKPP_NS::VerifiableList *parent = 0);

    MockppIdlTestMock(int i, const std::string & s, const MOCKPP_NS::String &name = MOCKPP_PCHAR("MockppIdlTestMock"), MOCKPP_NS::VerifiableList *parent = 0);

    // mapped to first_url4_ovr4_mocker (there are overloaded methods)
    virtual std::string * first_url4();

    // mapped to first_url4_ovr3_mocker (there are overloaded methods)
    virtual std::string * first_url4(int i);

    // mapped to first_url4_ovr2_mocker (there are overloaded methods)
    virtual std::string * first_url4(long int li);

    // mapped to first_url4_ovr1_mocker (there are overloaded methods)
    virtual const void * first_url4(float li);

    // mapped to first_url4_ovr0_mocker (there are overloaded methods)
    virtual void * const first_url4(double li);

    // mapped to constTest_mocker
    virtual std::string constTest() const;

    // mapped to constRefTest_mocker
    virtual std::string & constRefTest() const;

    // mapped to firstViewConst_mocker
    virtual long int ** firstViewConst() const;

    // mapped to firstView_mocker
    virtual void * firstView();

    // mapped to nextView1_mocker
    virtual void * nextView1(int i, long int l, std::string & s, const bool * b, char c) const;

    // mapped to nextView2_mocker
    virtual void * nextView2(int i, long int l, std::string & s, bool * const b, char c) const;

    // WARNING: method in base class is not virtual and is therefore *hidden*
    // mapped to getNumObjects_mocker
    void getNumObjects(std::string s);

    // WARNING: method in base class is not virtual and is therefore *hidden*
    // mapped to getObject_mocker
    const void * getObject(const std::string & s);

    // WARNING: method in base class is not virtual and is therefore *hidden*
    // mapped to getNumPages_mocker
    int getNumPages(const std::wstring & s) throw(/* todo */);

    // mapped to last_url4_ovr0_mocker (there are overloaded methods)
    virtual const std::string * last_url4();

    // mapped to last_url4_ovr1_mocker (there are overloaded methods)
    virtual std::string ***** last_url4(int i);

    // mapped to last_url4_ovr2_mocker (there are overloaded methods)
    virtual std::string * last_url4(long int li) throw(/* todo */);

    MOCKPP_NS::ChainableMockMethod0<std::string *> first_url4_ovr4_mocker;
    MOCKPP_NS::ChainableMockMethod1<std::string *, int> first_url4_ovr3_mocker;
    MOCKPP_NS::ChainableMockMethod1<std::string *, long int> first_url4_ovr2_mocker;
    MOCKPP_NS::ChainableMockMethod1<void *, float> first_url4_ovr1_mocker;
    MOCKPP_NS::ChainableMockMethod1<void * , double> first_url4_ovr0_mocker;
    MOCKPP_NS::ChainableMockMethod0<std::string> constTest_mocker;
    MOCKPP_NS::ChainableMockMethod0<std::string> constRefTest_mocker;
    MOCKPP_NS::ChainableMockMethod0<long int **> firstViewConst_mocker;
    MOCKPP_NS::ChainableMockMethod0<void *> firstView_mocker;
    MOCKPP_NS::ChainableMockMethod5<void *, int, long int, std::string, bool *, char> nextView1_mocker;
    MOCKPP_NS::ChainableMockMethod5<void *, int, long int, std::string, bool * , char> nextView2_mocker;
    MOCKPP_NS::ChainableMockMethod1<void, std::string> getNumObjects_mocker;
    MOCKPP_NS::ChainableMockMethod1<void *, std::string> getObject_mocker;
    MOCKPP_NS::ChainableMockMethod1<int, std::wstring> getNumPages_mocker;
    MOCKPP_NS::ChainableMockMethod0<std::string *> last_url4_ovr0_mocker;
    MOCKPP_NS::ChainableMockMethod1<std::string *****, int> last_url4_ovr1_mocker;
    MOCKPP_NS::ChainableMockMethod1<std::string *, long int> last_url4_ovr2_mocker;

  private:

    mutable std::string mockpp_refFor_constRefTest;
};

#endif // MockppIdlTestMock_H
