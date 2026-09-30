/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_PollEvent
ENTRY_POINT: 04f91624
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0__ovrp_PollEvent(void)

{
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  do {
    if (in_w8 <= (uint)unaff_x21) goto LAB_04f91698;
    if (*(long *)(unaff_x20 + 0x20 + unaff_x21 * 8) == 0) goto LAB_04f91694;
    FUN_04f9169c();
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    unaff_x21 = unaff_x21 + 1;
  } while ((int)unaff_x21 < (int)in_w8);
  FUN_04f91744();
  if (*(long *)(unaff_x19 + 0x30) == 0) {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_04f91694:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) == 0) {
LAB_04f91698:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    FUN_04f917cc();
  }
  FUN_04e833f4();
  return;
}


