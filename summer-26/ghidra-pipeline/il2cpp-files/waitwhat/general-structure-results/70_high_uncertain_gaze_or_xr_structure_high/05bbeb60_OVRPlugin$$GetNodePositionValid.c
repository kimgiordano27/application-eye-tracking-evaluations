/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 05bbeb60
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


void OVRPlugin__GetNodePositionValid(uint param_1)

{
  uint uVar1;
  uint in_w8;
  long unaff_x19;
  uint unaff_w20;
  
  uVar1 = (in_w8 | unaff_w20) & (param_1 ^ 0xffffffff);
  *(uint *)(unaff_x19 + 0x178) = uVar1;
  if ((param_1 != 0) && (uVar1 == 0)) {
    *(undefined1 *)(unaff_x19 + 0x169) = 1;
  }
  return;
}


