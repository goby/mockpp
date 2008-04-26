/** @file
    @brief  Visitable Mock Method with 7 parameters.
            Generated with gen_visitablemethod_N.pl.

  $Id: VisitableMockMethod7.h,v 1.7 2005/10/19 20:53:09 ewald-arnold Exp $

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

#ifndef MOCKPP_VisitableMockMethod7_H
#define MOCKPP_VisitableMockMethod7_H

#include <mockpp/mockpp.h>

#include <mockpp/visiting/VisitableMockObject.h>
#include <mockpp/visiting/VisitableMockMethod.h>
#include <mockpp/visiting/ResponseVector7.h>


MOCKPP_NS_START


/** Common stuff to set up visitable mock method expectations with 7 parameters.
  * @ingroup grp_controller
  */
template <typename R, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
class VisitableMockMethod7Common : public VisitableMockReturningMethodBase<R>
{
  public:

  /** Constructs the mock object.
    * @param name    human readable description about the expectation
    * @param parent  parent Visitable mock object
    */
    VisitableMockMethod7Common(const String &name, VisitableMockObject *parent)
      : VisitableMockReturningMethodBase<R>(name, parent)
      , responseThrowables(this->getMethodName() + MOCKPP_PCHAR("/responseThrowables") , this)
      , parameter1(this->getMethodName() + MOCKPP_PCHAR("/parameter1"), this)
      , parameter2(this->getMethodName() + MOCKPP_PCHAR("/parameter2"), this)
      , parameter3(this->getMethodName() + MOCKPP_PCHAR("/parameter3"), this)
      , parameter4(this->getMethodName() + MOCKPP_PCHAR("/parameter4"), this)
      , parameter5(this->getMethodName() + MOCKPP_PCHAR("/parameter5"), this)
      , parameter6(this->getMethodName() + MOCKPP_PCHAR("/parameter6"), this)
      , parameter7(this->getMethodName() + MOCKPP_PCHAR("/parameter7"), this)
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
    */
    void forward (const ConstraintHolder<P1> &p1, const ConstraintHolder<P2> &p2, const ConstraintHolder<P3> &p3, const ConstraintHolder<P4> &p4, const ConstraintHolder<P5> &p5, const ConstraintHolder<P6> &p6, const ConstraintHolder<P7> &p7) const
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
    */
    void forward_param(const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7) const
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
      }

      else
      {
        try
        {
          this->getVisitableMockObject()->addActualMethod(this->getMethodIdentifier());

          Throwable *t;
          if (this->responseThrowables.find(t, p1, p2, p3, p4, p5, p6, p7))
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
          MOCKPP_RETHROW;
        }

        parameter1.addActual(p1);
        parameter2.addActual(p2);
        parameter3.addActual(p3);
        parameter4.addActual(p4);
        parameter5.addActual(p5);
        parameter6.addActual(p6);
        parameter7.addActual(p7);
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
    * @param count   the number of times this value shall be returned. Default is unlimited.
    */
    void addResponseThrowable(Throwable *t, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, unsigned count = MOCKPP_UNLIMITED)
    {
      MOCKPP_ASSERT_FALSE(this->getVisitableMockObject()->isActivated());
      this->responseThrowables.add(t, p1, p2, p3, p4, p5, p6, p7, count);
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
    * @param count   the number of times this value shall be returned. Default is unlimited.
    */
    void addResponseThrowable(Throwable *t, const ConstraintHolder<P1> &p1, const ConstraintHolder<P2> &p2, const ConstraintHolder<P3> &p3, const ConstraintHolder<P4> &p4, const ConstraintHolder<P5> &p5, const ConstraintHolder<P6> &p6, const ConstraintHolder<P7> &p7, unsigned count = MOCKPP_UNLIMITED)
    {
      MOCKPP_ASSERT_FALSE(this->getVisitableMockObject()->isActivated());
      this->responseThrowables.add(t, p1, p2, p3, p4, p5, p6, p7, count);
    }

  private:

    mutable ResponseThrowableVector7<P1, P2, P3, P4, P5, P6, P7>   responseThrowables;

    mutable ConstraintList<P1>             parameter1;
    mutable ConstraintList<P2>             parameter2;
    mutable ConstraintList<P3>             parameter3;
    mutable ConstraintList<P4>             parameter4;
    mutable ConstraintList<P5>             parameter5;
    mutable ConstraintList<P6>             parameter6;
    mutable ConstraintList<P7>             parameter7;
};


/** Set up visitable mock method expectations with 7 parameters.
  * @ingroup grp_controller
  */
template <typename R, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
class VisitableMockMethod7
  : public VisitableMockMethod7Common<R, P1, P2, P3, P4, P5, P6, P7>
{
  public:

  /** Constructs the mock object.
    * @param name    human readable description about the expectation
    * @param parent  parent Visitable mock object
    */
    VisitableMockMethod7(const String &name, VisitableMockObject *parent)
      : VisitableMockMethod7Common<R, P1, P2, P3, P4, P5, P6, P7>(name, parent)
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
    */
    R forward(const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7) const
    {
      this->forward_param(p1, p2, p3, p4, p5, p6, p7);

      if (this->getVisitableMockObject()->isActivated() )
      {
        R ret_val;
        if (this->responseValues.find(ret_val, p1, p2, p3, p4, p5, p6, p7))
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
    */
    void forward (const ConstraintHolder<P1> &p1, const ConstraintHolder<P2> &p2, const ConstraintHolder<P3> &p3, const ConstraintHolder<P4> &p4, const ConstraintHolder<P5> &p5, const ConstraintHolder<P6> &p6, const ConstraintHolder<P7> &p7) const
    {
       VisitableMockMethod7Common<R, P1, P2, P3, P4, P5, P6, P7>::forward(p1, p2, p3, p4, p5, p6, p7);
    }
#else
    using VisitableMockMethod7Common<R, P1, P2, P3, P4, P5, P6, P7>::forward;
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
    * @param count   the number of times this value shall be returned. Default is unlimited.
    */
    void addResponseValue(const R &rv, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, unsigned count = MOCKPP_UNLIMITED)
    {
      MOCKPP_ASSERT_FALSE(this->getVisitableMockObject()->isActivated());
      this->responseValues.add(rv, p1, p2, p3, p4, p5, p6, p7, count);
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
    * @param count   the number of times this value shall be returned. Default is unlimited.
    */
    void addResponseValue(const R &rv, const ConstraintHolder<P1> &p1, const ConstraintHolder<P2> &p2, const ConstraintHolder<P3> &p3, const ConstraintHolder<P4> &p4, const ConstraintHolder<P5> &p5, const ConstraintHolder<P6> &p6, const ConstraintHolder<P7> &p7, unsigned count = MOCKPP_UNLIMITED)
    {
      MOCKPP_ASSERT_FALSE(this->getVisitableMockObject()->isActivated());
      this->responseValues.add(rv, p1, p2, p3, p4, p5, p6, p7, count);
    }

  private:

    mutable ResponseVector7<R, P1, P2, P3, P4, P5, P6, P7>   responseValues;
};


/** Set up visitable mock method expectations with 7 parameters.
  * Partial specialisation for a void return value.
  * @ingroup grp_controller
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
class VisitableMockMethod7<void, P1, P2, P3, P4, P5, P6, P7>
   : public VisitableMockMethod7Common<void, P1, P2, P3, P4, P5, P6, P7>
{
  public:

  /** Constructs the mock object.
    * @param name    human readable description about the expectation
    * @param parent  parent Visitable mock object
    */
    VisitableMockMethod7(const String &name, VisitableMockObject *parent)
      : VisitableMockMethod7Common<void, P1, P2, P3, P4, P5, P6, P7>(name, parent)
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
    */
    void forward(const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7) const
    {
       this->forward_param(p1, p2, p3, p4, p5, p6, p7);
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
    */
    void forward (const ConstraintHolder<P1> &p1, const ConstraintHolder<P2> &p2, const ConstraintHolder<P3> &p3, const ConstraintHolder<P4> &p4, const ConstraintHolder<P5> &p5, const ConstraintHolder<P6> &p6, const ConstraintHolder<P7> &p7) const
    {
       VisitableMockMethod7Common<void, P1, P2, P3, P4, P5, P6, P7>::forward(p1, p2, p3, p4, p5, p6, p7);
    }
#else
    using VisitableMockMethod7Common<void, P1, P2, P3, P4, P5, P6, P7>::forward;
#endif
};


MOCKPP_NS_END


#endif // MOCKPP_VisitableMockMethod7_H

