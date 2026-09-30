/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResSupported
ENTRY_POINT: 06927afc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_tiledMultiResSupported(ulong param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  int unaff_w26;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  while (unaff_x21 < param_1) {
    fVar4 = (float)FUN_07c41c70(param_2 + unaff_x23,0);
    fVar4 = (fVar4 - unaff_s10) / (unaff_s11 - unaff_s9);
    do {
      if (unaff_x21 != unaff_w26 - 1) {
        lVar1 = FUN_07c420b4();
        if (lVar1 == 0) goto LAB_06927c50;
        if (*(uint *)(lVar1 + 0x18) <= unaff_x21) goto LAB_06927c7c;
        fVar5 = (float)FUN_07c41c60(lVar1 + unaff_x23,0);
        lVar1 = FUN_07c420b4();
        if (lVar1 == 0) goto LAB_06927c50;
        if (*(uint *)(lVar1 + 0x18) <= unaff_x21) goto LAB_06927c7c;
        fVar6 = (float)FUN_07c41c70(lVar1 + unaff_x23,0);
        lVar1 = FUN_07c420b4();
        if (lVar1 == 0) goto LAB_06927c50;
        if ((ulong)*(uint *)(lVar1 + 0x18) <= unaff_x21 + 1) goto LAB_06927c7c;
        iVar2 = (int)((ulong)unaff_x25 >> 0x20);
        fVar7 = (float)FUN_07c41c60(lVar1 + (long)iVar2 * (long)unaff_w24 + 0x20,0);
        lVar1 = FUN_07c420b4();
        if (lVar1 == 0) goto LAB_06927c50;
        if ((ulong)*(uint *)(lVar1 + 0x18) <= unaff_x21 + 1) goto LAB_06927c7c;
        fVar8 = (float)FUN_07c41c70(lVar1 + (long)iVar2 * (long)unaff_w24 + 0x20,0);
        unaff_s8 = (fVar8 - fVar6) / (fVar7 - fVar5);
      }
      FUN_07c41c88(fVar4,&stack0x00000040,0);
      FUN_07c41c98(unaff_s8,&stack0x00000040,0);
      if (unaff_x20 == 0) goto LAB_06927c50;
      FUN_07c42430();
      unaff_x21 = unaff_x21 + 1;
      lVar1 = FUN_07c420b4();
      unaff_x23 = unaff_x23 + 0x1c;
      unaff_x25 = unaff_x25 + unaff_x22;
      if (lVar1 == 0) goto LAB_06927c50;
      if ((long)*(int *)(lVar1 + 0x18) <= (long)unaff_x21) {
        return;
      }
      FUN_07c426dc(&stack0x00000020 + 4);
      uStack0000000000000048 = in_stack_00000020._12_4_;
      in_stack_00000040 = in_stack_00000020._4_8_;
      uStack0000000000000054 = in_stack_00000038;
      uStack000000000000004c = uStack0000000000000030;
      uStack0000000000000050 = uStack0000000000000034;
      lVar1 = FUN_07c420b4();
      if (lVar1 == 0) goto LAB_06927c50;
      unaff_s8 = 0.0;
      fVar4 = 0.0;
      unaff_w26 = *(int *)(lVar1 + 0x18);
    } while (unaff_x23 == 0x20);
    lVar1 = FUN_07c420b4();
    if (lVar1 == 0) {
LAB_06927c50:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = (int)unaff_x21 - 1;
    if (*(uint *)(lVar1 + 0x18) <= uVar3) break;
    unaff_s9 = (float)FUN_07c41c60(lVar1 + unaff_x23 + -0x1c,0);
    lVar1 = FUN_07c420b4();
    if (lVar1 == 0) goto LAB_06927c50;
    if (*(uint *)(lVar1 + 0x18) <= uVar3) break;
    unaff_s10 = (float)FUN_07c41c70(lVar1 + unaff_x23 + -0x1c,0);
    lVar1 = FUN_07c420b4();
    if (lVar1 == 0) goto LAB_06927c50;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) break;
    unaff_s11 = (float)FUN_07c41c60(lVar1 + unaff_x23,0);
    param_2 = FUN_07c420b4();
    if (param_2 == 0) goto LAB_06927c50;
    param_1 = (ulong)*(uint *)(param_2 + 0x18);
  }
LAB_06927c7c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


