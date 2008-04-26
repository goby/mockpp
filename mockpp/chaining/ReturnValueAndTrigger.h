/** @file
    @brief    Generated with gen_returntrigger_N.pl.

  $Id: InvocationN.h,v 1.7 2005/10/19 20:53:09 ewald-arnold Exp $

 ***************************************************************************/

/**************************************************************************

   begin                : Thu Aug 01 2006
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

#ifndef MOCKPP_ReturnAndTrigger_H
#define MOCKPP_ReturnAndTrigger_H

#include <mockpp/constraint/TriggeredConstraint.h>

#include <mockpp/stub/ReturnAndTriggerStub.h>
#include <mockpp/stub/TriggerStub.h>


MOCKPP_NS_START


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                  )
{
  return new ReturnAndTriggerStub1<R, TC1>(
                                       o
                                     , tc1
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                     )
{
  return new TriggerStub1<TC1>
                     (  tc1);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                  )
{
  return new ReturnAndTriggerStub2<R, TC1, TC2>(
                                       o
                                     , tc1
                                     , tc2
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                     )
{
  return new TriggerStub2<TC1, TC2>
                     (  tc1
                      , tc2);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                   , TriggeredConstraint<TC3> *tc3
                                                  )
{
  return new ReturnAndTriggerStub3<R, TC1, TC2, TC3>(
                                       o
                                     , tc1
                                     , tc2
                                     , tc3
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                      , TriggeredConstraint<TC3> *tc3
                                                     )
{
  return new TriggerStub3<TC1, TC2, TC3>
                     (  tc1
                      , tc2
                      , tc3);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                   , TriggeredConstraint<TC3> *tc3
                                                   , TriggeredConstraint<TC4> *tc4
                                                  )
{
  return new ReturnAndTriggerStub4<R, TC1, TC2, TC3, TC4>(
                                       o
                                     , tc1
                                     , tc2
                                     , tc3
                                     , tc4
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                      , TriggeredConstraint<TC3> *tc3
                                                      , TriggeredConstraint<TC4> *tc4
                                                     )
{
  return new TriggerStub4<TC1, TC2, TC3, TC4>
                     (  tc1
                      , tc2
                      , tc3
                      , tc4);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                   , TriggeredConstraint<TC3> *tc3
                                                   , TriggeredConstraint<TC4> *tc4
                                                   , TriggeredConstraint<TC5> *tc5
                                                  )
{
  return new ReturnAndTriggerStub5<R, TC1, TC2, TC3, TC4, TC5>(
                                       o
                                     , tc1
                                     , tc2
                                     , tc3
                                     , tc4
                                     , tc5
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                      , TriggeredConstraint<TC3> *tc3
                                                      , TriggeredConstraint<TC4> *tc4
                                                      , TriggeredConstraint<TC5> *tc5
                                                     )
{
  return new TriggerStub5<TC1, TC2, TC3, TC4, TC5>
                     (  tc1
                      , tc2
                      , tc3
                      , tc4
                      , tc5);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                   , TriggeredConstraint<TC3> *tc3
                                                   , TriggeredConstraint<TC4> *tc4
                                                   , TriggeredConstraint<TC5> *tc5
                                                   , TriggeredConstraint<TC6> *tc6
                                                  )
{
  return new ReturnAndTriggerStub6<R, TC1, TC2, TC3, TC4, TC5, TC6>(
                                       o
                                     , tc1
                                     , tc2
                                     , tc3
                                     , tc4
                                     , tc5
                                     , tc6
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                      , TriggeredConstraint<TC3> *tc3
                                                      , TriggeredConstraint<TC4> *tc4
                                                      , TriggeredConstraint<TC5> *tc5
                                                      , TriggeredConstraint<TC6> *tc6
                                                     )
{
  return new TriggerStub6<TC1, TC2, TC3, TC4, TC5, TC6>
                     (  tc1
                      , tc2
                      , tc3
                      , tc4
                      , tc5
                      , tc6);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                   , TriggeredConstraint<TC3> *tc3
                                                   , TriggeredConstraint<TC4> *tc4
                                                   , TriggeredConstraint<TC5> *tc5
                                                   , TriggeredConstraint<TC6> *tc6
                                                   , TriggeredConstraint<TC7> *tc7
                                                  )
{
  return new ReturnAndTriggerStub7<R, TC1, TC2, TC3, TC4, TC5, TC6, TC7>(
                                       o
                                     , tc1
                                     , tc2
                                     , tc3
                                     , tc4
                                     , tc5
                                     , tc6
                                     , tc7
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                      , TriggeredConstraint<TC3> *tc3
                                                      , TriggeredConstraint<TC4> *tc4
                                                      , TriggeredConstraint<TC5> *tc5
                                                      , TriggeredConstraint<TC6> *tc6
                                                      , TriggeredConstraint<TC7> *tc7
                                                     )
{
  return new TriggerStub7<TC1, TC2, TC3, TC4, TC5, TC6, TC7>
                     (  tc1
                      , tc2
                      , tc3
                      , tc4
                      , tc5
                      , tc6
                      , tc7);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @param  tc8  pointer to trigger constraint 8
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
          , typename TC8    // Contraint Parameter Type 8
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                   , TriggeredConstraint<TC3> *tc3
                                                   , TriggeredConstraint<TC4> *tc4
                                                   , TriggeredConstraint<TC5> *tc5
                                                   , TriggeredConstraint<TC6> *tc6
                                                   , TriggeredConstraint<TC7> *tc7
                                                   , TriggeredConstraint<TC8> *tc8
                                                  )
{
  return new ReturnAndTriggerStub8<R, TC1, TC2, TC3, TC4, TC5, TC6, TC7, TC8>(
                                       o
                                     , tc1
                                     , tc2
                                     , tc3
                                     , tc4
                                     , tc5
                                     , tc6
                                     , tc7
                                     , tc8
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @param  tc8  pointer to trigger constraint 8
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
          , typename TC8    // Contraint Parameter Type 8
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                      , TriggeredConstraint<TC3> *tc3
                                                      , TriggeredConstraint<TC4> *tc4
                                                      , TriggeredConstraint<TC5> *tc5
                                                      , TriggeredConstraint<TC6> *tc6
                                                      , TriggeredConstraint<TC7> *tc7
                                                      , TriggeredConstraint<TC8> *tc8
                                                     )
{
  return new TriggerStub8<TC1, TC2, TC3, TC4, TC5, TC6, TC7, TC8>
                     (  tc1
                      , tc2
                      , tc3
                      , tc4
                      , tc5
                      , tc6
                      , tc7
                      , tc8);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @param  tc8  pointer to trigger constraint 8
  * @param  tc9  pointer to trigger constraint 9
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
          , typename TC8    // Contraint Parameter Type 8
          , typename TC9    // Contraint Parameter Type 9
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                   , TriggeredConstraint<TC3> *tc3
                                                   , TriggeredConstraint<TC4> *tc4
                                                   , TriggeredConstraint<TC5> *tc5
                                                   , TriggeredConstraint<TC6> *tc6
                                                   , TriggeredConstraint<TC7> *tc7
                                                   , TriggeredConstraint<TC8> *tc8
                                                   , TriggeredConstraint<TC9> *tc9
                                                  )
{
  return new ReturnAndTriggerStub9<R, TC1, TC2, TC3, TC4, TC5, TC6, TC7, TC8, TC9>(
                                       o
                                     , tc1
                                     , tc2
                                     , tc3
                                     , tc4
                                     , tc5
                                     , tc6
                                     , tc7
                                     , tc8
                                     , tc9
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @param  tc8  pointer to trigger constraint 8
  * @param  tc9  pointer to trigger constraint 9
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
          , typename TC8    // Contraint Parameter Type 8
          , typename TC9    // Contraint Parameter Type 9
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                      , TriggeredConstraint<TC3> *tc3
                                                      , TriggeredConstraint<TC4> *tc4
                                                      , TriggeredConstraint<TC5> *tc5
                                                      , TriggeredConstraint<TC6> *tc6
                                                      , TriggeredConstraint<TC7> *tc7
                                                      , TriggeredConstraint<TC8> *tc8
                                                      , TriggeredConstraint<TC9> *tc9
                                                     )
{
  return new TriggerStub9<TC1, TC2, TC3, TC4, TC5, TC6, TC7, TC8, TC9>
                     (  tc1
                      , tc2
                      , tc3
                      , tc4
                      , tc5
                      , tc6
                      , tc7
                      , tc8
                      , tc9);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @param  tc8  pointer to trigger constraint 8
  * @param  tc9  pointer to trigger constraint 9
  * @param  tc10  pointer to trigger constraint 10
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
          , typename TC8    // Contraint Parameter Type 8
          , typename TC9    // Contraint Parameter Type 9
          , typename TC10    // Contraint Parameter Type 10
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                   , TriggeredConstraint<TC3> *tc3
                                                   , TriggeredConstraint<TC4> *tc4
                                                   , TriggeredConstraint<TC5> *tc5
                                                   , TriggeredConstraint<TC6> *tc6
                                                   , TriggeredConstraint<TC7> *tc7
                                                   , TriggeredConstraint<TC8> *tc8
                                                   , TriggeredConstraint<TC9> *tc9
                                                   , TriggeredConstraint<TC10> *tc10
                                                  )
{
  return new ReturnAndTriggerStub10<R, TC1, TC2, TC3, TC4, TC5, TC6, TC7, TC8, TC9, TC10>(
                                       o
                                     , tc1
                                     , tc2
                                     , tc3
                                     , tc4
                                     , tc5
                                     , tc6
                                     , tc7
                                     , tc8
                                     , tc9
                                     , tc10
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @param  tc8  pointer to trigger constraint 8
  * @param  tc9  pointer to trigger constraint 9
  * @param  tc10  pointer to trigger constraint 10
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
          , typename TC8    // Contraint Parameter Type 8
          , typename TC9    // Contraint Parameter Type 9
          , typename TC10    // Contraint Parameter Type 10
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                      , TriggeredConstraint<TC3> *tc3
                                                      , TriggeredConstraint<TC4> *tc4
                                                      , TriggeredConstraint<TC5> *tc5
                                                      , TriggeredConstraint<TC6> *tc6
                                                      , TriggeredConstraint<TC7> *tc7
                                                      , TriggeredConstraint<TC8> *tc8
                                                      , TriggeredConstraint<TC9> *tc9
                                                      , TriggeredConstraint<TC10> *tc10
                                                     )
{
  return new TriggerStub10<TC1, TC2, TC3, TC4, TC5, TC6, TC7, TC8, TC9, TC10>
                     (  tc1
                      , tc2
                      , tc3
                      , tc4
                      , tc5
                      , tc6
                      , tc7
                      , tc8
                      , tc9
                      , tc10);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @param  tc8  pointer to trigger constraint 8
  * @param  tc9  pointer to trigger constraint 9
  * @param  tc10  pointer to trigger constraint 10
  * @param  tc11  pointer to trigger constraint 11
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
          , typename TC8    // Contraint Parameter Type 8
          , typename TC9    // Contraint Parameter Type 9
          , typename TC10    // Contraint Parameter Type 10
          , typename TC11    // Contraint Parameter Type 11
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                   , TriggeredConstraint<TC3> *tc3
                                                   , TriggeredConstraint<TC4> *tc4
                                                   , TriggeredConstraint<TC5> *tc5
                                                   , TriggeredConstraint<TC6> *tc6
                                                   , TriggeredConstraint<TC7> *tc7
                                                   , TriggeredConstraint<TC8> *tc8
                                                   , TriggeredConstraint<TC9> *tc9
                                                   , TriggeredConstraint<TC10> *tc10
                                                   , TriggeredConstraint<TC11> *tc11
                                                  )
{
  return new ReturnAndTriggerStub11<R, TC1, TC2, TC3, TC4, TC5, TC6, TC7, TC8, TC9, TC10, TC11>(
                                       o
                                     , tc1
                                     , tc2
                                     , tc3
                                     , tc4
                                     , tc5
                                     , tc6
                                     , tc7
                                     , tc8
                                     , tc9
                                     , tc10
                                     , tc11
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @param  tc8  pointer to trigger constraint 8
  * @param  tc9  pointer to trigger constraint 9
  * @param  tc10  pointer to trigger constraint 10
  * @param  tc11  pointer to trigger constraint 11
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
          , typename TC8    // Contraint Parameter Type 8
          , typename TC9    // Contraint Parameter Type 9
          , typename TC10    // Contraint Parameter Type 10
          , typename TC11    // Contraint Parameter Type 11
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                      , TriggeredConstraint<TC3> *tc3
                                                      , TriggeredConstraint<TC4> *tc4
                                                      , TriggeredConstraint<TC5> *tc5
                                                      , TriggeredConstraint<TC6> *tc6
                                                      , TriggeredConstraint<TC7> *tc7
                                                      , TriggeredConstraint<TC8> *tc8
                                                      , TriggeredConstraint<TC9> *tc9
                                                      , TriggeredConstraint<TC10> *tc10
                                                      , TriggeredConstraint<TC11> *tc11
                                                     )
{
  return new TriggerStub11<TC1, TC2, TC3, TC4, TC5, TC6, TC7, TC8, TC9, TC10, TC11>
                     (  tc1
                      , tc2
                      , tc3
                      , tc4
                      , tc5
                      , tc6
                      , tc7
                      , tc8
                      , tc9
                      , tc10
                      , tc11);
}


/** Creates a stub returning a value and triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  o    the value to return
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @param  tc8  pointer to trigger constraint 8
  * @param  tc9  pointer to trigger constraint 9
  * @param  tc10  pointer to trigger constraint 10
  * @param  tc11  pointer to trigger constraint 11
  * @param  tc12  pointer to trigger constraint 12
  * @return the new stub
  */
