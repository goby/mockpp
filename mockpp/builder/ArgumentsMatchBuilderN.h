/** @file
    @internal NOT INTENDED FOR PUBLIC INCLUSION
    @brief    Generated with gen_argumentsmatchbuilder_N.pl.

  $Id: InvocationN.h,v 1.7 2005/10/19 20:53:09 ewald-arnold Exp $

 ***************************************************************************/

/**************************************************************************

   begin                : Sun Aug 22 2004
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

#ifndef MOCKPP_ARGUMENTSMATCHBUILDER_N_H
#define MOCKPP_ARGUMENTSMATCHBUILDER_N_H

//#include <mockpp/builder/ArgumentsMatchBuilder.h>

#include <mockpp/chaining/ChainingMockObjectSupport.h>

MOCKPP_NS_START


/** Build a matcher for an invocation with 1 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder1 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member

    typedef ConstraintSet1<OT1> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 1 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any()  )
    {
      return with_cs( ConstraintSetType( p1 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 2 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder2 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member

    typedef ConstraintSet2<OT1, OT2> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 2 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 3 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder3 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member
    typedef typename I::T3Type P3;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member
    typedef typename I::OT3    OT3;  //!< internal shared member

    typedef ConstraintSet3<OT1, OT2, OT3> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 3 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @param p3 pointer to the constraint for method parameter 3
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any() 
                             , const ConstraintHolder<OT3> &p3 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2, p3 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 4 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder4 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member
    typedef typename I::T3Type P3;  //!< internal shared member
    typedef typename I::T4Type P4;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member
    typedef typename I::OT3    OT3;  //!< internal shared member
    typedef typename I::OT4    OT4;  //!< internal shared member

    typedef ConstraintSet4<OT1, OT2, OT3, OT4> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 4 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @param p3 pointer to the constraint for method parameter 3
    * @param p4 pointer to the constraint for method parameter 4
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any() 
                             , const ConstraintHolder<OT3> &p3 = any() 
                             , const ConstraintHolder<OT4> &p4 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2, p3, p4 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 5 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder5 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member
    typedef typename I::T3Type P3;  //!< internal shared member
    typedef typename I::T4Type P4;  //!< internal shared member
    typedef typename I::T5Type P5;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member
    typedef typename I::OT3    OT3;  //!< internal shared member
    typedef typename I::OT4    OT4;  //!< internal shared member
    typedef typename I::OT5    OT5;  //!< internal shared member

    typedef ConstraintSet5<OT1, OT2, OT3, OT4, OT5> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 5 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @param p3 pointer to the constraint for method parameter 3
    * @param p4 pointer to the constraint for method parameter 4
    * @param p5 pointer to the constraint for method parameter 5
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any() 
                             , const ConstraintHolder<OT3> &p3 = any() 
                             , const ConstraintHolder<OT4> &p4 = any() 
                             , const ConstraintHolder<OT5> &p5 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2, p3, p4, p5 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 6 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder6 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member
    typedef typename I::T3Type P3;  //!< internal shared member
    typedef typename I::T4Type P4;  //!< internal shared member
    typedef typename I::T5Type P5;  //!< internal shared member
    typedef typename I::T6Type P6;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member
    typedef typename I::OT3    OT3;  //!< internal shared member
    typedef typename I::OT4    OT4;  //!< internal shared member
    typedef typename I::OT5    OT5;  //!< internal shared member
    typedef typename I::OT6    OT6;  //!< internal shared member

    typedef ConstraintSet6<OT1, OT2, OT3, OT4, OT5, OT6> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 6 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @param p3 pointer to the constraint for method parameter 3
    * @param p4 pointer to the constraint for method parameter 4
    * @param p5 pointer to the constraint for method parameter 5
    * @param p6 pointer to the constraint for method parameter 6
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any() 
                             , const ConstraintHolder<OT3> &p3 = any() 
                             , const ConstraintHolder<OT4> &p4 = any() 
                             , const ConstraintHolder<OT5> &p5 = any() 
                             , const ConstraintHolder<OT6> &p6 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2, p3, p4, p5, p6 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 7 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder7 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member
    typedef typename I::T3Type P3;  //!< internal shared member
    typedef typename I::T4Type P4;  //!< internal shared member
    typedef typename I::T5Type P5;  //!< internal shared member
    typedef typename I::T6Type P6;  //!< internal shared member
    typedef typename I::T7Type P7;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member
    typedef typename I::OT3    OT3;  //!< internal shared member
    typedef typename I::OT4    OT4;  //!< internal shared member
    typedef typename I::OT5    OT5;  //!< internal shared member
    typedef typename I::OT6    OT6;  //!< internal shared member
    typedef typename I::OT7    OT7;  //!< internal shared member

    typedef ConstraintSet7<OT1, OT2, OT3, OT4, OT5, OT6, OT7> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 7 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @param p3 pointer to the constraint for method parameter 3
    * @param p4 pointer to the constraint for method parameter 4
    * @param p5 pointer to the constraint for method parameter 5
    * @param p6 pointer to the constraint for method parameter 6
    * @param p7 pointer to the constraint for method parameter 7
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any() 
                             , const ConstraintHolder<OT3> &p3 = any() 
                             , const ConstraintHolder<OT4> &p4 = any() 
                             , const ConstraintHolder<OT5> &p5 = any() 
                             , const ConstraintHolder<OT6> &p6 = any() 
                             , const ConstraintHolder<OT7> &p7 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2, p3, p4, p5, p6, p7 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 8 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder8 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member
    typedef typename I::T3Type P3;  //!< internal shared member
    typedef typename I::T4Type P4;  //!< internal shared member
    typedef typename I::T5Type P5;  //!< internal shared member
    typedef typename I::T6Type P6;  //!< internal shared member
    typedef typename I::T7Type P7;  //!< internal shared member
    typedef typename I::T8Type P8;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member
    typedef typename I::OT3    OT3;  //!< internal shared member
    typedef typename I::OT4    OT4;  //!< internal shared member
    typedef typename I::OT5    OT5;  //!< internal shared member
    typedef typename I::OT6    OT6;  //!< internal shared member
    typedef typename I::OT7    OT7;  //!< internal shared member
    typedef typename I::OT8    OT8;  //!< internal shared member

    typedef ConstraintSet8<OT1, OT2, OT3, OT4, OT5, OT6, OT7, OT8> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 8 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @param p3 pointer to the constraint for method parameter 3
    * @param p4 pointer to the constraint for method parameter 4
    * @param p5 pointer to the constraint for method parameter 5
    * @param p6 pointer to the constraint for method parameter 6
    * @param p7 pointer to the constraint for method parameter 7
    * @param p8 pointer to the constraint for method parameter 8
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any() 
                             , const ConstraintHolder<OT3> &p3 = any() 
                             , const ConstraintHolder<OT4> &p4 = any() 
                             , const ConstraintHolder<OT5> &p5 = any() 
                             , const ConstraintHolder<OT6> &p6 = any() 
                             , const ConstraintHolder<OT7> &p7 = any() 
                             , const ConstraintHolder<OT8> &p8 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2, p3, p4, p5, p6, p7, p8 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 9 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder9 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member
    typedef typename I::T3Type P3;  //!< internal shared member
    typedef typename I::T4Type P4;  //!< internal shared member
    typedef typename I::T5Type P5;  //!< internal shared member
    typedef typename I::T6Type P6;  //!< internal shared member
    typedef typename I::T7Type P7;  //!< internal shared member
    typedef typename I::T8Type P8;  //!< internal shared member
    typedef typename I::T9Type P9;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member
    typedef typename I::OT3    OT3;  //!< internal shared member
    typedef typename I::OT4    OT4;  //!< internal shared member
    typedef typename I::OT5    OT5;  //!< internal shared member
    typedef typename I::OT6    OT6;  //!< internal shared member
    typedef typename I::OT7    OT7;  //!< internal shared member
    typedef typename I::OT8    OT8;  //!< internal shared member
    typedef typename I::OT9    OT9;  //!< internal shared member

    typedef ConstraintSet9<OT1, OT2, OT3, OT4, OT5, OT6, OT7, OT8, OT9> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 9 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @param p3 pointer to the constraint for method parameter 3
    * @param p4 pointer to the constraint for method parameter 4
    * @param p5 pointer to the constraint for method parameter 5
    * @param p6 pointer to the constraint for method parameter 6
    * @param p7 pointer to the constraint for method parameter 7
    * @param p8 pointer to the constraint for method parameter 8
    * @param p9 pointer to the constraint for method parameter 9
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any() 
                             , const ConstraintHolder<OT3> &p3 = any() 
                             , const ConstraintHolder<OT4> &p4 = any() 
                             , const ConstraintHolder<OT5> &p5 = any() 
                             , const ConstraintHolder<OT6> &p6 = any() 
                             , const ConstraintHolder<OT7> &p7 = any() 
                             , const ConstraintHolder<OT8> &p8 = any() 
                             , const ConstraintHolder<OT9> &p9 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2, p3, p4, p5, p6, p7, p8, p9 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 10 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder10 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member
    typedef typename I::T3Type P3;  //!< internal shared member
    typedef typename I::T4Type P4;  //!< internal shared member
    typedef typename I::T5Type P5;  //!< internal shared member
    typedef typename I::T6Type P6;  //!< internal shared member
    typedef typename I::T7Type P7;  //!< internal shared member
    typedef typename I::T8Type P8;  //!< internal shared member
    typedef typename I::T9Type P9;  //!< internal shared member
    typedef typename I::T10Type P10;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member
    typedef typename I::OT3    OT3;  //!< internal shared member
    typedef typename I::OT4    OT4;  //!< internal shared member
    typedef typename I::OT5    OT5;  //!< internal shared member
    typedef typename I::OT6    OT6;  //!< internal shared member
    typedef typename I::OT7    OT7;  //!< internal shared member
    typedef typename I::OT8    OT8;  //!< internal shared member
    typedef typename I::OT9    OT9;  //!< internal shared member
    typedef typename I::OT10    OT10;  //!< internal shared member

    typedef ConstraintSet10<OT1, OT2, OT3, OT4, OT5, OT6, OT7, OT8, OT9, OT10> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 10 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @param p3 pointer to the constraint for method parameter 3
    * @param p4 pointer to the constraint for method parameter 4
    * @param p5 pointer to the constraint for method parameter 5
    * @param p6 pointer to the constraint for method parameter 6
    * @param p7 pointer to the constraint for method parameter 7
    * @param p8 pointer to the constraint for method parameter 8
    * @param p9 pointer to the constraint for method parameter 9
    * @param p10 pointer to the constraint for method parameter 10
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any() 
                             , const ConstraintHolder<OT3> &p3 = any() 
                             , const ConstraintHolder<OT4> &p4 = any() 
                             , const ConstraintHolder<OT5> &p5 = any() 
                             , const ConstraintHolder<OT6> &p6 = any() 
                             , const ConstraintHolder<OT7> &p7 = any() 
                             , const ConstraintHolder<OT8> &p8 = any() 
                             , const ConstraintHolder<OT9> &p9 = any() 
                             , const ConstraintHolder<OT10> &p10 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2, p3, p4, p5, p6, p7, p8, p9, p10 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 11 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder11 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member
    typedef typename I::T3Type P3;  //!< internal shared member
    typedef typename I::T4Type P4;  //!< internal shared member
    typedef typename I::T5Type P5;  //!< internal shared member
    typedef typename I::T6Type P6;  //!< internal shared member
    typedef typename I::T7Type P7;  //!< internal shared member
    typedef typename I::T8Type P8;  //!< internal shared member
    typedef typename I::T9Type P9;  //!< internal shared member
    typedef typename I::T10Type P10;  //!< internal shared member
    typedef typename I::T11Type P11;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member
    typedef typename I::OT3    OT3;  //!< internal shared member
    typedef typename I::OT4    OT4;  //!< internal shared member
    typedef typename I::OT5    OT5;  //!< internal shared member
    typedef typename I::OT6    OT6;  //!< internal shared member
    typedef typename I::OT7    OT7;  //!< internal shared member
    typedef typename I::OT8    OT8;  //!< internal shared member
    typedef typename I::OT9    OT9;  //!< internal shared member
    typedef typename I::OT10    OT10;  //!< internal shared member
    typedef typename I::OT11    OT11;  //!< internal shared member

    typedef ConstraintSet11<OT1, OT2, OT3, OT4, OT5, OT6, OT7, OT8, OT9, OT10, OT11> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 11 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @param p3 pointer to the constraint for method parameter 3
    * @param p4 pointer to the constraint for method parameter 4
    * @param p5 pointer to the constraint for method parameter 5
    * @param p6 pointer to the constraint for method parameter 6
    * @param p7 pointer to the constraint for method parameter 7
    * @param p8 pointer to the constraint for method parameter 8
    * @param p9 pointer to the constraint for method parameter 9
    * @param p10 pointer to the constraint for method parameter 10
    * @param p11 pointer to the constraint for method parameter 11
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any() 
                             , const ConstraintHolder<OT3> &p3 = any() 
                             , const ConstraintHolder<OT4> &p4 = any() 
                             , const ConstraintHolder<OT5> &p5 = any() 
                             , const ConstraintHolder<OT6> &p6 = any() 
                             , const ConstraintHolder<OT7> &p7 = any() 
                             , const ConstraintHolder<OT8> &p8 = any() 
                             , const ConstraintHolder<OT9> &p9 = any() 
                             , const ConstraintHolder<OT10> &p10 = any() 
                             , const ConstraintHolder<OT11> &p11 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};


/** Build a matcher for an invocation with 12 argument.
  * @ingroup grp_chainer
  * @internal
  */
