/** @file
    @internal NOT INTENDED FOR PUBLIC INCLUSION
    @brief    Generated with gen_constraintset_N.pl.

  $Id: ConstraintSetN.h,v 1.7 2005/10/19 20:53:09 ewald-arnold Exp $

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

#ifndef MOCKPP_ConstraintSet_N_H
#define MOCKPP_ConstraintSet_N_H

//#include <mockpp/builder/ConstraintSet.h>


MOCKPP_NS_START


/** A set of constraints for a method with 1 arguments
  * @internal
  */
template <typename P1>
class ConstraintSet1
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    */
    ConstraintSet1(  const ConstraintHolder<P1> &in_constraint1)
        : constraint1( in_constraint1 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet1()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1" );
      fmt << constraint1->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
};


/** A set of constraints for a method with 2 arguments
  * @internal
  */
template <typename P1, typename P2>
class ConstraintSet2
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    */
    ConstraintSet2(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet2()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2" );
      fmt << constraint1->toString()
          << constraint2->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
};


/** A set of constraints for a method with 3 arguments
  * @internal
  */
template <typename P1, typename P2, typename P3>
class ConstraintSet3
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand
    typedef P3 ValueType3; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    * @param  in_constraint3  constraint 3
    */
    ConstraintSet3(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2
                   , const ConstraintHolder<P3> &in_constraint3)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
        , constraint3( in_constraint3 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet3()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() )
             && constraint3->eval( invocation.getParameter3() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2, %3" );
      fmt << constraint1->toString()
          << constraint2->toString()
          << constraint3->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
    const typename Constraint<P3>::AP constraint3;
};


/** A set of constraints for a method with 4 arguments
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4>
class ConstraintSet4
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand
    typedef P3 ValueType3; //!< internal shorthand
    typedef P4 ValueType4; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    * @param  in_constraint3  constraint 3
    * @param  in_constraint4  constraint 4
    */
    ConstraintSet4(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2
                   , const ConstraintHolder<P3> &in_constraint3
                   , const ConstraintHolder<P4> &in_constraint4)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
        , constraint3( in_constraint3 )
        , constraint4( in_constraint4 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet4()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() )
             && constraint3->eval( invocation.getParameter3() )
             && constraint4->eval( invocation.getParameter4() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2, %3, %4" );
      fmt << constraint1->toString()
          << constraint2->toString()
          << constraint3->toString()
          << constraint4->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
    const typename Constraint<P3>::AP constraint3;
    const typename Constraint<P4>::AP constraint4;
};


/** A set of constraints for a method with 5 arguments
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5>
class ConstraintSet5
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand
    typedef P3 ValueType3; //!< internal shorthand
    typedef P4 ValueType4; //!< internal shorthand
    typedef P5 ValueType5; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    * @param  in_constraint3  constraint 3
    * @param  in_constraint4  constraint 4
    * @param  in_constraint5  constraint 5
    */
    ConstraintSet5(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2
                   , const ConstraintHolder<P3> &in_constraint3
                   , const ConstraintHolder<P4> &in_constraint4
                   , const ConstraintHolder<P5> &in_constraint5)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
        , constraint3( in_constraint3 )
        , constraint4( in_constraint4 )
        , constraint5( in_constraint5 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet5()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() )
             && constraint3->eval( invocation.getParameter3() )
             && constraint4->eval( invocation.getParameter4() )
             && constraint5->eval( invocation.getParameter5() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2, %3, %4, %5" );
      fmt << constraint1->toString()
          << constraint2->toString()
          << constraint3->toString()
          << constraint4->toString()
          << constraint5->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
    const typename Constraint<P3>::AP constraint3;
    const typename Constraint<P4>::AP constraint4;
    const typename Constraint<P5>::AP constraint5;
};