template <  typename R      // Return Value
          , typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
          , typename TC8    // Contraint Parameter Type 8
          , typename TC9    // Contraint Parameter Type 9
          , typename TC10    // Contraint Parameter Type 10
          , typename TC11    // Contraint Parameter Type 11
          , typename TC12    // Contraint Parameter Type 12
         >
typename TypelessStub<R>::AP returnValueAndTrigger(  const R &o
                                                   , TriggeredConstraint<TC1> *tc1
                                                   , TriggeredConstraint<TC2> *tc2
                                                   , TriggeredConstraint<TC3> *tc3
                                                   , TriggeredConstraint<TC4> *tc4
                                                   , TriggeredConstraint<TC5> *tc5
                                                   , TriggeredConstraint<TC6> *tc6
                                                   , TriggeredConstraint<TC7> *tc7
                                                   , TriggeredConstraint<TC8> *tc8
                                                   , TriggeredConstraint<TC9> *tc9
                                                   , TriggeredConstraint<TC10> *tc10
                                                   , TriggeredConstraint<TC11> *tc11
                                                   , TriggeredConstraint<TC12> *tc12
                                                  )
{
  return new ReturnAndTriggerStub12<R, TC1, TC2, TC3, TC4, TC5, TC6, TC7, TC8, TC9, TC10, TC11, TC12>(
                                       o
                                     , tc1
                                     , tc2
                                     , tc3
                                     , tc4
                                     , tc5
                                     , tc6
                                     , tc7
                                     , tc8
                                     , tc9
                                     , tc10
                                     , tc11
                                     , tc12
                                     );
}


