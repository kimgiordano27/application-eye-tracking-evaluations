/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 033ce284
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__get_faceTrackingEnabled(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*(byte *)(*param_2 + 0x130) < *(byte *)(param_1 + 0x130)) {
    param_2 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) !=
           param_1) {
    param_2 = (long *)0x0;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(param_1);
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  uVar1 = FUN_033e256c(param_2);
  return uVar1;
}


