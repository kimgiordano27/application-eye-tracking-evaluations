/*
FUNCTION_NAME: System.EmptyArray<ProbeBrickPool.BrickChunkAlloc>$$.cctor
ENTRY_POINT: 02b213b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02b2174c) */

void System_EmptyArray<ProbeBrickPool_BrickChunkAlloc>___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x21;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  long in_stack_00000078;
  
  FUN_02b21208();
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar3 = thunk_FUN_01ecaf38();
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar11 = FUN_03579868(uVar11,0);
  uVar4 = FUN_03582560(uVar3,uVar11,0);
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar4 & 1) == 0) {
    lVar7 = *(long *)(lVar7 + 0x88);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02b21550;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238();
LAB_02b21550:
    plVar5 = (long *)(*(code *)*puVar10)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar10 = (undefined8 *)((ulong)&stack0x00000000 | 4);
    puVar12 = (undefined8 *)((ulong)&stack0x00000050 | 4);
    do {
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02b215c8;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02b215c8:
      uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar4 & 1) == 0) goto LAB_02b21698;
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02b21640;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_02b21640:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      in_stack_00000058 = puVar10[1];
      in_stack_00000050 = *puVar10;
      in_stack_00000068 = puVar10[3];
      in_stack_00000060 = puVar10[2];
      in_stack_00000070 = *(undefined4 *)(puVar10 + 4);
      in_stack_00000008 = puVar12[1];
      in_stack_00000000 = *puVar12;
      in_stack_00000018 = puVar12[3];
      in_stack_00000010 = puVar12[2];
      FUN_02b22648();
    } while( true );
  }
  lVar7 = *(long *)(lVar7 + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  uVar1 = *(uint *)(unaff_x21 + 4);
  if (0 < (int)uVar1) {
    puVar10 = (undefined8 *)unaff_x21[3];
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = 0;
    puVar12 = puVar10;
    do {
      if (*(uint *)(puVar10 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < *(int *)(puVar12 + 4)) {
        in_stack_00000008 = puVar12[7];
        in_stack_00000000 = puVar12[6];
        in_stack_00000018 = puVar12[9];
        in_stack_00000010 = puVar12[8];
        in_stack_00000030 = in_stack_00000000;
        in_stack_00000038 = in_stack_00000008;
        in_stack_00000040 = in_stack_00000010;
        in_stack_00000048 = in_stack_00000018;
        FUN_02b22648();
      }
      uVar4 = uVar4 + 1;
      puVar12 = puVar12 + 6;
    } while (uVar1 != uVar4);
  }
  goto LAB_02b21704;
LAB_02b21698:
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02b216f4;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar5,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_02b216f4:
    (*(code *)*puVar10)(plVar5,puVar10[1]);
  }
LAB_02b21704:
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000078) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


