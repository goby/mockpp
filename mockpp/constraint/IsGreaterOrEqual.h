/** @file
    @brief  Checks if the argument is greater or equal

  $Id: IsGreaterOrEqual.h 1254 2007-01-01 16:46:44Z ewald-arnold $

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

 **/

#ifndef MOCKPP_ISGREATEROREQUAL_H
#define MOCKPP_ISGREATEROREQUAL_H

#include <mockpp/mockpp.h> // always first

#include <mockpp/constraint/Constraint.h>
#include <mockpp/compat/Formatter.h>


MOCKPP_NS_START

template <typename T>
class IsGreaterOrEqualBase : public Constraint<T>
{
  public:

    typedef typename TypeTraits<T>::RefType Ref;

  /** Constructs the object
    * @param lower      the value for the comparison
    */
    IsGreaterOrEqualBase( const T& lower )
      : lowerLimit(lower)
    {}

  /** Evaluates the constraint
    * @param arg the object against which the constraint is evaluated.
    * @return true:  arg meets the constraint,
    * @return false if it does not.
    */
    virtual bool eval( const T &arg ) const
    {
      return lowerLimit <= arg;
    }

    Ref getLowerLimit() const
    {
      return const_cast<Ref>(lowerLimit);
    }

private:
    const T lowerLimit;
};

/** Is the value greater or equal than another value?
  * @ingroup grp_constraint
  * @see mockpp::ge
  */
template <typename T>
class IsGreaterOrEqual : public IsGreaterOrEqualBase<T>
{
  public:

  /** Constructs the object
    * @param lower      the value for the comparison
    */
    IsGreaterOrEqual( const T& lower )
      : IsGreaterOrEqualBase<T>(lower)
    {}

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
       String fmt = MOCKPP_PCHAR("greaterOrEqual %1");
       fmt << IsGreaterOrEqualBase<T>::getLowerLimit();
       buffer += fmt;
       return buffer;
    }
};

template <typename T>
class IsGE : public IsGreaterOrEqualBase<AnyType>
{
  public:

  /** Constructs the object
    * @param lower      the value for the comparison
    */
    IsGE( const T& lower )
      : IsGreaterOrEqualBase<AnyType>(lower)
    {}

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
       String fmt = MOCKPP_PCHAR("greaterOrEqual %1");
       fmt << any_cast<T>(IsGreaterOrEqualBase<AnyType>::getLowerLimit());
       buffer += fmt;
       return buffer;
    }
};

MOCKPP_NS_END


#endif // MOCKPP_ISGREATEROREQUAL_H
