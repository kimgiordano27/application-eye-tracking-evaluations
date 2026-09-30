/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 06927bf4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_gpuUtilSupported(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
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
    FUN_07c41c88(param_1,&stack0x00000040,0);
    FUN_07c41c98(unaff_s8,&stack0x00000040,0);
    if (unaff_x20 == 0) break;
    FUN_07c42430();
    uVar1 = unaff_x21 + 1;
    lVar2 = FUN_07c420b4();
    unaff_x23 = unaff_x23 + 0x1c;
    unaff_x25 = unaff_x25 + unaff_x22;
    if (lVar2 == 0) break;
    if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar1) {
      return;
    }
    FUN_07c426dc(&stack0x00000020 + 4);
    uStack0000000000000048 = in_stack_00000020._12_4_;
    in_stack_00000040 = in_stack_00000020._4_8_;
    uStack0000000000000054 = in_stack_00000038;
    uStack000000000000004c = uStack0000000000000030;
    uStack0000000000000050 = uStack0000000000000034;
    lVar2 = FUN_07c420b4();
    if (lVar2 == 0) break;
    unaff_s8 = 0.0;
    fVar5 = 0.0;
    iVar3 = *(int *)(lVar2 + 0x18);
    if (unaff_x23 != 0x20) {
      lVar2 = FUN_07c420b4();
      if (lVar2 == 0) break;
      uVar4 = (int)uVar1 - 1;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_06927c7c;
      fVar5 = (float)FUN_07c41c60(lVar2 + unaff_x23 + -0x1c,0);
      lVar2 = FUN_07c420b4();
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_06927c7c;
      fVar6 = (float)FUN_07c41c70(lVar2 + unaff_x23 + -0x1c,0);
      lVar2 = FUN_07c420b4();
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_06927c7c;
      fVar7 = (float)FUN_07c41c60(lVar2 + unaff_x23,0);
      lVar2 = FUN_07c420b4();
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_06927c7c;
      fVar8 = (float)FUN_07c41c70(lVar2 + unaff_x23,0);
      fVar5 = (fVar8 - fVar6) / (fVar7 - fVar5);
    }
    if (uVar1 != iVar3 - 1) {
      lVar2 = FUN_07c420b4();
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar1) {
LAB_06927c7c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      fVar6 = (float)FUN_07c41c60(lVar2 + unaff_x23,0);
      lVar2 = FUN_07c420b4();
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_06927c7c;
      fVar7 = (float)FUN_07c41c70(lVar2 + unaff_x23,0);
      lVar2 = FUN_07c420b4();
      if (lVar2 == 0) break;
      if ((ulong)*(uint *)(lVar2 + 0x18) <= unaff_x21 + 2) goto LAB_06927c7c;
      iVar3 = (int)((ulong)unaff_x25 >> 0x20);
      fVar8 = (float)FUN_07c41c60(lVar2 + (long)iVar3 * (long)unaff_w24 + 0x20,0);
      lVar2 = FUN_07c420b4();
      if (lVar2 == 0) break;
      if ((ulong)*(uint *)(lVar2 + 0x18) <= unaff_x21 + 2) goto LAB_06927c7c;
      fVar9 = (float)FUN_07c41c70(lVar2 + (long)iVar3 * (long)unaff_w24 + 0x20,0);
      unaff_s8 = (fVar9 - fVar7) / (fVar8 - fVar6);
    }
    param_1 = (ulong)(uint)fVar5;
    unaff_x21 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


