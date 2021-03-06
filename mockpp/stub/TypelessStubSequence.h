/** @file
    @brief  Stub returning a limited sequence of values

  $Id: TypelessStubSequence.h 1254 2007-01-01 16:46:44Z ewald-arnold $

 ***************************************************************************/

/**************************************************************************

   begin                : Fri Oct 22 2004
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

#ifndef MOCKPP_TypelessStubSequence_H
#define MOCKPP_TypelessStubSequence_H

#include <mockpp/mockpp.h> // always first

#include MOCKPP_VECTOR_H

#include <mockpp/stub/TypelessStub.h>
#include <mockpp/compat/Asserter.h>


MOCKPP_NS_START


/** Use one stub after the other from a sequence.
  * @ingroup grp_stub
  * @see mockpp::throwException
  */
template <typename R>  // Invocation
class TypelessStubSequence : public TypelessStub<R>
{
  public:

    typedef typename TypelessStub<R>::ORT   ORT;
    typedef typename TypelessStub<R>::RRT   RRT;

  /** Constructs the object.
    * @param  start interator for starting element
    * @param  end   interator for trailing element
    */
    template<typename P>
    TypelessStubSequence(P start, P end)
      : stubs(start, end)
      , currentObject(0)
      , defaultObject(ORT())
    {
	 }

  /** Destroys the object.
    */
    virtual ~TypelessStubSequence()
    {
      while (!stubs.empty() )
      {
        delete stubs[0];
        stubs.erase(stubs.begin());
      }
    }

  /** Mock the invocation without passing parameters.
    * @return return value from mocked invocation
    */
    virtual RRT typelessInvoke()
    {
        if (!empty())
        {
            return stubs[currentObject++]->typelessInvoke();
        }

        assertionFailed(__LINE__, __FILE__, MOCKPP_PCHAR("no more stubs available"));

        return defaultObject;
    }

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
        for (int i = currentObject; i < stubs.size(); i++)
        {
            if (i != currentObject)
              buffer += MOCKPP_PCHAR(", and then ");

            buffer = stubs[i]->describeTo(buffer);
        }

        return buffer;
    }

	 bool empty() const
	 {
		return stubs.size() <= currentObject;
    }

  private:

    // forbid due to pointers
    TypelessStubSequence(const TypelessStubSequence &);
    TypelessStubSequence &operator =(const TypelessStubSequence &);

	 int currentObject;

    MOCKPP_STL::vector<TypelessStub<R>* >  stubs;

    ORT defaultObject;
};


MOCKPP_NS_END


#endif // MOCKPP_TypelessStubSequence_H