template <typename R,    // Returntype
          typename I>    // Invocation
class ArgumentsMatchBuilder12 : public MatchBuilder<R,I>
{
  public:

    typedef R ReturnType;           //!< internal shared member
    typedef I InvocationType;       //!< internal shared member
    typedef typename I::T1Type P1;  //!< internal shared member
    typedef typename I::T2Type P2;  //!< internal shared member
    typedef typename I::T3Type P3;  //!< internal shared member
    typedef typename I::T4Type P4;  //!< internal shared member
    typedef typename I::T5Type P5;  //!< internal shared member
    typedef typename I::T6Type P6;  //!< internal shared member
    typedef typename I::T7Type P7;  //!< internal shared member
    typedef typename I::T8Type P8;  //!< internal shared member
    typedef typename I::T9Type P9;  //!< internal shared member
    typedef typename I::T10Type P10;  //!< internal shared member
    typedef typename I::T11Type P11;  //!< internal shared member
    typedef typename I::T12Type P12;  //!< internal shared member

    typedef typename I::OT1    OT1;  //!< internal shared member
    typedef typename I::OT2    OT2;  //!< internal shared member
    typedef typename I::OT3    OT3;  //!< internal shared member
    typedef typename I::OT4    OT4;  //!< internal shared member
    typedef typename I::OT5    OT5;  //!< internal shared member
    typedef typename I::OT6    OT6;  //!< internal shared member
    typedef typename I::OT7    OT7;  //!< internal shared member
    typedef typename I::OT8    OT8;  //!< internal shared member
    typedef typename I::OT9    OT9;  //!< internal shared member
    typedef typename I::OT10    OT10;  //!< internal shared member
    typedef typename I::OT11    OT11;  //!< internal shared member
    typedef typename I::OT12    OT12;  //!< internal shared member

