/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<MaterialPropertyColor>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02b44510
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02b44824) */

void System_Array_EmptyInternalEnumerator<MaterialPropertyColor>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar9 = *(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x58);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  FUN_03579868(uVar9,0);
  uVar3 = FUN_03582560();
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar6 = unaff_x21[3];
    if (lVar6 != 0) {
      uVar3 = 0;
      lVar7 = lVar6 + 0x38;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(lVar7 + -0x18)) {
          FUN_02b4566c();
        }
        uVar3 = uVar3 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar1 != uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(lVar6 + 0x88);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02b44660;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02b44660:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02b446c8;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02b446c8:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar3 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02b44740;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar6,0);
LAB_02b44740:
    (*(code *)*puVar4)(&stack0x00000008,plVar5,puVar4[1]);
    FUN_02b4566c();
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02b447dc;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02b447dc:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  return;
}


