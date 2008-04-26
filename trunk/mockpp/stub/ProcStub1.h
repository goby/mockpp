
/** @file
 *  @brief  Stub calling a procedure
 *
 *  $Id: ProcStub1.h 1254 2008-04-18 16:46:44Z darwin-yuan $
 *
 ****************************************************************************/

/**************************************************************************
 *
 *    begin                : Thu Aug 24 2004
 *    copyright            : (C) 2002-2007 by Ewald Arnold
 *    email                : mockpp at ewald-arnold dot de
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as
 *    published by the Free Software Foundation; either version 2 of the License,
 *    or (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 *    Original Java Sources:  Copyright (c) 2000-2004, jMock.org
 *
 *
 ***/
#ifndef MOCKPP_PROC_STUB1_H
#define MOCKPP_PROC_STUB1_H

#include <mockpp/mockpp.h> // always first

#include <mockpp/util/AutoPointer.h>

#include <mockpp/SelfDescribing.h>
#include <mockpp/chaining/Invocation.h>
#include <mockpp/stub/Stub.h>


MOCKPP_NS_START

template <typename R, typename I>
class Proc1
{
public:
	typedef typename I::T1Type T1;

	typedef typename TypeTraits<R>::RefType  RRT;
	typedef typename TypeTraits<R>::Type   ORT;
	typedef typename TypeTraits<T1>::Type  OT1;

	typedef typename TypeTraits<T1>::RefType       RT1;

	virtual ~Proc1() {}

	virtual RRT call(const OT1& p1) = 0;

	virtual String describeTo( String &buffer ) const 
	{
		buffer += "self-defined procedure";
      return buffer;
	}
};

////////////////////////////////////////////////////////

template <typename R, typename I>
class ProcStub1 : public Stub<R, I>
{
public:

	typedef typename I::T1Type          T1;  //!< internal shorthand

	typedef typename Stub<R, I>::RRT    RRT; //!< internal shorthand
	typedef typename TypeTraits<T1>::Type  OT1;

public:

	ProcStub1(Proc1<R, I>* proc)
		: stub(proc)
	{}

	RRT invoke(const I& invocation)
	{
		return stub->call(invocation.getParameter1());
	}

	String describeTo(String& buffer) const
	{
		return stub->describeTo(buffer);
	}

private:
	Proc1<R, I>* stub;
};


template <typename I>
class ProcStub1<void, I> : public Stub<void, I>
{
public:
	ProcStub1(Proc1<void, I>* proc)
		: stub(proc)
	{}

	void invoke(const I& invocation)
	{
		stub->call(invocation.getParameter1());
	}

	String describeTo(String& buffer) const
	{
		return stub->describeTo(buffer);
	}

private:
	Proc1<void, I>* stub;
};

////////////////////////////////////////////////////////
template <typename R, typename I, typename P>
class ProcBase1 : public Proc1<R, I>
{
public:

	typedef typename Proc1<R, I>::RRT RRT;

public:
	ProcBase1(const P& proc)
		: stub(proc)
	{}

protected:
	P stub;
};

////////////////////////////////////////////////////////
template <typename R, typename I, typename P>
class ProcImpl1
	: public ProcBase1<R, I, P>
{
public:
	typedef typename Proc1<R, I>::RT1    RT1;

	typedef typename Proc1<R, I>::RRT    RRT; //!< internal shorthand
	typedef typename Proc1<R, I>::ORT    ORT; //!< internal shorthand
	typedef typename Proc1<R, I>::OT1    OT1; //!< internal shorthand

public:
	ProcImpl1(const P& proc)
		: ProcBase1<R, I, P>(proc) {}

	RRT call(const OT1& p1)
	{
		result = stub(const_cast<RT1>(p1));
		return result;
	}

private:
	ORT  result;
};

template <typename R, typename I, typename P>
class ProcImpl1<R&, I, P> 
	: public ProcBase1<R&, I, P>
{
public:
	typedef typename Proc1<R, I>::RT1    RT1;

	typedef typename Proc1<R, I>::RRT    RRT; //!< internal shorthand
	typedef typename Proc1<R, I>::OT1    OT1; //!< internal shorthand

public:
	ProcImpl1(const P& proc)
		: ProcBase1<R&, I, P>(proc) {} 

	RRT call(const OT1& p1)
	{
		return stub(const_cast<RT1>(p1));
	}
};

template <typename I, typename P>
class ProcImpl1<void, I, P>
	: public ProcBase1<void, I, P>
{
public:
	typedef typename Proc1<void, I>::RT1    RT1;

	typedef typename Proc1<void, I>::RRT    RRT; //!< internal shorthand
	typedef typename Proc1<void, I>::OT1    OT1; //!< internal shorthand

public:

	ProcImpl1(P& proc)
		: ProcBase1<void, I, P>(proc)
	{}

	void call(const OT1& p1)
	{
		stub(const_cast<RT1>(p1));
	}
};

////////////////////////////////////////////////////////

MOCKPP_NS_END

#endif // MOCKPP_PROC_STUB1_H

