/** @file
    @internal NOT INTENDED FOR PUBLIC INCLUSION
    @brief    Generated with gen_responsevector_N.pl.

  $Id: ResponseVector9.h,v 1.7 2005/10/19 20:53:09 ewald-arnold Exp $

 ***************************************************************************/

/**************************************************************************

   begin                : Sat Feb 15 2003
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

#ifndef MOCKPP_ResponseVector9_H
#define MOCKPP_ResponseVector9_H

#include <mockpp/constraint/ConstraintHolder.h>
#include <mockpp/constraint/IsEqual.h>
#include <mockpp/visiting/VisitableMockObject_template.h>


MOCKPP_NS_START


/** Class returning a throwable depending on the parameters
  * passed to a method.
  */
template <typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9>
class ResponseThrowableVector9 : public ResponseVectorBase
{
  public:

  /**
    * Construct a new empty vector
    * @param aName Label used to identify vector
    * @param parent  parent verifiable
    */
    ResponseThrowableVector9(const String &aName, VerifiableList *parent)
      : ResponseVectorBase(aName, parent)
    {}

  /** Destroys the vector
    */
    virtual ~ResponseThrowableVector9()
    {
      reset();
    }

  /** Adds a throwable.
    * @param t      the throwable
    * @param p1     the parameter 1 upon which to return
    * @param p2     the parameter 2 upon which to return
    * @param p3     the parameter 3 upon which to return
    * @param p4     the parameter 4 upon which to return
    * @param p5     the parameter 5 upon which to return
    * @param p6     the parameter 6 upon which to return
    * @param p7     the parameter 7 upon which to return
    * @param p8     the parameter 8 upon which to return
    * @param p9     the parameter 9 upon which to return
    * @param count  the number of times the object may be used
    */
    void add(Throwable *throwable, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9, unsigned count)
    {
      const ConstraintHolder<P1> h1 = new IsEqual<P1>(p1);
      const ConstraintHolder<P2> h2 = new IsEqual<P2>(p2);
      const ConstraintHolder<P3> h3 = new IsEqual<P3>(p3);
      const ConstraintHolder<P4> h4 = new IsEqual<P4>(p4);
      const ConstraintHolder<P5> h5 = new IsEqual<P5>(p5);
      const ConstraintHolder<P6> h6 = new IsEqual<P6>(p6);
      const ConstraintHolder<P7> h7 = new IsEqual<P7>(p7);
      const ConstraintHolder<P8> h8 = new IsEqual<P8>(p8);
      const ConstraintHolder<P9> h9 = new IsEqual<P9>(p9);
      add(throwable, h1, h2, h3, h4, h5, h6, h7, h8, h9, count);
    }

  /** Adds a throwable.
    * @param throwable      the throwable
    * @param p1     the parameter 1 upon which to return
    * @param p2     the parameter 2 upon which to return
    * @param p3     the parameter 3 upon which to return
    * @param p4     the parameter 4 upon which to return
    * @param p5     the parameter 5 upon which to return
    * @param p6     the parameter 6 upon which to return
    * @param p7     the parameter 7 upon which to return
    * @param p8     the parameter 8 upon which to return
    * @param p9     the parameter 9 upon which to return
    * @param count  the number of times the object may be used
    */
    void add(Throwable *throwable,
             const ConstraintHolder<P1> &p1,
             const ConstraintHolder<P2> &p2,
             const ConstraintHolder<P3> &p3,
             const ConstraintHolder<P4> &p4,
             const ConstraintHolder<P5> &p5,
             const ConstraintHolder<P6> &p6,
             const ConstraintHolder<P7> &p7,
             const ConstraintHolder<P8> &p8,
             const ConstraintHolder<P9> &p9,
             unsigned count)
    {
      counter.push_back(count);
      tvec.push_back(throwable);
      typename MOCKPP_NS::Constraint<P1>::AP cons1 (p1);
      typename MOCKPP_NS::Constraint<P2>::AP cons2 (p2);
      typename MOCKPP_NS::Constraint<P3>::AP cons3 (p3);
      typename MOCKPP_NS::Constraint<P4>::AP cons4 (p4);
      typename MOCKPP_NS::Constraint<P5>::AP cons5 (p5);
      typename MOCKPP_NS::Constraint<P6>::AP cons6 (p6);
      typename MOCKPP_NS::Constraint<P7>::AP cons7 (p7);
      typename MOCKPP_NS::Constraint<P8>::AP cons8 (p8);
      typename MOCKPP_NS::Constraint<P9>::AP cons9 (p9);
      t1vec.push_back(cons1.release());
      t2vec.push_back(cons2.release());
      t3vec.push_back(cons3.release());
      t4vec.push_back(cons4.release());
      t5vec.push_back(cons5.release());
      t6vec.push_back(cons6.release());
      t7vec.push_back(cons7.release());
      t8vec.push_back(cons8.release());
      t9vec.push_back(cons9.release());
    }

