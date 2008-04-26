/** @file
    @internal NOT INTENDED FOR PUBLIC INCLUSION
    @brief    Generated with gen_invocation_N.pl.

  $Id: InvocationN.h,v 1.7 2005/10/19 20:53:09 ewald-arnold Exp $

 ***************************************************************************/

/**************************************************************************

   begin                : Thu Aug 24 2004
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

#ifndef MOCKPP_INVOCATION_N_H
#define MOCKPP_INVOCATION_N_H

//#include <mockpp/chaining/Invocation.h>

#include <mockpp/chaining/TypeTraits.h>

MOCKPP_NS_START



/** Hold invocations with 1 parameters
  * @internal
  */
template <typename P1>
class Invocation1 : public Invocation
{
  public:

    enum { numParams = 1 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef ConstraintSet1<OT1> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    */
    Invocation1(  const String &objname
                , const OT1 &in_param1)
      : Invocation( objname )
      , param1( in_param1 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation1<P1> &other ) const
    {
      return invocationComparison(param1, other.param1);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1");
      fmt << param1;
      return fmt;
    }

  private:

    const OT1 & param1;
};


/** Hold invocations with 2 parameters
  * @internal
  */
template <typename P1, typename P2>
class Invocation2 : public Invocation
{
  public:

    enum { numParams = 2 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef ConstraintSet2<OT1, OT2> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    */
    Invocation2(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation2<P1, P2> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2");
      fmt << param1
          << param2;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
};


/** Hold invocations with 3 parameters
  * @internal
  */
template <typename P1, typename P2, typename P3>
class Invocation3 : public Invocation
{
  public:

