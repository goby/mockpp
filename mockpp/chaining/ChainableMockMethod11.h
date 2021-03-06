/** @file
    @brief  Chainable Mock Method with 11 parameters.
            Generated with gen_chainablemethod_N.pl.

  $Id: ChainableMockMethod11.h,v 1.7 2005/10/19 20:53:09 ewald-arnold Exp $

 ***************************************************************************/

/**************************************************************************

   begin                : Thu Oct 2 2005
   copyright            : (C) 2002-2007 by Ewald Arnold
   email                : mockpp at ewald-arnold dot de

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2 of the License,
   or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

 **/

#ifndef MOCKPP_ChainableMockMethod11_H
#define MOCKPP_ChainableMockMethod11_H

#include <mockpp/mockpp.h>

#include <mockpp/chaining/ChainableMockObject.h>
#include <mockpp/chaining/ChainableMockMethod.h>

#include <mockpp/chaining/TypeTraits.h>
#include <mockpp/chaining/IsAnyType.h>
#include <mockpp/chaining/IsRef.h>
#include <mockpp/chaining/OutBoundAnyValue.h>


MOCKPP_NS_START


/** Common stuff to set up chainable mock method expectations with 11 parameters.
  * @ingroup grp_chainer
  * @internal
  */
template <typename RT, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
class ChainableMockMethod11Common
  : public ChainableMockMethodCommon
  , public ChainingMockBuilder <ArgumentsMatchBuilder11<RT, Invocation11<P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11> > >
{
  public:

    typedef Invocation11<P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>                InvocationType;  //!< internal shorthand

    typedef CoreMock<RT, InvocationType>                      CoreMockType;   //!< internal shorthand
    typedef RT                                                ReturnType;     //!< internal shorthand

	 typedef typename TypeTraits<RT>::RefType          RRT;     //!< internal shorthand

	 typedef typename TypeTraits<P1>::Type  OT1;     //!< internal shorthand
	 typedef typename TypeTraits<P2>::Type  OT2;     //!< internal shorthand
	 typedef typename TypeTraits<P3>::Type  OT3;     //!< internal shorthand
	 typedef typename TypeTraits<P4>::Type  OT4;     //!< internal shorthand
	 typedef typename TypeTraits<P5>::Type  OT5;     //!< internal shorthand
	 typedef typename TypeTraits<P6>::Type  OT6;     //!< internal shorthand
	 typedef typename TypeTraits<P7>::Type  OT7;     //!< internal shorthand
	 typedef typename TypeTraits<P8>::Type  OT8;     //!< internal shorthand
	 typedef typename TypeTraits<P9>::Type  OT9;     //!< internal shorthand
	 typedef typename TypeTraits<P10>::Type  OT10;     //!< internal shorthand
	 typedef typename TypeTraits<P11>::Type  OT11;     //!< internal shorthand

    typedef ChainingMockBuilder <ArgumentsMatchBuilder11<ReturnType, InvocationType> > Builder; //!< internal shorthand

  /** Constructs the mock object.
    * @param name    human readable description about the expectation
    * @param parent  parent chainable mock object
    */
    ChainableMockMethod11Common(const String &name, ChainableMockObject *parent )
      : ChainableMockMethodCommon(name, parent)
      , Builder(&coremock, this->getChainableMockObject(), this->getMethodName())
      , coremock(name + MOCKPP_PCHAR("/coreMock"), this)
    {
    }

  protected:

  /** Returns the underlying coremock.
    * @return reference to the mock object
    */
    CoreMockType & getCoreMock() const
    {
      return coremock;
    }

  private:

    mutable CoreMockType    coremock;
};


/** Set up a chainable mock method expectations with 11 parameters.
  * @ingroup grp_chainer
  */
