/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_GetInsightPassthroughInitializationState
ENTRY_POINT: 036a27a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_GetInsightPassthroughInitializationState
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  int *piVar6;
  long unaff_x19;
  uint uVar7;
  long unaff_x20;
  
  piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_036a27dc;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_036a27dc:
  uVar3 = (*(code *)*puVar2)();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0x20),uVar3);
  if (*(char *)(unaff_x19 + 0x54) != '\0') {
    lVar4 = FUN_040703d4();
    if ((lVar4 == 0) ||
       (lVar4 = FUN_02336dec(lVar4,*(undefined8 *)
                                    Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_Encode__)
       , lVar4 == 0)) {
LAB_036a287c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar5 = *(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_036a287c;
        FUN_0404c858(lVar5,0,0);
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  return;
}


