/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 069279bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRManager__SetDynamicFoveatedRenderingEnabled(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  lVar1 = thunk_FUN_03ac74bc(*unaff_x20);
  FUN_07c42d70(lVar1,0);
  if ((unaff_x19 != 0) && (lVar2 = FUN_07c420b4(), lVar2 != 0)) {
    uVar3 = 0;
    lVar4 = 0x20;
    lVar5 = 0x100000000;
    do {
      if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar3) {
        return lVar1;
      }
      FUN_07c426dc(&stack0x00000020 + 4);
      uStack0000000000000048 = in_stack_00000020._12_4_;
      uStack0000000000000040 = in_stack_00000020._4_8_;
      uStack0000000000000054 = (undefined4)in_stack_00000038;
      uStack0000000000000058 = (undefined4)((ulong)in_stack_00000038 >> 0x20);
      uStack000000000000004c = uStack0000000000000030;
      uStack0000000000000050 = uStack0000000000000034;
      lVar2 = FUN_07c420b4();
      if (lVar2 == 0) break;
      fVar12 = 0.0;
      fVar8 = 0.0;
      iVar6 = *(int *)(lVar2 + 0x18);
      if (lVar4 != 0x20) {
        lVar2 = FUN_07c420b4();
        if (lVar2 == 0) break;
        uVar7 = (int)uVar3 - 1;
        if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_06927c7c;
        fVar8 = (float)FUN_07c41c60(lVar2 + lVar4 + -0x1c,0);
        lVar2 = FUN_07c420b4();
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_06927c7c;
        fVar9 = (float)FUN_07c41c70(lVar2 + lVar4 + -0x1c,0);
        lVar2 = FUN_07c420b4();
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_06927c7c;
        fVar10 = (float)FUN_07c41c60(lVar2 + lVar4,0);
        lVar2 = FUN_07c420b4();
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_06927c7c;
        fVar11 = (float)FUN_07c41c70(lVar2 + lVar4,0);
        fVar8 = (fVar11 - fVar9) / (fVar10 - fVar8);
      }
      if (uVar3 != iVar6 - 1) {
        lVar2 = FUN_07c420b4();
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_06927c7c:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        fVar12 = (float)FUN_07c41c60(lVar2 + lVar4,0);
        lVar2 = FUN_07c420b4();
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_06927c7c;
        fVar9 = (float)FUN_07c41c70(lVar2 + lVar4,0);
        lVar2 = FUN_07c420b4();
        if (lVar2 == 0) break;
        if ((ulong)*(uint *)(lVar2 + 0x18) <= uVar3 + 1) goto LAB_06927c7c;
        iVar6 = (int)((ulong)lVar5 >> 0x20);
        fVar10 = (float)FUN_07c41c60(lVar2 + (long)iVar6 * 0x1c + 0x20,0);
        lVar2 = FUN_07c420b4();
        if (lVar2 == 0) break;
        if ((ulong)*(uint *)(lVar2 + 0x18) <= uVar3 + 1) goto LAB_06927c7c;
        fVar11 = (float)FUN_07c41c70(lVar2 + (long)iVar6 * 0x1c + 0x20,0);
        fVar12 = (fVar11 - fVar9) / (fVar10 - fVar12);
      }
      FUN_07c41c88(fVar8,&stack0x00000040,0);
      FUN_07c41c98(fVar12,&stack0x00000040,0);
      if (lVar1 == 0) break;
      FUN_07c42430(lVar1);
      uVar3 = uVar3 + 1;
      lVar2 = FUN_07c420b4();
      lVar4 = lVar4 + 0x1c;
      lVar5 = lVar5 + 0x100000000;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


