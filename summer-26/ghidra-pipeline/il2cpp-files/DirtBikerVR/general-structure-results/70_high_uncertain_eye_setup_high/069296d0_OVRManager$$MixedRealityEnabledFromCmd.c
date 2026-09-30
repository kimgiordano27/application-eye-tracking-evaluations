/*
FUNCTION_NAME: OVRManager$$MixedRealityEnabledFromCmd
ENTRY_POINT: 069296d0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__MixedRealityEnabledFromCmd(void)

{
  ulong uVar1;
  long lVar2;
  int in_w9;
  uint uVar3;
  ulong uVar4;
  
  if (in_w9 == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c9c218();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_07c721e4();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = (uint)*(ulong *)(lVar2 + 0x18);
    uVar1 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    if (0 < (int)uVar3) {
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        uVar1 = uVar1 - 1;
        uVar4 = uVar4 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}


