/*
FUNCTION_NAME: OVRPlugin$$get_version
ENTRY_POINT: 01a131a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_version(long param_1,long param_2)

{
  long in_x9;
  uint in_w10;
  undefined4 in_register_00004054;
  uint in_w11;
  undefined1 auVar1 [16];
  
  if ((in_w10 <= in_w11) &&
     (*(long *)(*(long *)(in_x9 + 200) + CONCAT44(in_register_00004054,in_w10) * 8 + -8) == param_1)
     ) {
    auVar1._0_4_ = -*(float *)(param_2 + 0x14);
    auVar1._4_4_ = -*(float *)(param_2 + 0x18);
    auVar1._8_4_ = -*(float *)(param_2 + 0x1c);
    auVar1._12_4_ = -*(float *)(param_2 + 0x20);
    auVar1 = NEON_rev64(auVar1,4);
    *(long *)(param_2 + 0x1c) = auVar1._8_8_;
    *(long *)(param_2 + 0x14) = auVar1._0_8_;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


