/** @file
    @brief  Checks if the argument is less than the reference

  $Id: IsLessThan.h 1254 2007-01-01 16:46:44Z ewald-arnold $

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

#ifndef MOCKPP_ISLESSTHAN_H
#define MOCKPP_ISLESSTHAN_H

#include <mockpp/mockpp.h> // always first

#include <mockpp/constraint/Constraint.h>
#include <mockpp/compat/Formatter.h>


MOCKPP_NS_START

template <typename T>
class IsLessThanBase : public Constraint<T>
{
  public:

    typedef typename TypeTraits<T>::RefType Ref;

    IsLessThanBase( const T& less_eq)
      : lessLimit (less_eq)
    {}

  /** Evaluates the constraint
    * @param arg the object against which the constraint is evaluated.
    * @return true:  arg meets the constraint,
    * @return false if it does not.
    */
    virtual bool eval( const T &arg ) const
    {
      return arg < lessLimit;
    }

    Ref getLessLimit() const
    {
      return const_cast<Ref>(lessLimit);
    }

private:

    const T lessLimit;
};

/** Is the value less than another value?
  * @ingroup grp_constraint
  * @see mockpp::lt
  */
template <typename T>
class IsLessThan : public IsLessThanBase<T>
{
  public:

  /** Constructs the object
    * @param less      the value for the comparison
    */
    IsLessThan( const T &less)
      : IsLessThanBase<T>(less)
    {
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
       String fmt = MOCKPP_PCHAR("lessThan %1");
       fmt << IsLessThanBase<T>::getLessLimit();
       buffer += fmt;
       return buffer;
    }
};

template <typename T>
class IsLT : public IsLessThanBase<AnyType>
{
  public:

    IsLT( const T& lower )
      : IsLessThanBase<AnyType>(lower)
    {}

    virtual String describeTo( String &buffer ) const
    {
       String fmt = MOCKPP_PCHAR("greaterOrEqual %1");
       fmt << any_cast<T>(IsLessThanBase<AnyType>::getLessLimit());
       buffer += fmt;
       return buffer;
    }
};


MOCKPP_NS_END


#endif // MOCKPP_ISLESSTHAN_H


