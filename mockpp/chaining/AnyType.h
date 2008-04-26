/** @file
    @internal
    @brief  Handle Any Type

  $Id: TypeSelector.h 1254 2008-04-10 22:46:44Z darwin-yuan $

 ***************************************************************************/

/**************************************************************************

   begin                : Sat April 10 2008
   copyright            : (C) 2002-2008 by Ewald Arnold
   email                : darwin.yuan@gmail.com

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

#ifndef MOCKPP_ANY_TYPE_H
#define MOCKPP_ANY_TYPE_H

#include <mockpp/mockpp.h> // always first

#include <mockpp/compat/Asserter.h>
#include <mockpp/chaining/TypeTraits.h>
#include <mockpp/constraint/EqualityUtil.h>

MOCKPP_NS_START

struct AnyType
{
	AnyType()
		: content(0)
	{}

	template <typename ValueType>
	AnyType(const ValueType& value)
		: content(new Holder<typename TypeTraits<ValueType>::Type>(value))
	{}

	AnyType(const char* value)
		: content(new Holder<const char*>(value))
	{}

	AnyType(const AnyType & other)
		: content(other.content ? other.content->clone() : 0)
	{}

	~AnyType()
	{ delete content; }

public:

	AnyType& swap(AnyType& rhs)
	{
		std::swap(content, rhs.content);
		return *this;
	}

	template<typename ValueType>
	AnyType& operator=(const ValueType & rhs)
	{
		AnyType(rhs).swap(*this);
		return *this;
	}

	AnyType& operator=(const AnyType & rhs)
	{
		AnyType(rhs).swap(*this);
		return *this;
	}

public: 

	bool empty() const
	{ return !content; }

	const std::type_info & type() const
	{ return content ? content->type() : typeid(void); }

public:
	bool operator==(const AnyType& rhs) const
	{
		if(content == 0 || rhs.content == 0)
			return false;

		return content->operator==(*rhs.content);
	}

public: 

	struct PlaceHolder
	{
		virtual ~PlaceHolder() {}
		virtual const std::type_info & type() const = 0;
		virtual PlaceHolder* clone() const = 0;
		virtual bool operator==(const PlaceHolder& rhs) const = 0;
	};

	template<typename ValueType>
	struct Holder : public PlaceHolder
	{
		Holder(const ValueType & value)
			: held(value)
		{} 

		virtual const std::type_info & type() const
		{ return typeid(ValueType); }

		virtual PlaceHolder * clone() const
		{ return new Holder(held); }

		virtual bool operator==(const PlaceHolder& rhs) const
		{
			Holder<ValueType>* p = \
				dynamic_cast<Holder<ValueType>*>(&const_cast<PlaceHolder&>(rhs));

			return p && isEqualComparison(held, p->held);
		}
		
		ValueType held;
	};

private:
	template<typename ValueType>
	friend ValueType * any_cast(AnyType *);

private:
	PlaceHolder* content;
};

////////////////////////////////////////////////////////////
template<typename ValueType>
ValueType* any_cast(AnyType* operand)
{
	typedef typename TypeTraits<ValueType>::Type OT;

	return operand && operand->type() == typeid(ValueType)
		? &static_cast<AnyType::Holder<OT>*>(operand->content)->held
		: 0;
}

////////////////////////////////////////////////////////////
template<typename ValueType>
const ValueType * any_cast(const AnyType* operand)
{
	return any_cast<ValueType>(const_cast<AnyType*>(operand));
}

////////////////////////////////////////////////////////////
template<typename ValueType>
ValueType any_cast(const AnyType& operand)
{
	typedef typename TypeTraits<ValueType>::Type nonref;

	const nonref * result = any_cast<nonref>(&operand);
	if(!result)
		MOCKPP_FAIL("any_cast type mismatch(const AnyType&)");

	return *const_cast<nonref*>(result);
}

////////////////////////////////////////////////////////////
template<typename ValueType>
ValueType any_cast(AnyType& operand)
{
	typedef typename TypeTraits<ValueType>::Type nonref;

	nonref * result = any_cast<nonref>(&operand);
	if(!result)
		MOCKPP_FAIL("any_cast type mismatch(AnyType&)");

	return *result;
}


MOCKPP_NS_END


#endif // MOCKPP_TYPE_TRAITS_H
