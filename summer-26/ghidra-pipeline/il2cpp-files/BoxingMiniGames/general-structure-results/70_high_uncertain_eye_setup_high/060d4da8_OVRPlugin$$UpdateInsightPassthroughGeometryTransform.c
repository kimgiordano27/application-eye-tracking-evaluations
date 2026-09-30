/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 060d4da8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateInsightPassthroughGeometryTransform(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0xe28));
  *(undefined1 *)(unaff_x21 + 0xaaa) = 1;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar1 = FUN_071c0684(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_071bd0d0();
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  if (lVar2 != 0) {
    FUN_071d0360(lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


