/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraFov
ENTRY_POINT: 04f602c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__OverrideExternalCameraFov(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  undefined4 uVar4;
  
  do {
    uVar2 = FUN_05d0d5bc(unaff_x20,0);
    if ((uVar2 & 1) != 0) {
      if ((unaff_x19 == 0) || (lVar3 = FUN_05c89340(), lVar3 == 0)) break;
      uVar4 = FUN_05c9bf94(lVar3,0);
      lVar3 = FUN_05c89340();
      if (lVar3 == 0) break;
      FUN_05c9a10c(lVar3,0);
      lVar3 = FUN_05c89340(unaff_x20,0);
      if (lVar3 == 0) break;
      FUN_05c9bf94(lVar3,0);
      lVar3 = FUN_05c89340(unaff_x20,0);
      if (lVar3 == 0) break;
      FUN_05c9a10c(lVar3,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar2 = FUN_05d15438(uVar4);
      if ((uVar2 & 1) != 0) goto LAB_04f603e0;
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    unaff_w24 = unaff_w24 + 1;
    unaff_w22 = (int)unaff_w24 < (int)uVar1;
    if ((int)uVar1 <= (int)unaff_w24) {
LAB_04f603e0:
      return unaff_w22 & 1;
    }
    if (uVar1 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    unaff_x20 = *(long *)(unaff_x21 + (long)(int)unaff_w24 * 8 + 0x20);
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


