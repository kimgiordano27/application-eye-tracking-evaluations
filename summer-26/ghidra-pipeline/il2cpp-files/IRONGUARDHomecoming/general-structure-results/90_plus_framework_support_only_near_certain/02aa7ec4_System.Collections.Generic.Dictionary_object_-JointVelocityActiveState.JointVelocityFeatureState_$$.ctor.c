/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-JointVelocityActiveState.JointVelocityFeatureState>$$.ctor
ENTRY_POINT: 02aa7ec4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Collections_Generic_Dictionary<object,_JointVelocityActiveState_JointVelocityFeatureState>___ctor
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
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
  
  puVar2 = (undefined8 *)FUN_01ecb238(param_5,param_6,0);
  uVar3 = (*(code *)*puVar2)();
  *(undefined8 *)(in_stack_00000068 + 0x80) = uVar3;
  thunk_FUN_01f51358();
  plVar9 = *(long **)(in_stack_00000068 + 0x58);
  *(undefined4 *)(in_stack_00000068 + 0x10) = 0xfffffffc;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000058 + 0x20) + 0xc0) + 0x50);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02aa7f78;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02aa7f78:
  uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  *(undefined8 *)(in_stack_00000068 + 0x88) = uVar3;
  thunk_FUN_01f51358();
  plVar9 = *(long **)(in_stack_00000068 + 0x78);
  *(undefined4 *)(in_stack_00000068 + 0x10) = 0xfffffffb;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02aa7ffc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02aa7ffc:
  uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  if ((uVar7 & 1) != 0) {
    plVar9 = *(long **)(in_stack_00000068 + 0x80);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar9;
    lVar4 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02aa8064;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02aa8064:
    uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if ((uVar7 & 1) != 0) {
      plVar9 = *(long **)(in_stack_00000068 + 0x88);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar9;
      lVar4 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02aa80cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02aa80cc:
      uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      if ((uVar7 & 1) != 0) {
        plVar9 = *(long **)(in_stack_00000068 + 0x78);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *(long *)(in_stack_00000068 + 0x68);
        lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000058 + 0x20) + 0xc0) + 0x30);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44(lVar4);
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02aa81c4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02aa81c4:
        uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        plVar9 = *(long **)(in_stack_00000068 + 0x80);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000058 + 0x20) + 0xc0) + 0x48);
        uVar12 = param_2;
        uVar13 = param_3;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44(lVar4);
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02aa8254;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02aa8254:
        uVar10 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        plVar9 = *(long **)(in_stack_00000068 + 0x88);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000058 + 0x20) + 0xc0) + 0x60);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44(lVar4);
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02aa82e8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_02aa82e8:
        uVar11 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))
                    (uVar3,param_2,param_3,uVar10,uVar12,uVar13,param_4,uVar11,
                     *(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
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


