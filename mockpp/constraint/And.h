/** @file
    @brief  Logical and of two constraints

 $Id: And.h 1254 2007-01-01 16:46:44Z ewald-arnold $

***************************************************************************/

/**************************************************************************

   begin                : Sat Aug 21 2004
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

   *
   *  Original Java Sources:  Copyright (c) 2000-2004, jMock.org
   *

 **/

#ifndef MOCKPP_AND_H
#define MOCKPP_AND_H

#include <mockpp/mockpp.h> // always first

#include <mockpp/constraint/ConstraintHolder.h>


MOCKPP_NS_START


/** Calculates the logical conjunction of two constraints. Evaluation is
  * shortcut, so that the second constraint is not called if the first
  * constraint returns <code>false</code>.
  */
template <typename T>
class And : public Constraint<T>
{
  public:

  /** Constructs the object
    * @param in_left   first operand
    * @param in_right  second operand
    */
    And( const ConstraintHolder<T> &in_left,
         const ConstraintHolder<T> &in_right )
        : left( in_left )
        , right( in_right )
    {}

  /** Destroys the object
    */
    virtual ~And()
    {}

  /** Evaluates the constraint
    * @param o the object against which the constraint is evaluated.
    * @return true:  o meets the constraint,
    * @return false if it does not.
    */
    virtual bool eval( const T &o ) const
    {
      return left->eval( o ) && right->eval( o );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      buffer += MOCKPP_PCHAR( "(" );
      buffer = left->describeTo( buffer );
      buffer += MOCKPP_PCHAR( " && " );
      buffer = right->describeTo( buffer );
      buffer += MOCKPP_PCHAR( ")" );
      return buffer;
    }

  private:

    const typename Constraint<T>::AP left;
    const typename Constraint<T>::AP right;
};


MOCKPP_NS_END


#endif // MOCKPP_AND_H
