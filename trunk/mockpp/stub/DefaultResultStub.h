/** @file
    @brief  Stub return default value

  $Id: DefaultResultStub.h 1254 2007-01-01 16:46:44Z ewald-arnold $

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

#ifndef MOCKPP_DEFAULTRETURNSTUB_H
#define MOCKPP_DEFAULTRETURNSTUB_H

#include <mockpp/mockpp.h> // always first

#include <mockpp/stub/TypelessStub.h>


MOCKPP_NS_START


/** A stub returning the default value of the return type.
  * @ingroup grp_stub
  * @see mockpp::returnValue
  */
template <typename R>  // Returntype
class DefaultResultStub : public TypelessStub<R>
{
  public:

    typedef typename TypelessStub<R>::RRT      RRT;
    typedef typename TypelessStub<R>::ORT      ORT;

  /** Creates the object.
    * This returns the default value for the return type
    */
    DefaultResultStub()
      : haveDefault(false)
		, defaultValue(ORT())
    {}

  /** Creates the object
    * @param val  the default return value
    */
    DefaultResultStub(const ORT &val)
      : haveDefault(true)
      , defaultValue(val)
    {}

  /** Appends the description of this object to the buffer.
    * @param buffer The buffer that the description is appended to.
    * @return The current content of the buffer data
    */
    virtual String describeTo( String &buffer ) const
    {
        buffer += MOCKPP_PCHAR("returns a default value");
        return buffer;
    }

  /** Creates the object
    * @return  return a given default value
    * @return  otherwise return the default for the return type
    */
    virtual RRT typelessInvoke()
    {
		return defaultValue;
    }

  private:

    bool haveDefault;
    ORT    defaultValue;
};


MOCKPP_NS_END


#endif // MOCKPP_DEFAULTRETURNSTUB_H

