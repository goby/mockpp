/** @file
    @brief  Checks if the argument is less or equal

  $Id: IsLessOrEqual.h 1254 2007-01-01 16:46:44Z ewald-arnold $

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

#ifndef MOCKPP_ISLESSOREQUAL_H
#define MOCKPP_ISLESSOREQUAL_H

#include <mockpp/mockpp.h> // always first

#include <mockpp/constraint/Constraint.h>
#include <mockpp/compat/Formatter.h>


MOCKPP_NS_START


/** Is the value less or equal than another value?
  * @ingroup grp_constraint
  * @see mockpp::le
  */
template <typename T>
class IsLessOrEqualBase : public Constraint<T>
{
  public:

    typedef typename TypeTraits<T>::RefType Ref;

  /** Constructs the object
    * @param less_eq      the value for the comparison
    */
    IsLessOrEqualBase( const T& less_eq)
      : lesseqLimit(less_eq)
    {}

  /** Evaluates the constraint
    * @param arg the object against which the constraint is evaluated.
    * @return true:  arg meets the constraint,
    * @return false if it does not.
    */
    virtual bool eval( const T &arg ) const
    {
      return lesseqLimit >= arg;
    }

    Ref getLessEqLimit() const
    {
      return const_cast<Ref>(lesseqLimit);
    }

private:

    const T lesseqLimit;
};

template <typename T>
class IsLessOrEqual : public IsLessOrEqualBase<T>
{
  public:

  /** Constructs the object
    * @param less_eq      the value for the comparison
    */
    IsLessOrEqual( const T &less_eq)
      : IsLessOrEqualBase<T>(less_eq)
    {
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
       String fmt = MOCKPP_PCHAR("lessOrEqual %1");
       fmt << IsLessOrEqualBase<T>::getLessEqLimit();
       buffer += fmt;
       return buffer;
    }
};

template <typename T>
class IsLE : public IsLessOrEqualBase<AnyType>
{
  public:

  /** Constructs the object
    * @param lower      the value for the comparison
    */
    IsLE( const T& lower )
      : IsLessOrEqualBase<AnyType>(lower)
    {}

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
       String fmt = MOCKPP_PCHAR("greaterOrEqual %1");
       fmt << any_cast<T>(IsLessOrEqualBase<AnyType>::getLessEqLimit());
       buffer += fmt;
       return buffer;
    }
};

MOCKPP_NS_END


#endif // MOCKPP_ISLESSOREQUAL_H

