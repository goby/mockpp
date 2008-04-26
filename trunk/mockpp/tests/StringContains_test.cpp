/***************************************************************************
             StringContains_test.cpp  -  unit tests for StringContains class
                             -------------------
    begin                : Sat Aug 21 2004
    copyright            : (C) 2002-2007 by Ewald Arnold
    email                : mockpp at ewald-arnold dot de

  $Id: StringContains_test.cpp 1254 2007-01-01 16:46:44Z ewald-arnold $

 ***************************************************************************/

/**************************************************************************
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 ***************************************************************************/

#include <mockpp/mockpp.h> // always first

#include "SelectFramework.h"

#include <mockpp/constraint/StringContains.h>

#include <mockpp/compat/Asserter.h>


class StringContains_test MOCKPP_DERIVE_PUBLIC_UNITFRAMEWORK
{
 public:

#if defined (MOCKPP_USE_CXXTEST)

#elif defined(MOCKPP_USE_BOOSTTEST)

#elif defined(MOCKPP_USE_CPPUNIT)

CPPUNIT_TEST_SUITE( StringContains_test );

  CPPUNIT_TEST(test_invoke);
  CPPUNIT_TEST(test_describe);

CPPUNIT_TEST_SUITE_END();

#endif

 public:

  MOCKPP_TESTMETHOD_DECL void test_invoke();
  MOCKPP_TESTMETHOD_DECL void test_describe();
};


#if defined (MOCKPP_USE_CXXTEST)

MOCKPP_CXXTEST_SUITE_REGISTRATION( StringContains_test );
MOCKPP_CXXTEST(StringContains_test, test_describe);
MOCKPP_CXXTEST(StringContains_test, test_invoke);

#elif defined(MOCKPP_USE_BOOSTTEST)

MOCKPP_BOOST_TEST(StringContains_test::test_describe);
MOCKPP_BOOST_TEST(StringContains_test::test_invoke);

#elif defined(MOCKPP_USE_CPPUNIT)

CPPUNIT_TEST_SUITE_REGISTRATION (StringContains_test);

#endif // frameworks



void StringContains_test::test_describe()
{
   MOCKPP_NS::StringContains<MOCKPP_STL::string> mystr ("the-string");
   MOCKPP_NS::String s = MOCKPP_PCHAR("mystr?");
   MOCKPP_ASSERT_TRUE(mystr.describeTo(s) == MOCKPP_GET_STRING("mystr?a string containing \"the-string")+MOCKPP_CHAR('\"'));
   MOCKPP_ASSERT_TRUE(s == MOCKPP_GET_STRING("mystr?a string containing \"the-string")+MOCKPP_CHAR('\"'));
}


void StringContains_test::test_invoke()
{
   MOCKPP_NS::StringContains<MOCKPP_STL::string> mystr ("string");
   MOCKPP_ASSERT_TRUE(mystr.eval("abcstringxyz") == true);
   MOCKPP_ASSERT_TRUE(mystr.eval("abc-tring-xyz") == false);
}



