/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-JointVelocityActiveState.JointVelocityFeatureState>$$.ctor
ENTRY_POINT: 02aa7fa4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_Generic_Dictionary<object,_JointVelocityActiveState_JointVelocityFeatureState>___ctor
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000058;
  long in_stack_00000068;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02aa7ffc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02aa7ffc:
  uVar6 = (*(code *)*puVar2)();
  if ((uVar6 & 1) != 0) {
    plVar8 = *(long **)(in_stack_00000068 + 0x80);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar8;
    lVar3 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02aa8064;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar3,0);
LAB_02aa8064:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(in_stack_00000068 + 0x88);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar8;
      lVar3 = *(long *)puVar1;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02aa80cc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar3,0);
LAB_02aa80cc:
      uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if ((uVar6 & 1) != 0) {
        plVar8 = *(long **)(in_stack_00000068 + 0x78);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *(long *)(in_stack_00000068 + 0x68);
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000058 + 0x20) + 0xc0) + 0x30);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02aa81c4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar3,0);
LAB_02aa81c4:
        uVar9 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        plVar8 = *(long **)(in_stack_00000068 + 0x80);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000058 + 0x20) + 0xc0) + 0x48);
        uVar12 = param_2;
        uVar13 = param_3;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02aa8254;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar3,0);
LAB_02aa8254:
        uVar10 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        plVar8 = *(long **)(in_stack_00000068 + 0x88);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000058 + 0x20) + 0xc0) + 0x60);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02aa82e8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar3,0);
LAB_02aa82e8:
        uVar11 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))
                    (uVar9,param_2,param_3,uVar10,uVar12,uVar13,param_4,uVar11,
                     *(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
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
  }
  FUN_02aa857c(in_stack_00000068);
  *(undefined8 *)(in_stack_00000068 + 0x88) = 0;
  thunk_FUN_01f51358((undefined8 *)(in_stack_00000068 + 0x88),0);
  FUN_02aa84cc(in_stack_00000068);
  *(undefined8 *)(in_stack_00000068 + 0x80) = 0;
  thunk_FUN_01f51358((undefined8 *)(in_stack_00000068 + 0x80),0);
  FUN_02aa841c(in_stack_00000068);
  *(undefined8 *)(in_stack_00000068 + 0x78) = 0;
  thunk_FUN_01f51358((undefined8 *)(in_stack_00000068 + 0x78),0);
  return 0;
}


