/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<uint,-MarkToBaseAdjustmentRecord>$$System.Collections.IDictionary.set_Item
ENTRY_POINT: 02ad1eb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02ad22f0) */

void System_Collections_Generic_Dictionary<uint,_MarkToBaseAdjustmentRecord>__System_Collections_IDictionary_set_Item
               (ulong param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x23;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    *(undefined1 *)(unaff_x23 + 199) = 1;
  }
  if (param_3 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 02ad1f14 to 02bd21cb has its CatchHandler @ 02ad1f14
                       catch() { ... } // from try @ 02ad1f14 with catch @ 02ad1f14
                       catch() { ... } // from try @ 02ad2344 with catch @ 02ad1f14
                       catch() { ... } // from try @ 02ad240c with catch @ 02ad1f14
                       catch() { ... } // from try @ 02ad2414 with catch @ 02ad1f14
                       catch() { ... } // from try @ 02ad24e4 with catch @ 02ad1f14 */
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02ad1f70;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_3,lVar7,0);
LAB_02ad1f70:
    uVar3 = (*(code *)*puVar4)(param_3,puVar4[1]);
  }
  FUN_02ad1de0(param_2,uVar3);
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar5 = thunk_FUN_01ecaf38(param_3,0);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar11 = FUN_03579868(uVar11,0);
  uVar9 = FUN_03582560(uVar5,uVar11,0);
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_3);
    }
    uVar1 = *(uint *)(param_3 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = param_3[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      lVar8 = lVar7;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(lVar8 + 0x20)) {
          FUN_02ad322c(param_2,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30));
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x38;
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar8 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02ad2118;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_3,lVar7,0);
LAB_02ad2118:
  plVar6 = (long *)(*(code *)*puVar4)(param_3,puVar4[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    uVar11 = in_stack_00000008;
    uVar5 = in_stack_00000000;
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02ad2188;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02ad2188:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar9 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02ad2200;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,0);
LAB_02ad2200:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
    in_stack_00000008 = in_stack_00000018;
    in_stack_00000000 = in_stack_00000010;
    in_stack_00000018 = in_stack_00000028;
    in_stack_00000010 = in_stack_00000020;
    FUN_02ad322c(param_2,uVar5,uVar11);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02ad22a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02ad22a8:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}


