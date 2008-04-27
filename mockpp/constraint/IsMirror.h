/** @file
    @brief  Checks if the argument is equal to the referenced value

 $Id: IsMirror.h 1254 2008-04-27 14:47:02Z darwin-yuan $

***************************************************************************/

/**************************************************************************

   begin                : Sat Aug 21 2004
   copyright            : (C) 2002-2008 by Ewald Arnold
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

#ifndef MOCKPP_ISMIRROR_H
#define MOCKPP_ISMIRROR_H

#include <mockpp/mockpp.h> // always first

#include <mockpp/constraint/Constraint.h>
#include <mockpp/compat/Formatter.h>

MOCKPP_NS_START

template <typename T>
class IsMirror : public Constraint<T>
{
  public:

    virtual bool eval( const T& arg ) const
    {
		return false;
    }

    virtual String describeTo( String &buffer ) const
    {
      return buffer;
    }
};

template <typename T>
class IsMirror<T*> : public Constraint<T*>
{
  public:

    typedef typename Constraint<T*>::Type Type;

  /** Constructs the object
    * @param equalArg   the value for the comparison
    */
    IsMirror( const T* addr)
        : ptr( addr )
    {}

  /** Destroys the object
    */
    virtual ~IsMirror()
    {}

  /** Evaluates the constraint
    * @param arg the object against which the constraint is evaluated.
    * @return true:  o meets the constraint,
    * @return false if it does not.
    */
    virtual bool eval( const Type& arg ) const
    {
		return (arg == ptr) || 
             !::memcmp((void*)ptr, (void*)arg, sizeof(T));
    }

    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( " mirrorTo %1" );
      fmt << (unsigned int) ptr;
      buffer += fmt;
      return buffer;
    }

  private:

    const T* ptr;
};

template <typename T>
class IsMIRROR : public Constraint<AnyType>
{
  public:

    virtual bool eval( const T& arg ) const
    {
		return false;
    }

    virtual String describeTo( String &buffer ) const
    {
      return buffer;
    }
};

template <typename T>
class IsMIRROR<T*> : public Constraint<AnyType>
{
  public:

	 typedef typename TypeTraits<T>::OriginalType OT;
	 typedef typename TypeTraits<T>::Type        Type;

  /** Constructs the object
    * @param equalArg   the value for the comparison
    */
    IsMIRROR( const T* addr)
        : ptr( addr )
    {}

  /** Evaluates the constraint
    * @param arg the object against which the constraint is evaluated.
    * @return true:  o meets the constraint,
    * @return false if it does not.
    */
    virtual bool eval( const AnyType& arg ) const
    {
		Type** inv = any_cast<Type*>( &const_cast<AnyType&>(arg));

		return inv != 0 && ((*inv == ptr) || 
             !::memcmp((void*)ptr, (void*)*inv, sizeof(T)));
    }

    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( " mirrorTo %1" );
      fmt << (unsigned int) ptr;
      buffer += fmt;
      return buffer;
    }

  private:

    const T* ptr;
};

MOCKPP_NS_END


#endif // MOCKPP_ISMIRROR_H

