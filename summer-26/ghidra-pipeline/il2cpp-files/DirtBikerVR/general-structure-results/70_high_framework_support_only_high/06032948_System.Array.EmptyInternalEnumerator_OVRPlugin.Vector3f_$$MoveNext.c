/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$MoveNext
ENTRY_POINT: 06032948
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__MoveNext(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  
  iVar1 = thunk_FUN_03a9981c();
  if (iVar1 != 0) {
    FUN_0677195c(6,0);
  }
  uVar2 = FUN_06769a04();
  if (uVar2 < unaff_w20) {
    FUN_067721c4(0);
  }
  iVar1 = FUN_06769a04();
  if ((int)(iVar1 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_0677195c(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    FUN_03ac4090(lVar8);
  }
  lVar8 = thunk_FUN_03ac73c0();
  if (lVar8 != 0) {
    FUN_06031000();
    return;
  }
  lVar8 = thunk_FUN_03ac73c0();
  if (lVar8 == 0) {
    plVar5 = (long *)thunk_FUN_03ac73c0();
    if (plVar5 == (long *)0x0) {
      FUN_067721fc();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar10 = 0;
      lVar9 = lVar8 + 0x2c;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        if (-1 < *(int *)(lVar9 + -0xc)) {
          in_stack_00000040 = 0;
          uStack0000000000000048 = 0;
          uStack000000000000004c = 0;
          in_stack_00000058 = 0;
          uStack0000000000000050 = 0;
          uStack0000000000000054 = 0;
          FUN_04bdc600(&stack0x00000040,*(undefined4 *)(lVar9 + -4));
          lVar6 = thunk_FUN_03ac70f4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_03ac73c0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
            uVar3 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar3,0);
          }
          if (*(uint *)(plVar5 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar5[(long)(int)unaff_w20 + 4] = lVar6;
          thunk_FUN_03afed3c(plVar5 + (long)(int)unaff_w20 + 4,lVar6);
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
        FUN_03a8a9c0();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x2c);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_06032c40;
        if (-1 < *(int *)((long)puVar11 + -0xc)) {
          in_stack_00000078._4_4_ = *(undefined4 *)((long)puVar11 + -4);
          uVar3 = thunk_FUN_03ac70f4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                                     (long)&stack0x00000078 + 4);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_06032c40:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          in_stack_00000040 = *puVar11;
          uStack0000000000000048 = (undefined4)puVar11[1];
          uStack000000000000004c = (undefined4)((ulong)puVar11[1] >> 0x20);
          uStack0000000000000050 = (undefined4)puVar11[2];
          uStack0000000000000054 = (undefined4)((ulong)puVar11[2] >> 0x20);
          uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
          in_stack_00000060 = 0;
          in_stack_00000068 = 0;
          FUN_066eba2c(&stack0x00000060,uVar3,uVar4,0);
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_06032c40;
          lVar7 = lVar8 + (long)(int)unaff_w20 * 0x10;
          lVar6 = (long)(int)unaff_w20;
          unaff_w20 = unaff_w20 + 1;
          *(undefined8 *)(lVar7 + 0x28) = in_stack_00000068;
          *(undefined8 *)(lVar7 + 0x20) = in_stack_00000060;
          thunk_FUN_03afed3c(lVar8 + 0x20 + lVar6 * 0x10,0);
          iVar1 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = (undefined8 *)((long)puVar11 + 0x24);
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


