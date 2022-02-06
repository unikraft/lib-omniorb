// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __compression_hh__
#define __compression_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_compression
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_compression
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_compression
#endif



#ifndef __corbaidl_hh_EXTERNAL_GUARD__
#define __corbaidl_hh_EXTERNAL_GUARD__
#include <corbaidl.hh>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif



_CORBA_MODULE Compression

_CORBA_MODULE_BEG

  class CompressionException : public ::CORBA::UserException {
  public:
    
    ::CORBA::Long reason;

    ::CORBA::String_member description;

  

    inline CompressionException() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    CompressionException(const CompressionException&);
    CompressionException(::CORBA::Long i_reason, const char* i_description);
    CompressionException& operator=(const CompressionException&);
    virtual ~CompressionException();
    virtual void _raise() const;
    static CompressionException* _downcast(::CORBA::Exception*);
    static const CompressionException* _downcast(const ::CORBA::Exception*);
    static inline CompressionException* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    void operator>>=(cdrStream&) const ;
    void operator<<=(cdrStream&) ;

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CompressionException;

  class FactoryAlreadyRegistered : public ::CORBA::UserException {
  public:
    
    

    inline FactoryAlreadyRegistered() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    FactoryAlreadyRegistered(const FactoryAlreadyRegistered&);
    
    FactoryAlreadyRegistered& operator=(const FactoryAlreadyRegistered&);
    virtual ~FactoryAlreadyRegistered();
    virtual void _raise() const;
    static FactoryAlreadyRegistered* _downcast(::CORBA::Exception*);
    static const FactoryAlreadyRegistered* _downcast(const ::CORBA::Exception*);
    static inline FactoryAlreadyRegistered* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    inline void operator>>=(cdrStream&) const { }
    inline void operator<<=(cdrStream&) { }

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_FactoryAlreadyRegistered;

  class UnknownCompressorId : public ::CORBA::UserException {
  public:
    
    

    inline UnknownCompressorId() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    UnknownCompressorId(const UnknownCompressorId&);
    
    UnknownCompressorId& operator=(const UnknownCompressorId&);
    virtual ~UnknownCompressorId();
    virtual void _raise() const;
    static UnknownCompressorId* _downcast(::CORBA::Exception*);
    static const UnknownCompressorId* _downcast(const ::CORBA::Exception*);
    static inline UnknownCompressorId* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    inline void operator>>=(cdrStream&) const { }
    inline void operator<<=(cdrStream&) { }

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_UnknownCompressorId;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CompressorId;

  typedef ::CORBA::UShort CompressorId;
  typedef ::CORBA::UShort_out CompressorId_out;

  _CORBA_MODULE_VARINT const ::CORBA::UShort COMPRESSORID_NONE _init_in_decl_( = 0 );

  _CORBA_MODULE_VARINT const ::CORBA::UShort COMPRESSORID_GZIP _init_in_decl_( = 1 );

  _CORBA_MODULE_VARINT const ::CORBA::UShort COMPRESSORID_PKZIP _init_in_decl_( = 2 );

  _CORBA_MODULE_VARINT const ::CORBA::UShort COMPRESSORID_BZIP2 _init_in_decl_( = 3 );

  _CORBA_MODULE_VARINT const ::CORBA::UShort COMPRESSORID_ZLIB _init_in_decl_( = 4 );

  _CORBA_MODULE_VARINT const ::CORBA::UShort COMPRESSORID_LZMA _init_in_decl_( = 5 );

  _CORBA_MODULE_VARINT const ::CORBA::UShort COMPRESSORID_LZO _init_in_decl_( = 6 );

  _CORBA_MODULE_VARINT const ::CORBA::UShort COMPRESSORID_RZIP _init_in_decl_( = 7 );

  _CORBA_MODULE_VARINT const ::CORBA::UShort COMPRESSORID_7X _init_in_decl_( = 8 );

  _CORBA_MODULE_VARINT const ::CORBA::UShort COMPRESSORID_XAR _init_in_decl_( = 9 );

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CompressionLevel;

  typedef ::CORBA::UShort CompressionLevel;
  typedef ::CORBA::UShort_out CompressionLevel_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CompressionRatio;

  typedef ::CORBA::Float CompressionRatio;
  typedef ::CORBA::Float_out CompressionRatio_out;

  struct CompressorIdLevel {
    typedef _CORBA_ConstrType_Fix_Var<CompressorIdLevel> _var_type;

    
    CompressorId compressor_id;

    CompressionLevel compression_level;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef CompressorIdLevel::_var_type CompressorIdLevel_var;

  typedef CompressorIdLevel& CompressorIdLevel_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CompressorIdLevel;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CompressorIdLevelList;

  class CompressorIdLevelList_var;

  class CompressorIdLevelList : public _CORBA_Unbounded_Sequence< CompressorIdLevel >  {
  public:
    typedef CompressorIdLevelList_var _var_type;
    inline CompressorIdLevelList() {}
    inline CompressorIdLevelList(const CompressorIdLevelList& _s)
      : _CORBA_Unbounded_Sequence< CompressorIdLevel > (_s) {}

    inline CompressorIdLevelList(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< CompressorIdLevel > (_max) {}
    inline CompressorIdLevelList(_CORBA_ULong _max, _CORBA_ULong _len, CompressorIdLevel* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< CompressorIdLevel > (_max, _len, _val, _rel) {}

  

    inline CompressorIdLevelList& operator = (const CompressorIdLevelList& _s) {
      _CORBA_Unbounded_Sequence< CompressorIdLevel > ::operator=(_s);
      return *this;
    }
  };

  class CompressorIdLevelList_out;

  class CompressorIdLevelList_var {
  public:
    inline CompressorIdLevelList_var() : _pd_seq(0) {}
    inline CompressorIdLevelList_var(CompressorIdLevelList* _s) : _pd_seq(_s) {}
    inline CompressorIdLevelList_var(const CompressorIdLevelList_var& _s) {
      if (_s._pd_seq)  _pd_seq = new CompressorIdLevelList(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~CompressorIdLevelList_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline CompressorIdLevelList_var& operator = (CompressorIdLevelList* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline CompressorIdLevelList_var& operator = (const CompressorIdLevelList_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new CompressorIdLevelList;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline CompressorIdLevel& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline CompressorIdLevelList* operator -> () { return _pd_seq; }
    inline const CompressorIdLevelList* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator CompressorIdLevelList& () const { return *_pd_seq; }
#else
    inline operator const CompressorIdLevelList& () const { return *_pd_seq; }
    inline operator CompressorIdLevelList& () { return *_pd_seq; }
#endif
      
    inline const CompressorIdLevelList& in() const { return *_pd_seq; }
    inline CompressorIdLevelList&       inout()    { return *_pd_seq; }
    inline CompressorIdLevelList*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline CompressorIdLevelList* _retn() { CompressorIdLevelList* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class CompressorIdLevelList_out;
    
  private:
    CompressorIdLevelList* _pd_seq;
  };

  class CompressorIdLevelList_out {
  public:
    inline CompressorIdLevelList_out(CompressorIdLevelList*& _s) : _data(_s) { _data = 0; }
    inline CompressorIdLevelList_out(CompressorIdLevelList_var& _s)
      : _data(_s._pd_seq) { _s = (CompressorIdLevelList*) 0; }
    inline CompressorIdLevelList_out(const CompressorIdLevelList_out& _s) : _data(_s._data) {}
    inline CompressorIdLevelList_out& operator = (const CompressorIdLevelList_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline CompressorIdLevelList_out& operator = (CompressorIdLevelList* _s) {
      _data = _s;
      return *this;
    }
    inline operator CompressorIdLevelList*&()  { return _data; }
    inline CompressorIdLevelList*& ptr()       { return _data; }
    inline CompressorIdLevelList* operator->() { return _data; }

    inline CompressorIdLevel& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    CompressorIdLevelList*& _data;

  private:
    CompressorIdLevelList_out();
    CompressorIdLevelList_out& operator=(const CompressorIdLevelList_var&);
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Buffer;

  typedef CORBA::OctetSeq Buffer;
  typedef CORBA::OctetSeq_var Buffer_var;
  typedef CORBA::OctetSeq_out Buffer_out;

#ifndef __Compression_mCompressorFactory__
#define __Compression_mCompressorFactory__

  class CompressorFactory;
  typedef CompressorFactory* CompressorFactory_ptr;
  typedef CompressorFactory_ptr CompressorFactoryRef;

  class CompressorFactory_Helper {
  public:
    typedef CompressorFactory_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<CompressorFactory, CompressorFactory_Helper> CompressorFactory_var;
  typedef _CORBA_ObjRef_OUT_arg<CompressorFactory,CompressorFactory_Helper > CompressorFactory_out;

#endif

#ifndef __Compression_mCompressor__
#define __Compression_mCompressor__

  class Compressor;
  typedef Compressor* Compressor_ptr;
  typedef Compressor_ptr CompressorRef;

  class Compressor_Helper {
  public:
    typedef Compressor_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<Compressor, Compressor_Helper> Compressor_var;
  typedef _CORBA_ObjRef_OUT_arg<Compressor,Compressor_Helper > Compressor_out;

#endif

  // local interface Compressor
  class Compressor :
    public virtual ::CORBA::LocalObject
  {
  public:
    // Declarations for this interface type.
    typedef Compressor_ptr _ptr_type;
    typedef Compressor_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream& s);
    static inline _ptr_type _unmarshalObjRef(cdrStream& s);

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    

    // Operations declared in this local interface
    virtual void compress(const ::Compression::Buffer& source, ::Compression::Buffer& target) = 0;
    virtual void decompress(const ::Compression::Buffer& source, ::Compression::Buffer& target) = 0;
    virtual CompressorFactory_ptr compressor_factory() = 0;
    virtual CompressionLevel compression_level() = 0;
    virtual ::CORBA::ULongLong compressed_bytes() = 0;
    virtual ::CORBA::ULongLong uncompressed_bytes() = 0;
    virtual CompressionRatio compression_ratio() = 0;  

  private:
    virtual void* _ptrToObjRef(const char*);

  protected:
    Compressor();
    virtual ~Compressor();
  };

  class _nil_Compressor :
    
    public virtual Compressor
  {
    public:
      virtual void compress(const ::Compression::Buffer& source, ::Compression::Buffer& target);
      virtual void decompress(const ::Compression::Buffer& source, ::Compression::Buffer& target);
      virtual CompressorFactory_ptr compressor_factory();
      virtual CompressionLevel compression_level();
      virtual ::CORBA::ULongLong compressed_bytes();
      virtual ::CORBA::ULongLong uncompressed_bytes();
      virtual CompressionRatio compression_ratio();

      inline _nil_Compressor() { _PR_setobj(0); }

    protected:
      virtual ~_nil_Compressor();
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Compressor;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CompressorSeq;

  class CompressorSeq_var;

  class CompressorSeq : public _CORBA_Unbounded_Sequence_ObjRef< Compressor, _CORBA_ObjRef_Element< Compressor, Compressor_Helper> , Compressor_Helper >  {
  public:
    typedef CompressorSeq_var _var_type;
    inline CompressorSeq() {}
    inline CompressorSeq(const CompressorSeq& _s)
      : _CORBA_Unbounded_Sequence_ObjRef< Compressor, _CORBA_ObjRef_Element< Compressor, Compressor_Helper> , Compressor_Helper > (_s) {}

    inline CompressorSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence_ObjRef< Compressor, _CORBA_ObjRef_Element< Compressor, Compressor_Helper> , Compressor_Helper > (_max) {}
    inline CompressorSeq(_CORBA_ULong _max, _CORBA_ULong _len, Compressor_ptr* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence_ObjRef< Compressor, _CORBA_ObjRef_Element< Compressor, Compressor_Helper> , Compressor_Helper > (_max, _len, _val, _rel) {}

  

    inline CompressorSeq& operator = (const CompressorSeq& _s) {
      _CORBA_Unbounded_Sequence_ObjRef< Compressor, _CORBA_ObjRef_Element< Compressor, Compressor_Helper> , Compressor_Helper > ::operator=(_s);
      return *this;
    }
  };

  class CompressorSeq_out;

  class CompressorSeq_var {
  public:
    inline CompressorSeq_var() : _pd_seq(0) {}
    inline CompressorSeq_var(CompressorSeq* _s) : _pd_seq(_s) {}
    inline CompressorSeq_var(const CompressorSeq_var& _s) {
      if (_s._pd_seq)  _pd_seq = new CompressorSeq(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~CompressorSeq_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline CompressorSeq_var& operator = (CompressorSeq* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline CompressorSeq_var& operator = (const CompressorSeq_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new CompressorSeq;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline _CORBA_ObjRef_Element< Compressor, Compressor_Helper>  operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline CompressorSeq* operator -> () { return _pd_seq; }
    inline const CompressorSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator CompressorSeq& () const { return *_pd_seq; }
#else
    inline operator const CompressorSeq& () const { return *_pd_seq; }
    inline operator CompressorSeq& () { return *_pd_seq; }
#endif
      
    inline const CompressorSeq& in() const { return *_pd_seq; }
    inline CompressorSeq&       inout()    { return *_pd_seq; }
    inline CompressorSeq*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline CompressorSeq* _retn() { CompressorSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class CompressorSeq_out;
    
  private:
    CompressorSeq* _pd_seq;
  };

  class CompressorSeq_out {
  public:
    inline CompressorSeq_out(CompressorSeq*& _s) : _data(_s) { _data = 0; }
    inline CompressorSeq_out(CompressorSeq_var& _s)
      : _data(_s._pd_seq) { _s = (CompressorSeq*) 0; }
    inline CompressorSeq_out(const CompressorSeq_out& _s) : _data(_s._data) {}
    inline CompressorSeq_out& operator = (const CompressorSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline CompressorSeq_out& operator = (CompressorSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator CompressorSeq*&()  { return _data; }
    inline CompressorSeq*& ptr()       { return _data; }
    inline CompressorSeq* operator->() { return _data; }

    inline _CORBA_ObjRef_Element< Compressor, Compressor_Helper>  operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    CompressorSeq*& _data;

  private:
    CompressorSeq_out();
    CompressorSeq_out& operator=(const CompressorSeq_var&);
  };

#ifndef __Compression_mCompressorFactory__
#define __Compression_mCompressorFactory__

  class CompressorFactory;
  typedef CompressorFactory* CompressorFactory_ptr;
  typedef CompressorFactory_ptr CompressorFactoryRef;

  class CompressorFactory_Helper {
  public:
    typedef CompressorFactory_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<CompressorFactory, CompressorFactory_Helper> CompressorFactory_var;
  typedef _CORBA_ObjRef_OUT_arg<CompressorFactory,CompressorFactory_Helper > CompressorFactory_out;

#endif

  // local interface CompressorFactory
  class CompressorFactory :
    public virtual ::CORBA::LocalObject
  {
  public:
    // Declarations for this interface type.
    typedef CompressorFactory_ptr _ptr_type;
    typedef CompressorFactory_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream& s);
    static inline _ptr_type _unmarshalObjRef(cdrStream& s);

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    

    // Operations declared in this local interface
    virtual CompressorId compressor_id() = 0;
    virtual Compressor_ptr get_compressor(::Compression::CompressionLevel compression_level) = 0;  

  private:
    virtual void* _ptrToObjRef(const char*);

  protected:
    CompressorFactory();
    virtual ~CompressorFactory();
  };

  class _nil_CompressorFactory :
    
    public virtual CompressorFactory
  {
    public:
      virtual CompressorId compressor_id();
      virtual Compressor_ptr get_compressor(::Compression::CompressionLevel compression_level);

      inline _nil_CompressorFactory() { _PR_setobj(0); }

    protected:
      virtual ~_nil_CompressorFactory();
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CompressorFactory;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CompressorFactorySeq;

  class CompressorFactorySeq_var;

  class CompressorFactorySeq : public _CORBA_Unbounded_Sequence_ObjRef< CompressorFactory, _CORBA_ObjRef_Element< CompressorFactory, CompressorFactory_Helper> , CompressorFactory_Helper >  {
  public:
    typedef CompressorFactorySeq_var _var_type;
    inline CompressorFactorySeq() {}
    inline CompressorFactorySeq(const CompressorFactorySeq& _s)
      : _CORBA_Unbounded_Sequence_ObjRef< CompressorFactory, _CORBA_ObjRef_Element< CompressorFactory, CompressorFactory_Helper> , CompressorFactory_Helper > (_s) {}

    inline CompressorFactorySeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence_ObjRef< CompressorFactory, _CORBA_ObjRef_Element< CompressorFactory, CompressorFactory_Helper> , CompressorFactory_Helper > (_max) {}
    inline CompressorFactorySeq(_CORBA_ULong _max, _CORBA_ULong _len, CompressorFactory_ptr* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence_ObjRef< CompressorFactory, _CORBA_ObjRef_Element< CompressorFactory, CompressorFactory_Helper> , CompressorFactory_Helper > (_max, _len, _val, _rel) {}

  

    inline CompressorFactorySeq& operator = (const CompressorFactorySeq& _s) {
      _CORBA_Unbounded_Sequence_ObjRef< CompressorFactory, _CORBA_ObjRef_Element< CompressorFactory, CompressorFactory_Helper> , CompressorFactory_Helper > ::operator=(_s);
      return *this;
    }
  };

  class CompressorFactorySeq_out;

  class CompressorFactorySeq_var {
  public:
    inline CompressorFactorySeq_var() : _pd_seq(0) {}
    inline CompressorFactorySeq_var(CompressorFactorySeq* _s) : _pd_seq(_s) {}
    inline CompressorFactorySeq_var(const CompressorFactorySeq_var& _s) {
      if (_s._pd_seq)  _pd_seq = new CompressorFactorySeq(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~CompressorFactorySeq_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline CompressorFactorySeq_var& operator = (CompressorFactorySeq* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline CompressorFactorySeq_var& operator = (const CompressorFactorySeq_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new CompressorFactorySeq;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline _CORBA_ObjRef_Element< CompressorFactory, CompressorFactory_Helper>  operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline CompressorFactorySeq* operator -> () { return _pd_seq; }
    inline const CompressorFactorySeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator CompressorFactorySeq& () const { return *_pd_seq; }
#else
    inline operator const CompressorFactorySeq& () const { return *_pd_seq; }
    inline operator CompressorFactorySeq& () { return *_pd_seq; }
#endif
      
    inline const CompressorFactorySeq& in() const { return *_pd_seq; }
    inline CompressorFactorySeq&       inout()    { return *_pd_seq; }
    inline CompressorFactorySeq*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline CompressorFactorySeq* _retn() { CompressorFactorySeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class CompressorFactorySeq_out;
    
  private:
    CompressorFactorySeq* _pd_seq;
  };

  class CompressorFactorySeq_out {
  public:
    inline CompressorFactorySeq_out(CompressorFactorySeq*& _s) : _data(_s) { _data = 0; }
    inline CompressorFactorySeq_out(CompressorFactorySeq_var& _s)
      : _data(_s._pd_seq) { _s = (CompressorFactorySeq*) 0; }
    inline CompressorFactorySeq_out(const CompressorFactorySeq_out& _s) : _data(_s._data) {}
    inline CompressorFactorySeq_out& operator = (const CompressorFactorySeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline CompressorFactorySeq_out& operator = (CompressorFactorySeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator CompressorFactorySeq*&()  { return _data; }
    inline CompressorFactorySeq*& ptr()       { return _data; }
    inline CompressorFactorySeq* operator->() { return _data; }

    inline _CORBA_ObjRef_Element< CompressorFactory, CompressorFactory_Helper>  operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    CompressorFactorySeq*& _data;

  private:
    CompressorFactorySeq_out();
    CompressorFactorySeq_out& operator=(const CompressorFactorySeq_var&);
  };

#ifndef __Compression_mCompressionManager__
#define __Compression_mCompressionManager__

  class CompressionManager;
  typedef CompressionManager* CompressionManager_ptr;
  typedef CompressionManager_ptr CompressionManagerRef;

  class CompressionManager_Helper {
  public:
    typedef CompressionManager_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<CompressionManager, CompressionManager_Helper> CompressionManager_var;
  typedef _CORBA_ObjRef_OUT_arg<CompressionManager,CompressionManager_Helper > CompressionManager_out;

#endif

  // local interface CompressionManager
  class CompressionManager :
    public virtual ::CORBA::LocalObject
  {
  public:
    // Declarations for this interface type.
    typedef CompressionManager_ptr _ptr_type;
    typedef CompressionManager_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream& s);
    static inline _ptr_type _unmarshalObjRef(cdrStream& s);

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    

    // Operations declared in this local interface
    virtual void register_factory(::Compression::CompressorFactory_ptr compressor_factory) = 0;
    virtual void unregister_factory(::Compression::CompressorId compressor_id) = 0;
    virtual CompressorFactory_ptr get_factory(::Compression::CompressorId compressor_id) = 0;
    virtual Compressor_ptr get_compressor(::Compression::CompressorId compressor_id, ::Compression::CompressionLevel compression_level) = 0;
    virtual CompressorFactorySeq* get_factories() = 0;  

  private:
    virtual void* _ptrToObjRef(const char*);

  protected:
    CompressionManager();
    virtual ~CompressionManager();
  };

  class _nil_CompressionManager :
    
    public virtual CompressionManager
  {
    public:
      virtual void register_factory(::Compression::CompressorFactory_ptr compressor_factory);
      virtual void unregister_factory(::Compression::CompressorId compressor_id);
      virtual CompressorFactory_ptr get_factory(::Compression::CompressorId compressor_id);
      virtual Compressor_ptr get_compressor(::Compression::CompressorId compressor_id, ::Compression::CompressionLevel compression_level);
      virtual CompressorFactorySeq* get_factories();

      inline _nil_CompressionManager() { _PR_setobj(0); }

    protected:
      virtual ~_nil_CompressionManager();
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CompressionManager;

_CORBA_MODULE_END



_CORBA_MODULE POA_Compression
_CORBA_MODULE_BEG

_CORBA_MODULE_END



_CORBA_MODULE OBV_Compression
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const Compression::CompressionException& _s);
void operator<<=(::CORBA::Any& _a, const Compression::CompressionException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const Compression::CompressionException*& _sp);

void operator<<=(::CORBA::Any& _a, const Compression::FactoryAlreadyRegistered& _s);
void operator<<=(::CORBA::Any& _a, const Compression::FactoryAlreadyRegistered* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const Compression::FactoryAlreadyRegistered*& _sp);

void operator<<=(::CORBA::Any& _a, const Compression::UnknownCompressorId& _s);
void operator<<=(::CORBA::Any& _a, const Compression::UnknownCompressorId* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const Compression::UnknownCompressorId*& _sp);

extern void operator<<=(::CORBA::Any& _a, const Compression::CompressorIdLevel& _s);
extern void operator<<=(::CORBA::Any& _a, Compression::CompressorIdLevel* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Compression::CompressorIdLevel*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const Compression::CompressorIdLevel*& _sp);

void operator<<=(::CORBA::Any& _a, const Compression::CompressorIdLevelList& _s);
void operator<<=(::CORBA::Any& _a, Compression::CompressorIdLevelList* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Compression::CompressorIdLevelList*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const Compression::CompressorIdLevelList*& _sp);

void operator<<=(::CORBA::Any& _a, Compression::Compressor_ptr _s);
void operator<<=(::CORBA::Any& _a, Compression::Compressor_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Compression::Compressor_ptr& _s);

void operator<<=(::CORBA::Any& _a, const Compression::CompressorSeq& _s);
void operator<<=(::CORBA::Any& _a, Compression::CompressorSeq* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Compression::CompressorSeq*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const Compression::CompressorSeq*& _sp);

void operator<<=(::CORBA::Any& _a, Compression::CompressorFactory_ptr _s);
void operator<<=(::CORBA::Any& _a, Compression::CompressorFactory_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Compression::CompressorFactory_ptr& _s);

void operator<<=(::CORBA::Any& _a, const Compression::CompressorFactorySeq& _s);
void operator<<=(::CORBA::Any& _a, Compression::CompressorFactorySeq* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Compression::CompressorFactorySeq*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const Compression::CompressorFactorySeq*& _sp);

void operator<<=(::CORBA::Any& _a, Compression::CompressionManager_ptr _s);
void operator<<=(::CORBA::Any& _a, Compression::CompressionManager_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Compression::CompressionManager_ptr& _s);



inline void
Compression::Compressor::_marshalObjRef(::Compression::Compressor_ptr, cdrStream& s) {
  OMNIORB_THROW(MARSHAL, _OMNI_NS(MARSHAL_LocalObject),
                (::CORBA::CompletionStatus)s.completion());
}

inline Compression::Compressor_ptr
Compression::Compressor::_unmarshalObjRef(cdrStream& s) {
  OMNIORB_THROW(MARSHAL, _OMNI_NS(MARSHAL_LocalObject),
                (::CORBA::CompletionStatus)s.completion());
#ifdef NEED_DUMMY_RETURN
  return 0;
#endif
}

inline void
Compression::CompressorFactory::_marshalObjRef(::Compression::CompressorFactory_ptr, cdrStream& s) {
  OMNIORB_THROW(MARSHAL, _OMNI_NS(MARSHAL_LocalObject),
                (::CORBA::CompletionStatus)s.completion());
}

inline Compression::CompressorFactory_ptr
Compression::CompressorFactory::_unmarshalObjRef(cdrStream& s) {
  OMNIORB_THROW(MARSHAL, _OMNI_NS(MARSHAL_LocalObject),
                (::CORBA::CompletionStatus)s.completion());
#ifdef NEED_DUMMY_RETURN
  return 0;
#endif
}

inline void
Compression::CompressionManager::_marshalObjRef(::Compression::CompressionManager_ptr, cdrStream& s) {
  OMNIORB_THROW(MARSHAL, _OMNI_NS(MARSHAL_LocalObject),
                (::CORBA::CompletionStatus)s.completion());
}

inline Compression::CompressionManager_ptr
Compression::CompressionManager::_unmarshalObjRef(cdrStream& s) {
  OMNIORB_THROW(MARSHAL, _OMNI_NS(MARSHAL_LocalObject),
                (::CORBA::CompletionStatus)s.completion());
#ifdef NEED_DUMMY_RETURN
  return 0;
#endif
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_compression
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_compression
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_compression
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_compression
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_compression
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_compression
#endif

#endif  // __compression_hh__

