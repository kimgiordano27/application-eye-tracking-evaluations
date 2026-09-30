/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 060329b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>___cctor(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
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
  
  lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 0x148);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    FUN_03ac4090(lVar7);
  }
  lVar7 = thunk_FUN_03ac73c0();
  if (lVar7 != 0) {
    FUN_06031000();
    return;
  }
  lVar7 = thunk_FUN_03ac73c0();
  if (lVar7 == 0) {
    plVar4 = (long *)thunk_FUN_03ac73c0();
    if (plVar4 == (long *)0x0) {
      FUN_067721fc();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar10 = 0;
      lVar9 = lVar7 + 0x2c;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar10) {
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
          lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar2 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar2,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar4[(long)(int)unaff_w20 + 4] = lVar5;
          thunk_FUN_03afed3c(plVar4 + (long)(int)unaff_w20 + 4,lVar5);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x24;
      } while (uVar1 != uVar10);
    }
  }
  else {
    iVar8 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar8) {
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
          uVar2 = thunk_FUN_03ac70f4(*(undefined8 *)
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
          uVar3 = thunk_FUN_03ac70f4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
          in_stack_00000060 = 0;
          in_stack_00000068 = 0;
          FUN_066eba2c(&stack0x00000060,uVar2,uVar3,0);
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_06032c40;
          lVar6 = lVar7 + (long)(int)unaff_w20 * 0x10;
          lVar5 = (long)(int)unaff_w20;
          unaff_w20 = unaff_w20 + 1;
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000068;
          *(undefined8 *)(lVar6 + 0x20) = in_stack_00000060;
          thunk_FUN_03afed3c(lVar7 + 0x20 + lVar5 * 0x10,0);
          iVar8 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = (undefined8 *)((long)puVar11 + 0x24);
      } while ((long)uVar10 < (long)iVar8);
    }
  }
  return;
}