/** A set of constraints for a method with 6 arguments
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
class ConstraintSet6
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand
    typedef P3 ValueType3; //!< internal shorthand
    typedef P4 ValueType4; //!< internal shorthand
    typedef P5 ValueType5; //!< internal shorthand
    typedef P6 ValueType6; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    * @param  in_constraint3  constraint 3
    * @param  in_constraint4  constraint 4
    * @param  in_constraint5  constraint 5
    * @param  in_constraint6  constraint 6
    */
    ConstraintSet6(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2
                   , const ConstraintHolder<P3> &in_constraint3
                   , const ConstraintHolder<P4> &in_constraint4
                   , const ConstraintHolder<P5> &in_constraint5
                   , const ConstraintHolder<P6> &in_constraint6)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
        , constraint3( in_constraint3 )
        , constraint4( in_constraint4 )
        , constraint5( in_constraint5 )
        , constraint6( in_constraint6 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet6()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() )
             && constraint3->eval( invocation.getParameter3() )
             && constraint4->eval( invocation.getParameter4() )
             && constraint5->eval( invocation.getParameter5() )
             && constraint6->eval( invocation.getParameter6() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2, %3, %4, %5, %6" );
      fmt << constraint1->toString()
          << constraint2->toString()
          << constraint3->toString()
          << constraint4->toString()
          << constraint5->toString()
          << constraint6->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
    const typename Constraint<P3>::AP constraint3;
    const typename Constraint<P4>::AP constraint4;
    const typename Constraint<P5>::AP constraint5;
    const typename Constraint<P6>::AP constraint6;
};


/** A set of constraints for a method with 7 arguments
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
class ConstraintSet7
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand
    typedef P3 ValueType3; //!< internal shorthand
    typedef P4 ValueType4; //!< internal shorthand
    typedef P5 ValueType5; //!< internal shorthand
    typedef P6 ValueType6; //!< internal shorthand
    typedef P7 ValueType7; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    * @param  in_constraint3  constraint 3
    * @param  in_constraint4  constraint 4
    * @param  in_constraint5  constraint 5
    * @param  in_constraint6  constraint 6
    * @param  in_constraint7  constraint 7
    */
    ConstraintSet7(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2
                   , const ConstraintHolder<P3> &in_constraint3
                   , const ConstraintHolder<P4> &in_constraint4
                   , const ConstraintHolder<P5> &in_constraint5
                   , const ConstraintHolder<P6> &in_constraint6
                   , const ConstraintHolder<P7> &in_constraint7)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
        , constraint3( in_constraint3 )
        , constraint4( in_constraint4 )
        , constraint5( in_constraint5 )
        , constraint6( in_constraint6 )
        , constraint7( in_constraint7 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet7()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() )
             && constraint3->eval( invocation.getParameter3() )
             && constraint4->eval( invocation.getParameter4() )
             && constraint5->eval( invocation.getParameter5() )
             && constraint6->eval( invocation.getParameter6() )
             && constraint7->eval( invocation.getParameter7() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2, %3, %4, %5, %6, %7" );
      fmt << constraint1->toString()
          << constraint2->toString()
          << constraint3->toString()
          << constraint4->toString()
          << constraint5->toString()
          << constraint6->toString()
          << constraint7->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
    const typename Constraint<P3>::AP constraint3;
    const typename Constraint<P4>::AP constraint4;
    const typename Constraint<P5>::AP constraint5;
    const typename Constraint<P6>::AP constraint6;
    const typename Constraint<P7>::AP constraint7;
};