template <typename RT, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
class ChainableMockMethod11
  : public ChainableMockMethod11Common<RT, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>
{

    static const bool rtIsAny  =  IsAnyType<RT>::isTrue;     //!< internal shorthand 
	 static const bool p1IsAny  =  IsAnyType<P1>::isTrue;     //!< internal shorthand
	 static const bool p2IsAny  =  IsAnyType<P2>::isTrue;     //!< internal shorthand
	 static const bool p3IsAny  =  IsAnyType<P3>::isTrue;     //!< internal shorthand
	 static const bool p4IsAny  =  IsAnyType<P4>::isTrue;     //!< internal shorthand
	 static const bool p5IsAny  =  IsAnyType<P5>::isTrue;     //!< internal shorthand
	 static const bool p6IsAny  =  IsAnyType<P6>::isTrue;     //!< internal shorthand
	 static const bool p7IsAny  =  IsAnyType<P7>::isTrue;     //!< internal shorthand
	 static const bool p8IsAny  =  IsAnyType<P8>::isTrue;     //!< internal shorthand
	 static const bool p9IsAny  =  IsAnyType<P9>::isTrue;     //!< internal shorthand
	 static const bool p10IsAny  =  IsAnyType<P10>::isTrue;     //!< internal shorthand
	 static const bool p11IsAny  =  IsAnyType<P11>::isTrue;     //!< internal shorthand

  public:

    typedef typename ChainableMockMethod11Common<RT, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::InvocationType   InvocationType;  //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<RT, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::RRT   RRT;     //!< internal shorthand

	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT1   OT1;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT2   OT2;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT3   OT3;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT4   OT4;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT5   OT5;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT6   OT6;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT7   OT7;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT8   OT8;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT9   OT9;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT10   OT10;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT11   OT11;     //!< internal shorthand

  /** Constructs the mock object.
    * @param name    human readable description about the expectation
    * @param parent  parent chainable mock object
    */
    ChainableMockMethod11(const String &name, ChainableMockObject *parent )
      : ChainableMockMethod11Common<RT, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>(name, parent)
    {
    }

  /** Actually verifies the mocked method.
    * Must be called by the client code.
    * @param p1 mock method parameter 1
    * @param p2 mock method parameter 2
    * @param p3 mock method parameter 3
    * @param p4 mock method parameter 4
    * @param p5 mock method parameter 5
    * @param p6 mock method parameter 6
    * @param p7 mock method parameter 7
    * @param p8 mock method parameter 8
    * @param p9 mock method parameter 9
    * @param p10 mock method parameter 10
    * @param p11 mock method parameter 11
    * @return the calculated value
    */
    RRT forward(const OT1 &p1, const OT2 &p2, const OT3 &p3, const OT4 &p4, const OT5 &p5, const OT6 &p6, const OT7 &p7, const OT8 &p8, const OT9 &p9, const OT10 &p10, const OT11 &p11) const
    {
      InvocationType inv(this->getMethodName(), p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
      return this->getCoreMock().invoke(inv);
    }

    RT operator () (P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9, P10 p10, P11 p11) const
    {
      return forward(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
    }

    template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
    typename TypeTraits<R>::RefType anycall(T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11) const
    {
      const bool outBoundP1 = p1IsAny && IsRef<T1>::outBoundable;
      const bool outBoundP2 = p2IsAny && IsRef<T2>::outBoundable;
      const bool outBoundP3 = p3IsAny && IsRef<T3>::outBoundable;
      const bool outBoundP4 = p4IsAny && IsRef<T4>::outBoundable;
      const bool outBoundP5 = p5IsAny && IsRef<T5>::outBoundable;
      const bool outBoundP6 = p6IsAny && IsRef<T6>::outBoundable;
      const bool outBoundP7 = p7IsAny && IsRef<T7>::outBoundable;
      const bool outBoundP8 = p8IsAny && IsRef<T8>::outBoundable;
      const bool outBoundP9 = p9IsAny && IsRef<T9>::outBoundable;
      const bool outBoundP10 = p10IsAny && IsRef<T10>::outBoundable;
      const bool outBoundP11 = p11IsAny && IsRef<T11>::outBoundable;
  
      P1 pp1 = p1;
      P2 pp2 = p2;
      P3 pp3 = p3;
      P4 pp4 = p4;
      P5 pp5 = p5;
      P6 pp6 = p6;
      P7 pp7 = p7;
      P8 pp8 = p8;
      P9 pp9 = p9;
      P10 pp10 = p10;
      P11 pp11 = p11;
  
      RRT r = forward(pp1, pp2, pp3, pp4, pp5, pp6, pp7, pp8, pp9, pp10, pp11);

      OutBoundAnyValue<outBoundP1, T1>::outBound(p1, pp1);
      OutBoundAnyValue<outBoundP2, T2>::outBound(p2, pp2);
      OutBoundAnyValue<outBoundP3, T3>::outBound(p3, pp3);
      OutBoundAnyValue<outBoundP4, T4>::outBound(p4, pp4);
      OutBoundAnyValue<outBoundP5, T5>::outBound(p5, pp5);
      OutBoundAnyValue<outBoundP6, T6>::outBound(p6, pp6);
      OutBoundAnyValue<outBoundP7, T7>::outBound(p7, pp7);
      OutBoundAnyValue<outBoundP8, T8>::outBound(p8, pp8);
      OutBoundAnyValue<outBoundP9, T9>::outBound(p9, pp9);
      OutBoundAnyValue<outBoundP10, T10>::outBound(p10, pp10);
      OutBoundAnyValue<outBoundP11, T11>::outBound(p11, pp11);
  
      return rtIsAny ? any_cast<typename TypeTraits<R>::RefType>(r) : r;    
    }

};


/** Set up a chainable mock method expectations with 11 parameters.
  * Partial specialisation for a void return value.
  * @ingroup grp_chainer
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
class ChainableMockMethod11<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>
  : public ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>
{

	 static const bool p1IsAny  =  IsAnyType<P1>::isTrue;     //!< internal shorthand
	 static const bool p2IsAny  =  IsAnyType<P2>::isTrue;     //!< internal shorthand
	 static const bool p3IsAny  =  IsAnyType<P3>::isTrue;     //!< internal shorthand
	 static const bool p4IsAny  =  IsAnyType<P4>::isTrue;     //!< internal shorthand
	 static const bool p5IsAny  =  IsAnyType<P5>::isTrue;     //!< internal shorthand
	 static const bool p6IsAny  =  IsAnyType<P6>::isTrue;     //!< internal shorthand
	 static const bool p7IsAny  =  IsAnyType<P7>::isTrue;     //!< internal shorthand
	 static const bool p8IsAny  =  IsAnyType<P8>::isTrue;     //!< internal shorthand
	 static const bool p9IsAny  =  IsAnyType<P9>::isTrue;     //!< internal shorthand
	 static const bool p10IsAny  =  IsAnyType<P10>::isTrue;     //!< internal shorthand
	 static const bool p11IsAny  =  IsAnyType<P11>::isTrue;     //!< internal shorthand

  public:
 
    typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::InvocationType   InvocationType;  //!< internal shorthand

	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT1   OT1;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT2   OT2;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT3   OT3;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT4   OT4;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT5   OT5;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT6   OT6;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT7   OT7;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT8   OT8;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT9   OT9;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT10   OT10;     //!< internal shorthand
	 typedef typename ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::OT11   OT11;     //!< internal shorthand

  /** Constructs the mock object.
    * @param name    human readable description about the expectation
    * @param parent  parent chainable mock object
    */
    ChainableMockMethod11(const String &name, ChainableMockObject *parent )
      : ChainableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>(name, parent)
    {
    }

  /** Actually verifies the mocked method.
    * Must be called by the client code.
    * @param p1 mock method parameter 1
    * @param p2 mock method parameter 2
    * @param p3 mock method parameter 3
    * @param p4 mock method parameter 4
    * @param p5 mock method parameter 5
    * @param p6 mock method parameter 6
    * @param p7 mock method parameter 7
    * @param p8 mock method parameter 8
    * @param p9 mock method parameter 9
    * @param p10 mock method parameter 10
    * @param p11 mock method parameter 11
    */
    void forward(const OT1 &p1, const OT2 &p2, const OT3 &p3, const OT4 &p4, const OT5 &p5, const OT6 &p6, const OT7 &p7, const OT8 &p8, const OT9 &p9, const OT10 &p10, const OT11 &p11) const
    {
      InvocationType inv(this->getMethodName(), p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
      this->getCoreMock().invoke(inv);
    }

    void operator () (P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9, P10 p10, P11 p11) const
    {
      forward(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
    }

    template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
    void anycall(T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11) const
    {
      const bool outBoundP1 = p1IsAny && IsRef<T1>::outBoundable;
      const bool outBoundP2 = p2IsAny && IsRef<T2>::outBoundable;
      const bool outBoundP3 = p3IsAny && IsRef<T3>::outBoundable;
      const bool outBoundP4 = p4IsAny && IsRef<T4>::outBoundable;
      const bool outBoundP5 = p5IsAny && IsRef<T5>::outBoundable;
      const bool outBoundP6 = p6IsAny && IsRef<T6>::outBoundable;
      const bool outBoundP7 = p7IsAny && IsRef<T7>::outBoundable;
      const bool outBoundP8 = p8IsAny && IsRef<T8>::outBoundable;
      const bool outBoundP9 = p9IsAny && IsRef<T9>::outBoundable;
      const bool outBoundP10 = p10IsAny && IsRef<T10>::outBoundable;
      const bool outBoundP11 = p11IsAny && IsRef<T11>::outBoundable;

      P1 pp1 = p1;
      P2 pp2 = p2;
      P3 pp3 = p3;
      P4 pp4 = p4;
      P5 pp5 = p5;
      P6 pp6 = p6;
      P7 pp7 = p7;
      P8 pp8 = p8;
      P9 pp9 = p9;
      P10 pp10 = p10;
      P11 pp11 = p11;

      forward(pp1, pp2, pp3, pp4, pp5, pp6, pp7, pp8, pp9, pp10, pp11);

      OutBoundAnyValue<outBoundP1, T1>::outBound(p1, pp1);
      OutBoundAnyValue<outBoundP2, T2>::outBound(p2, pp2);
      OutBoundAnyValue<outBoundP3, T3>::outBound(p3, pp3);
      OutBoundAnyValue<outBoundP4, T4>::outBound(p4, pp4);
      OutBoundAnyValue<outBoundP5, T5>::outBound(p5, pp5);
      OutBoundAnyValue<outBoundP6, T6>::outBound(p6, pp6);
      OutBoundAnyValue<outBoundP7, T7>::outBound(p7, pp7);
      OutBoundAnyValue<outBoundP8, T8>::outBound(p8, pp8);
      OutBoundAnyValue<outBoundP9, T9>::outBound(p9, pp9);
      OutBoundAnyValue<outBoundP10, T10>::outBound(p10, pp10);
      OutBoundAnyValue<outBoundP11, T11>::outBound(p11, pp11);
    }

};


MOCKPP_NS_END


#endif // MOCKPP_ChainableMockMethod11_H