    enum { numParams = 3 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef typename TypeTraits<P3>::Type  OT3;   //!< internal shorthand
    typedef ConstraintSet3<OT1, OT2, OT3> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand
    typedef P3 T3Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    * @param in_param3  parameter 3
    */
    Invocation3(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2
                , const OT3 &in_param3)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
      , param3( in_param3 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation3<P1, P2, P3> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2)
             && invocationComparison(param3, other.param3);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 3
    */
    const OT3 & getParameter3() const
    {
      return param3;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2, %3");
      fmt << param1
          << param2
          << param3;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
    const OT3 & param3;
};


/** Hold invocations with 4 parameters
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4>
class Invocation4 : public Invocation
{
  public:

    enum { numParams = 4 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef typename TypeTraits<P3>::Type  OT3;   //!< internal shorthand
    typedef typename TypeTraits<P4>::Type  OT4;   //!< internal shorthand
    typedef ConstraintSet4<OT1, OT2, OT3, OT4> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand
    typedef P3 T3Type;   //!< internal shorthand
    typedef P4 T4Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    * @param in_param3  parameter 3
    * @param in_param4  parameter 4
    */
    Invocation4(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2
                , const OT3 &in_param3
                , const OT4 &in_param4)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
      , param3( in_param3 )
      , param4( in_param4 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation4<P1, P2, P3, P4> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2)
             && invocationComparison(param3, other.param3)
             && invocationComparison(param4, other.param4);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 3
    */
    const OT3 & getParameter3() const
    {
      return param3;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 4
    */
    const OT4 & getParameter4() const
    {
      return param4;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2, %3, %4");
      fmt << param1
          << param2
          << param3
          << param4;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
    const OT3 & param3;
    const OT4 & param4;
};


/** Hold invocations with 5 parameters
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5>
class Invocation5 : public Invocation
{
  public:

    enum { numParams = 5 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef typename TypeTraits<P3>::Type  OT3;   //!< internal shorthand
    typedef typename TypeTraits<P4>::Type  OT4;   //!< internal shorthand
    typedef typename TypeTraits<P5>::Type  OT5;   //!< internal shorthand
    typedef ConstraintSet5<OT1, OT2, OT3, OT4, OT5> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand
    typedef P3 T3Type;   //!< internal shorthand
    typedef P4 T4Type;   //!< internal shorthand
    typedef P5 T5Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    * @param in_param3  parameter 3
    * @param in_param4  parameter 4
    * @param in_param5  parameter 5
    */
    Invocation5(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2
                , const OT3 &in_param3
                , const OT4 &in_param4
                , const OT5 &in_param5)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
      , param3( in_param3 )
      , param4( in_param4 )
      , param5( in_param5 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation5<P1, P2, P3, P4, P5> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2)
             && invocationComparison(param3, other.param3)
             && invocationComparison(param4, other.param4)
             && invocationComparison(param5, other.param5);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 3
    */
    const OT3 & getParameter3() const
    {
      return param3;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 4
    */
    const OT4 & getParameter4() const
    {
      return param4;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 5
    */
    const OT5 & getParameter5() const
    {
      return param5;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2, %3, %4, %5");
      fmt << param1
          << param2
          << param3
          << param4
          << param5;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
    const OT3 & param3;
    const OT4 & param4;
    const OT5 & param5;
};


/** Hold invocations with 6 parameters
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
class Invocation6 : public Invocation
{
  public:

    enum { numParams = 6 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef typename TypeTraits<P3>::Type  OT3;   //!< internal shorthand
    typedef typename TypeTraits<P4>::Type  OT4;   //!< internal shorthand
    typedef typename TypeTraits<P5>::Type  OT5;   //!< internal shorthand
    typedef typename TypeTraits<P6>::Type  OT6;   //!< internal shorthand
    typedef ConstraintSet6<OT1, OT2, OT3, OT4, OT5, OT6> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand
    typedef P3 T3Type;   //!< internal shorthand
    typedef P4 T4Type;   //!< internal shorthand
    typedef P5 T5Type;   //!< internal shorthand
    typedef P6 T6Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    * @param in_param3  parameter 3
    * @param in_param4  parameter 4
    * @param in_param5  parameter 5
    * @param in_param6  parameter 6
    */
    Invocation6(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2
                , const OT3 &in_param3
                , const OT4 &in_param4
                , const OT5 &in_param5
                , const OT6 &in_param6)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
      , param3( in_param3 )
      , param4( in_param4 )
      , param5( in_param5 )
      , param6( in_param6 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation6<P1, P2, P3, P4, P5, P6> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2)
             && invocationComparison(param3, other.param3)
             && invocationComparison(param4, other.param4)
             && invocationComparison(param5, other.param5)
             && invocationComparison(param6, other.param6);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 3
    */
    const OT3 & getParameter3() const
    {
      return param3;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 4
    */
    const OT4 & getParameter4() const
    {
      return param4;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 5
    */
    const OT5 & getParameter5() const
    {
      return param5;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 6
    */
    const OT6 & getParameter6() const
    {
      return param6;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2, %3, %4, %5, %6");
      fmt << param1
          << param2
          << param3
          << param4
          << param5
          << param6;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
    const OT3 & param3;
    const OT4 & param4;
    const OT5 & param5;
    const OT6 & param6;
};


/** Hold invocations with 7 parameters
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
class Invocation7 : public Invocation
{
  public:

    enum { numParams = 7 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef typename TypeTraits<P3>::Type  OT3;   //!< internal shorthand
    typedef typename TypeTraits<P4>::Type  OT4;   //!< internal shorthand
    typedef typename TypeTraits<P5>::Type  OT5;   //!< internal shorthand
    typedef typename TypeTraits<P6>::Type  OT6;   //!< internal shorthand
    typedef typename TypeTraits<P7>::Type  OT7;   //!< internal shorthand
    typedef ConstraintSet7<OT1, OT2, OT3, OT4, OT5, OT6, OT7> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand
    typedef P3 T3Type;   //!< internal shorthand
    typedef P4 T4Type;   //!< internal shorthand
    typedef P5 T5Type;   //!< internal shorthand
    typedef P6 T6Type;   //!< internal shorthand
    typedef P7 T7Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    * @param in_param3  parameter 3
    * @param in_param4  parameter 4
    * @param in_param5  parameter 5
    * @param in_param6  parameter 6
    * @param in_param7  parameter 7
    */
    Invocation7(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2
                , const OT3 &in_param3
                , const OT4 &in_param4
                , const OT5 &in_param5
                , const OT6 &in_param6
                , const OT7 &in_param7)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
      , param3( in_param3 )
      , param4( in_param4 )
      , param5( in_param5 )
      , param6( in_param6 )
      , param7( in_param7 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation7<P1, P2, P3, P4, P5, P6, P7> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2)
             && invocationComparison(param3, other.param3)
             && invocationComparison(param4, other.param4)
             && invocationComparison(param5, other.param5)
             && invocationComparison(param6, other.param6)
             && invocationComparison(param7, other.param7);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 3
    */
    const OT3 & getParameter3() const
    {
      return param3;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 4
    */
    const OT4 & getParameter4() const
    {
      return param4;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 5
    */
    const OT5 & getParameter5() const
    {
      return param5;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 6
    */
    const OT6 & getParameter6() const
    {
      return param6;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 7
    */
    const OT7 & getParameter7() const
    {
      return param7;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2, %3, %4, %5, %6, %7");
      fmt << param1
          << param2
          << param3
          << param4
          << param5
          << param6
          << param7;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
    const OT3 & param3;
    const OT4 & param4;
    const OT5 & param5;
    const OT6 & param6;
    const OT7 & param7;
};


/** Hold invocations with 8 parameters
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8>
class Invocation8 : public Invocation
{
  public:

    enum { numParams = 8 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef typename TypeTraits<P3>::Type  OT3;   //!< internal shorthand
    typedef typename TypeTraits<P4>::Type  OT4;   //!< internal shorthand
    typedef typename TypeTraits<P5>::Type  OT5;   //!< internal shorthand
    typedef typename TypeTraits<P6>::Type  OT6;   //!< internal shorthand
    typedef typename TypeTraits<P7>::Type  OT7;   //!< internal shorthand
    typedef typename TypeTraits<P8>::Type  OT8;   //!< internal shorthand
    typedef ConstraintSet8<OT1, OT2, OT3, OT4, OT5, OT6, OT7, OT8> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand
    typedef P3 T3Type;   //!< internal shorthand
    typedef P4 T4Type;   //!< internal shorthand
    typedef P5 T5Type;   //!< internal shorthand
    typedef P6 T6Type;   //!< internal shorthand
    typedef P7 T7Type;   //!< internal shorthand
    typedef P8 T8Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    * @param in_param3  parameter 3
    * @param in_param4  parameter 4
    * @param in_param5  parameter 5
    * @param in_param6  parameter 6
    * @param in_param7  parameter 7
    * @param in_param8  parameter 8
    */
    Invocation8(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2
                , const OT3 &in_param3
                , const OT4 &in_param4
                , const OT5 &in_param5
                , const OT6 &in_param6
                , const OT7 &in_param7
                , const OT8 &in_param8)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
      , param3( in_param3 )
      , param4( in_param4 )
      , param5( in_param5 )
      , param6( in_param6 )
      , param7( in_param7 )
      , param8( in_param8 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation8<P1, P2, P3, P4, P5, P6, P7, P8> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2)
             && invocationComparison(param3, other.param3)
             && invocationComparison(param4, other.param4)
             && invocationComparison(param5, other.param5)
             && invocationComparison(param6, other.param6)
             && invocationComparison(param7, other.param7)
             && invocationComparison(param8, other.param8);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 3
    */
    const OT3 & getParameter3() const
    {
      return param3;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 4
    */
    const OT4 & getParameter4() const
    {
      return param4;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 5
    */
    const OT5 & getParameter5() const
    {
      return param5;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 6
    */
    const OT6 & getParameter6() const
    {
      return param6;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 7
    */
    const OT7 & getParameter7() const
    {
      return param7;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 8
    */
    const OT8 & getParameter8() const
    {
      return param8;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2, %3, %4, %5, %6, %7, %8");
      fmt << param1
          << param2
          << param3
          << param4
          << param5
          << param6
          << param7
          << param8;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
    const OT3 & param3;
    const OT4 & param4;
    const OT5 & param5;
    const OT6 & param6;
    const OT7 & param7;
    const OT8 & param8;
};


/** Hold invocations with 9 parameters
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9>
class Invocation9 : public Invocation
{
  public:

    enum { numParams = 9 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef typename TypeTraits<P3>::Type  OT3;   //!< internal shorthand
    typedef typename TypeTraits<P4>::Type  OT4;   //!< internal shorthand
    typedef typename TypeTraits<P5>::Type  OT5;   //!< internal shorthand
    typedef typename TypeTraits<P6>::Type  OT6;   //!< internal shorthand
    typedef typename TypeTraits<P7>::Type  OT7;   //!< internal shorthand
    typedef typename TypeTraits<P8>::Type  OT8;   //!< internal shorthand
    typedef typename TypeTraits<P9>::Type  OT9;   //!< internal shorthand
    typedef ConstraintSet9<OT1, OT2, OT3, OT4, OT5, OT6, OT7, OT8, OT9> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand
    typedef P3 T3Type;   //!< internal shorthand
    typedef P4 T4Type;   //!< internal shorthand
    typedef P5 T5Type;   //!< internal shorthand
    typedef P6 T6Type;   //!< internal shorthand
    typedef P7 T7Type;   //!< internal shorthand
    typedef P8 T8Type;   //!< internal shorthand
    typedef P9 T9Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    * @param in_param3  parameter 3
    * @param in_param4  parameter 4
    * @param in_param5  parameter 5
    * @param in_param6  parameter 6
    * @param in_param7  parameter 7
    * @param in_param8  parameter 8
    * @param in_param9  parameter 9
    */
    Invocation9(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2
                , const OT3 &in_param3
                , const OT4 &in_param4
                , const OT5 &in_param5
                , const OT6 &in_param6
                , const OT7 &in_param7
                , const OT8 &in_param8
                , const OT9 &in_param9)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
      , param3( in_param3 )
      , param4( in_param4 )
      , param5( in_param5 )
      , param6( in_param6 )
      , param7( in_param7 )
      , param8( in_param8 )
      , param9( in_param9 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation9<P1, P2, P3, P4, P5, P6, P7, P8, P9> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2)
             && invocationComparison(param3, other.param3)
             && invocationComparison(param4, other.param4)
             && invocationComparison(param5, other.param5)
             && invocationComparison(param6, other.param6)
             && invocationComparison(param7, other.param7)
             && invocationComparison(param8, other.param8)
             && invocationComparison(param9, other.param9);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 3
    */
    const OT3 & getParameter3() const
    {
      return param3;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 4
    */
    const OT4 & getParameter4() const
    {
      return param4;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 5
    */
    const OT5 & getParameter5() const
    {
      return param5;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 6
    */
    const OT6 & getParameter6() const
    {
      return param6;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 7
    */
    const OT7 & getParameter7() const
    {
      return param7;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 8
    */
    const OT8 & getParameter8() const
    {
      return param8;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 9
    */
    const OT9 & getParameter9() const
    {
      return param9;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2, %3, %4, %5, %6, %7, %8, %9");
      fmt << param1
          << param2
          << param3
          << param4
          << param5
          << param6
          << param7
          << param8
          << param9;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
    const OT3 & param3;
    const OT4 & param4;
    const OT5 & param5;
    const OT6 & param6;
    const OT7 & param7;
    const OT8 & param8;
    const OT9 & param9;
};


/** Hold invocations with 10 parameters
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10>
class Invocation10 : public Invocation
{
  public:

    enum { numParams = 10 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef typename TypeTraits<P3>::Type  OT3;   //!< internal shorthand
    typedef typename TypeTraits<P4>::Type  OT4;   //!< internal shorthand
    typedef typename TypeTraits<P5>::Type  OT5;   //!< internal shorthand
    typedef typename TypeTraits<P6>::Type  OT6;   //!< internal shorthand
    typedef typename TypeTraits<P7>::Type  OT7;   //!< internal shorthand
    typedef typename TypeTraits<P8>::Type  OT8;   //!< internal shorthand
    typedef typename TypeTraits<P9>::Type  OT9;   //!< internal shorthand
    typedef typename TypeTraits<P10>::Type  OT10;   //!< internal shorthand
    typedef ConstraintSet10<OT1, OT2, OT3, OT4, OT5, OT6, OT7, OT8, OT9, OT10> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand
    typedef P3 T3Type;   //!< internal shorthand
    typedef P4 T4Type;   //!< internal shorthand
    typedef P5 T5Type;   //!< internal shorthand
    typedef P6 T6Type;   //!< internal shorthand
    typedef P7 T7Type;   //!< internal shorthand
    typedef P8 T8Type;   //!< internal shorthand
    typedef P9 T9Type;   //!< internal shorthand
    typedef P10 T10Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    * @param in_param3  parameter 3
    * @param in_param4  parameter 4
    * @param in_param5  parameter 5
    * @param in_param6  parameter 6
    * @param in_param7  parameter 7
    * @param in_param8  parameter 8
    * @param in_param9  parameter 9
    * @param in_param10  parameter 10
    */
    Invocation10(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2
                , const OT3 &in_param3
                , const OT4 &in_param4
                , const OT5 &in_param5
                , const OT6 &in_param6
                , const OT7 &in_param7
                , const OT8 &in_param8
                , const OT9 &in_param9
                , const OT10 &in_param10)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
      , param3( in_param3 )
      , param4( in_param4 )
      , param5( in_param5 )
      , param6( in_param6 )
      , param7( in_param7 )
      , param8( in_param8 )
      , param9( in_param9 )
      , param10( in_param10 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation10<P1, P2, P3, P4, P5, P6, P7, P8, P9, P10> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2)
             && invocationComparison(param3, other.param3)
             && invocationComparison(param4, other.param4)
             && invocationComparison(param5, other.param5)
             && invocationComparison(param6, other.param6)
             && invocationComparison(param7, other.param7)
             && invocationComparison(param8, other.param8)
             && invocationComparison(param9, other.param9)
             && invocationComparison(param10, other.param10);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 3
    */
    const OT3 & getParameter3() const
    {
      return param3;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 4
    */
    const OT4 & getParameter4() const
    {
      return param4;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 5
    */
    const OT5 & getParameter5() const
    {
      return param5;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 6
    */
    const OT6 & getParameter6() const
    {
      return param6;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 7
    */
    const OT7 & getParameter7() const
    {
      return param7;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 8
    */
    const OT8 & getParameter8() const
    {
      return param8;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 9
    */
    const OT9 & getParameter9() const
    {
      return param9;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 10
    */
    const OT10 & getParameter10() const
    {
      return param10;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2, %3, %4, %5, %6, %7, %8, %9, %10");
      fmt << param1
          << param2
          << param3
          << param4
          << param5
          << param6
          << param7
          << param8
          << param9
          << param10;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
    const OT3 & param3;
    const OT4 & param4;
    const OT5 & param5;
    const OT6 & param6;
    const OT7 & param7;
    const OT8 & param8;
    const OT9 & param9;
    const OT10 & param10;
};


/** Hold invocations with 11 parameters
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
class Invocation11 : public Invocation
{
  public:

    enum { numParams = 11 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef typename TypeTraits<P3>::Type  OT3;   //!< internal shorthand
    typedef typename TypeTraits<P4>::Type  OT4;   //!< internal shorthand
    typedef typename TypeTraits<P5>::Type  OT5;   //!< internal shorthand
    typedef typename TypeTraits<P6>::Type  OT6;   //!< internal shorthand
    typedef typename TypeTraits<P7>::Type  OT7;   //!< internal shorthand
    typedef typename TypeTraits<P8>::Type  OT8;   //!< internal shorthand
    typedef typename TypeTraits<P9>::Type  OT9;   //!< internal shorthand
    typedef typename TypeTraits<P10>::Type  OT10;   //!< internal shorthand
    typedef typename TypeTraits<P11>::Type  OT11;   //!< internal shorthand
    typedef ConstraintSet11<OT1, OT2, OT3, OT4, OT5, OT6, OT7, OT8, OT9, OT10, OT11> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand
    typedef P3 T3Type;   //!< internal shorthand
    typedef P4 T4Type;   //!< internal shorthand
    typedef P5 T5Type;   //!< internal shorthand
    typedef P6 T6Type;   //!< internal shorthand
    typedef P7 T7Type;   //!< internal shorthand
    typedef P8 T8Type;   //!< internal shorthand
    typedef P9 T9Type;   //!< internal shorthand
    typedef P10 T10Type;   //!< internal shorthand
    typedef P11 T11Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    * @param in_param3  parameter 3
    * @param in_param4  parameter 4
    * @param in_param5  parameter 5
    * @param in_param6  parameter 6
    * @param in_param7  parameter 7
    * @param in_param8  parameter 8
    * @param in_param9  parameter 9
    * @param in_param10  parameter 10
    * @param in_param11  parameter 11
    */
    Invocation11(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2
                , const OT3 &in_param3
                , const OT4 &in_param4
                , const OT5 &in_param5
                , const OT6 &in_param6
                , const OT7 &in_param7
                , const OT8 &in_param8
                , const OT9 &in_param9
                , const OT10 &in_param10
                , const OT11 &in_param11)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
      , param3( in_param3 )
      , param4( in_param4 )
      , param5( in_param5 )
      , param6( in_param6 )
      , param7( in_param7 )
      , param8( in_param8 )
      , param9( in_param9 )
      , param10( in_param10 )
      , param11( in_param11 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation11<P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2)
             && invocationComparison(param3, other.param3)
             && invocationComparison(param4, other.param4)
             && invocationComparison(param5, other.param5)
             && invocationComparison(param6, other.param6)
             && invocationComparison(param7, other.param7)
             && invocationComparison(param8, other.param8)
             && invocationComparison(param9, other.param9)
             && invocationComparison(param10, other.param10)
             && invocationComparison(param11, other.param11);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 3
    */
    const OT3 & getParameter3() const
    {
      return param3;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 4
    */
    const OT4 & getParameter4() const
    {
      return param4;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 5
    */
    const OT5 & getParameter5() const
    {
      return param5;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 6
    */
    const OT6 & getParameter6() const
    {
      return param6;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 7
    */
    const OT7 & getParameter7() const
    {
      return param7;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 8
    */
    const OT8 & getParameter8() const
    {
      return param8;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 9
    */
    const OT9 & getParameter9() const
    {
      return param9;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 10
    */
    const OT10 & getParameter10() const
    {
      return param10;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 11
    */
    const OT11 & getParameter11() const
    {
      return param11;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2, %3, %4, %5, %6, %7, %8, %9, %10, %11");
      fmt << param1
          << param2
          << param3
          << param4
          << param5
          << param6
          << param7
          << param8
          << param9
          << param10
          << param11;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
    const OT3 & param3;
    const OT4 & param4;
    const OT5 & param5;
    const OT6 & param6;
    const OT7 & param7;
    const OT8 & param8;
    const OT9 & param9;
    const OT10 & param10;
    const OT11 & param11;
};


/** Hold invocations with 12 parameters
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12>
class Invocation12 : public Invocation
{
  public:

    enum { numParams = 12 };

    typedef typename TypeTraits<P1>::Type  OT1;   //!< internal shorthand
    typedef typename TypeTraits<P2>::Type  OT2;   //!< internal shorthand
    typedef typename TypeTraits<P3>::Type  OT3;   //!< internal shorthand
    typedef typename TypeTraits<P4>::Type  OT4;   //!< internal shorthand
    typedef typename TypeTraits<P5>::Type  OT5;   //!< internal shorthand
    typedef typename TypeTraits<P6>::Type  OT6;   //!< internal shorthand
    typedef typename TypeTraits<P7>::Type  OT7;   //!< internal shorthand
    typedef typename TypeTraits<P8>::Type  OT8;   //!< internal shorthand
    typedef typename TypeTraits<P9>::Type  OT9;   //!< internal shorthand
    typedef typename TypeTraits<P10>::Type  OT10;   //!< internal shorthand
    typedef typename TypeTraits<P11>::Type  OT11;   //!< internal shorthand
    typedef typename TypeTraits<P12>::Type  OT12;   //!< internal shorthand
    typedef ConstraintSet12<OT1, OT2, OT3, OT4, OT5, OT6, OT7, OT8, OT9, OT10, OT11, OT12> ConstraintSetType;   //!< internal shorthand

    typedef P1 T1Type;   //!< internal shorthand
    typedef P2 T2Type;   //!< internal shorthand
    typedef P3 T3Type;   //!< internal shorthand
    typedef P4 T4Type;   //!< internal shorthand
    typedef P5 T5Type;   //!< internal shorthand
    typedef P6 T6Type;   //!< internal shorthand
    typedef P7 T7Type;   //!< internal shorthand
    typedef P8 T8Type;   //!< internal shorthand
    typedef P9 T9Type;   //!< internal shorthand
    typedef P10 T10Type;   //!< internal shorthand
    typedef P11 T11Type;   //!< internal shorthand
    typedef P12 T12Type;   //!< internal shorthand

  /** Constructs the object
    * @param  objname   name of the object
    * @param in_param1  parameter 1
    * @param in_param2  parameter 2
    * @param in_param3  parameter 3
    * @param in_param4  parameter 4
    * @param in_param5  parameter 5
    * @param in_param6  parameter 6
    * @param in_param7  parameter 7
    * @param in_param8  parameter 8
    * @param in_param9  parameter 9
    * @param in_param10  parameter 10
    * @param in_param11  parameter 11
    * @param in_param12  parameter 12
    */
    Invocation12(  const String &objname
                , const OT1 &in_param1
                , const OT2 &in_param2
                , const OT3 &in_param3
                , const OT4 &in_param4
                , const OT5 &in_param5
                , const OT6 &in_param6
                , const OT7 &in_param7
                , const OT8 &in_param8
                , const OT9 &in_param9
                , const OT10 &in_param10
                , const OT11 &in_param11
                , const OT12 &in_param12)
      : Invocation( objname )
      , param1( in_param1 )
      , param2( in_param2 )
      , param3( in_param3 )
      , param4( in_param4 )
      , param5( in_param5 )
      , param6( in_param6 )
      , param7( in_param7 )
      , param8( in_param8 )
      , param9( in_param9 )
      , param10( in_param10 )
      , param11( in_param11 )
      , param12( in_param12 )
    {
    }

#ifdef MOCKPP_USE_INVOCATION_EQUALS

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    virtual bool equals( const Invocation12<P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12> &other ) const
    {
      return invocationComparison(param1, other.param1)
             && invocationComparison(param2, other.param2)
             && invocationComparison(param3, other.param3)
             && invocationComparison(param4, other.param4)
             && invocationComparison(param5, other.param5)
             && invocationComparison(param6, other.param6)
             && invocationComparison(param7, other.param7)
             && invocationComparison(param8, other.param8)
             && invocationComparison(param9, other.param9)
             && invocationComparison(param10, other.param10)
             && invocationComparison(param11, other.param11)
             && invocationComparison(param12, other.param12);
    }

  /** Check if the object equals another invocation
    * @param other  the other invocation
    * @return  true: objects are equal
    */
    bool equals( const InvocationBase &other ) const
    {
      MOCKPP_UNUSED(other);
      return false;
    }

#endif // MOCKPP_USE_INVOCATION_EQUALS

  /** Returns an invocation parameter
    * @return  the invocation parameter 1
    */
    const OT1 & getParameter1() const
    {
      return param1;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 2
    */
    const OT2 & getParameter2() const
    {
      return param2;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 3
    */
    const OT3 & getParameter3() const
    {
      return param3;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 4
    */
    const OT4 & getParameter4() const
    {
      return param4;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 5
    */
    const OT5 & getParameter5() const
    {
      return param5;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 6
    */
    const OT6 & getParameter6() const
    {
      return param6;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 7
    */
    const OT7 & getParameter7() const
    {
      return param7;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 8
    */
    const OT8 & getParameter8() const
    {
      return param8;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 9
    */
    const OT9 & getParameter9() const
    {
      return param9;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 10
    */
    const OT10 & getParameter10() const
    {
      return param10;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 11
    */
    const OT11 & getParameter11() const
    {
      return param11;
    }

  /** Returns an invocation parameter
    * @return  the invocation parameter 12
    */
    const OT12 & getParameter12() const
    {
      return param12;
    }

  /** Returns a description of the parameters
    * @return the description
    */
    virtual String describeParameters() const
    {
      String fmt = MOCKPP_PCHAR("%1, %2, %3, %4, %5, %6, %7, %8, %9, %10, %11, %12");
      fmt << param1
          << param2
          << param3
          << param4
          << param5
          << param6
          << param7
          << param8
          << param9
          << param10
          << param11
          << param12;
      return fmt;
    }

  private:

    const OT1 & param1;
    const OT2 & param2;
    const OT3 & param3;
    const OT4 & param4;
    const OT5 & param5;
    const OT6 & param6;
    const OT7 & param7;
    const OT8 & param8;
    const OT9 & param9;
    const OT10 & param10;
    const OT11 & param11;
    const OT12 & param12;
};


MOCKPP_NS_END


#endif // MOCKPP_INVOCATION_N_H

