/** @file
    @brief Utility functions for comparing equality

 $Id: EqualityUtil.h 1254 2008-04-28 22:46:44Z darwin-yuan $

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

#ifndef MOCKPP_EQUALITY_UTIL_H
#define MOCKPP_EQUALITY_UTIL_H

#include <mockpp/mockpp.h> // always first

MOCKPP_NS_START


/** Default comparison function for \c IsEqual.
  * The default implementation compares the values of the two
  * objects.
  * @ingroup grp_constraint
  * @see mockpp::IsEqual
  * @param left  left operand
  * @param right right operand
  * @return true if both values are equal
  */
template <class T>
bool isEqualComparison(const T &left, const T &right)
{
  return left == right;
}

inline
bool isEqualComparison(const char* left, const char* right)
{
	return !::strcmp(left, right);
}


MOCKPP_NS_END


#endif // MOCKPP_EQUALITY_UTIL_H

