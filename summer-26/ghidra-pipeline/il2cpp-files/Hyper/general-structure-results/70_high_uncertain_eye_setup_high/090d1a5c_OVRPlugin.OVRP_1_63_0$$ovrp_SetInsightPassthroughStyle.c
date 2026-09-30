/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_SetInsightPassthroughStyle
ENTRY_POINT: 090d1a5c
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_SetInsightPassthroughStyle(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac79718);
  *(undefined1 *)(unaff_x21 + 0x561) = 1;
  *(long *)(unaff_x20 + 0x30) = unaff_x19;
  thunk_FUN_049ee3d8((long *)(unaff_x20 + 0x30));
  if ((unaff_x19 != 0) && (lVar1 = *(long *)(unaff_x20 + 0x20), lVar1 != 0)) {
    FUN_084d75d8(lVar1,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x28),
                 *(undefined4 *)(lVar1 + 0x24),*(undefined8 *)PTR_DAT_0ac79710);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


