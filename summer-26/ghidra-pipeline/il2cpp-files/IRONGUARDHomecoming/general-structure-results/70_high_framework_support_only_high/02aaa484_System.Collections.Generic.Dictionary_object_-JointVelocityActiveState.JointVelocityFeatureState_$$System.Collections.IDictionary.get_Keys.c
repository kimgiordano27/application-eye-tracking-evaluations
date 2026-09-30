/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-JointVelocityActiveState.JointVelocityFeatureState>$$System.Collections.IDictionary.get_Keys
ENTRY_POINT: 02aaa484
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_Generic_Dictionary<object,_JointVelocityActiveState_JointVelocityFeatureState>__System_Collections_IDictionary_get_Keys
          (undefined1 param_1 [16],undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 in_w8;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000060;
  long in_stack_00000068;
  
  *(undefined4 *)(unaff_x20 + 0x10) = in_w8;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_02aaa4e0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02aaa4e0:
  uVar5 = (*(code *)*puVar2)();
  if ((uVar5 & 1) != 0) {
    plVar7 = *(long **)(in_stack_00000068 + 0x70);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02aaa548;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_02aaa548:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) != 0) {
      plVar7 = *(long **)(in_stack_00000068 + 0x68);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(in_stack_00000068 + 0x58);
      lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000060 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02aaa61c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02aaa61c:
      uVar9 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      plVar7 = *(long **)(in_stack_00000068 + 0x70);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000060 + 0x20) + 0xc0) + 0x40);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02aaa6a8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02aaa6a8:
      uVar10 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))
                  (uVar9,param_2,uVar10,*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
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