    typedef ConstraintSet12<OT1, OT2, OT3, OT4, OT5, OT6, OT7, OT8, OT9, OT10, OT11, OT12> ConstraintSetType;  //!< internal shorthand

  /** Adds another matcher.
    * @param matcher the matcher object
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& addMatcher( const MatcherHolder<I> &matcher ) = 0;

  /** Indicate a matcher for 12 arguments.
    * @ingroup grp_chainer
    * @param p1 pointer to the constraint for method parameter 1
    * @param p2 pointer to the constraint for method parameter 2
    * @param p3 pointer to the constraint for method parameter 3
    * @param p4 pointer to the constraint for method parameter 4
    * @param p5 pointer to the constraint for method parameter 5
    * @param p6 pointer to the constraint for method parameter 6
    * @param p7 pointer to the constraint for method parameter 7
    * @param p8 pointer to the constraint for method parameter 8
    * @param p9 pointer to the constraint for method parameter 9
    * @param p10 pointer to the constraint for method parameter 10
    * @param p11 pointer to the constraint for method parameter 11
    * @param p12 pointer to the constraint for method parameter 12
    * @return the builder object
    */
    MatchBuilder<R, I>& with(  const ConstraintHolder<OT1> &p1 = any() 
                             , const ConstraintHolder<OT2> &p2 = any() 
                             , const ConstraintHolder<OT3> &p3 = any() 
                             , const ConstraintHolder<OT4> &p4 = any() 
                             , const ConstraintHolder<OT5> &p5 = any() 
                             , const ConstraintHolder<OT6> &p6 = any() 
                             , const ConstraintHolder<OT7> &p7 = any() 
                             , const ConstraintHolder<OT8> &p8 = any() 
                             , const ConstraintHolder<OT9> &p9 = any() 
                             , const ConstraintHolder<OT10> &p10 = any() 
                             , const ConstraintHolder<OT11> &p11 = any() 
                             , const ConstraintHolder<OT12> &p12 = any()  )
    {
      return with_cs( ConstraintSetType( p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12 ) );
    }

  protected:

  /** Indicate a matcher for a set of arguments.
    * @param constraintset   constraint set
    * @return the builder object
    */
    virtual MatchBuilder<R, I>& with_cs( const ConstraintSetType &constraintset ) = 0;
};



MOCKPP_NS_END


#endif // MOCKPP_ARGUMENTSMATCHBUILDER_N_H

