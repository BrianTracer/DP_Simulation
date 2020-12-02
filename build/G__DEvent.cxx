// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__DEvent
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
#include "Utility/Object/include/Object/DHit.h"
#include "Utility/Object/include/Object/DParticle.h"
#include "Utility/Object/include/Object/DStep.h"
#include "Utility/Object/include/Object/SimulatedHit.h"
#include "Utility/Object/include/Object/CalorimeterHit.h"
#include "Utility/Object/include/Object/McParticle.h"
#include "Utility/Object/include/Object/ReconstructedParticle.h"
#include "Utility/Object/include/Object/DEvent.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_DHit(void *p = 0);
   static void *newArray_DHit(Long_t size, void *p);
   static void delete_DHit(void *p);
   static void deleteArray_DHit(void *p);
   static void destruct_DHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DHit*)
   {
      ::DHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DHit", ::DHit::Class_Version(), "Object/DHit.h", 14,
                  typeid(::DHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DHit::Dictionary, isa_proxy, 4,
                  sizeof(::DHit) );
      instance.SetNew(&new_DHit);
      instance.SetNewArray(&newArray_DHit);
      instance.SetDelete(&delete_DHit);
      instance.SetDeleteArray(&deleteArray_DHit);
      instance.SetDestructor(&destruct_DHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DHit*)
   {
      return GenerateInitInstanceLocal((::DHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DParticle(void *p = 0);
   static void *newArray_DParticle(Long_t size, void *p);
   static void delete_DParticle(void *p);
   static void deleteArray_DParticle(void *p);
   static void destruct_DParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DParticle*)
   {
      ::DParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DParticle", ::DParticle::Class_Version(), "Object/DParticle.h", 13,
                  typeid(::DParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DParticle::Dictionary, isa_proxy, 4,
                  sizeof(::DParticle) );
      instance.SetNew(&new_DParticle);
      instance.SetNewArray(&newArray_DParticle);
      instance.SetDelete(&delete_DParticle);
      instance.SetDeleteArray(&deleteArray_DParticle);
      instance.SetDestructor(&destruct_DParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DParticle*)
   {
      return GenerateInitInstanceLocal((::DParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DStep(void *p = 0);
   static void *newArray_DStep(Long_t size, void *p);
   static void delete_DStep(void *p);
   static void deleteArray_DStep(void *p);
   static void destruct_DStep(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DStep*)
   {
      ::DStep *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DStep >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DStep", ::DStep::Class_Version(), "Object/DStep.h", 12,
                  typeid(::DStep), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DStep::Dictionary, isa_proxy, 4,
                  sizeof(::DStep) );
      instance.SetNew(&new_DStep);
      instance.SetNewArray(&newArray_DStep);
      instance.SetDelete(&delete_DStep);
      instance.SetDeleteArray(&deleteArray_DStep);
      instance.SetDestructor(&destruct_DStep);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DStep*)
   {
      return GenerateInitInstanceLocal((::DStep*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DStep*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CalorimeterHit(void *p = 0);
   static void *newArray_CalorimeterHit(Long_t size, void *p);
   static void delete_CalorimeterHit(void *p);
   static void deleteArray_CalorimeterHit(void *p);
   static void destruct_CalorimeterHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CalorimeterHit*)
   {
      ::CalorimeterHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CalorimeterHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CalorimeterHit", ::CalorimeterHit::Class_Version(), "Object/CalorimeterHit.h", 13,
                  typeid(::CalorimeterHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CalorimeterHit::Dictionary, isa_proxy, 4,
                  sizeof(::CalorimeterHit) );
      instance.SetNew(&new_CalorimeterHit);
      instance.SetNewArray(&newArray_CalorimeterHit);
      instance.SetDelete(&delete_CalorimeterHit);
      instance.SetDeleteArray(&deleteArray_CalorimeterHit);
      instance.SetDestructor(&destruct_CalorimeterHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CalorimeterHit*)
   {
      return GenerateInitInstanceLocal((::CalorimeterHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CalorimeterHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ReconstructedParticle(void *p = 0);
   static void *newArray_ReconstructedParticle(Long_t size, void *p);
   static void delete_ReconstructedParticle(void *p);
   static void deleteArray_ReconstructedParticle(void *p);
   static void destruct_ReconstructedParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ReconstructedParticle*)
   {
      ::ReconstructedParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ReconstructedParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ReconstructedParticle", ::ReconstructedParticle::Class_Version(), "Object/ReconstructedParticle.h", 13,
                  typeid(::ReconstructedParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ReconstructedParticle::Dictionary, isa_proxy, 4,
                  sizeof(::ReconstructedParticle) );
      instance.SetNew(&new_ReconstructedParticle);
      instance.SetNewArray(&newArray_ReconstructedParticle);
      instance.SetDelete(&delete_ReconstructedParticle);
      instance.SetDeleteArray(&deleteArray_ReconstructedParticle);
      instance.SetDestructor(&destruct_ReconstructedParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ReconstructedParticle*)
   {
      return GenerateInitInstanceLocal((::ReconstructedParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ReconstructedParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_McParticle(void *p = 0);
   static void *newArray_McParticle(Long_t size, void *p);
   static void delete_McParticle(void *p);
   static void deleteArray_McParticle(void *p);
   static void destruct_McParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::McParticle*)
   {
      ::McParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::McParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("McParticle", ::McParticle::Class_Version(), "Object/McParticle.h", 13,
                  typeid(::McParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::McParticle::Dictionary, isa_proxy, 4,
                  sizeof(::McParticle) );
      instance.SetNew(&new_McParticle);
      instance.SetNewArray(&newArray_McParticle);
      instance.SetDelete(&delete_McParticle);
      instance.SetDeleteArray(&deleteArray_McParticle);
      instance.SetDestructor(&destruct_McParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::McParticle*)
   {
      return GenerateInitInstanceLocal((::McParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::McParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SimulatedHit(void *p = 0);
   static void *newArray_SimulatedHit(Long_t size, void *p);
   static void delete_SimulatedHit(void *p);
   static void deleteArray_SimulatedHit(void *p);
   static void destruct_SimulatedHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SimulatedHit*)
   {
      ::SimulatedHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SimulatedHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SimulatedHit", ::SimulatedHit::Class_Version(), "Object/SimulatedHit.h", 15,
                  typeid(::SimulatedHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SimulatedHit::Dictionary, isa_proxy, 4,
                  sizeof(::SimulatedHit) );
      instance.SetNew(&new_SimulatedHit);
      instance.SetNewArray(&newArray_SimulatedHit);
      instance.SetDelete(&delete_SimulatedHit);
      instance.SetDeleteArray(&deleteArray_SimulatedHit);
      instance.SetDestructor(&destruct_SimulatedHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SimulatedHit*)
   {
      return GenerateInitInstanceLocal((::SimulatedHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SimulatedHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DEvent(void *p = 0);
   static void *newArray_DEvent(Long_t size, void *p);
   static void delete_DEvent(void *p);
   static void deleteArray_DEvent(void *p);
   static void destruct_DEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DEvent*)
   {
      ::DEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DEvent", ::DEvent::Class_Version(), "Object/DEvent.h", 26,
                  typeid(::DEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DEvent::Dictionary, isa_proxy, 4,
                  sizeof(::DEvent) );
      instance.SetNew(&new_DEvent);
      instance.SetNewArray(&newArray_DEvent);
      instance.SetDelete(&delete_DEvent);
      instance.SetDeleteArray(&deleteArray_DEvent);
      instance.SetDestructor(&destruct_DEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DEvent*)
   {
      return GenerateInitInstanceLocal((::DEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr DHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DHit::Class_Name()
{
   return "DHit";
}

//______________________________________________________________________________
const char *DHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DParticle::Class_Name()
{
   return "DParticle";
}

//______________________________________________________________________________
const char *DParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DStep::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DStep::Class_Name()
{
   return "DStep";
}

//______________________________________________________________________________
const char *DStep::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DStep*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DStep::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DStep*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DStep::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DStep*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DStep::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DStep*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CalorimeterHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CalorimeterHit::Class_Name()
{
   return "CalorimeterHit";
}

//______________________________________________________________________________
const char *CalorimeterHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CalorimeterHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CalorimeterHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CalorimeterHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CalorimeterHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CalorimeterHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CalorimeterHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CalorimeterHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ReconstructedParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ReconstructedParticle::Class_Name()
{
   return "ReconstructedParticle";
}

//______________________________________________________________________________
const char *ReconstructedParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ReconstructedParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ReconstructedParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ReconstructedParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ReconstructedParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ReconstructedParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ReconstructedParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ReconstructedParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr McParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *McParticle::Class_Name()
{
   return "McParticle";
}

//______________________________________________________________________________
const char *McParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::McParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int McParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::McParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *McParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::McParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *McParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::McParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SimulatedHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SimulatedHit::Class_Name()
{
   return "SimulatedHit";
}

//______________________________________________________________________________
const char *SimulatedHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SimulatedHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SimulatedHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SimulatedHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SimulatedHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SimulatedHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SimulatedHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SimulatedHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DEvent::Class_Name()
{
   return "DEvent";
}

//______________________________________________________________________________
const char *DEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void DHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class DHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(DHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DHit(void *p) {
      return  p ? new(p) ::DHit : new ::DHit;
   }
   static void *newArray_DHit(Long_t nElements, void *p) {
      return p ? new(p) ::DHit[nElements] : new ::DHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_DHit(void *p) {
      delete ((::DHit*)p);
   }
   static void deleteArray_DHit(void *p) {
      delete [] ((::DHit*)p);
   }
   static void destruct_DHit(void *p) {
      typedef ::DHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DHit

//______________________________________________________________________________
void DParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class DParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(DParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DParticle(void *p) {
      return  p ? new(p) ::DParticle : new ::DParticle;
   }
   static void *newArray_DParticle(Long_t nElements, void *p) {
      return p ? new(p) ::DParticle[nElements] : new ::DParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_DParticle(void *p) {
      delete ((::DParticle*)p);
   }
   static void deleteArray_DParticle(void *p) {
      delete [] ((::DParticle*)p);
   }
   static void destruct_DParticle(void *p) {
      typedef ::DParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DParticle

//______________________________________________________________________________
void DStep::Streamer(TBuffer &R__b)
{
   // Stream an object of class DStep.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DStep::Class(),this);
   } else {
      R__b.WriteClassBuffer(DStep::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DStep(void *p) {
      return  p ? new(p) ::DStep : new ::DStep;
   }
   static void *newArray_DStep(Long_t nElements, void *p) {
      return p ? new(p) ::DStep[nElements] : new ::DStep[nElements];
   }
   // Wrapper around operator delete
   static void delete_DStep(void *p) {
      delete ((::DStep*)p);
   }
   static void deleteArray_DStep(void *p) {
      delete [] ((::DStep*)p);
   }
   static void destruct_DStep(void *p) {
      typedef ::DStep current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DStep

//______________________________________________________________________________
void CalorimeterHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CalorimeterHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CalorimeterHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CalorimeterHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CalorimeterHit(void *p) {
      return  p ? new(p) ::CalorimeterHit : new ::CalorimeterHit;
   }
   static void *newArray_CalorimeterHit(Long_t nElements, void *p) {
      return p ? new(p) ::CalorimeterHit[nElements] : new ::CalorimeterHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CalorimeterHit(void *p) {
      delete ((::CalorimeterHit*)p);
   }
   static void deleteArray_CalorimeterHit(void *p) {
      delete [] ((::CalorimeterHit*)p);
   }
   static void destruct_CalorimeterHit(void *p) {
      typedef ::CalorimeterHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CalorimeterHit

//______________________________________________________________________________
void ReconstructedParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class ReconstructedParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ReconstructedParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(ReconstructedParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ReconstructedParticle(void *p) {
      return  p ? new(p) ::ReconstructedParticle : new ::ReconstructedParticle;
   }
   static void *newArray_ReconstructedParticle(Long_t nElements, void *p) {
      return p ? new(p) ::ReconstructedParticle[nElements] : new ::ReconstructedParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_ReconstructedParticle(void *p) {
      delete ((::ReconstructedParticle*)p);
   }
   static void deleteArray_ReconstructedParticle(void *p) {
      delete [] ((::ReconstructedParticle*)p);
   }
   static void destruct_ReconstructedParticle(void *p) {
      typedef ::ReconstructedParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ReconstructedParticle

//______________________________________________________________________________
void McParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class McParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(McParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(McParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_McParticle(void *p) {
      return  p ? new(p) ::McParticle : new ::McParticle;
   }
   static void *newArray_McParticle(Long_t nElements, void *p) {
      return p ? new(p) ::McParticle[nElements] : new ::McParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_McParticle(void *p) {
      delete ((::McParticle*)p);
   }
   static void deleteArray_McParticle(void *p) {
      delete [] ((::McParticle*)p);
   }
   static void destruct_McParticle(void *p) {
      typedef ::McParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::McParticle

//______________________________________________________________________________
void SimulatedHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class SimulatedHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SimulatedHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(SimulatedHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SimulatedHit(void *p) {
      return  p ? new(p) ::SimulatedHit : new ::SimulatedHit;
   }
   static void *newArray_SimulatedHit(Long_t nElements, void *p) {
      return p ? new(p) ::SimulatedHit[nElements] : new ::SimulatedHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_SimulatedHit(void *p) {
      delete ((::SimulatedHit*)p);
   }
   static void deleteArray_SimulatedHit(void *p) {
      delete [] ((::SimulatedHit*)p);
   }
   static void destruct_SimulatedHit(void *p) {
      typedef ::SimulatedHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SimulatedHit

//______________________________________________________________________________
void DEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class DEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(DEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DEvent(void *p) {
      return  p ? new(p) ::DEvent : new ::DEvent;
   }
   static void *newArray_DEvent(Long_t nElements, void *p) {
      return p ? new(p) ::DEvent[nElements] : new ::DEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_DEvent(void *p) {
      delete ((::DEvent*)p);
   }
   static void deleteArray_DEvent(void *p) {
      delete [] ((::DEvent*)p);
   }
   static void destruct_DEvent(void *p) {
      typedef ::DEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DEvent

namespace ROOT {
   static TClass *vectorlESimulatedHitmUgR_Dictionary();
   static void vectorlESimulatedHitmUgR_TClassManip(TClass*);
   static void *new_vectorlESimulatedHitmUgR(void *p = 0);
   static void *newArray_vectorlESimulatedHitmUgR(Long_t size, void *p);
   static void delete_vectorlESimulatedHitmUgR(void *p);
   static void deleteArray_vectorlESimulatedHitmUgR(void *p);
   static void destruct_vectorlESimulatedHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SimulatedHit*>*)
   {
      vector<SimulatedHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SimulatedHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SimulatedHit*>", -2, "vector", 386,
                  typeid(vector<SimulatedHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESimulatedHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<SimulatedHit*>) );
      instance.SetNew(&new_vectorlESimulatedHitmUgR);
      instance.SetNewArray(&newArray_vectorlESimulatedHitmUgR);
      instance.SetDelete(&delete_vectorlESimulatedHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlESimulatedHitmUgR);
      instance.SetDestructor(&destruct_vectorlESimulatedHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SimulatedHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SimulatedHit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESimulatedHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SimulatedHit*>*)0x0)->GetClass();
      vectorlESimulatedHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESimulatedHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESimulatedHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SimulatedHit*> : new vector<SimulatedHit*>;
   }
   static void *newArray_vectorlESimulatedHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SimulatedHit*>[nElements] : new vector<SimulatedHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESimulatedHitmUgR(void *p) {
      delete ((vector<SimulatedHit*>*)p);
   }
   static void deleteArray_vectorlESimulatedHitmUgR(void *p) {
      delete [] ((vector<SimulatedHit*>*)p);
   }
   static void destruct_vectorlESimulatedHitmUgR(void *p) {
      typedef vector<SimulatedHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SimulatedHit*>

namespace ROOT {
   static TClass *vectorlEReconstructedParticlemUgR_Dictionary();
   static void vectorlEReconstructedParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlEReconstructedParticlemUgR(void *p = 0);
   static void *newArray_vectorlEReconstructedParticlemUgR(Long_t size, void *p);
   static void delete_vectorlEReconstructedParticlemUgR(void *p);
   static void deleteArray_vectorlEReconstructedParticlemUgR(void *p);
   static void destruct_vectorlEReconstructedParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ReconstructedParticle*>*)
   {
      vector<ReconstructedParticle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ReconstructedParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ReconstructedParticle*>", -2, "vector", 386,
                  typeid(vector<ReconstructedParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEReconstructedParticlemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ReconstructedParticle*>) );
      instance.SetNew(&new_vectorlEReconstructedParticlemUgR);
      instance.SetNewArray(&newArray_vectorlEReconstructedParticlemUgR);
      instance.SetDelete(&delete_vectorlEReconstructedParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEReconstructedParticlemUgR);
      instance.SetDestructor(&destruct_vectorlEReconstructedParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ReconstructedParticle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ReconstructedParticle*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEReconstructedParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ReconstructedParticle*>*)0x0)->GetClass();
      vectorlEReconstructedParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEReconstructedParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEReconstructedParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ReconstructedParticle*> : new vector<ReconstructedParticle*>;
   }
   static void *newArray_vectorlEReconstructedParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ReconstructedParticle*>[nElements] : new vector<ReconstructedParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEReconstructedParticlemUgR(void *p) {
      delete ((vector<ReconstructedParticle*>*)p);
   }
   static void deleteArray_vectorlEReconstructedParticlemUgR(void *p) {
      delete [] ((vector<ReconstructedParticle*>*)p);
   }
   static void destruct_vectorlEReconstructedParticlemUgR(void *p) {
      typedef vector<ReconstructedParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ReconstructedParticle*>

namespace ROOT {
   static TClass *vectorlEMcParticlemUgR_Dictionary();
   static void vectorlEMcParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlEMcParticlemUgR(void *p = 0);
   static void *newArray_vectorlEMcParticlemUgR(Long_t size, void *p);
   static void delete_vectorlEMcParticlemUgR(void *p);
   static void deleteArray_vectorlEMcParticlemUgR(void *p);
   static void destruct_vectorlEMcParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<McParticle*>*)
   {
      vector<McParticle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<McParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<McParticle*>", -2, "vector", 386,
                  typeid(vector<McParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMcParticlemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<McParticle*>) );
      instance.SetNew(&new_vectorlEMcParticlemUgR);
      instance.SetNewArray(&newArray_vectorlEMcParticlemUgR);
      instance.SetDelete(&delete_vectorlEMcParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMcParticlemUgR);
      instance.SetDestructor(&destruct_vectorlEMcParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<McParticle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<McParticle*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMcParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<McParticle*>*)0x0)->GetClass();
      vectorlEMcParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMcParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMcParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<McParticle*> : new vector<McParticle*>;
   }
   static void *newArray_vectorlEMcParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<McParticle*>[nElements] : new vector<McParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMcParticlemUgR(void *p) {
      delete ((vector<McParticle*>*)p);
   }
   static void deleteArray_vectorlEMcParticlemUgR(void *p) {
      delete [] ((vector<McParticle*>*)p);
   }
   static void destruct_vectorlEMcParticlemUgR(void *p) {
      typedef vector<McParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<McParticle*>

namespace ROOT {
   static TClass *vectorlEDStepmUgR_Dictionary();
   static void vectorlEDStepmUgR_TClassManip(TClass*);
   static void *new_vectorlEDStepmUgR(void *p = 0);
   static void *newArray_vectorlEDStepmUgR(Long_t size, void *p);
   static void delete_vectorlEDStepmUgR(void *p);
   static void deleteArray_vectorlEDStepmUgR(void *p);
   static void destruct_vectorlEDStepmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DStep*>*)
   {
      vector<DStep*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DStep*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DStep*>", -2, "vector", 386,
                  typeid(vector<DStep*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDStepmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<DStep*>) );
      instance.SetNew(&new_vectorlEDStepmUgR);
      instance.SetNewArray(&newArray_vectorlEDStepmUgR);
      instance.SetDelete(&delete_vectorlEDStepmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDStepmUgR);
      instance.SetDestructor(&destruct_vectorlEDStepmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DStep*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DStep*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDStepmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DStep*>*)0x0)->GetClass();
      vectorlEDStepmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDStepmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDStepmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DStep*> : new vector<DStep*>;
   }
   static void *newArray_vectorlEDStepmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DStep*>[nElements] : new vector<DStep*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDStepmUgR(void *p) {
      delete ((vector<DStep*>*)p);
   }
   static void deleteArray_vectorlEDStepmUgR(void *p) {
      delete [] ((vector<DStep*>*)p);
   }
   static void destruct_vectorlEDStepmUgR(void *p) {
      typedef vector<DStep*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DStep*>

namespace ROOT {
   static TClass *vectorlEDParticlemUgR_Dictionary();
   static void vectorlEDParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlEDParticlemUgR(void *p = 0);
   static void *newArray_vectorlEDParticlemUgR(Long_t size, void *p);
   static void delete_vectorlEDParticlemUgR(void *p);
   static void deleteArray_vectorlEDParticlemUgR(void *p);
   static void destruct_vectorlEDParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DParticle*>*)
   {
      vector<DParticle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DParticle*>", -2, "vector", 386,
                  typeid(vector<DParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDParticlemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<DParticle*>) );
      instance.SetNew(&new_vectorlEDParticlemUgR);
      instance.SetNewArray(&newArray_vectorlEDParticlemUgR);
      instance.SetDelete(&delete_vectorlEDParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDParticlemUgR);
      instance.SetDestructor(&destruct_vectorlEDParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DParticle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DParticle*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DParticle*>*)0x0)->GetClass();
      vectorlEDParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DParticle*> : new vector<DParticle*>;
   }
   static void *newArray_vectorlEDParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DParticle*>[nElements] : new vector<DParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDParticlemUgR(void *p) {
      delete ((vector<DParticle*>*)p);
   }
   static void deleteArray_vectorlEDParticlemUgR(void *p) {
      delete [] ((vector<DParticle*>*)p);
   }
   static void destruct_vectorlEDParticlemUgR(void *p) {
      typedef vector<DParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DParticle*>

namespace ROOT {
   static TClass *vectorlEDHitmUgR_Dictionary();
   static void vectorlEDHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEDHitmUgR(void *p = 0);
   static void *newArray_vectorlEDHitmUgR(Long_t size, void *p);
   static void delete_vectorlEDHitmUgR(void *p);
   static void deleteArray_vectorlEDHitmUgR(void *p);
   static void destruct_vectorlEDHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DHit*>*)
   {
      vector<DHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DHit*>", -2, "vector", 386,
                  typeid(vector<DHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<DHit*>) );
      instance.SetNew(&new_vectorlEDHitmUgR);
      instance.SetNewArray(&newArray_vectorlEDHitmUgR);
      instance.SetDelete(&delete_vectorlEDHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDHitmUgR);
      instance.SetDestructor(&destruct_vectorlEDHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DHit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DHit*>*)0x0)->GetClass();
      vectorlEDHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DHit*> : new vector<DHit*>;
   }
   static void *newArray_vectorlEDHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DHit*>[nElements] : new vector<DHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDHitmUgR(void *p) {
      delete ((vector<DHit*>*)p);
   }
   static void deleteArray_vectorlEDHitmUgR(void *p) {
      delete [] ((vector<DHit*>*)p);
   }
   static void destruct_vectorlEDHitmUgR(void *p) {
      typedef vector<DHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DHit*>

namespace ROOT {
   static TClass *vectorlECalorimeterHitmUgR_Dictionary();
   static void vectorlECalorimeterHitmUgR_TClassManip(TClass*);
   static void *new_vectorlECalorimeterHitmUgR(void *p = 0);
   static void *newArray_vectorlECalorimeterHitmUgR(Long_t size, void *p);
   static void delete_vectorlECalorimeterHitmUgR(void *p);
   static void deleteArray_vectorlECalorimeterHitmUgR(void *p);
   static void destruct_vectorlECalorimeterHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CalorimeterHit*>*)
   {
      vector<CalorimeterHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CalorimeterHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CalorimeterHit*>", -2, "vector", 386,
                  typeid(vector<CalorimeterHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECalorimeterHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<CalorimeterHit*>) );
      instance.SetNew(&new_vectorlECalorimeterHitmUgR);
      instance.SetNewArray(&newArray_vectorlECalorimeterHitmUgR);
      instance.SetDelete(&delete_vectorlECalorimeterHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlECalorimeterHitmUgR);
      instance.SetDestructor(&destruct_vectorlECalorimeterHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CalorimeterHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CalorimeterHit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECalorimeterHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CalorimeterHit*>*)0x0)->GetClass();
      vectorlECalorimeterHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECalorimeterHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECalorimeterHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CalorimeterHit*> : new vector<CalorimeterHit*>;
   }
   static void *newArray_vectorlECalorimeterHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CalorimeterHit*>[nElements] : new vector<CalorimeterHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECalorimeterHitmUgR(void *p) {
      delete ((vector<CalorimeterHit*>*)p);
   }
   static void deleteArray_vectorlECalorimeterHitmUgR(void *p) {
      delete [] ((vector<CalorimeterHit*>*)p);
   }
   static void destruct_vectorlECalorimeterHitmUgR(void *p) {
      typedef vector<CalorimeterHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CalorimeterHit*>

namespace ROOT {
   static TClass *maplEstringcOvectorlESimulatedHitmUgRmUgR_Dictionary();
   static void maplEstringcOvectorlESimulatedHitmUgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlESimulatedHitmUgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlESimulatedHitmUgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlESimulatedHitmUgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlESimulatedHitmUgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlESimulatedHitmUgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<SimulatedHit*>*>*)
   {
      map<string,vector<SimulatedHit*>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<SimulatedHit*>*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<SimulatedHit*>*>", -2, "map", 100,
                  typeid(map<string,vector<SimulatedHit*>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlESimulatedHitmUgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<SimulatedHit*>*>) );
      instance.SetNew(&new_maplEstringcOvectorlESimulatedHitmUgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlESimulatedHitmUgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlESimulatedHitmUgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlESimulatedHitmUgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlESimulatedHitmUgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<SimulatedHit*>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,vector<SimulatedHit*>*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlESimulatedHitmUgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<SimulatedHit*>*>*)0x0)->GetClass();
      maplEstringcOvectorlESimulatedHitmUgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlESimulatedHitmUgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlESimulatedHitmUgRmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<SimulatedHit*>*> : new map<string,vector<SimulatedHit*>*>;
   }
   static void *newArray_maplEstringcOvectorlESimulatedHitmUgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<SimulatedHit*>*>[nElements] : new map<string,vector<SimulatedHit*>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlESimulatedHitmUgRmUgR(void *p) {
      delete ((map<string,vector<SimulatedHit*>*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlESimulatedHitmUgRmUgR(void *p) {
      delete [] ((map<string,vector<SimulatedHit*>*>*)p);
   }
   static void destruct_maplEstringcOvectorlESimulatedHitmUgRmUgR(void *p) {
      typedef map<string,vector<SimulatedHit*>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<SimulatedHit*>*>

namespace ROOT {
   static TClass *maplEstringcOvectorlEReconstructedParticlemUgRmUgR_Dictionary();
   static void maplEstringcOvectorlEReconstructedParticlemUgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEReconstructedParticlemUgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEReconstructedParticlemUgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEReconstructedParticlemUgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlEReconstructedParticlemUgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlEReconstructedParticlemUgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<ReconstructedParticle*>*>*)
   {
      map<string,vector<ReconstructedParticle*>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<ReconstructedParticle*>*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<ReconstructedParticle*>*>", -2, "map", 100,
                  typeid(map<string,vector<ReconstructedParticle*>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEReconstructedParticlemUgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<ReconstructedParticle*>*>) );
      instance.SetNew(&new_maplEstringcOvectorlEReconstructedParticlemUgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEReconstructedParticlemUgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEReconstructedParticlemUgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEReconstructedParticlemUgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEReconstructedParticlemUgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<ReconstructedParticle*>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,vector<ReconstructedParticle*>*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEReconstructedParticlemUgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<ReconstructedParticle*>*>*)0x0)->GetClass();
      maplEstringcOvectorlEReconstructedParticlemUgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEReconstructedParticlemUgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEReconstructedParticlemUgRmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<ReconstructedParticle*>*> : new map<string,vector<ReconstructedParticle*>*>;
   }
   static void *newArray_maplEstringcOvectorlEReconstructedParticlemUgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<ReconstructedParticle*>*>[nElements] : new map<string,vector<ReconstructedParticle*>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEReconstructedParticlemUgRmUgR(void *p) {
      delete ((map<string,vector<ReconstructedParticle*>*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlEReconstructedParticlemUgRmUgR(void *p) {
      delete [] ((map<string,vector<ReconstructedParticle*>*>*)p);
   }
   static void destruct_maplEstringcOvectorlEReconstructedParticlemUgRmUgR(void *p) {
      typedef map<string,vector<ReconstructedParticle*>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<ReconstructedParticle*>*>

namespace ROOT {
   static TClass *maplEstringcOvectorlEMcParticlemUgRmUgR_Dictionary();
   static void maplEstringcOvectorlEMcParticlemUgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEMcParticlemUgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEMcParticlemUgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEMcParticlemUgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlEMcParticlemUgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlEMcParticlemUgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<McParticle*>*>*)
   {
      map<string,vector<McParticle*>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<McParticle*>*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<McParticle*>*>", -2, "map", 100,
                  typeid(map<string,vector<McParticle*>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEMcParticlemUgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<McParticle*>*>) );
      instance.SetNew(&new_maplEstringcOvectorlEMcParticlemUgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEMcParticlemUgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEMcParticlemUgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEMcParticlemUgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEMcParticlemUgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<McParticle*>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,vector<McParticle*>*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEMcParticlemUgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<McParticle*>*>*)0x0)->GetClass();
      maplEstringcOvectorlEMcParticlemUgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEMcParticlemUgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEMcParticlemUgRmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<McParticle*>*> : new map<string,vector<McParticle*>*>;
   }
   static void *newArray_maplEstringcOvectorlEMcParticlemUgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<McParticle*>*>[nElements] : new map<string,vector<McParticle*>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEMcParticlemUgRmUgR(void *p) {
      delete ((map<string,vector<McParticle*>*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlEMcParticlemUgRmUgR(void *p) {
      delete [] ((map<string,vector<McParticle*>*>*)p);
   }
   static void destruct_maplEstringcOvectorlEMcParticlemUgRmUgR(void *p) {
      typedef map<string,vector<McParticle*>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<McParticle*>*>

namespace ROOT {
   static TClass *maplEstringcOvectorlEDStepmUgRmUgR_Dictionary();
   static void maplEstringcOvectorlEDStepmUgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEDStepmUgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEDStepmUgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEDStepmUgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlEDStepmUgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlEDStepmUgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<DStep*>*>*)
   {
      map<string,vector<DStep*>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<DStep*>*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<DStep*>*>", -2, "map", 100,
                  typeid(map<string,vector<DStep*>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEDStepmUgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<DStep*>*>) );
      instance.SetNew(&new_maplEstringcOvectorlEDStepmUgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEDStepmUgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEDStepmUgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEDStepmUgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEDStepmUgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<DStep*>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,vector<DStep*>*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEDStepmUgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<DStep*>*>*)0x0)->GetClass();
      maplEstringcOvectorlEDStepmUgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEDStepmUgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEDStepmUgRmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<DStep*>*> : new map<string,vector<DStep*>*>;
   }
   static void *newArray_maplEstringcOvectorlEDStepmUgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<DStep*>*>[nElements] : new map<string,vector<DStep*>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEDStepmUgRmUgR(void *p) {
      delete ((map<string,vector<DStep*>*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlEDStepmUgRmUgR(void *p) {
      delete [] ((map<string,vector<DStep*>*>*)p);
   }
   static void destruct_maplEstringcOvectorlEDStepmUgRmUgR(void *p) {
      typedef map<string,vector<DStep*>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<DStep*>*>

namespace ROOT {
   static TClass *maplEstringcOvectorlECalorimeterHitmUgRmUgR_Dictionary();
   static void maplEstringcOvectorlECalorimeterHitmUgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlECalorimeterHitmUgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlECalorimeterHitmUgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlECalorimeterHitmUgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlECalorimeterHitmUgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlECalorimeterHitmUgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<CalorimeterHit*>*>*)
   {
      map<string,vector<CalorimeterHit*>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<CalorimeterHit*>*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<CalorimeterHit*>*>", -2, "map", 100,
                  typeid(map<string,vector<CalorimeterHit*>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlECalorimeterHitmUgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<CalorimeterHit*>*>) );
      instance.SetNew(&new_maplEstringcOvectorlECalorimeterHitmUgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlECalorimeterHitmUgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlECalorimeterHitmUgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlECalorimeterHitmUgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlECalorimeterHitmUgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<CalorimeterHit*>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,vector<CalorimeterHit*>*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlECalorimeterHitmUgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<CalorimeterHit*>*>*)0x0)->GetClass();
      maplEstringcOvectorlECalorimeterHitmUgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlECalorimeterHitmUgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlECalorimeterHitmUgRmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<CalorimeterHit*>*> : new map<string,vector<CalorimeterHit*>*>;
   }
   static void *newArray_maplEstringcOvectorlECalorimeterHitmUgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<CalorimeterHit*>*>[nElements] : new map<string,vector<CalorimeterHit*>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlECalorimeterHitmUgRmUgR(void *p) {
      delete ((map<string,vector<CalorimeterHit*>*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlECalorimeterHitmUgRmUgR(void *p) {
      delete [] ((map<string,vector<CalorimeterHit*>*>*)p);
   }
   static void destruct_maplEstringcOvectorlECalorimeterHitmUgRmUgR(void *p) {
      typedef map<string,vector<CalorimeterHit*>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<CalorimeterHit*>*>

namespace {
  void TriggerDictionaryInitialization_libDEvent_Impl() {
    static const char* headers[] = {
"Utility/Object/include/Object/DHit.h",
"Utility/Object/include/Object/DParticle.h",
"Utility/Object/include/Object/DStep.h",
"Utility/Object/include/Object/SimulatedHit.h",
"Utility/Object/include/Object/CalorimeterHit.h",
"Utility/Object/include/Object/McParticle.h",
"Utility/Object/include/Object/ReconstructedParticle.h",
"Utility/Object/include/Object/DEvent.h",
0
    };
    static const char* includePaths[] = {
"/cvmfs/sft.cern.ch/lcg/releases/clhep/2.4.1.3-78165/x86_64-centos7-gcc9-opt/lib/CLHEP-2.4.1.3/../../include",
"/cvmfs/sft.cern.ch/lcg/views/LCG_97rc4python3/x86_64-centos7-gcc9-opt/include/Geant4",
"/cvmfs/sft.cern.ch/lcg/releases/XercesC/3.1.3-b3bf1/x86_64-centos7-gcc9-opt/include",
"/cvmfs/sft.cern.ch/lcg/releases/XercesC/3.1.3-b3bf1/x86_64-centos7-gcc9-opt/lib/libxerces-c.so",
"/cvmfs/sft.cern.ch/lcg/views/LCG_97rc4python3/x86_64-centos7-gcc9-opt/include",
"/home/chenxiang/Dark_photon/add_DM/DP_simu/include",
"/home/chenxiang/Dark_photon/add_DM/DP_ana/include",
"/home/chenxiang/Dark_photon/add_DM/Utility/Eigen",
"/home/chenxiang/Dark_photon/add_DM/.",
"/home/chenxiang/Dark_photon/add_DM/Utility/Object/include",
"/home/chenxiang/Dark_photon/add_DM/Utility/UTIL/include",
"/home/chenxiang/Dark_photon/add_DM/Algorithms/ExampleProcessor/include",
"/home/chenxiang/Dark_photon/add_DM/Algorithms/MCTruthAnalysis/include",
"/home/chenxiang/Dark_photon/add_DM/Algorithms/RecECAL/include",
"/home/chenxiang/Dark_photon/add_DM",
"/cvmfs/sft.cern.ch/lcg/releases/ROOT/v6.20.00-60a6c/x86_64-centos7-gcc9-opt/include/",
"/home/chenxiang/Dark_photon/add_DM/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libDEvent dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$Utility/Object/include/Object/DStep.h")))  DStep;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$Object/McParticle.h")))  __attribute__((annotate("$clingAutoload$Utility/Object/include/Object/SimulatedHit.h")))  McParticle;
class __attribute__((annotate("$clingAutoload$Object/ReconstructedParticle.h")))  __attribute__((annotate("$clingAutoload$Utility/Object/include/Object/SimulatedHit.h")))  ReconstructedParticle;
class __attribute__((annotate("$clingAutoload$Utility/Object/include/Object/SimulatedHit.h")))  SimulatedHit;
class __attribute__((annotate("$clingAutoload$Object/CalorimeterHit.h")))  __attribute__((annotate("$clingAutoload$Utility/Object/include/Object/SimulatedHit.h")))  CalorimeterHit;
class __attribute__((annotate("$clingAutoload$Utility/Object/include/Object/DParticle.h")))  DParticle;
class __attribute__((annotate("$clingAutoload$Utility/Object/include/Object/DHit.h")))  DHit;
class __attribute__((annotate("$clingAutoload$Utility/Object/include/Object/DEvent.h")))  DEvent;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libDEvent dictionary payload"

#ifndef VECCORE_ENABLE_VC
  #define VECCORE_ENABLE_VC 1
#endif
#ifndef VECCORE_ENABLE_VC
  #define VECCORE_ENABLE_VC 1
#endif
#ifndef VECGEOM_VC
  #define VECGEOM_VC 1
#endif
#ifndef VECGEOM_QUADRILATERALS_VC
  #define VECGEOM_QUADRILATERALS_VC 1
#endif
#ifndef VECGEOM_NO_SPECIALIZATION
  #define VECGEOM_NO_SPECIALIZATION 1
#endif
#ifndef VECGEOM_ROOT
  #define VECGEOM_ROOT 1
#endif
#ifndef VECGEOM_INPLACE_TRANSFORMATIONS
  #define VECGEOM_INPLACE_TRANSFORMATIONS 1
#endif
#ifndef VECGEOM_USE_INDEXEDNAVSTATES
  #define VECGEOM_USE_INDEXEDNAVSTATES 1
#endif
#ifndef G4UI_USE_TCSH
  #define G4UI_USE_TCSH 1
#endif
#ifndef G4INTY_USE_XT
  #define G4INTY_USE_XT 1
#endif
#ifndef G4VIS_USE_RAYTRACERX
  #define G4VIS_USE_RAYTRACERX 1
#endif
#ifndef G4INTY_USE_QT
  #define G4INTY_USE_QT 1
#endif
#ifndef G4UI_USE_QT
  #define G4UI_USE_QT 1
#endif
#ifndef G4VIS_USE_OPENGLQT
  #define G4VIS_USE_OPENGLQT 1
#endif
#ifndef G4UI_USE_XM
  #define G4UI_USE_XM 1
#endif
#ifndef G4VIS_USE_OPENGLXM
  #define G4VIS_USE_OPENGLXM 1
#endif
#ifndef G4VIS_USE_OPENGLX
  #define G4VIS_USE_OPENGLX 1
#endif
#ifndef G4VIS_USE_OPENGL
  #define G4VIS_USE_OPENGL 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Utility/Object/include/Object/DHit.h"
#include "Utility/Object/include/Object/DParticle.h"
#include "Utility/Object/include/Object/DStep.h"
#include "Utility/Object/include/Object/SimulatedHit.h"
#include "Utility/Object/include/Object/CalorimeterHit.h"
#include "Utility/Object/include/Object/McParticle.h"
#include "Utility/Object/include/Object/ReconstructedParticle.h"
#include "Utility/Object/include/Object/DEvent.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CalorimeterHit", payloadCode, "@",
"DEvent", payloadCode, "@",
"DHit", payloadCode, "@",
"DParticle", payloadCode, "@",
"DStep", payloadCode, "@",
"McParticle", payloadCode, "@",
"ReconstructedParticle", payloadCode, "@",
"SimulatedHit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libDEvent",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libDEvent_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libDEvent_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libDEvent() {
  TriggerDictionaryInitialization_libDEvent_Impl();
}
