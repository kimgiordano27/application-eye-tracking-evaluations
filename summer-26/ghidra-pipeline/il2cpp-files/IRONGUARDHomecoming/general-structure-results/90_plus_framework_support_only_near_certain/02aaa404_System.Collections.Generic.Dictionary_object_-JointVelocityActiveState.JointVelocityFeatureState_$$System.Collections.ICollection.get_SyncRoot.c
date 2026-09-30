/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-JointVelocityActiveState.JointVelocityFeatureState>$$System.Collections.ICollection.get_SyncRoot
ENTRY_POINT: 02aaa404
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Collections_Generic_Dictionary<object,_JointVelocityActiveState_JointVelocityFeatureState>__System_Collections_ICollection_get_SyncRoot
          (ulong param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000060;
  long in_stack_00000068;
  
  if ((param_1 & 1) == 0) {
    param_5 = FUN_01ecaf44(param_5);
  }
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_5) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02aaa45c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02aaa45c:
  uVar3 = (*(code *)*puVar2)();
  *(undefined8 *)(in_stack_00000068 + 0x70) = uVar3;
  thunk_FUN_01f51358();
  plVar8 = *(long **)(in_stack_00000068 + 0x68);
  *(undefined4 *)(in_stack_00000068 + 0x10) = 0xfffffffc;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02aaa4e0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02aaa4e0:
  uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  if ((uVar6 & 1) != 0) {
    plVar8 = *(long **)(in_stack_00000068 + 0x70);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02aaa548;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_02aaa548:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(in_stack_00000068 + 0x68);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *(long *)(in_stack_00000068 + 0x58);
      lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000060 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02aaa61c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02aaa61c:
      uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      plVar8 = *(long **)(in_stack_00000068 + 0x70);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000060 + 0x20) + 0xc0) + 0x40);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02aaa6a8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02aaa6a8:
      uVar10 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 0x18))
                  (uVar3,param_3,uVar10,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
        ;
        *(undefined8 *)(in_stack_00000068 + 0x2c) = in_stack_00000018;
        *(undefined8 *)(in_stack_00000068 + 0x24) = in_stack_00000010;
        *(undefined8 *)(in_stack_00000068 + 0x1c) = in_stack_00000008;
        *(undefined8 *)(in_stack_00000068 + 0x14) = in_stack_00000000;
        *(undefined4 *)(in_stack_00000068 + 0x10) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  FUN_02aaa850(in_stack_00000068);
  *(undefined8 *)(in_stack_00000068 + 0x70) = 0;
  thunk_FUN_01f51358((undefined8 *)(in_stack_00000068 + 0x70),0);
  FUN_02aaa7a0(in_stack_00000068);
  *(undefined8 *)(in_stack_00000068 + 0x68) = 0;
  thunk_FUN_01f51358((undefined8 *)(in_stack_00000068 + 0x68),0);
  return 0;
}