/** A set of constraints for a method with 8 arguments
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8>
class ConstraintSet8
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand
    typedef P3 ValueType3; //!< internal shorthand
    typedef P4 ValueType4; //!< internal shorthand
    typedef P5 ValueType5; //!< internal shorthand
    typedef P6 ValueType6; //!< internal shorthand
    typedef P7 ValueType7; //!< internal shorthand
    typedef P8 ValueType8; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    * @param  in_constraint3  constraint 3
    * @param  in_constraint4  constraint 4
    * @param  in_constraint5  constraint 5
    * @param  in_constraint6  constraint 6
    * @param  in_constraint7  constraint 7
    * @param  in_constraint8  constraint 8
    */
    ConstraintSet8(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2
                   , const ConstraintHolder<P3> &in_constraint3
                   , const ConstraintHolder<P4> &in_constraint4
                   , const ConstraintHolder<P5> &in_constraint5
                   , const ConstraintHolder<P6> &in_constraint6
                   , const ConstraintHolder<P7> &in_constraint7
                   , const ConstraintHolder<P8> &in_constraint8)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
        , constraint3( in_constraint3 )
        , constraint4( in_constraint4 )
        , constraint5( in_constraint5 )
        , constraint6( in_constraint6 )
        , constraint7( in_constraint7 )
        , constraint8( in_constraint8 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet8()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() )
             && constraint3->eval( invocation.getParameter3() )
             && constraint4->eval( invocation.getParameter4() )
             && constraint5->eval( invocation.getParameter5() )
             && constraint6->eval( invocation.getParameter6() )
             && constraint7->eval( invocation.getParameter7() )
             && constraint8->eval( invocation.getParameter8() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2, %3, %4, %5, %6, %7, %8" );
      fmt << constraint1->toString()
          << constraint2->toString()
          << constraint3->toString()
          << constraint4->toString()
          << constraint5->toString()
          << constraint6->toString()
          << constraint7->toString()
          << constraint8->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
    const typename Constraint<P3>::AP constraint3;
    const typename Constraint<P4>::AP constraint4;
    const typename Constraint<P5>::AP constraint5;
    const typename Constraint<P6>::AP constraint6;
    const typename Constraint<P7>::AP constraint7;
    const typename Constraint<P8>::AP constraint8;
};


/** A set of constraints for a method with 9 arguments
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9>
class ConstraintSet9
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand
    typedef P3 ValueType3; //!< internal shorthand
    typedef P4 ValueType4; //!< internal shorthand
    typedef P5 ValueType5; //!< internal shorthand
    typedef P6 ValueType6; //!< internal shorthand
    typedef P7 ValueType7; //!< internal shorthand
    typedef P8 ValueType8; //!< internal shorthand
    typedef P9 ValueType9; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    * @param  in_constraint3  constraint 3
    * @param  in_constraint4  constraint 4
    * @param  in_constraint5  constraint 5
    * @param  in_constraint6  constraint 6
    * @param  in_constraint7  constraint 7
    * @param  in_constraint8  constraint 8
    * @param  in_constraint9  constraint 9
    */
    ConstraintSet9(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2
                   , const ConstraintHolder<P3> &in_constraint3
                   , const ConstraintHolder<P4> &in_constraint4
                   , const ConstraintHolder<P5> &in_constraint5
                   , const ConstraintHolder<P6> &in_constraint6
                   , const ConstraintHolder<P7> &in_constraint7
                   , const ConstraintHolder<P8> &in_constraint8
                   , const ConstraintHolder<P9> &in_constraint9)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
        , constraint3( in_constraint3 )
        , constraint4( in_constraint4 )
        , constraint5( in_constraint5 )
        , constraint6( in_constraint6 )
        , constraint7( in_constraint7 )
        , constraint8( in_constraint8 )
        , constraint9( in_constraint9 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet9()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() )
             && constraint3->eval( invocation.getParameter3() )
             && constraint4->eval( invocation.getParameter4() )
             && constraint5->eval( invocation.getParameter5() )
             && constraint6->eval( invocation.getParameter6() )
             && constraint7->eval( invocation.getParameter7() )
             && constraint8->eval( invocation.getParameter8() )
             && constraint9->eval( invocation.getParameter9() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2, %3, %4, %5, %6, %7, %8, %9" );
      fmt << constraint1->toString()
          << constraint2->toString()
          << constraint3->toString()
          << constraint4->toString()
          << constraint5->toString()
          << constraint6->toString()
          << constraint7->toString()
          << constraint8->toString()
          << constraint9->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
    const typename Constraint<P3>::AP constraint3;
    const typename Constraint<P4>::AP constraint4;
    const typename Constraint<P5>::AP constraint5;
    const typename Constraint<P6>::AP constraint6;
    const typename Constraint<P7>::AP constraint7;
    const typename Constraint<P8>::AP constraint8;
    const typename Constraint<P9>::AP constraint9;
};


