/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 07c7c3a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__GetHandTrackingEnabled(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *unaff_x19;
  uint unaff_w21;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  uStack000000000000002c = param_2._12_4_;
  unaff_x19[1] = param_2._8_8_;
  *unaff_x19 = param_2._0_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
  return unaff_w21 & 1;
}