  /** Removes all the objects from the list.
    */
    void reset()
    {
      counter.clear();
      tvec.reset();

      for (unsigned i1 = 0; i1 < t1vec.size(); ++i1)
        delete t1vec[i1];
      t1vec.clear();

      for (unsigned i2 = 0; i2 < t2vec.size(); ++i2)
        delete t2vec[i2];
      t2vec.clear();

      for (unsigned i3 = 0; i3 < t3vec.size(); ++i3)
        delete t3vec[i3];
      t3vec.clear();

      for (unsigned i4 = 0; i4 < t4vec.size(); ++i4)
        delete t4vec[i4];
      t4vec.clear();

      for (unsigned i5 = 0; i5 < t5vec.size(); ++i5)
        delete t5vec[i5];
      t5vec.clear();

      for (unsigned i6 = 0; i6 < t6vec.size(); ++i6)
        delete t6vec[i6];
      t6vec.clear();

      for (unsigned i7 = 0; i7 < t7vec.size(); ++i7)
        delete t7vec[i7];
      t7vec.clear();

      for (unsigned i8 = 0; i8 < t8vec.size(); ++i8)
        delete t8vec[i8];
      t8vec.clear();

      for (unsigned i9 = 0; i9 < t9vec.size(); ++i9)
        delete t9vec[i9];
      t9vec.clear();
    }

  /** Finds a throwable for a set of parameters.
    * @param t      the throwable
    * @param p1     the parameter 1 upon which to return
    * @param p2     the parameter 2 upon which to return
    * @param p3     the parameter 3 upon which to return
    * @param p4     the parameter 4 upon which to return
    * @param p5     the parameter 5 upon which to return
    * @param p6     the parameter 6 upon which to return
    * @param p7     the parameter 7 upon which to return
    * @param p8     the parameter 8 upon which to return
    * @param p9     the parameter 9 upon which to return
    * @return true: throwable found for parameters
    */
    bool find(Throwable * &throwable, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9)
    {
       for (unsigned i = 0; i < t1vec.size(); ++i)
         if (   counter[i] > 0
             && t1vec[i]->eval(p1)
             && t2vec[i]->eval(p2)
             && t3vec[i]->eval(p3)
             && t4vec[i]->eval(p4)
             && t5vec[i]->eval(p5)
             && t6vec[i]->eval(p6)
             && t7vec[i]->eval(p7)
             && t8vec[i]->eval(p8)
             && t9vec[i]->eval(p9)
            )
         {
           if (tvec.at(i) == 0)
             return false;

           if (counter[i] != MOCKPP_UNLIMITED)
             --counter[i];

           throwable = tvec.at(i);
           return true;
         }
       return false;
    }

  protected:

