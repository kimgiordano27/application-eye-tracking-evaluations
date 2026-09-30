/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__452_0
ENTRY_POINT: 0565df70
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_<>c__<InitOVRManager>b__452_0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 != 0) {
    FUN_05660ef8(lVar1,*(int *)(lVar1 + 0xa8) + 1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


