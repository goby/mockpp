/** @file
    @brief  Visitable Mock Method with 11 parameters.
            Generated with gen_visitablemethod_N.pl.

  $Id: VisitableMockMethod11.h,v 1.7 2005/10/19 20:53:09 ewald-arnold Exp $

 ***************************************************************************/

/**************************************************************************

   begin                : Thu Oct 22 2005
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

#ifndef MOCKPP_VisitableMockMethod11_H
#define MOCKPP_VisitableMockMethod11_H

#include <mockpp/mockpp.h>

#include <mockpp/visiting/VisitableMockObject.h>
#include <mockpp/visiting/VisitableMockMethod.h>
#include <mockpp/visiting/ResponseVector11.h>


MOCKPP_NS_START


/** Common stuff to set up visitable mock method expectations with 11 parameters.
  * @ingroup grp_controller
  */
template <typename R, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
class VisitableMockMethod11Common : public VisitableMockReturningMethodBase<R>
{
  public:

  /** Constructs the mock object.
    * @param name    human readable description about the expectation
    * @param parent  parent Visitable mock object
    */
    VisitableMockMethod11Common(const String &name, VisitableMockObject *parent)
      : VisitableMockReturningMethodBase<R>(name, parent)
      , responseThrowables(this->getMethodName() + MOCKPP_PCHAR("/responseThrowables") , this)
      , parameter1(this->getMethodName() + MOCKPP_PCHAR("/parameter1"), this)
      , parameter2(this->getMethodName() + MOCKPP_PCHAR("/parameter2"), this)
      , parameter3(this->getMethodName() + MOCKPP_PCHAR("/parameter3"), this)
      , parameter4(this->getMethodName() + MOCKPP_PCHAR("/parameter4"), this)
      , parameter5(this->getMethodName() + MOCKPP_PCHAR("/parameter5"), this)
      , parameter6(this->getMethodName() + MOCKPP_PCHAR("/parameter6"), this)
      , parameter7(this->getMethodName() + MOCKPP_PCHAR("/parameter7"), this)
      , parameter8(this->getMethodName() + MOCKPP_PCHAR("/parameter8"), this)
      , parameter9(this->getMethodName() + MOCKPP_PCHAR("/parameter9"), this)
      , parameter10(this->getMethodName() + MOCKPP_PCHAR("/parameter10"), this)
      , parameter11(this->getMethodName() + MOCKPP_PCHAR("/parameter11"), this)
    {
    }


