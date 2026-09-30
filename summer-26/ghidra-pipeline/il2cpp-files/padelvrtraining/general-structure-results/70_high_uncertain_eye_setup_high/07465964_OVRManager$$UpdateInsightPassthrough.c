/*
FUNCTION_NAME: OVRManager$$UpdateInsightPassthrough
ENTRY_POINT: 07465964
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateInsightPassthrough(void)

{
  int iVar1;
  ulong uVar2;
  int in_w8;
  long unaff_x19;
  
  if (in_w8 == 0) {
    thunk_FUN_03db619c();
  }
  uVar2 = FUN_08a52164();
  if ((uVar2 & 1) == 0) {
    FUN_074659b8();
    iVar1 = FUN_0745ffa0();
    *(int *)(unaff_x19 + 400) = iVar1;
    if (iVar1 != 0) {
      *(undefined1 *)(unaff_x19 + 0x178) = 1;
    }
  }
  return;
}


