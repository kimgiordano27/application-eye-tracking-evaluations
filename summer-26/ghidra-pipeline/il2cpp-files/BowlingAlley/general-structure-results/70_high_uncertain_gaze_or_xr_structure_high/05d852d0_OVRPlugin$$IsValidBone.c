/*
FUNCTION_NAME: OVRPlugin$$IsValidBone
ENTRY_POINT: 05d852d0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsValidBone(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  long lVar1;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = unaff_x21 + (long)unaff_w19 * 0x1c;
  *(long *)(lVar1 + 0x34) = param_1._8_8_;
  *(long *)(lVar1 + 0x2c) = param_1._0_8_;
  *(long *)(lVar1 + 0x28) = param_2._8_8_;
  *(long *)(lVar1 + 0x20) = param_2._0_8_;
  FUN_05d8552c(param_3,unaff_w19,*(undefined8 *)(unaff_x20 + 0x40));
  return;
}