  /** Set up expectations with constraints.
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
    void forward (const ConstraintHolder<P1> &p1, const ConstraintHolder<P2> &p2, const ConstraintHolder<P3> &p3, const ConstraintHolder<P4> &p4, const ConstraintHolder<P5> &p5, const ConstraintHolder<P6> &p6, const ConstraintHolder<P7> &p7, const ConstraintHolder<P8> &p8, const ConstraintHolder<P9> &p9, const ConstraintHolder<P10> &p10, const ConstraintHolder<P11> &p11) const
    {
      MOCKPP_ASSERT_FALSE_MESSAGE(this->getVisitableMockObject()->getVerifiableName() + MOCKPP_PCHAR(".isActivated() != true"),
                                  this->getVisitableMockObject()->isActivated());
      this->getVisitableMockObject()->addExpectedMethod(this->getMethodIdentifier());
      parameter1.addExpected(p1);
      parameter2.addExpected(p2);
      parameter3.addExpected(p3);
      parameter4.addExpected(p4);
      parameter5.addExpected(p5);
      parameter6.addExpected(p6);
      parameter7.addExpected(p7);
      parameter8.addExpected(p8);
      parameter9.addExpected(p9);
      parameter10.addExpected(p10);
      parameter11.addExpected(p11);
    }

  protected:

  /** Perform the internals to verify a mocked method or setup expectations.
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
    void forward_param(const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9, const P10 &p10, const P11 &p11) const
    {
      if (!this->getVisitableMockObject()->isActivated() )
      {
        this->getVisitableMockObject()->addExpectedMethod(this->getMethodIdentifier());
        parameter1.addExpected(p1);
        parameter2.addExpected(p2);
        parameter3.addExpected(p3);
        parameter4.addExpected(p4);
        parameter5.addExpected(p5);
        parameter6.addExpected(p6);
        parameter7.addExpected(p7);
        parameter8.addExpected(p8);
        parameter9.addExpected(p9);
        parameter10.addExpected(p10);
        parameter11.addExpected(p11);
      }

      else
      {
        try
        {
          this->getVisitableMockObject()->addActualMethod(this->getMethodIdentifier());

          Throwable *t;
          if (this->responseThrowables.find(t, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11))
             t->throw_me();

          this->throwAvailableException();
        }

        catch(...)
        {
          parameter1.balanceActual();
          parameter2.balanceActual();
          parameter3.balanceActual();
          parameter4.balanceActual();
          parameter5.balanceActual();
          parameter6.balanceActual();
          parameter7.balanceActual();
          parameter8.balanceActual();
          parameter9.balanceActual();
          parameter10.balanceActual();
          parameter11.balanceActual();
          MOCKPP_RETHROW;
        }

        parameter1.addActual(p1);
        parameter2.addActual(p2);
        parameter3.addActual(p3);
        parameter4.addActual(p4);
        parameter5.addActual(p5);
        parameter6.addActual(p6);
        parameter7.addActual(p7);
        parameter8.addActual(p8);
        parameter9.addActual(p9);
        parameter10.addActual(p10);
        parameter11.addActual(p11);
      }
    }

  public:

  /** Adds another response throwable.
    * Response values are determined on the parameters you pass. This way the
    * object returns a value that is totally based on the input.
    * @param t       the throwable object
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
    * @param count   the number of times this value shall be returned. Default is unlimited.
    */
    void addResponseThrowable(Throwable *t, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9, const P10 &p10, const P11 &p11, unsigned count = MOCKPP_UNLIMITED)
    {
      MOCKPP_ASSERT_FALSE(this->getVisitableMockObject()->isActivated());
      this->responseThrowables.add(t, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, count);
    }

  /** Adds another response throwable.
    * Response values are determined on the parameters you pass. This way the
    * object returns a value that is totally based on the input.
    * @param t       the throwable object
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
    * @param count   the number of times this value shall be returned. Default is unlimited.
    */
    void addResponseThrowable(Throwable *t, const ConstraintHolder<P1> &p1, const ConstraintHolder<P2> &p2, const ConstraintHolder<P3> &p3, const ConstraintHolder<P4> &p4, const ConstraintHolder<P5> &p5, const ConstraintHolder<P6> &p6, const ConstraintHolder<P7> &p7, const ConstraintHolder<P8> &p8, const ConstraintHolder<P9> &p9, const ConstraintHolder<P10> &p10, const ConstraintHolder<P11> &p11, unsigned count = MOCKPP_UNLIMITED)
    {
      MOCKPP_ASSERT_FALSE(this->getVisitableMockObject()->isActivated());
      this->responseThrowables.add(t, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, count);
    }

  private:

    mutable ResponseThrowableVector11<P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>   responseThrowables;

    mutable ConstraintList<P1>             parameter1;
    mutable ConstraintList<P2>             parameter2;
    mutable ConstraintList<P3>             parameter3;
    mutable ConstraintList<P4>             parameter4;
    mutable ConstraintList<P5>             parameter5;
    mutable ConstraintList<P6>             parameter6;
    mutable ConstraintList<P7>             parameter7;
    mutable ConstraintList<P8>             parameter8;
    mutable ConstraintList<P9>             parameter9;
    mutable ConstraintList<P10>             parameter10;
    mutable ConstraintList<P11>             parameter11;
};


/** Set up visitable mock method expectations with 11 parameters.
  * @ingroup grp_controller
  */
