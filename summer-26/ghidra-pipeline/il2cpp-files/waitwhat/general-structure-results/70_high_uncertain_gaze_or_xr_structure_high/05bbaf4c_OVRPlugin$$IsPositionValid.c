/*
FUNCTION_NAME: OVRPlugin$$IsPositionValid
ENTRY_POINT: 05bbaf4c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsPositionValid(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w9;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  if (in_w9 == 0) {
    thunk_FUN_031e5338(param_1);
  }
  uVar1 = FUN_05b2fdf8();
  uVar2 = *unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  uVar1 = thunk_FUN_031c3cac(*(undefined8 *)(unaff_x19 + 0x20),uVar2);
  uVar2 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  uVar1 = thunk_FUN_031c3cac(*(undefined8 *)(unaff_x19 + 0x30),uVar2);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  return;
}


