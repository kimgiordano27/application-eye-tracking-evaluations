/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<BinaryOperatorHandler.OperatorQuery,-BinaryOperatorHandler.OperatorQuery>$$.ctor
ENTRY_POINT: 02aef7b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02aefb24) */

void System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_BinaryOperatorHandler_OperatorQuery>___ctor
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  int *piVar9;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  long in_stack_00000068;
  
  uVar10 = *(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x58);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  FUN_03579868(uVar10,0);
  uVar3 = FUN_03582560();
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar3 & 1) == 0) {
    lVar7 = *(long *)(lVar7 + 0x88);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02aef920;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02aef920:
    plVar5 = (long *)(*(code *)*puVar4)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar4 = (undefined8 *)((ulong)&stack0x00000000 | 4);
    puVar11 = (undefined8 *)((ulong)&stack0x00000040 | 4);
    do {
      lVar7 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02aef998;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02aef998:
      uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar3 & 1) == 0) goto LAB_02aefa70;
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02aefa10;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_02aefa10:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      in_stack_00000040 = *puVar4;
      uStack0000000000000054 = *(undefined8 *)((long)puVar4 + 0x14);
      uStack0000000000000048 = (undefined4)puVar4[1];
      uStack000000000000004c = (undefined4)*(undefined8 *)((long)puVar4 + 0xc);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0xc) >> 0x20);
      in_stack_00000010 = puVar11[2];
      in_stack_00000008 = puVar11[1];
      in_stack_00000000 = *puVar11;
      FUN_02af0aa0();
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
    lVar7 = unaff_x21[3];
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = 0;
    puVar4 = (undefined8 *)(lVar7 + 0x30);
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < *(int *)(puVar4 + -2)) {
        in_stack_00000010 = puVar4[2];
        in_stack_00000008 = puVar4[1];
        in_stack_00000000 = *puVar4;
        in_stack_00000020 = in_stack_00000000;
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000010;
        FUN_02af0aa0();
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 5;
    } while (uVar1 != uVar3);
  }
  goto LAB_02aefadc;
LAB_02aefa70:
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02aefacc;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02aefacc:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
LAB_02aefadc:
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000068) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


