/*
FUNCTION_NAME: OVRPlugin.OVRP_1_32_0$$ovrp_AddCustomMetadata
ENTRY_POINT: 01db5590
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_32_0__ovrp_AddCustomMetadata(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_0102a860();
  }
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c();
  }
  if (unaff_x21 < lVar1) {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01da75f8();
  }
  return;
}