/** Creates a stub triggering a constraint
  * @ingroup grp_stub_abbrev
  * @see mockpp::ReturnStub
  * @param  tc1  pointer to trigger constraint 1
  * @param  tc2  pointer to trigger constraint 2
  * @param  tc3  pointer to trigger constraint 3
  * @param  tc4  pointer to trigger constraint 4
  * @param  tc5  pointer to trigger constraint 5
  * @param  tc6  pointer to trigger constraint 6
  * @param  tc7  pointer to trigger constraint 7
  * @param  tc8  pointer to trigger constraint 8
  * @param  tc9  pointer to trigger constraint 9
  * @param  tc10  pointer to trigger constraint 10
  * @param  tc11  pointer to trigger constraint 11
  * @param  tc12  pointer to trigger constraint 12
  * @return the new stub
  */
template <  typename TC1    // Contraint Parameter Type 1
          , typename TC2    // Contraint Parameter Type 2
          , typename TC3    // Contraint Parameter Type 3
          , typename TC4    // Contraint Parameter Type 4
          , typename TC5    // Contraint Parameter Type 5
          , typename TC6    // Contraint Parameter Type 6
          , typename TC7    // Contraint Parameter Type 7
          , typename TC8    // Contraint Parameter Type 8
          , typename TC9    // Contraint Parameter Type 9
          , typename TC10    // Contraint Parameter Type 10
          , typename TC11    // Contraint Parameter Type 11
          , typename TC12    // Contraint Parameter Type 12
         >
typename TypelessStub<void>::AP trigger(  TriggeredConstraint<TC1> *tc1
                                                      , TriggeredConstraint<TC2> *tc2
                                                      , TriggeredConstraint<TC3> *tc3
                                                      , TriggeredConstraint<TC4> *tc4
                                                      , TriggeredConstraint<TC5> *tc5
                                                      , TriggeredConstraint<TC6> *tc6
                                                      , TriggeredConstraint<TC7> *tc7
                                                      , TriggeredConstraint<TC8> *tc8
                                                      , TriggeredConstraint<TC9> *tc9
                                                      , TriggeredConstraint<TC10> *tc10
                                                      , TriggeredConstraint<TC11> *tc11
                                                      , TriggeredConstraint<TC12> *tc12
                                                     )
{
  return new TriggerStub12<TC1, TC2, TC3, TC4, TC5, TC6, TC7, TC8, TC9, TC10, TC11, TC12>
                     (  tc1
                      , tc2
                      , tc3
                      , tc4
                      , tc5
                      , tc6
                      , tc7
                      , tc8
                      , tc9
                      , tc10
                      , tc11
                      , tc12);
}




MOCKPP_NS_END


#endif // MOCKPP_ReturnAndTrigger_H

