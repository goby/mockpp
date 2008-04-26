/** @file
    @internal
    @brief  Traits Required Type 

  $Id: TypeTraits.h 1254 2008-04-10 22:46:44Z darwin-yuan $

 ***************************************************************************/

/**************************************************************************

   begin                : Sat April 10 2008
   copyright            : (C) 2002-2008 by Ewald Arnold
   email                : darwin.yuan@gmail.com

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

#ifndef MOCKPP_TYPE_TRAITS_H
#define MOCKPP_TYPE_TRAITS_H

#include <mockpp/mockpp.h> // always first


MOCKPP_NS_START

/*
 * For non-reference type
 */
template <typename T>
struct TypeTraits
{
	typedef T  OriginalType;
   typedef T& ReferenceType;

   typedef T  Type;
   typedef T& RefType;
};

/*
 * For non-reference type
 */
template <typename T>
struct TypeTraits<const T>
{
	typedef T OriginalType;
   typedef T& ReferenceType;

   typedef const T  Type;
   typedef const T& RefType;
};

/*
 * For reference type
 */
template <typename T>
struct TypeTraits<T&>
{
	typedef T OriginalType;
	typedef T& ReferenceType;

   typedef T  Type;
   typedef T& RefType;
};

/*
 * For reference type
 */
template <typename T>
struct TypeTraits<const T&>
{
	typedef T OriginalType;
	typedef T& ReferenceType;

   typedef const T  Type;
   typedef const T& RefType;
};

/*
 * For non-reference type
 */
template <>
struct TypeTraits<void>
{
	typedef void OriginalType;
   typedef void ReferenceType;

   typedef void Type;
   typedef void RefType;
};

MOCKPP_NS_END


#endif // MOCKPP_TYPE_TRAITS_H
