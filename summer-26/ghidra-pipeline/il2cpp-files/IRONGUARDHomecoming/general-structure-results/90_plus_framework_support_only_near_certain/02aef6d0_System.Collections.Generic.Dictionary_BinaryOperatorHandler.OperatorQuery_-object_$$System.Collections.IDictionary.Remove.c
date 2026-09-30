/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<BinaryOperatorHandler.OperatorQuery,-object>$$System.Collections.IDictionary.Remove
ENTRY_POINT: 02aef6d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02aefb24) */

void System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_object>__System_Collections_IDictionary_Remove
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  long in_stack_00000068;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xb38));
  *(undefined1 *)(unaff_x23 + 0x121) = 1;
  uVar5 = 0;
  if (unaff_x21 != (long *)0x0) {
    uVar5 = unaff_x20;
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  if (unaff_x21 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02aef76c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02aef76c:
    uVar3 = (*(code *)*puVar4)();
    unaff_x20 = uVar5;
  }
  FUN_02aef5cc(unaff_x20,uVar3);
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar5 = thunk_FUN_01ecaf38();
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar12 = FUN_03579868(uVar12,0);
  uVar10 = FUN_03582560(uVar5,uVar12,0);
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar10 & 1) == 0) {
    lVar8 = *(long *)(lVar8 + 0x88);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02aef920;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02aef920:
    plVar6 = (long *)(*(code *)*puVar4)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar4 = (undefined8 *)((ulong)&stack0x00000000 | 4);
    puVar13 = (undefined8 *)((ulong)&stack0x00000040 | 4);
    do {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02aef998;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02aef998:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar10 & 1) == 0) goto LAB_02aefa70;
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02aefa10;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar8,0);
LAB_02aefa10:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
      in_stack_00000040 = *puVar4;
      in_stack_00000048 = (undefined4)puVar4[1];
      uStack0000000000000054 = (undefined4)*(undefined8 *)((long)puVar4 + 0x14);
      in_stack_00000058 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0x14) >> 0x20);
      uStack000000000000004c = (undefined4)*(undefined8 *)((long)puVar4 + 0xc);
      in_stack_00000050 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0xc) >> 0x20);
      in_stack_00000010 = puVar13[2];
      in_stack_00000008 = puVar13[1];
      in_stack_00000000 = *puVar13;
      FUN_02af0aa0();
    } while( true );
  }
  lVar8 = *(long *)(lVar8 + 0x30);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  uVar1 = *(uint *)(unaff_x21 + 4);
  if (0 < (int)uVar1) {
    lVar8 = unaff_x21[3];
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = 0;
    puVar4 = (undefined8 *)(lVar8 + 0x30);
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar10) {
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
      uVar10 = uVar10 + 1;
      puVar4 = puVar4 + 5;
    } while (uVar1 != uVar10);
  }
  goto LAB_02aefadc;
LAB_02aefa70:
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02aefacc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02aefacc:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
LAB_02aefadc:
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000068) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