/** A set of constraints for a method with 10 arguments
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10>
class ConstraintSet10
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand
    typedef P3 ValueType3; //!< internal shorthand
    typedef P4 ValueType4; //!< internal shorthand
    typedef P5 ValueType5; //!< internal shorthand
    typedef P6 ValueType6; //!< internal shorthand
    typedef P7 ValueType7; //!< internal shorthand
    typedef P8 ValueType8; //!< internal shorthand
    typedef P9 ValueType9; //!< internal shorthand
    typedef P10 ValueType10; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    * @param  in_constraint3  constraint 3
    * @param  in_constraint4  constraint 4
    * @param  in_constraint5  constraint 5
    * @param  in_constraint6  constraint 6
    * @param  in_constraint7  constraint 7
    * @param  in_constraint8  constraint 8
    * @param  in_constraint9  constraint 9
    * @param  in_constraint10  constraint 10
    */
    ConstraintSet10(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2
                   , const ConstraintHolder<P3> &in_constraint3
                   , const ConstraintHolder<P4> &in_constraint4
                   , const ConstraintHolder<P5> &in_constraint5
                   , const ConstraintHolder<P6> &in_constraint6
                   , const ConstraintHolder<P7> &in_constraint7
                   , const ConstraintHolder<P8> &in_constraint8
                   , const ConstraintHolder<P9> &in_constraint9
                   , const ConstraintHolder<P10> &in_constraint10)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
        , constraint3( in_constraint3 )
        , constraint4( in_constraint4 )
        , constraint5( in_constraint5 )
        , constraint6( in_constraint6 )
        , constraint7( in_constraint7 )
        , constraint8( in_constraint8 )
        , constraint9( in_constraint9 )
        , constraint10( in_constraint10 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet10()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() )
             && constraint3->eval( invocation.getParameter3() )
             && constraint4->eval( invocation.getParameter4() )
             && constraint5->eval( invocation.getParameter5() )
             && constraint6->eval( invocation.getParameter6() )
             && constraint7->eval( invocation.getParameter7() )
             && constraint8->eval( invocation.getParameter8() )
             && constraint9->eval( invocation.getParameter9() )
             && constraint10->eval( invocation.getParameter10() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2, %3, %4, %5, %6, %7, %8, %9, %10" );
      fmt << constraint1->toString()
          << constraint2->toString()
          << constraint3->toString()
          << constraint4->toString()
          << constraint5->toString()
          << constraint6->toString()
          << constraint7->toString()
          << constraint8->toString()
          << constraint9->toString()
          << constraint10->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
    const typename Constraint<P3>::AP constraint3;
    const typename Constraint<P4>::AP constraint4;
    const typename Constraint<P5>::AP constraint5;
    const typename Constraint<P6>::AP constraint6;
    const typename Constraint<P7>::AP constraint7;
    const typename Constraint<P8>::AP constraint8;
    const typename Constraint<P9>::AP constraint9;
    const typename Constraint<P10>::AP constraint10;
};


