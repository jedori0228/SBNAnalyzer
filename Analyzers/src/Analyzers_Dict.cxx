// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME srcdIAnalyzers_Dict
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
#include "include/AnalyzerCore.h"
#include "include/ExampleRun.h"
#include "include/SBNNtuple.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *SBNNtuple_Dictionary();
   static void SBNNtuple_TClassManip(TClass*);
   static void *new_SBNNtuple(void *p = 0);
   static void *newArray_SBNNtuple(Long_t size, void *p);
   static void delete_SBNNtuple(void *p);
   static void deleteArray_SBNNtuple(void *p);
   static void destruct_SBNNtuple(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBNNtuple*)
   {
      ::SBNNtuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SBNNtuple));
      static ::ROOT::TGenericClassInfo 
         instance("SBNNtuple", "SBNNtuple.h", 18,
                  typeid(::SBNNtuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SBNNtuple_Dictionary, isa_proxy, 4,
                  sizeof(::SBNNtuple) );
      instance.SetNew(&new_SBNNtuple);
      instance.SetNewArray(&newArray_SBNNtuple);
      instance.SetDelete(&delete_SBNNtuple);
      instance.SetDeleteArray(&deleteArray_SBNNtuple);
      instance.SetDestructor(&destruct_SBNNtuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBNNtuple*)
   {
      return GenerateInitInstanceLocal((::SBNNtuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SBNNtuple*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SBNNtuple_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::SBNNtuple*)0x0)->GetClass();
      SBNNtuple_TClassManip(theClass);
   return theClass;
   }

   static void SBNNtuple_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AnalyzerCore_Dictionary();
   static void AnalyzerCore_TClassManip(TClass*);
   static void *new_AnalyzerCore(void *p = 0);
   static void *newArray_AnalyzerCore(Long_t size, void *p);
   static void delete_AnalyzerCore(void *p);
   static void deleteArray_AnalyzerCore(void *p);
   static void destruct_AnalyzerCore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AnalyzerCore*)
   {
      ::AnalyzerCore *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AnalyzerCore));
      static ::ROOT::TGenericClassInfo 
         instance("AnalyzerCore", "AnalyzerCore.h", 27,
                  typeid(::AnalyzerCore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AnalyzerCore_Dictionary, isa_proxy, 4,
                  sizeof(::AnalyzerCore) );
      instance.SetNew(&new_AnalyzerCore);
      instance.SetNewArray(&newArray_AnalyzerCore);
      instance.SetDelete(&delete_AnalyzerCore);
      instance.SetDeleteArray(&deleteArray_AnalyzerCore);
      instance.SetDestructor(&destruct_AnalyzerCore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AnalyzerCore*)
   {
      return GenerateInitInstanceLocal((::AnalyzerCore*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AnalyzerCore*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AnalyzerCore_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::AnalyzerCore*)0x0)->GetClass();
      AnalyzerCore_TClassManip(theClass);
   return theClass;
   }

   static void AnalyzerCore_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleRun_Dictionary();
   static void ExampleRun_TClassManip(TClass*);
   static void *new_ExampleRun(void *p = 0);
   static void *newArray_ExampleRun(Long_t size, void *p);
   static void delete_ExampleRun(void *p);
   static void deleteArray_ExampleRun(void *p);
   static void destruct_ExampleRun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleRun*)
   {
      ::ExampleRun *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleRun));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleRun", "ExampleRun.h", 6,
                  typeid(::ExampleRun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleRun_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleRun) );
      instance.SetNew(&new_ExampleRun);
      instance.SetNewArray(&newArray_ExampleRun);
      instance.SetDelete(&delete_ExampleRun);
      instance.SetDeleteArray(&deleteArray_ExampleRun);
      instance.SetDestructor(&destruct_ExampleRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleRun*)
   {
      return GenerateInitInstanceLocal((::ExampleRun*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleRun*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleRun_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleRun*)0x0)->GetClass();
      ExampleRun_TClassManip(theClass);
   return theClass;
   }

   static void ExampleRun_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBNNtuple(void *p) {
      return  p ? new(p) ::SBNNtuple : new ::SBNNtuple;
   }
   static void *newArray_SBNNtuple(Long_t nElements, void *p) {
      return p ? new(p) ::SBNNtuple[nElements] : new ::SBNNtuple[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBNNtuple(void *p) {
      delete ((::SBNNtuple*)p);
   }
   static void deleteArray_SBNNtuple(void *p) {
      delete [] ((::SBNNtuple*)p);
   }
   static void destruct_SBNNtuple(void *p) {
      typedef ::SBNNtuple current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SBNNtuple

namespace ROOT {
   // Wrappers around operator new
   static void *new_AnalyzerCore(void *p) {
      return  p ? new(p) ::AnalyzerCore : new ::AnalyzerCore;
   }
   static void *newArray_AnalyzerCore(Long_t nElements, void *p) {
      return p ? new(p) ::AnalyzerCore[nElements] : new ::AnalyzerCore[nElements];
   }
   // Wrapper around operator delete
   static void delete_AnalyzerCore(void *p) {
      delete ((::AnalyzerCore*)p);
   }
   static void deleteArray_AnalyzerCore(void *p) {
      delete [] ((::AnalyzerCore*)p);
   }
   static void destruct_AnalyzerCore(void *p) {
      typedef ::AnalyzerCore current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AnalyzerCore

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleRun(void *p) {
      return  p ? new(p) ::ExampleRun : new ::ExampleRun;
   }
   static void *newArray_ExampleRun(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleRun[nElements] : new ::ExampleRun[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleRun(void *p) {
      delete ((::ExampleRun*)p);
   }
   static void deleteArray_ExampleRun(void *p) {
      delete [] ((::ExampleRun*)p);
   }
   static void destruct_ExampleRun(void *p) {
      typedef ::ExampleRun current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleRun

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 339,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = 0);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 339,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));

      ::ROOT::AddClassAlternate("vector<TString>","std::vector<TString, std::allocator<TString> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)0x0)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *maplETStringcOTH3DmUgR_Dictionary();
   static void maplETStringcOTH3DmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTH3DmUgR(void *p = 0);
   static void *newArray_maplETStringcOTH3DmUgR(Long_t size, void *p);
   static void delete_maplETStringcOTH3DmUgR(void *p);
   static void deleteArray_maplETStringcOTH3DmUgR(void *p);
   static void destruct_maplETStringcOTH3DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TH3D*>*)
   {
      map<TString,TH3D*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TH3D*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TH3D*>", -2, "map", 100,
                  typeid(map<TString,TH3D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTH3DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TH3D*>) );
      instance.SetNew(&new_maplETStringcOTH3DmUgR);
      instance.SetNewArray(&newArray_maplETStringcOTH3DmUgR);
      instance.SetDelete(&delete_maplETStringcOTH3DmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTH3DmUgR);
      instance.SetDestructor(&destruct_maplETStringcOTH3DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TH3D*> >()));

      ::ROOT::AddClassAlternate("map<TString,TH3D*>","std::map<TString, TH3D*, std::less<TString>, std::allocator<std::pair<TString const, TH3D*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TH3D*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTH3DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TH3D*>*)0x0)->GetClass();
      maplETStringcOTH3DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTH3DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTH3DmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TH3D*> : new map<TString,TH3D*>;
   }
   static void *newArray_maplETStringcOTH3DmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TH3D*>[nElements] : new map<TString,TH3D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTH3DmUgR(void *p) {
      delete ((map<TString,TH3D*>*)p);
   }
   static void deleteArray_maplETStringcOTH3DmUgR(void *p) {
      delete [] ((map<TString,TH3D*>*)p);
   }
   static void destruct_maplETStringcOTH3DmUgR(void *p) {
      typedef map<TString,TH3D*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TH3D*>

namespace ROOT {
   static TClass *maplETStringcOTH2DmUgR_Dictionary();
   static void maplETStringcOTH2DmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTH2DmUgR(void *p = 0);
   static void *newArray_maplETStringcOTH2DmUgR(Long_t size, void *p);
   static void delete_maplETStringcOTH2DmUgR(void *p);
   static void deleteArray_maplETStringcOTH2DmUgR(void *p);
   static void destruct_maplETStringcOTH2DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TH2D*>*)
   {
      map<TString,TH2D*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TH2D*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TH2D*>", -2, "map", 100,
                  typeid(map<TString,TH2D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTH2DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TH2D*>) );
      instance.SetNew(&new_maplETStringcOTH2DmUgR);
      instance.SetNewArray(&newArray_maplETStringcOTH2DmUgR);
      instance.SetDelete(&delete_maplETStringcOTH2DmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTH2DmUgR);
      instance.SetDestructor(&destruct_maplETStringcOTH2DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TH2D*> >()));

      ::ROOT::AddClassAlternate("map<TString,TH2D*>","std::map<TString, TH2D*, std::less<TString>, std::allocator<std::pair<TString const, TH2D*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TH2D*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTH2DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TH2D*>*)0x0)->GetClass();
      maplETStringcOTH2DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTH2DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTH2DmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TH2D*> : new map<TString,TH2D*>;
   }
   static void *newArray_maplETStringcOTH2DmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TH2D*>[nElements] : new map<TString,TH2D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTH2DmUgR(void *p) {
      delete ((map<TString,TH2D*>*)p);
   }
   static void deleteArray_maplETStringcOTH2DmUgR(void *p) {
      delete [] ((map<TString,TH2D*>*)p);
   }
   static void destruct_maplETStringcOTH2DmUgR(void *p) {
      typedef map<TString,TH2D*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TH2D*>

namespace ROOT {
   static TClass *maplETStringcOTH1DmUgR_Dictionary();
   static void maplETStringcOTH1DmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTH1DmUgR(void *p = 0);
   static void *newArray_maplETStringcOTH1DmUgR(Long_t size, void *p);
   static void delete_maplETStringcOTH1DmUgR(void *p);
   static void deleteArray_maplETStringcOTH1DmUgR(void *p);
   static void destruct_maplETStringcOTH1DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TH1D*>*)
   {
      map<TString,TH1D*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TH1D*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TH1D*>", -2, "map", 100,
                  typeid(map<TString,TH1D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTH1DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TH1D*>) );
      instance.SetNew(&new_maplETStringcOTH1DmUgR);
      instance.SetNewArray(&newArray_maplETStringcOTH1DmUgR);
      instance.SetDelete(&delete_maplETStringcOTH1DmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTH1DmUgR);
      instance.SetDestructor(&destruct_maplETStringcOTH1DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TH1D*> >()));

      ::ROOT::AddClassAlternate("map<TString,TH1D*>","std::map<TString, TH1D*, std::less<TString>, std::allocator<std::pair<TString const, TH1D*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TH1D*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTH1DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TH1D*>*)0x0)->GetClass();
      maplETStringcOTH1DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTH1DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTH1DmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TH1D*> : new map<TString,TH1D*>;
   }
   static void *newArray_maplETStringcOTH1DmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TH1D*>[nElements] : new map<TString,TH1D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTH1DmUgR(void *p) {
      delete ((map<TString,TH1D*>*)p);
   }
   static void deleteArray_maplETStringcOTH1DmUgR(void *p) {
      delete [] ((map<TString,TH1D*>*)p);
   }
   static void destruct_maplETStringcOTH1DmUgR(void *p) {
      typedef map<TString,TH1D*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TH1D*>

namespace {
  void TriggerDictionaryInitialization_Analyzers_Dict_Impl() {
    static const char* headers[] = {
"include/AnalyzerCore.h",
"include/ExampleRun.h",
"include/SBNNtuple.h",
0
    };
    static const char* includePaths[] = {
"./",
"/icarus/app/users/jskim/SBNAnalyzer/DataFormats/include/",
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_22_06a/Linux64bit+3.10-2.17-e19-p383b-prof/include/",
"/icarus/app/users/jskim/SBNAnalyzer/Analyzers/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Analyzers_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$SBNNtuple.h")))  __attribute__((annotate("$clingAutoload$include/AnalyzerCore.h")))  SBNNtuple;
class __attribute__((annotate("$clingAutoload$include/AnalyzerCore.h")))  AnalyzerCore;
class __attribute__((annotate("$clingAutoload$include/ExampleRun.h")))  ExampleRun;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Analyzers_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/AnalyzerCore.h"
#include "include/ExampleRun.h"
#include "include/SBNNtuple.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"AnalyzerCore", payloadCode, "@",
"ExampleRun", payloadCode, "@",
"SBNNtuple", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Analyzers_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Analyzers_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Analyzers_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Analyzers_Dict() {
  TriggerDictionaryInitialization_Analyzers_Dict_Impl();
}
