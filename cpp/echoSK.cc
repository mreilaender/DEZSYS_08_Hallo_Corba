// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include "echo.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_2;



echoCor::Echo_ptr echoCor::Echo_Helper::_nil() {
  return ::echoCor::Echo::_nil();
}

::CORBA::Boolean echoCor::Echo_Helper::is_nil(::echoCor::Echo_ptr p) {
  return ::CORBA::is_nil(p);

}

void echoCor::Echo_Helper::release(::echoCor::Echo_ptr p) {
  ::CORBA::release(p);
}

void echoCor::Echo_Helper::marshalObjRef(::echoCor::Echo_ptr obj, cdrStream& s) {
  ::echoCor::Echo::_marshalObjRef(obj, s);
}

echoCor::Echo_ptr echoCor::Echo_Helper::unmarshalObjRef(cdrStream& s) {
  return ::echoCor::Echo::_unmarshalObjRef(s);
}

void echoCor::Echo_Helper::duplicate(::echoCor::Echo_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

echoCor::Echo_ptr
echoCor::Echo::_duplicate(::echoCor::Echo_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

echoCor::Echo_ptr
echoCor::Echo::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


echoCor::Echo_ptr
echoCor::Echo::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

echoCor::Echo_ptr
echoCor::Echo::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_Echo _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_Echo* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_Echo;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* echoCor::Echo::_PD_repoId = "IDL:echoCor/Echo:1.0";


echoCor::_objref_Echo::~_objref_Echo() {
  
}


echoCor::_objref_Echo::_objref_Echo(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::echoCor::Echo::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
echoCor::_objref_Echo::_ptrToObjRef(const char* id)
{
  if (id == ::echoCor::Echo::_PD_repoId)
    return (::echoCor::Echo_ptr) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::echoCor::Echo::_PD_repoId))
    return (::echoCor::Echo_ptr) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for echoCor::Echo::echoString

// Proxy call descriptor class. Mangled signature:
//  _cstring_i_cstring
class _0RL_cd_7d05c3c49e1bddba_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_7d05c3c49e1bddba_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::String_var result;
};

void _0RL_cd_7d05c3c49e1bddba_00000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);

}

void _0RL_cd_7d05c3c49e1bddba_00000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();

}

void _0RL_cd_7d05c3c49e1bddba_00000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalString(result,0);

}

void _0RL_cd_7d05c3c49e1bddba_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalString(0);

}

const char* const _0RL_cd_7d05c3c49e1bddba_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_7d05c3c49e1bddba_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_7d05c3c49e1bddba_00000000* tcd = (_0RL_cd_7d05c3c49e1bddba_00000000*)cd;
  echoCor::_impl_Echo* impl = (echoCor::_impl_Echo*) svnt->_ptrToInterface(echoCor::Echo::_PD_repoId);
  tcd->result = impl->echoString(tcd->arg_0);


}

char* echoCor::_objref_Echo::echoString(const char* msg)
{
  _0RL_cd_7d05c3c49e1bddba_00000000 _call_desc(_0RL_lcfn_7d05c3c49e1bddba_10000000, "echoString", 11);
  _call_desc.arg_0 = msg;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}

echoCor::_pof_Echo::~_pof_Echo() {}


omniObjRef*
echoCor::_pof_Echo::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::echoCor::_objref_Echo(ior, id);
}


::CORBA::Boolean
echoCor::_pof_Echo::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::echoCor::Echo::_PD_repoId))
    return 1;
  
  return 0;
}

const echoCor::_pof_Echo _the_pof_echoCor_mEcho;

echoCor::_impl_Echo::~_impl_Echo() {}


::CORBA::Boolean
echoCor::_impl_Echo::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "echoString")) {

    _0RL_cd_7d05c3c49e1bddba_00000000 _call_desc(_0RL_lcfn_7d05c3c49e1bddba_10000000, "echoString", 11, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
echoCor::_impl_Echo::_ptrToInterface(const char* id)
{
  if (id == ::echoCor::Echo::_PD_repoId)
    return (::echoCor::_impl_Echo*) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::echoCor::Echo::_PD_repoId))
    return (::echoCor::_impl_Echo*) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
echoCor::_impl_Echo::_mostDerivedRepoId()
{
  return ::echoCor::Echo::_PD_repoId;
}

POA_echoCor::Echo::~Echo() {}

