/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 05324550
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandTrackingState(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x21;
  
  uVar1 = FUN_04f6f6b4(*(undefined8 *)System_DivideByZeroException_TypeInfo,param_1,
                       *(undefined8 *)PTR_DAT_067cd9c0,0);
  if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f48);
  }
  FUN_060aa024(uVar1);
  uVar1 = FUN_060ed87c();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x21);
  }
  FUN_060f7028(uVar1,0);
  return;
}


