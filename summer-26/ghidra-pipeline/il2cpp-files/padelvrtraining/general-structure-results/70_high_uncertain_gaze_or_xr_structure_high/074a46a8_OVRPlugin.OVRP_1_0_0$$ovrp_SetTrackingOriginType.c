/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_SetTrackingOriginType
ENTRY_POINT: 074a46a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_SetTrackingOriginType(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  uint uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  *(undefined1 *)(unaff_x20 + 0xca9) = 1;
  uStack0000000000000050 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  puVar2 = PTR_DAT_09214120;
  pvVar6 = (void *)FUN_074a3564();
  if (unaff_x22 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_06b6daac();
  }
  lVar7 = FUN_03d2d394(*(undefined8 *)puVar2,iVar5 << 1);
  puVar3 = PTR_DAT_091afe28;
  puVar2 = PTR_DAT_091afe20;
  if (0 < iVar5) {
    if (unaff_x22 == 0) goto LAB_074a48b0;
    FUN_06b6e20c(&stack0x00000008);
    uVar11 = 1;
    uStack0000000000000038 = in_stack_00000010;
    uStack0000000000000030 = in_stack_00000008;
    uStack0000000000000048 = in_stack_00000020;
    uStack0000000000000040 = in_stack_00000018;
    uStack0000000000000050 = in_stack_00000028;
    while (uVar8 = FUN_06e6c258(&stack0x00000030,*(undefined8 *)puVar3),
          uVar4 = uStack0000000000000048, uVar9 = uStack0000000000000040, (uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar9 = FUN_074a3564(uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      *(undefined8 *)(lVar7 + (long)(int)(uVar11 - 1) * 8 + 0x20) = uVar9;
      uVar9 = FUN_074a3564(uVar4);
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar1 = (long)(int)uVar11;
      uVar11 = uVar11 + 2;
      *(undefined8 *)(lVar7 + lVar1 * 8 + 0x20) = uVar9;
    }
    FUN_06e6c378(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_091b49f0;
  uVar9 = FUN_071d4e68((long)iVar5,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c(*unaff_x24);
  }
  FUN_074a492c(pvVar6,lVar7,uVar9);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  free(pvVar6);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar8 = 0;
      uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        pvVar6 = *(void **)(lVar7 + 0x20 + uVar8 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        free(pvVar6);
        uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
LAB_074a48b0:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