/** A set of constraints for a method with 11 arguments
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
class ConstraintSet11
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand
    typedef P3 ValueType3; //!< internal shorthand
    typedef P4 ValueType4; //!< internal shorthand
    typedef P5 ValueType5; //!< internal shorthand
    typedef P6 ValueType6; //!< internal shorthand
    typedef P7 ValueType7; //!< internal shorthand
    typedef P8 ValueType8; //!< internal shorthand
    typedef P9 ValueType9; //!< internal shorthand
    typedef P10 ValueType10; //!< internal shorthand
    typedef P11 ValueType11; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    * @param  in_constraint3  constraint 3
    * @param  in_constraint4  constraint 4
    * @param  in_constraint5  constraint 5
    * @param  in_constraint6  constraint 6
    * @param  in_constraint7  constraint 7
    * @param  in_constraint8  constraint 8
    * @param  in_constraint9  constraint 9
    * @param  in_constraint10  constraint 10
    * @param  in_constraint11  constraint 11
    */
    ConstraintSet11(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2
                   , const ConstraintHolder<P3> &in_constraint3
                   , const ConstraintHolder<P4> &in_constraint4
                   , const ConstraintHolder<P5> &in_constraint5
                   , const ConstraintHolder<P6> &in_constraint6
                   , const ConstraintHolder<P7> &in_constraint7
                   , const ConstraintHolder<P8> &in_constraint8
                   , const ConstraintHolder<P9> &in_constraint9
                   , const ConstraintHolder<P10> &in_constraint10
                   , const ConstraintHolder<P11> &in_constraint11)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
        , constraint3( in_constraint3 )
        , constraint4( in_constraint4 )
        , constraint5( in_constraint5 )
        , constraint6( in_constraint6 )
        , constraint7( in_constraint7 )
        , constraint8( in_constraint8 )
        , constraint9( in_constraint9 )
        , constraint10( in_constraint10 )
        , constraint11( in_constraint11 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet11()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() )
             && constraint3->eval( invocation.getParameter3() )
             && constraint4->eval( invocation.getParameter4() )
             && constraint5->eval( invocation.getParameter5() )
             && constraint6->eval( invocation.getParameter6() )
             && constraint7->eval( invocation.getParameter7() )
             && constraint8->eval( invocation.getParameter8() )
             && constraint9->eval( invocation.getParameter9() )
             && constraint10->eval( invocation.getParameter10() )
             && constraint11->eval( invocation.getParameter11() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2, %3, %4, %5, %6, %7, %8, %9, %10, %11" );
      fmt << constraint1->toString()
          << constraint2->toString()
          << constraint3->toString()
          << constraint4->toString()
          << constraint5->toString()
          << constraint6->toString()
          << constraint7->toString()
          << constraint8->toString()
          << constraint9->toString()
          << constraint10->toString()
          << constraint11->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
    const typename Constraint<P3>::AP constraint3;
    const typename Constraint<P4>::AP constraint4;
    const typename Constraint<P5>::AP constraint5;
    const typename Constraint<P6>::AP constraint6;
    const typename Constraint<P7>::AP constraint7;
    const typename Constraint<P8>::AP constraint8;
    const typename Constraint<P9>::AP constraint9;
    const typename Constraint<P10>::AP constraint10;
    const typename Constraint<P11>::AP constraint11;
};


