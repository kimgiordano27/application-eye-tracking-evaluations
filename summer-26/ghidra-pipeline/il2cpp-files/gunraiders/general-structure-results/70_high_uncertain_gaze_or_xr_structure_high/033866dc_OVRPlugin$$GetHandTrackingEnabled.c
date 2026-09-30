/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 033866dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_0337fe8c();
  if (*(int *)(*(long *)System_Linq_Expressions_InvocationExpressionN_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)System_Linq_Expressions_InvocationExpressionN_TypeInfo);
  }
  bVar1 = FUN_0320e6d0(uVar2,0,0);
  *(byte *)(unaff_x19 + 0x88) = bVar1 & 1;
  FUN_03388748();
  return;
}


