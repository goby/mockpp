/** @file
    @internal
    @brief  

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

#ifndef MOCKPP_OUTBOUND_ANY_VALUE_H
#define MOCKPP_OUTBOUND_ANY_VALUE_H

#include <mockpp/mockpp.h> // always first

#include <mockpp/chaining/AnyType.h>
#include <mockpp/chaining/IsConst.h>
#include <mockpp/chaining/IsRef.h>

MOCKPP_NS_START

template <bool outBoundable, typename T>
struct OutBoundAnyValue
{
};

template <typename T>
struct OutBoundAnyValue<true, T>
{
	static void outBound(T target, AnyType& any)
	{
		target = any_cast<T>(any);
	}
};

template <typename T>
struct OutBoundAnyValue<false, T>
{
	static const bool isConstRef = IsConst<T>::isTrue && IsRef<T>::isTrue;

	template <typename I>
	static void outBound(T target, I any)
	{
	}

	static void outBound(T target, AnyType& any)
	{
		if(isConstRef && target != any_cast<T>(any)) {
			MOCKPP_FAIL("invalid assignment to const reference");
		}
	}
};

MOCKPP_NS_END


#endif // MOCKPP_OUTBOUND_ANY_VALUE_H