    MOCKPP_STL::vector<Constraint<P1>*>       t1vec; //!< shared internal member
    MOCKPP_STL::vector<Constraint<P2>*>       t2vec; //!< shared internal member
    MOCKPP_STL::vector<Constraint<P3>*>       t3vec; //!< shared internal member
    MOCKPP_STL::vector<Constraint<P4>*>       t4vec; //!< shared internal member
    MOCKPP_STL::vector<Constraint<P5>*>       t5vec; //!< shared internal member
    MOCKPP_STL::vector<Constraint<P6>*>       t6vec; //!< shared internal member
    MOCKPP_STL::vector<Constraint<P7>*>       t7vec; //!< shared internal member
    MOCKPP_STL::vector<Constraint<P8>*>       t8vec; //!< shared internal member
    MOCKPP_STL::vector<Constraint<P9>*>       t9vec; //!< shared internal member
};


/** Class returning a throwable depending on the parameters
  * passed to a method.
  */
template <typename R, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9>
class ResponseVector9  : public ResponseThrowableVector9<P1, P2, P3, P4, P5, P6, P7, P8, P9>
{
  public:

  /** Construct a new empty vector
    * @param aName Label used to identify vector
    * @param parent  parent verifiable
    */
    ResponseVector9(const String &aName, VerifiableList *parent)
      : ResponseThrowableVector9<P1, P2, P3, P4, P5, P6, P7, P8, P9>(aName, parent)
    {}

  /** Adds a throwable.
    * @param t      the throwable
    * @param p1     the parameter 1 upon which to return
    * @param p2     the parameter 2 upon which to return
    * @param p3     the parameter 3 upon which to return
    * @param p4     the parameter 4 upon which to return
    * @param p5     the parameter 5 upon which to return
    * @param p6     the parameter 6 upon which to return
    * @param p7     the parameter 7 upon which to return
    * @param p8     the parameter 8 upon which to return
    * @param p9     the parameter 9 upon which to return
    * @param count  the number of times the object may be used
    */
    void add(Throwable *throwable, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9, unsigned count)
    {
      MOCKPP_ASSERT_TRUE(throwable != 0);
      ResponseThrowableVector9<P1, P2, P3, P4, P5, P6, P7, P8, P9>::add(throwable, p1, p2, p3, p4, p5, p6, p7, p8, p9, count);
      R r;
      rvec.push_back(r);
    }

  /** Adds a throwable.
    * @param t      the throwable
    * @param p1     the parameter 1 upon which to return
    * @param p2     the parameter 2 upon which to return
    * @param p3     the parameter 3 upon which to return
    * @param p4     the parameter 4 upon which to return
    * @param p5     the parameter 5 upon which to return
    * @param p6     the parameter 6 upon which to return
    * @param p7     the parameter 7 upon which to return
    * @param p8     the parameter 8 upon which to return
    * @param p9     the parameter 9 upon which to return
    * @param count  the number of times the object may be used
    */
    void add(Throwable *throwable,
             const ConstraintHolder<P1> &p1,
             const ConstraintHolder<P2> &p2,
             const ConstraintHolder<P3> &p3,
             const ConstraintHolder<P4> &p4,
             const ConstraintHolder<P5> &p5,
             const ConstraintHolder<P6> &p6,
             const ConstraintHolder<P7> &p7,
             const ConstraintHolder<P8> &p8,
             const ConstraintHolder<P9> &p9,
             unsigned count)
    {
      MOCKPP_ASSERT_TRUE(throwable != 0);
      ResponseThrowableVector9<P1, P2, P3, P4, P5, P6, P7, P8, P9>::add (throwable, p1, p2, p3, p4, p5, p6, p7, p8, p9, count);
      R r;
      rvec.push_back(r);
    }

  /** Adds a return value.
    * @param r      the return value
    * @param p1     the parameter 1 upon which to return
    * @param p2     the parameter 2 upon which to return
    * @param p3     the parameter 3 upon which to return
    * @param p4     the parameter 4 upon which to return
    * @param p5     the parameter 5 upon which to return
    * @param p6     the parameter 6 upon which to return
    * @param p7     the parameter 7 upon which to return
    * @param p8     the parameter 8 upon which to return
    * @param p9     the parameter 9 upon which to return
    * @param count  the number of times the object may be used
    */
    void add(const R &r, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9, unsigned count)
    {
      ResponseThrowableVector9<P1, P2, P3, P4, P5, P6, P7, P8, P9>::add((Throwable*)0, p1, p2, p3, p4, p5, p6, p7, p8, p9, count);
      rvec.push_back(r);
    }

