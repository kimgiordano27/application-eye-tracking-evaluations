/*
FUNCTION_NAME: OVRPlugin$$set_tiledMultiResLevel
ENTRY_POINT: 05bc52cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__set_tiledMultiResLevel(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  undefined4 uVar4;
  
  while (lVar2 = FUN_069d3a80(), lVar2 != 0) {
    uVar4 = FUN_069e6fbc(lVar2,0);
    lVar2 = FUN_069d3a80();
    if (lVar2 == 0) break;
    FUN_069e5200(lVar2,0);
    lVar2 = FUN_069d3a80(unaff_x20,0);
    if (lVar2 == 0) break;
    FUN_069e6fbc(lVar2,0);
    lVar2 = FUN_069d3a80(unaff_x20,0);
    if (lVar2 == 0) break;
    FUN_069e5200(lVar2,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar3 = FUN_06a5f828(uVar4);
    if ((uVar3 & 1) != 0) {
LAB_05bc53d0:
      return unaff_w22 & 1;
    }
    do {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      unaff_w24 = unaff_w24 + 1;
      unaff_w22 = (int)unaff_w24 < (int)uVar1;
      if ((int)uVar1 <= (int)unaff_w24) goto LAB_05bc53d0;
      if (uVar1 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      unaff_x20 = *(long *)(unaff_x21 + (long)(int)unaff_w24 * 8 + 0x20);
      if (unaff_x20 == 0) goto LAB_05bc53fc;
      uVar3 = FUN_06a589b8(unaff_x20,0);
    } while ((uVar3 & 1) == 0);
    if (unaff_x19 == 0) break;
  }
LAB_05bc53fc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


