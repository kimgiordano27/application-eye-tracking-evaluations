/*
FUNCTION_NAME: OVRManager$$get_gpuUtilLevel
ENTRY_POINT: 06927c44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_gpuUtilLevel(long param_1)

{
  long lVar1;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  while( true ) {
    unaff_x23 = unaff_x23 + 0x1c;
    unaff_x25 = unaff_x25 + unaff_x22;
    if (param_1 == 0) break;
    if ((long)*(int *)(param_1 + 0x18) <= (long)unaff_x21) {
      return;
    }
    FUN_07c426dc(&stack0x00000020 + 4);
    uStack0000000000000048 = in_stack_00000020._12_4_;
    in_stack_00000040 = in_stack_00000020._4_8_;
    uStack0000000000000054 = in_stack_00000038;
    uStack000000000000004c = uStack0000000000000030;
    uStack0000000000000050 = uStack0000000000000034;
    lVar1 = FUN_07c420b4();
    if (lVar1 == 0) break;
    fVar8 = 0.0;
    fVar4 = 0.0;
    iVar2 = *(int *)(lVar1 + 0x18);
    if (unaff_x23 != 0x20) {
      lVar1 = FUN_07c420b4();
      if (lVar1 == 0) break;
      uVar3 = (int)unaff_x21 - 1;
      if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_06927c7c;
      fVar4 = (float)FUN_07c41c60(lVar1 + unaff_x23 + -0x1c,0);
      lVar1 = FUN_07c420b4();
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_06927c7c;
      fVar5 = (float)FUN_07c41c70(lVar1 + unaff_x23 + -0x1c,0);
      lVar1 = FUN_07c420b4();
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= unaff_x21) goto LAB_06927c7c;
      fVar6 = (float)FUN_07c41c60(lVar1 + unaff_x23,0);
      lVar1 = FUN_07c420b4();
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= unaff_x21) goto LAB_06927c7c;
      fVar7 = (float)FUN_07c41c70(lVar1 + unaff_x23,0);
      fVar4 = (fVar7 - fVar5) / (fVar6 - fVar4);
    }
    if (unaff_x21 != iVar2 - 1) {
      lVar1 = FUN_07c420b4();
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= unaff_x21) {
LAB_06927c7c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      fVar8 = (float)FUN_07c41c60(lVar1 + unaff_x23,0);
      lVar1 = FUN_07c420b4();
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= unaff_x21) goto LAB_06927c7c;
      fVar5 = (float)FUN_07c41c70(lVar1 + unaff_x23,0);
      lVar1 = FUN_07c420b4();
      if (lVar1 == 0) break;
      if ((ulong)*(uint *)(lVar1 + 0x18) <= unaff_x21 + 1) goto LAB_06927c7c;
      iVar2 = (int)((ulong)unaff_x25 >> 0x20);
      fVar6 = (float)FUN_07c41c60(lVar1 + (long)iVar2 * (long)unaff_w24 + 0x20,0);
      lVar1 = FUN_07c420b4();
      if (lVar1 == 0) break;
      if ((ulong)*(uint *)(lVar1 + 0x18) <= unaff_x21 + 1) goto LAB_06927c7c;
      fVar7 = (float)FUN_07c41c70(lVar1 + (long)iVar2 * (long)unaff_w24 + 0x20,0);
      fVar8 = (fVar7 - fVar5) / (fVar6 - fVar8);
    }
    FUN_07c41c88(fVar4,&stack0x00000040,0);
    FUN_07c41c98(fVar8,&stack0x00000040,0);
    if (unaff_x20 == 0) break;
    FUN_07c42430();
    unaff_x21 = unaff_x21 + 1;
    param_1 = FUN_07c420b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


