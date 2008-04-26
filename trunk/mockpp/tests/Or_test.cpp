/***************************************************************************
             Or_test.cpp  -  unit tests for Or class
                             -------------------
    begin                : Sat Aug 21 2004
    copyright            : (C) 2002-2007 by Ewald Arnold
    email                : mockpp at ewald-arnold dot de

  $Id: Or_test.cpp 1254 2007-01-01 16:46:44Z ewald-arnold $

 ***************************************************************************/

/**************************************************************************
 *
 * This program is free software; you can redistribute it Or/or modify
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

#include <mockpp/chaining/ChainingMockObjectSupport.h>

#include <mockpp/constraint/IsAnything.h>
#include <mockpp/constraint/IsNothing.h>

#include <mockpp/compat/Asserter.h>


class Or_test MOCKPP_DERIVE_PUBLIC_UNITFRAMEWORK
{
 public:

#if defined (MOCKPP_USE_CXXTEST)

#elif defined(MOCKPP_USE_BOOSTTEST)

#elif defined(MOCKPP_USE_CPPUNIT)

CPPUNIT_TEST_SUITE( Or_test );

  CPPUNIT_TEST(test_invoke);
  CPPUNIT_TEST(test_describe);

CPPUNIT_TEST_SUITE_END();

#endif

 public:

  MOCKPP_TESTMETHOD_DECL void test_invoke();
  MOCKPP_TESTMETHOD_DECL void test_describe();
};


#if defined (MOCKPP_USE_CXXTEST)

MOCKPP_CXXTEST_SUITE_REGISTRATION( Or_test );
MOCKPP_CXXTEST(Or_test, test_describe);
MOCKPP_CXXTEST(Or_test, test_invoke);

#elif defined(MOCKPP_USE_BOOSTTEST)

MOCKPP_BOOST_TEST(Or_test::test_describe);
MOCKPP_BOOST_TEST(Or_test::test_invoke);

#elif defined(MOCKPP_USE_CPPUNIT)

CPPUNIT_TEST_SUITE_REGISTRATION (Or_test);

#endif // frameworks



void Or_test::test_describe()
{
   MOCKPP_NS::Or<bool> or1 (new MOCKPP_NS::IsAnything,
                         new MOCKPP_NS::IsNothing);
   MOCKPP_NS::String s = MOCKPP_PCHAR("or1?");
   MOCKPP_ASSERT_TRUE(or1.describeTo(s) == MOCKPP_PCHAR("or1?(ANYTHING || NOTHING)"));
   MOCKPP_ASSERT_TRUE(s == MOCKPP_PCHAR("or1?(ANYTHING || NOTHING)"));
}


void Or_test::test_invoke()
{
   MOCKPP_NS::Or<int> or1 (new MOCKPP_NS::IsEqual<int>(1),
                        new MOCKPP_NS::IsEqual<int>(5));
   MOCKPP_ASSERT_TRUE(or1.eval(1) == true);
   MOCKPP_ASSERT_TRUE(or1.eval(2) == false);
   MOCKPP_ASSERT_TRUE(or1.eval(4) == false);
   MOCKPP_ASSERT_TRUE(or1.eval(5) == true);
}



