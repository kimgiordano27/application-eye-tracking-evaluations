/*
FUNCTION_NAME: UnityEngine.InputSystem.Keyboard$$OnTextInput
ENTRY_POINT: 03a69c18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x03a69d48) */
/* WARNING: Removing unreachable block (ram,0x03a69930) */
/* WARNING: Removing unreachable block (ram,0x03a69af0) */
/* WARNING: Removing unreachable block (ram,0x03a69d10) */

undefined4 UnityEngine_InputSystem_Keyboard__OnTextInput(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long lVar9;
  int unaff_w28;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000028;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  
  uStack0000000000000028 = param_1;
  if (param_2 == 1) {
    plVar4 = (long *)__cxa_begin_catch(param_1);
    lVar9 = *plVar4;
    __cxa_end_catch();
    plVar4 = (long *)thunk_FUN_01f116d0(in_stack_00000050,
                                        *(undefined8 *)
                                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03a69894;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03a69894:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar9);
    }
    lVar9 = 0;
  }
  else {
    plVar4 = (long *)thunk_FUN_01f116d0(in_stack_00000050,
                                        *(undefined8 *)
                                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03a69cd8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03a69cd8:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    if (param_2 != 1) {
      if (in_stack_00000068._4_1_ != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000008,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14(uStack0000000000000028);
    }
    plVar4 = (long *)__cxa_begin_catch(uStack0000000000000028);
    lVar9 = *plVar4;
    __cxa_end_catch();
  }
  if (in_stack_00000068._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
              (in_stack_00000008,0);
  }
  puVar1 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar9);
  }
  uVar5 = 1;
  if ((in_stack_00000038 == 0) && (unaff_w28 == 0)) {
    lVar9 = *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar9 = *(long *)puVar1;
    }
    uVar7 = FUN_0354fecc(in_stack_00000040,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18),0);
    if ((uVar7 & 1) == 0) {
      in_stack_00000068._4_1_ = '\0';
      FUN_035ce230(in_stack_00000048,(long)&stack0x00000068 + 4,0);
      if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
        if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          plVar4 = *(long **)(in_stack_00000048 + 0x18);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
          if (iVar2 < 1) break;
          plVar4 = *(long **)(in_stack_00000048 + 0x18);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*plVar4 + 0x3d8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x3e0));
          iVar2 = *(int *)(unaff_x19 + 0x24) + -1;
          *(int *)(unaff_x19 + 0x24) = iVar2;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar2);
      }
      if (in_stack_00000068._4_1_ != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000048,0);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}


