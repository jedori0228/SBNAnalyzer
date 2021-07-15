// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME srcdIDataFormats_Dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "include/ShowerBase.h"
#include "include/Vertex.h"
#include "include/TrackBase.h"
#include "include/Spill.h"
#include "include/SliceShower.h"
#include "include/SliceTrack.h"
#include "include/Slice.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_SBNURcLcLShowerBase(void *p = 0);
   static void *newArray_SBNURcLcLShowerBase(Long_t size, void *p);
   static void delete_SBNURcLcLShowerBase(void *p);
   static void deleteArray_SBNURcLcLShowerBase(void *p);
   static void destruct_SBNURcLcLShowerBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBNUR::ShowerBase*)
   {
      ::SBNUR::ShowerBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBNUR::ShowerBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SBNUR::ShowerBase", ::SBNUR::ShowerBase::Class_Version(), "ShowerBase.h", 12,
                  typeid(::SBNUR::ShowerBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBNUR::ShowerBase::Dictionary, isa_proxy, 4,
                  sizeof(::SBNUR::ShowerBase) );
      instance.SetNew(&new_SBNURcLcLShowerBase);
      instance.SetNewArray(&newArray_SBNURcLcLShowerBase);
      instance.SetDelete(&delete_SBNURcLcLShowerBase);
      instance.SetDeleteArray(&deleteArray_SBNURcLcLShowerBase);
      instance.SetDestructor(&destruct_SBNURcLcLShowerBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBNUR::ShowerBase*)
   {
      return GenerateInitInstanceLocal((::SBNUR::ShowerBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SBNUR::ShowerBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBNURcLcLVertex(void *p = 0);
   static void *newArray_SBNURcLcLVertex(Long_t size, void *p);
   static void delete_SBNURcLcLVertex(void *p);
   static void deleteArray_SBNURcLcLVertex(void *p);
   static void destruct_SBNURcLcLVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBNUR::Vertex*)
   {
      ::SBNUR::Vertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBNUR::Vertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SBNUR::Vertex", ::SBNUR::Vertex::Class_Version(), "Vertex.h", 12,
                  typeid(::SBNUR::Vertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBNUR::Vertex::Dictionary, isa_proxy, 4,
                  sizeof(::SBNUR::Vertex) );
      instance.SetNew(&new_SBNURcLcLVertex);
      instance.SetNewArray(&newArray_SBNURcLcLVertex);
      instance.SetDelete(&delete_SBNURcLcLVertex);
      instance.SetDeleteArray(&deleteArray_SBNURcLcLVertex);
      instance.SetDestructor(&destruct_SBNURcLcLVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBNUR::Vertex*)
   {
      return GenerateInitInstanceLocal((::SBNUR::Vertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SBNUR::Vertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBNURcLcLTrackBase(void *p = 0);
   static void *newArray_SBNURcLcLTrackBase(Long_t size, void *p);
   static void delete_SBNURcLcLTrackBase(void *p);
   static void deleteArray_SBNURcLcLTrackBase(void *p);
   static void destruct_SBNURcLcLTrackBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBNUR::TrackBase*)
   {
      ::SBNUR::TrackBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBNUR::TrackBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SBNUR::TrackBase", ::SBNUR::TrackBase::Class_Version(), "TrackBase.h", 12,
                  typeid(::SBNUR::TrackBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBNUR::TrackBase::Dictionary, isa_proxy, 4,
                  sizeof(::SBNUR::TrackBase) );
      instance.SetNew(&new_SBNURcLcLTrackBase);
      instance.SetNewArray(&newArray_SBNURcLcLTrackBase);
      instance.SetDelete(&delete_SBNURcLcLTrackBase);
      instance.SetDeleteArray(&deleteArray_SBNURcLcLTrackBase);
      instance.SetDestructor(&destruct_SBNURcLcLTrackBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBNUR::TrackBase*)
   {
      return GenerateInitInstanceLocal((::SBNUR::TrackBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SBNUR::TrackBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBNURcLcLSpill(void *p = 0);
   static void *newArray_SBNURcLcLSpill(Long_t size, void *p);
   static void delete_SBNURcLcLSpill(void *p);
   static void deleteArray_SBNURcLcLSpill(void *p);
   static void destruct_SBNURcLcLSpill(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBNUR::Spill*)
   {
      ::SBNUR::Spill *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBNUR::Spill >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SBNUR::Spill", ::SBNUR::Spill::Class_Version(), "Spill.h", 12,
                  typeid(::SBNUR::Spill), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBNUR::Spill::Dictionary, isa_proxy, 4,
                  sizeof(::SBNUR::Spill) );
      instance.SetNew(&new_SBNURcLcLSpill);
      instance.SetNewArray(&newArray_SBNURcLcLSpill);
      instance.SetDelete(&delete_SBNURcLcLSpill);
      instance.SetDeleteArray(&deleteArray_SBNURcLcLSpill);
      instance.SetDestructor(&destruct_SBNURcLcLSpill);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBNUR::Spill*)
   {
      return GenerateInitInstanceLocal((::SBNUR::Spill*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SBNUR::Spill*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBNURcLcLSliceShower(void *p = 0);
   static void *newArray_SBNURcLcLSliceShower(Long_t size, void *p);
   static void delete_SBNURcLcLSliceShower(void *p);
   static void deleteArray_SBNURcLcLSliceShower(void *p);
   static void destruct_SBNURcLcLSliceShower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBNUR::SliceShower*)
   {
      ::SBNUR::SliceShower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBNUR::SliceShower >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SBNUR::SliceShower", ::SBNUR::SliceShower::Class_Version(), "SliceShower.h", 12,
                  typeid(::SBNUR::SliceShower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBNUR::SliceShower::Dictionary, isa_proxy, 4,
                  sizeof(::SBNUR::SliceShower) );
      instance.SetNew(&new_SBNURcLcLSliceShower);
      instance.SetNewArray(&newArray_SBNURcLcLSliceShower);
      instance.SetDelete(&delete_SBNURcLcLSliceShower);
      instance.SetDeleteArray(&deleteArray_SBNURcLcLSliceShower);
      instance.SetDestructor(&destruct_SBNURcLcLSliceShower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBNUR::SliceShower*)
   {
      return GenerateInitInstanceLocal((::SBNUR::SliceShower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SBNUR::SliceShower*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBNURcLcLSliceTrack(void *p = 0);
   static void *newArray_SBNURcLcLSliceTrack(Long_t size, void *p);
   static void delete_SBNURcLcLSliceTrack(void *p);
   static void deleteArray_SBNURcLcLSliceTrack(void *p);
   static void destruct_SBNURcLcLSliceTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBNUR::SliceTrack*)
   {
      ::SBNUR::SliceTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBNUR::SliceTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SBNUR::SliceTrack", ::SBNUR::SliceTrack::Class_Version(), "SliceTrack.h", 12,
                  typeid(::SBNUR::SliceTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBNUR::SliceTrack::Dictionary, isa_proxy, 4,
                  sizeof(::SBNUR::SliceTrack) );
      instance.SetNew(&new_SBNURcLcLSliceTrack);
      instance.SetNewArray(&newArray_SBNURcLcLSliceTrack);
      instance.SetDelete(&delete_SBNURcLcLSliceTrack);
      instance.SetDeleteArray(&deleteArray_SBNURcLcLSliceTrack);
      instance.SetDestructor(&destruct_SBNURcLcLSliceTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBNUR::SliceTrack*)
   {
      return GenerateInitInstanceLocal((::SBNUR::SliceTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SBNUR::SliceTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBNURcLcLSlice(void *p = 0);
   static void *newArray_SBNURcLcLSlice(Long_t size, void *p);
   static void delete_SBNURcLcLSlice(void *p);
   static void deleteArray_SBNURcLcLSlice(void *p);
   static void destruct_SBNURcLcLSlice(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBNUR::Slice*)
   {
      ::SBNUR::Slice *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBNUR::Slice >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SBNUR::Slice", ::SBNUR::Slice::Class_Version(), "Slice.h", 14,
                  typeid(::SBNUR::Slice), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBNUR::Slice::Dictionary, isa_proxy, 4,
                  sizeof(::SBNUR::Slice) );
      instance.SetNew(&new_SBNURcLcLSlice);
      instance.SetNewArray(&newArray_SBNURcLcLSlice);
      instance.SetDelete(&delete_SBNURcLcLSlice);
      instance.SetDeleteArray(&deleteArray_SBNURcLcLSlice);
      instance.SetDestructor(&destruct_SBNURcLcLSlice);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBNUR::Slice*)
   {
      return GenerateInitInstanceLocal((::SBNUR::Slice*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SBNUR::Slice*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace SBNUR {
//______________________________________________________________________________
atomic_TClass_ptr ShowerBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ShowerBase::Class_Name()
{
   return "SBNUR::ShowerBase";
}

//______________________________________________________________________________
const char *ShowerBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::ShowerBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ShowerBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::ShowerBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ShowerBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::ShowerBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ShowerBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::ShowerBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace SBNUR
namespace SBNUR {
//______________________________________________________________________________
atomic_TClass_ptr Vertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Vertex::Class_Name()
{
   return "SBNUR::Vertex";
}

//______________________________________________________________________________
const char *Vertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Vertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Vertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Vertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Vertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Vertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Vertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Vertex*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace SBNUR
namespace SBNUR {
//______________________________________________________________________________
atomic_TClass_ptr TrackBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackBase::Class_Name()
{
   return "SBNUR::TrackBase";
}

//______________________________________________________________________________
const char *TrackBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::TrackBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::TrackBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::TrackBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::TrackBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace SBNUR
namespace SBNUR {
//______________________________________________________________________________
atomic_TClass_ptr Spill::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Spill::Class_Name()
{
   return "SBNUR::Spill";
}

//______________________________________________________________________________
const char *Spill::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Spill*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Spill::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Spill*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Spill::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Spill*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Spill::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Spill*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace SBNUR
namespace SBNUR {
//______________________________________________________________________________
atomic_TClass_ptr SliceShower::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SliceShower::Class_Name()
{
   return "SBNUR::SliceShower";
}

//______________________________________________________________________________
const char *SliceShower::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::SliceShower*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SliceShower::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::SliceShower*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SliceShower::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::SliceShower*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SliceShower::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::SliceShower*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace SBNUR
namespace SBNUR {
//______________________________________________________________________________
atomic_TClass_ptr SliceTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SliceTrack::Class_Name()
{
   return "SBNUR::SliceTrack";
}

//______________________________________________________________________________
const char *SliceTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::SliceTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SliceTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::SliceTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SliceTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::SliceTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SliceTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::SliceTrack*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace SBNUR
namespace SBNUR {
//______________________________________________________________________________
atomic_TClass_ptr Slice::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Slice::Class_Name()
{
   return "SBNUR::Slice";
}

//______________________________________________________________________________
const char *Slice::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Slice*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Slice::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Slice*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Slice::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Slice*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Slice::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBNUR::Slice*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace SBNUR
namespace SBNUR {
//______________________________________________________________________________
void ShowerBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBNUR::ShowerBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBNUR::ShowerBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBNUR::ShowerBase::Class(),this);
   }
}

} // namespace SBNUR
namespace ROOT {
   // Wrappers around operator new
   static void *new_SBNURcLcLShowerBase(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::ShowerBase : new ::SBNUR::ShowerBase;
   }
   static void *newArray_SBNURcLcLShowerBase(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::ShowerBase[nElements] : new ::SBNUR::ShowerBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBNURcLcLShowerBase(void *p) {
      delete ((::SBNUR::ShowerBase*)p);
   }
   static void deleteArray_SBNURcLcLShowerBase(void *p) {
      delete [] ((::SBNUR::ShowerBase*)p);
   }
   static void destruct_SBNURcLcLShowerBase(void *p) {
      typedef ::SBNUR::ShowerBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SBNUR::ShowerBase

namespace SBNUR {
//______________________________________________________________________________
void Vertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBNUR::Vertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBNUR::Vertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBNUR::Vertex::Class(),this);
   }
}

} // namespace SBNUR
namespace ROOT {
   // Wrappers around operator new
   static void *new_SBNURcLcLVertex(void *p) {
      return  p ? new(p) ::SBNUR::Vertex : new ::SBNUR::Vertex;
   }
   static void *newArray_SBNURcLcLVertex(Long_t nElements, void *p) {
      return p ? new(p) ::SBNUR::Vertex[nElements] : new ::SBNUR::Vertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBNURcLcLVertex(void *p) {
      delete ((::SBNUR::Vertex*)p);
   }
   static void deleteArray_SBNURcLcLVertex(void *p) {
      delete [] ((::SBNUR::Vertex*)p);
   }
   static void destruct_SBNURcLcLVertex(void *p) {
      typedef ::SBNUR::Vertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SBNUR::Vertex

namespace SBNUR {
//______________________________________________________________________________
void TrackBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBNUR::TrackBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBNUR::TrackBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBNUR::TrackBase::Class(),this);
   }
}

} // namespace SBNUR
namespace ROOT {
   // Wrappers around operator new
   static void *new_SBNURcLcLTrackBase(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::TrackBase : new ::SBNUR::TrackBase;
   }
   static void *newArray_SBNURcLcLTrackBase(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::TrackBase[nElements] : new ::SBNUR::TrackBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBNURcLcLTrackBase(void *p) {
      delete ((::SBNUR::TrackBase*)p);
   }
   static void deleteArray_SBNURcLcLTrackBase(void *p) {
      delete [] ((::SBNUR::TrackBase*)p);
   }
   static void destruct_SBNURcLcLTrackBase(void *p) {
      typedef ::SBNUR::TrackBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SBNUR::TrackBase

namespace SBNUR {
//______________________________________________________________________________
void Spill::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBNUR::Spill.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBNUR::Spill::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBNUR::Spill::Class(),this);
   }
}

} // namespace SBNUR
namespace ROOT {
   // Wrappers around operator new
   static void *new_SBNURcLcLSpill(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::Spill : new ::SBNUR::Spill;
   }
   static void *newArray_SBNURcLcLSpill(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::Spill[nElements] : new ::SBNUR::Spill[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBNURcLcLSpill(void *p) {
      delete ((::SBNUR::Spill*)p);
   }
   static void deleteArray_SBNURcLcLSpill(void *p) {
      delete [] ((::SBNUR::Spill*)p);
   }
   static void destruct_SBNURcLcLSpill(void *p) {
      typedef ::SBNUR::Spill current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SBNUR::Spill

namespace SBNUR {
//______________________________________________________________________________
void SliceShower::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBNUR::SliceShower.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBNUR::SliceShower::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBNUR::SliceShower::Class(),this);
   }
}

} // namespace SBNUR
namespace ROOT {
   // Wrappers around operator new
   static void *new_SBNURcLcLSliceShower(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::SliceShower : new ::SBNUR::SliceShower;
   }
   static void *newArray_SBNURcLcLSliceShower(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::SliceShower[nElements] : new ::SBNUR::SliceShower[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBNURcLcLSliceShower(void *p) {
      delete ((::SBNUR::SliceShower*)p);
   }
   static void deleteArray_SBNURcLcLSliceShower(void *p) {
      delete [] ((::SBNUR::SliceShower*)p);
   }
   static void destruct_SBNURcLcLSliceShower(void *p) {
      typedef ::SBNUR::SliceShower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SBNUR::SliceShower

namespace SBNUR {
//______________________________________________________________________________
void SliceTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBNUR::SliceTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBNUR::SliceTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBNUR::SliceTrack::Class(),this);
   }
}

} // namespace SBNUR
namespace ROOT {
   // Wrappers around operator new
   static void *new_SBNURcLcLSliceTrack(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::SliceTrack : new ::SBNUR::SliceTrack;
   }
   static void *newArray_SBNURcLcLSliceTrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::SliceTrack[nElements] : new ::SBNUR::SliceTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBNURcLcLSliceTrack(void *p) {
      delete ((::SBNUR::SliceTrack*)p);
   }
   static void deleteArray_SBNURcLcLSliceTrack(void *p) {
      delete [] ((::SBNUR::SliceTrack*)p);
   }
   static void destruct_SBNURcLcLSliceTrack(void *p) {
      typedef ::SBNUR::SliceTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SBNUR::SliceTrack

namespace SBNUR {
//______________________________________________________________________________
void Slice::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBNUR::Slice.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBNUR::Slice::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBNUR::Slice::Class(),this);
   }
}

} // namespace SBNUR
namespace ROOT {
   // Wrappers around operator new
   static void *new_SBNURcLcLSlice(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::Slice : new ::SBNUR::Slice;
   }
   static void *newArray_SBNURcLcLSlice(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::SBNUR::Slice[nElements] : new ::SBNUR::Slice[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBNURcLcLSlice(void *p) {
      delete ((::SBNUR::Slice*)p);
   }
   static void deleteArray_SBNURcLcLSlice(void *p) {
      delete [] ((::SBNUR::Slice*)p);
   }
   static void destruct_SBNURcLcLSlice(void *p) {
      typedef ::SBNUR::Slice current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SBNUR::Slice

namespace ROOT {
   static TClass *vectorlESBNURcLcLSliceTrackgR_Dictionary();
   static void vectorlESBNURcLcLSliceTrackgR_TClassManip(TClass*);
   static void *new_vectorlESBNURcLcLSliceTrackgR(void *p = 0);
   static void *newArray_vectorlESBNURcLcLSliceTrackgR(Long_t size, void *p);
   static void delete_vectorlESBNURcLcLSliceTrackgR(void *p);
   static void deleteArray_vectorlESBNURcLcLSliceTrackgR(void *p);
   static void destruct_vectorlESBNURcLcLSliceTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SBNUR::SliceTrack>*)
   {
      vector<SBNUR::SliceTrack> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SBNUR::SliceTrack>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SBNUR::SliceTrack>", -2, "vector", 339,
                  typeid(vector<SBNUR::SliceTrack>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESBNURcLcLSliceTrackgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SBNUR::SliceTrack>) );
      instance.SetNew(&new_vectorlESBNURcLcLSliceTrackgR);
      instance.SetNewArray(&newArray_vectorlESBNURcLcLSliceTrackgR);
      instance.SetDelete(&delete_vectorlESBNURcLcLSliceTrackgR);
      instance.SetDeleteArray(&deleteArray_vectorlESBNURcLcLSliceTrackgR);
      instance.SetDestructor(&destruct_vectorlESBNURcLcLSliceTrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SBNUR::SliceTrack> >()));

      ::ROOT::AddClassAlternate("vector<SBNUR::SliceTrack>","std::vector<SBNUR::SliceTrack, std::allocator<SBNUR::SliceTrack> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SBNUR::SliceTrack>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESBNURcLcLSliceTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SBNUR::SliceTrack>*)0x0)->GetClass();
      vectorlESBNURcLcLSliceTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESBNURcLcLSliceTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESBNURcLcLSliceTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SBNUR::SliceTrack> : new vector<SBNUR::SliceTrack>;
   }
   static void *newArray_vectorlESBNURcLcLSliceTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SBNUR::SliceTrack>[nElements] : new vector<SBNUR::SliceTrack>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESBNURcLcLSliceTrackgR(void *p) {
      delete ((vector<SBNUR::SliceTrack>*)p);
   }
   static void deleteArray_vectorlESBNURcLcLSliceTrackgR(void *p) {
      delete [] ((vector<SBNUR::SliceTrack>*)p);
   }
   static void destruct_vectorlESBNURcLcLSliceTrackgR(void *p) {
      typedef vector<SBNUR::SliceTrack> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SBNUR::SliceTrack>

namespace ROOT {
   static TClass *vectorlESBNURcLcLSliceShowergR_Dictionary();
   static void vectorlESBNURcLcLSliceShowergR_TClassManip(TClass*);
   static void *new_vectorlESBNURcLcLSliceShowergR(void *p = 0);
   static void *newArray_vectorlESBNURcLcLSliceShowergR(Long_t size, void *p);
   static void delete_vectorlESBNURcLcLSliceShowergR(void *p);
   static void deleteArray_vectorlESBNURcLcLSliceShowergR(void *p);
   static void destruct_vectorlESBNURcLcLSliceShowergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SBNUR::SliceShower>*)
   {
      vector<SBNUR::SliceShower> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SBNUR::SliceShower>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SBNUR::SliceShower>", -2, "vector", 339,
                  typeid(vector<SBNUR::SliceShower>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESBNURcLcLSliceShowergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SBNUR::SliceShower>) );
      instance.SetNew(&new_vectorlESBNURcLcLSliceShowergR);
      instance.SetNewArray(&newArray_vectorlESBNURcLcLSliceShowergR);
      instance.SetDelete(&delete_vectorlESBNURcLcLSliceShowergR);
      instance.SetDeleteArray(&deleteArray_vectorlESBNURcLcLSliceShowergR);
      instance.SetDestructor(&destruct_vectorlESBNURcLcLSliceShowergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SBNUR::SliceShower> >()));

      ::ROOT::AddClassAlternate("vector<SBNUR::SliceShower>","std::vector<SBNUR::SliceShower, std::allocator<SBNUR::SliceShower> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SBNUR::SliceShower>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESBNURcLcLSliceShowergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SBNUR::SliceShower>*)0x0)->GetClass();
      vectorlESBNURcLcLSliceShowergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESBNURcLcLSliceShowergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESBNURcLcLSliceShowergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SBNUR::SliceShower> : new vector<SBNUR::SliceShower>;
   }
   static void *newArray_vectorlESBNURcLcLSliceShowergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SBNUR::SliceShower>[nElements] : new vector<SBNUR::SliceShower>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESBNURcLcLSliceShowergR(void *p) {
      delete ((vector<SBNUR::SliceShower>*)p);
   }
   static void deleteArray_vectorlESBNURcLcLSliceShowergR(void *p) {
      delete [] ((vector<SBNUR::SliceShower>*)p);
   }
   static void destruct_vectorlESBNURcLcLSliceShowergR(void *p) {
      typedef vector<SBNUR::SliceShower> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SBNUR::SliceShower>

namespace {
  void TriggerDictionaryInitialization_DataFormats_Dict_Impl() {
    static const char* headers[] = {
"include/ShowerBase.h",
"include/Vertex.h",
"include/TrackBase.h",
"include/Spill.h",
"include/SliceShower.h",
"include/SliceTrack.h",
"include/Slice.h",
0
    };
    static const char* includePaths[] = {
"./",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_22_06a/Linux64bit+3.10-2.17-e19-p383b-prof/include/",
"/icarus/app/users/jskim/SBNAnalyzer/DataFormats/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DataFormats_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace SBNUR{class __attribute__((annotate("$clingAutoload$include/ShowerBase.h")))  ShowerBase;}
namespace SBNUR{class __attribute__((annotate("$clingAutoload$include/Vertex.h")))  Vertex;}
namespace SBNUR{class __attribute__((annotate("$clingAutoload$include/TrackBase.h")))  TrackBase;}
namespace SBNUR{class __attribute__((annotate("$clingAutoload$include/Spill.h")))  Spill;}
namespace SBNUR{class __attribute__((annotate("$clingAutoload$include/SliceShower.h")))  SliceShower;}
namespace SBNUR{class __attribute__((annotate("$clingAutoload$include/SliceTrack.h")))  SliceTrack;}
namespace SBNUR{class __attribute__((annotate("$clingAutoload$include/Slice.h")))  Slice;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormats_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/ShowerBase.h"
#include "include/Vertex.h"
#include "include/TrackBase.h"
#include "include/Spill.h"
#include "include/SliceShower.h"
#include "include/SliceTrack.h"
#include "include/Slice.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"SBNUR::ShowerBase", payloadCode, "@",
"SBNUR::Slice", payloadCode, "@",
"SBNUR::SliceShower", payloadCode, "@",
"SBNUR::SliceTrack", payloadCode, "@",
"SBNUR::Spill", payloadCode, "@",
"SBNUR::TrackBase", payloadCode, "@",
"SBNUR::Vertex", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormats_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormats_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormats_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormats_Dict() {
  TriggerDictionaryInitialization_DataFormats_Dict_Impl();
}
