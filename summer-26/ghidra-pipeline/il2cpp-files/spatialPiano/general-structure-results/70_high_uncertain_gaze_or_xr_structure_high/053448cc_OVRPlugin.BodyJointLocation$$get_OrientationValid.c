/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_OrientationValid
ENTRY_POINT: 053448cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin_BodyJointLocation__get_OrientationValid(long param_1)

{
  uint uVar1;
  uint *unaff_x19;
  uint unaff_w20;
  
  if (unaff_w20 < *(uint *)(param_1 + 0x18)) {
    uVar1 = *(uint *)(param_1 + (long)(int)unaff_w20 * 4 + 0x20);
    *unaff_x19 = uVar1;
    return ~uVar1 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


