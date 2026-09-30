/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 06acb220
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__get_faceTrackingEnabled(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((param_1 == 0) && (iVar1 = FUN_06acac5c(*(undefined4 *)(unaff_x20 + 0x8c)), iVar1 == 0)) {
    FUN_06aca9ac();
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


