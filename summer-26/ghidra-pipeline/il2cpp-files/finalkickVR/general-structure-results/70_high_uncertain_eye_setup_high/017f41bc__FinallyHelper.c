/*
FUNCTION_NAME: ~FinallyHelper
ENTRY_POINT: 017f41bc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* il2cpp::utils::FinallyHelper<OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::$_1,
   false>::~FinallyHelper() */

void __thiscall
il2cpp::utils::
FinallyHelper<OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::$_1,false>::
~FinallyHelper(FinallyHelper<OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::__1,false>
               *this)

{
  OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::$_1::operator()
            ((__1 *)(this + 8));
  if (*(long *)this != 0) {
    RethrowException(*(Il2CppException **)this);
  }
  return;
}