  /** Adds a return value.
    * @param r      the return value
    * @param p1     the parameter 1 upon which to return
    * @param p2     the parameter 2 upon which to return
    * @param p3     the parameter 3 upon which to return
    * @param p4     the parameter 4 upon which to return
    * @param p5     the parameter 5 upon which to return
    * @param p6     the parameter 6 upon which to return
    * @param p7     the parameter 7 upon which to return
    * @param p8     the parameter 8 upon which to return
    * @param p9     the parameter 9 upon which to return
    * @param count  the number of times the object may be used
    */
    void add(const R &r,
             const ConstraintHolder<P1> &p1,
             const ConstraintHolder<P2> &p2,
             const ConstraintHolder<P3> &p3,
             const ConstraintHolder<P4> &p4,
             const ConstraintHolder<P5> &p5,
             const ConstraintHolder<P6> &p6,
             const ConstraintHolder<P7> &p7,
             const ConstraintHolder<P8> &p8,
             const ConstraintHolder<P9> &p9,
             unsigned count)
    {
      ResponseThrowableVector9<P1, P2, P3, P4, P5, P6, P7, P8, P9>::add((Throwable*)0, p1, p2, p3, p4, p5, p6, p7, p8, p9, count);
      rvec.push_back(r);
    }

  /** Removes all the objects from the list.
    */
    void reset()
    {
      ResponseThrowableVector9<P1, P2, P3, P4, P5, P6, P7, P8, P9>::reset();
      rvec.clear();
    }

#if defined(__BORLANDC__) || (__GNUC__ < 3)   // ==> BCB5.5.1 ?? F1004 Internal compiler error at 0x12548c1 with base 0x1200000
    bool find(Throwable * &throwable, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9)
    {
      return ResponseThrowableVector9<P1, P2, P3, P4, P5, P6, P7, P8, P9>::find(throwable, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    }
#else
    using ResponseThrowableVector9<P1, P2, P3, P4, P5, P6, P7, P8, P9>::find;
#endif

  /** Finds a return value for a set of parameters.
    * @param r      the value
    * @param p1     the parameter 1 upon which to return
    * @param p2     the parameter 2 upon which to return
    * @param p3     the parameter 3 upon which to return
    * @param p4     the parameter 4 upon which to return
    * @param p5     the parameter 5 upon which to return
    * @param p6     the parameter 6 upon which to return
    * @param p7     the parameter 7 upon which to return
    * @param p8     the parameter 8 upon which to return
    * @param p9     the parameter 9 upon which to return
    * @return true: return value found for parameters
    */
    bool find(R &r, const P1 &p1, const P2 &p2, const P3 &p3, const P4 &p4, const P5 &p5, const P6 &p6, const P7 &p7, const P8 &p8, const P9 &p9)
    {
       for (unsigned i = 0; i < this->t1vec.size(); ++i)
         if (   this->counter[i] > 0
             && this->t1vec[i]->eval(p1)
             && this->t2vec[i]->eval(p2)
             && this->t3vec[i]->eval(p3)
             && this->t4vec[i]->eval(p4)
             && this->t5vec[i]->eval(p5)
             && this->t6vec[i]->eval(p6)
             && this->t7vec[i]->eval(p7)
             && this->t8vec[i]->eval(p8)
             && this->t9vec[i]->eval(p9)
            )
         {
           if (this->tvec.at(i) != 0)
             return false;

           if (this->counter[i] != MOCKPP_UNLIMITED)
             --this->counter[i];

           r = rvec[i];
           return true;
         }
       return false;
    }

  private:

    MOCKPP_STL::vector<R>        rvec;
};

MOCKPP_NS_END


#endif // MOCKPP_ResponseVector9_H