template <typename R, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
class VisitableMockMethod11
  : public VisitableMockMethod11Common<R, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>
{
  public:

  /** Constructs the mock object.
    * @param name    human readable description about the expectation
    * @param parent  parent Visitable mock object
    */
    VisitableMockMethod11(const String &name, VisitableMockObject *parent)
      : VisitableMockMethod11Common<R, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>(name, parent)
      , responseValues(this->getMethodName() + MOCKPP_PCHAR("/responseValues") , this)
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
    R forward(const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9, const P10 &p10, const P11 &p11) const
    {
      this->forward_param(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);

      if (this->getVisitableMockObject()->isActivated() )
      {
        R ret_val;
        if (this->responseValues.find(ret_val, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11))
          return ret_val;

        return this->determineReturnValue();
      }
      else
        return R(); // only dummy value to make the compiler happy
    }

#if defined(__BORLANDC__) // ==> BCB5.5.1 ?? F1004 Internal compiler error at 0x12548c1 with base 0x1200000
  /** Set up expectations with constraints.
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
    void forward (const ConstraintHolder<P1> &p1, const ConstraintHolder<P2> &p2, const ConstraintHolder<P3> &p3, const ConstraintHolder<P4> &p4, const ConstraintHolder<P5> &p5, const ConstraintHolder<P6> &p6, const ConstraintHolder<P7> &p7, const ConstraintHolder<P8> &p8, const ConstraintHolder<P9> &p9, const ConstraintHolder<P10> &p10, const ConstraintHolder<P11> &p11) const
    {
       VisitableMockMethod11Common<R, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::forward(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
    }
#else
    using VisitableMockMethod11Common<R, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::forward;
#endif

  /** Adds another response value.
    * Response values are determined on the parameters you pass. This way the
    * object returns a value that is totally based on the input.
    * @param rv      the return value
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
    * @param count   the number of times this value shall be returned. Default is unlimited.
    */
    void addResponseValue(const R &rv, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9, const P10 &p10, const P11 &p11, unsigned count = MOCKPP_UNLIMITED)
    {
      MOCKPP_ASSERT_FALSE(this->getVisitableMockObject()->isActivated());
      this->responseValues.add(rv, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, count);
    }

  /** Adds another response value.
    * Response values are determined on the parameters you pass. This way the
    * object returns a value that is totally based on the input.
    * @param rv      the return value
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
    * @param count   the number of times this value shall be returned. Default is unlimited.
    */
    void addResponseValue(const R &rv, const ConstraintHolder<P1> &p1, const ConstraintHolder<P2> &p2, const ConstraintHolder<P3> &p3, const ConstraintHolder<P4> &p4, const ConstraintHolder<P5> &p5, const ConstraintHolder<P6> &p6, const ConstraintHolder<P7> &p7, const ConstraintHolder<P8> &p8, const ConstraintHolder<P9> &p9, const ConstraintHolder<P10> &p10, const ConstraintHolder<P11> &p11, unsigned count = MOCKPP_UNLIMITED)
    {
      MOCKPP_ASSERT_FALSE(this->getVisitableMockObject()->isActivated());
      this->responseValues.add(rv, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, count);
    }

  private:

    mutable ResponseVector11<R, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>   responseValues;
};


/** Set up visitable mock method expectations with 11 parameters.
  * Partial specialisation for a void return value.
  * @ingroup grp_controller
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
class VisitableMockMethod11<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>
   : public VisitableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>
{
  public:

  /** Constructs the mock object.
    * @param name    human readable description about the expectation
    * @param parent  parent Visitable mock object
    */
    VisitableMockMethod11(const String &name, VisitableMockObject *parent)
      : VisitableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>(name, parent)
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
    void forward(const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9, const P10 &p10, const P11 &p11) const
    {
       this->forward_param(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
    }

#if defined(__BORLANDC__) // ==> BCB5.5.1 ?? F1004 Internal compiler error at 0x12548c1 with base 0x1200000
  /** Set up expectations with constraints.
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
    void forward (const ConstraintHolder<P1> &p1, const ConstraintHolder<P2> &p2, const ConstraintHolder<P3> &p3, const ConstraintHolder<P4> &p4, const ConstraintHolder<P5> &p5, const ConstraintHolder<P6> &p6, const ConstraintHolder<P7> &p7, const ConstraintHolder<P8> &p8, const ConstraintHolder<P9> &p9, const ConstraintHolder<P10> &p10, const ConstraintHolder<P11> &p11) const
    {
       VisitableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::forward(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
    }
#else
    using VisitableMockMethod11Common<void, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>::forward;
#endif
};


MOCKPP_NS_END


#endif // MOCKPP_VisitableMockMethod11_H

