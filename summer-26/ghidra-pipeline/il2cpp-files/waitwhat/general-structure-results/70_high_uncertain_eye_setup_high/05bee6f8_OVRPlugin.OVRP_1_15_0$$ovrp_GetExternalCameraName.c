/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraName
ENTRY_POINT: 05bee6f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraName(void)

{
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  
  if ((*(long *)(unaff_x21 + 0x10) != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
    if ((unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x10) + 0x18)) &&
       (unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18))) {
      FUN_05b5ed20();
      *(uint *)(unaff_x21 + 0x44) = *(uint *)(unaff_x21 + 0x44) & (unaff_w23 ^ 0xffffffff);
      if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_05bee78c;
      if (unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18)) {
        FUN_05b74f50();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_05bee78c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


