/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraFov
ENTRY_POINT: 04f603ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__GetUseOverriddenExternalCameraFov
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x21;
  byte unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s15;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  
  do {
    uStack0000000000000000 = unaff_s15;
    uStack0000000000000004 = unaff_s8;
    uStack0000000000000008 = unaff_s9;
    uVar3 = FUN_05d15438(param_1);
    if ((uVar3 & 1) != 0) {
LAB_04f603e0:
      return unaff_w22 & 1;
    }
    do {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      unaff_w24 = unaff_w24 + 1;
      unaff_w22 = (int)unaff_w24 < (int)uVar1;
      if ((int)uVar1 <= (int)unaff_w24) goto LAB_04f603e0;
      if (uVar1 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar4 = *(long *)(unaff_x21 + (long)(int)unaff_w24 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_04f6040c;
      uVar3 = FUN_05d0d5bc(lVar4,0);
    } while ((uVar3 & 1) == 0);
    if ((unaff_x19 == 0) || (lVar2 = FUN_05c89340(), lVar2 == 0)) {
LAB_04f6040c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_1 = FUN_05c9bf94(lVar2,0);
    unaff_s8 = param_2;
    unaff_s9 = param_3;
    lVar2 = FUN_05c89340();
    if (lVar2 == 0) goto LAB_04f6040c;
    FUN_05c9a10c(lVar2,0);
    lVar2 = FUN_05c89340(lVar4,0);
    if (lVar2 == 0) goto LAB_04f6040c;
    unaff_s15 = FUN_05c9bf94(lVar2,0);
    lVar4 = FUN_05c89340(lVar4,0);
    if (lVar4 == 0) goto LAB_04f6040c;
    FUN_05c9a10c(lVar4,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
  } while( true );
}


