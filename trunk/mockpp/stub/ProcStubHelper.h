
#ifndef MOCKPP_PROC_STUB_HELPER_H
#define MOCKPP_PROC_STUB_HELPER_H

#include <mockpp/mockpp.h>

#include <mockpp/stub/ProcStub1.h>
#include <mockpp/chaining/InvocationN.h>

MOCKPP_NS_START

/** Creates a stub calling a procedure
 *  @see mockpp::ProcStub1
 *  @param proc the procedure to be called
 *  @return a new stub
 */
template <typename R, typename T1, typename P>
typename Stub<R, Invocation1<T1> >::AP
invoke(R (P::*proc) (T1), const P& p)
{
   return new ProcStub1<R, Invocation1<T1> >
			(new ProcImpl1<R, Invocation1<T1>, P>(p));
}

/** Creates a stub calling a procedure
 *  @see mockpp::ProcStub1
 *  @param proc the procedure to be called
 *  @return a new stub
 */
template <typename R, typename T1>
typename Stub<R, Invocation1<T1> >::AP
invoke(R (*proc) (T1))
{
   return new ProcStub1<R, Invocation1<T1> >
			(new ProcImpl1<R, Invocation1<T1>, R (*) (T1) >(proc));
}

MOCKPP_NS_END

#endif