/** A set of constraints for a method with 12 arguments
  * @internal
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12>
class ConstraintSet12
{
  public:
  
    typedef P1 ValueType1; //!< internal shorthand
    typedef P2 ValueType2; //!< internal shorthand
    typedef P3 ValueType3; //!< internal shorthand
    typedef P4 ValueType4; //!< internal shorthand
    typedef P5 ValueType5; //!< internal shorthand
    typedef P6 ValueType6; //!< internal shorthand
    typedef P7 ValueType7; //!< internal shorthand
    typedef P8 ValueType8; //!< internal shorthand
    typedef P9 ValueType9; //!< internal shorthand
    typedef P10 ValueType10; //!< internal shorthand
    typedef P11 ValueType11; //!< internal shorthand
    typedef P12 ValueType12; //!< internal shorthand

  /** Constructs the object
    * @param  in_constraint1  constraint 1
    * @param  in_constraint2  constraint 2
    * @param  in_constraint3  constraint 3
    * @param  in_constraint4  constraint 4
    * @param  in_constraint5  constraint 5
    * @param  in_constraint6  constraint 6
    * @param  in_constraint7  constraint 7
    * @param  in_constraint8  constraint 8
    * @param  in_constraint9  constraint 9
    * @param  in_constraint10  constraint 10
    * @param  in_constraint11  constraint 11
    * @param  in_constraint12  constraint 12
    */
    ConstraintSet12(  const ConstraintHolder<P1> &in_constraint1
                   , const ConstraintHolder<P2> &in_constraint2
                   , const ConstraintHolder<P3> &in_constraint3
                   , const ConstraintHolder<P4> &in_constraint4
                   , const ConstraintHolder<P5> &in_constraint5
                   , const ConstraintHolder<P6> &in_constraint6
                   , const ConstraintHolder<P7> &in_constraint7
                   , const ConstraintHolder<P8> &in_constraint8
                   , const ConstraintHolder<P9> &in_constraint9
                   , const ConstraintHolder<P10> &in_constraint10
                   , const ConstraintHolder<P11> &in_constraint11
                   , const ConstraintHolder<P12> &in_constraint12)
        : constraint1( in_constraint1 )
        , constraint2( in_constraint2 )
        , constraint3( in_constraint3 )
        , constraint4( in_constraint4 )
        , constraint5( in_constraint5 )
        , constraint6( in_constraint6 )
        , constraint7( in_constraint7 )
        , constraint8( in_constraint8 )
        , constraint9( in_constraint9 )
        , constraint10( in_constraint10 )
        , constraint11( in_constraint11 )
        , constraint12( in_constraint12 )
    {}

  /** Destroys the object
    */
    virtual ~ConstraintSet12()
    {}

  /** Tests if the constraint set matches the invocation
    * @param   invocation   the invocation data
    * @return true: the set matches
    */
    template <typename I> // Invocation
    bool matches( const I &invocation )
    {
      return    constraint1->eval( invocation.getParameter1() )
             && constraint2->eval( invocation.getParameter2() )
             && constraint3->eval( invocation.getParameter3() )
             && constraint4->eval( invocation.getParameter4() )
             && constraint5->eval( invocation.getParameter5() )
             && constraint6->eval( invocation.getParameter6() )
             && constraint7->eval( invocation.getParameter7() )
             && constraint8->eval( invocation.getParameter8() )
             && constraint9->eval( invocation.getParameter9() )
             && constraint10->eval( invocation.getParameter10() )
             && constraint11->eval( invocation.getParameter11() )
             && constraint12->eval( invocation.getParameter12() );
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
      String fmt = MOCKPP_PCHAR( "%1, %2, %3, %4, %5, %6, %7, %8, %9, %10, %11, %12" );
      fmt << constraint1->toString()
          << constraint2->toString()
          << constraint3->toString()
          << constraint4->toString()
          << constraint5->toString()
          << constraint6->toString()
          << constraint7->toString()
          << constraint8->toString()
          << constraint9->toString()
          << constraint10->toString()
          << constraint11->toString()
          << constraint12->toString();
      buffer += fmt;
      return buffer;
    }

  private:

    const typename Constraint<P1>::AP constraint1;
    const typename Constraint<P2>::AP constraint2;
    const typename Constraint<P3>::AP constraint3;
    const typename Constraint<P4>::AP constraint4;
    const typename Constraint<P5>::AP constraint5;
    const typename Constraint<P6>::AP constraint6;
    const typename Constraint<P7>::AP constraint7;
    const typename Constraint<P8>::AP constraint8;
    const typename Constraint<P9>::AP constraint9;
    const typename Constraint<P10>::AP constraint10;
    const typename Constraint<P11>::AP constraint11;
    const typename Constraint<P12>::AP constraint12;
};


MOCKPP_NS_END


#endif // MOCKPP_ConstraintSet_N_H

