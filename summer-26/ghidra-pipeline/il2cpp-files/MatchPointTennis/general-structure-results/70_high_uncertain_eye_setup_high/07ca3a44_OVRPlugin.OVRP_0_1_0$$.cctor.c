/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_0$$.cctor
ENTRY_POINT: 07ca3a44
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_0___cctor(long param_1)

{
  ulong uVar1;
  int unaff_w20;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + (long)unaff_w20 * 8 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
    uVar3 = 0;
    uVar1 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    do {
      if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      FUN_07ca39c0();
      uVar1 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18));
  }
  return;
}


