/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04929e4c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_get_Current
               (void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_0675e2d0);
  *(undefined1 *)(unaff_x23 + 0x743) = 1;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050188b4(3,0);
  }
  iVar1 = thunk_FUN_02d6ffd8();
  if (iVar1 != 1) {
    FUN_05027654(7,0);
  }
  iVar1 = thunk_FUN_02d6ff94();
  if (iVar1 != 0) {
    FUN_05027654(6,0);
  }
  uVar2 = FUN_0501f6a4();
  if (uVar2 < unaff_w20) {
    FUN_05027ebc(0);
  }
  iVar1 = FUN_0501f6a4();
  if ((int)(iVar1 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_05027654(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    FUN_02d9a2e0(lVar8);
  }
  lVar8 = thunk_FUN_02d9d438();
  if (lVar8 != 0) {
    FUN_0492854c();
    return;
  }
  lVar8 = thunk_FUN_02d9d438();
  if (lVar8 == 0) {
    plVar4 = (long *)thunk_FUN_02d9d438();
    if (plVar4 == (long *)0x0) {
      FUN_05027ef4();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar10 = 0;
      lVar9 = lVar8 + 0x2c;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        if (-1 < *(int *)(lVar9 + -0xc)) {
          in_stack_00000040 = 0;
          uStack0000000000000048 = 0;
          uStack000000000000004c = 0;
          in_stack_00000058 = 0;
          uStack0000000000000050 = 0;
          uStack0000000000000054 = 0;
          FUN_0390f090(&stack0x00000040,*(undefined4 *)(lVar9 + -4));
          lVar5 = thunk_FUN_02d9d164(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar7,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          plVar4[(long)(int)unaff_w20 + 4] = lVar5;
          thunk_FUN_02dd37b4(plVar4 + (long)(int)unaff_w20 + 4,lVar5);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x24;
      } while (uVar2 != uVar10);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar1) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x2c);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_0492a16c;
        if (-1 < *(int *)((long)puVar11 + -0xc)) {
          in_stack_00000068._4_4_ = *(undefined4 *)((long)puVar11 + -4);
          thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             (long)&stack0x00000068 + 4);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_0492a16c:
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          in_stack_00000040 = *puVar11;
          uStack0000000000000050 = (undefined4)puVar11[2];
          uStack0000000000000054 = (undefined4)((ulong)puVar11[2] >> 0x20);
          uStack0000000000000048 = (undefined4)puVar11[1];
          uStack000000000000004c = (undefined4)((ulong)puVar11[1] >> 0x20);
          thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000040);
          FUN_04fa5ef4();
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_0492a16c;
          lVar5 = lVar8 + (long)(int)unaff_w20 * 0x10;
          puVar3 = (undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *puVar3 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_02dd37b4(puVar3,0);
          iVar1 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = (undefined8 *)((long)puVar11 + 0x24);
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


