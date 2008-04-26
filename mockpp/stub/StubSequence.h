/** @file
    @brief  Stub returning a limited sequence of values

  $Id: StubSequence.h 1254 2007-01-01 16:46:44Z ewald-arnold $

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

   *
   *  Original Java Sources:  Copyright (c) 2000-2004, jMock.org
   *

 **/

#ifndef MOCKPP_STUBSEQUENCE_H
#define MOCKPP_STUBSEQUENCE_H

#include <mockpp/mockpp.h> // always first

#include MOCKPP_VECTOR_H

#include <mockpp/stub/Stub.h>
#include <mockpp/compat/Asserter.h>


MOCKPP_NS_START


/** Use one stub after the other from a sequence.
  * @ingroup grp_stub
  * @see mockpp::onConsecutiveCalls
  */
template <typename R,  // Returntype
          typename I>  // Invocation
class StubSequence : public Stub<R, I>
{
  public:

    typedef typename TypelessStub<R>::ORT   ORT;
    typedef typename TypelessStub<R>::RRT   RRT;

  /** Constructs the object.
    * @param  start interator for starting element
    * @param  end   interator for trailing element
    */
    template<typename P>
    StubSequence(P start, P end)
      : stubs(start, end)
      , currentStub(0)
      , defaultValue(R())
    {
    }

  /** Destroys the object.
    * Also ensures a virtual destructor.
    */
    virtual ~StubSequence()
    {
      while (!stubs.empty() )
      {
        delete stubs[0];
        stubs.erase(stubs.begin());
      }
    }

  /** Mock the invocation
    * @param invocation  invocation data
    * @return return value from mocked invocation
    */
    virtual RRT invoke( const I &invocation )
    {
        if (!empty())
        {
            return stubs[currentStub++]->invoke(invocation);
        }
        assertionFailed(__LINE__, __FILE__, MOCKPP_PCHAR("no more stubs available"));
        return defaultValue;
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
        for (int i = currentStub; i < stubs.size(); i++)
        {
            if (i != currentStub)
              buffer += MOCKPP_PCHAR(", and then ");

            buffer = stubs[i]->describeTo(buffer);
        }

        return buffer;
    }

	 bool empty() const
	 {
		return currentStub >= stubs.size() ;
	 }

  private:

    // forbid due to pointers
    StubSequence(const StubSequence &);
    StubSequence &operator =(const StubSequence &);

	 int currentStub;

    MOCKPP_STL::vector<Stub<R, I>* >  stubs;

	 ORT defaultValue;
};


MOCKPP_NS_END


#endif // MOCKPP_STUBSEQUENCE_H

