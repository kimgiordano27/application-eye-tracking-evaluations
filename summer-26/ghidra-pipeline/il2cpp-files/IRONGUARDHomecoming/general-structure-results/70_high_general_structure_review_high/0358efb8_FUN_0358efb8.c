/*
FUNCTION_NAME: FUN_0358efb8
ENTRY_POINT: 0358efb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong FUN_0358efb8(long param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar7;
  
  uVar10 = (ulong)param_3;
  if ((DAT_04833460 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04833460 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar8,uVar9,0);
  }
  else {
    iVar2 = FUN_03582fa8(param_1);
    if (iVar2 == 0) {
LAB_0358f120:
      uVar10 = 0xffffffff;
LAB_0358f124:
      return uVar10 & 0xffffffff;
    }
    if (((int)param_3 < 0) || (iVar2 = FUN_03582fa8(param_1), iVar2 <= (int)param_3)) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar8 = thunk_FUN_01f117cc();
      uVar9 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
      puVar7 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
      ;
    }
    else if (param_4 < 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar8 = thunk_FUN_01f117cc();
      uVar9 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
      puVar7 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
      ;
    }
    else {
      if (param_4 <= (int)(param_3 + 1)) {
        iVar2 = FUN_01eca4a4(param_1);
        if (iVar2 != 1) {
          thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<SystemVoipState>__
                            );
          uVar8 = thunk_FUN_01f117cc();
          uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndaq_f32__);
          FUN_0357bdc0(uVar8,uVar9);
          goto LAB_0358f248;
        }
        lVar3 = thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  );
        iVar2 = param_3 - param_4;
        if (lVar3 == 0) {
          if (0 < param_4) {
            do {
              plVar4 = (long *)FUN_03583008(param_1,uVar10);
              if (plVar4 == (long *)0x0) {
                if (param_2 == 0) goto LAB_0358f124;
              }
              else {
                uVar5 = (**(code **)(*plVar4 + 0x138))
                                  (plVar4,param_2,*(undefined8 *)(*plVar4 + 0x140));
                if ((uVar5 & 1) != 0) goto LAB_0358f124;
              }
              uVar1 = (int)uVar10 - 1;
              uVar10 = (ulong)uVar1;
            } while (iVar2 < (int)uVar1);
          }
        }
        else if (param_2 == 0) {
          if (0 < param_4) {
            plVar4 = (long *)(lVar3 + (long)(int)param_3 * 8 + 0x20);
            do {
              if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) goto LAB_0358f13c;
              if (*plVar4 == 0) goto LAB_0358f124;
              uVar1 = (uint)uVar10 - 1;
              uVar10 = (ulong)uVar1;
              plVar4 = plVar4 + -1;
            } while (iVar2 < (int)uVar1);
          }
        }
        else if (0 < param_4) {
          do {
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) {
LAB_0358f13c:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar4 = *(long **)(lVar3 + 0x20 + uVar10 * 8);
            if ((plVar4 != (long *)0x0) &&
               (uVar5 = (**(code **)(*plVar4 + 0x138))
                                  (plVar4,param_2,*(undefined8 *)(*plVar4 + 0x140)),
               (uVar5 & 1) != 0)) goto LAB_0358f124;
            uVar10 = uVar10 - 1;
          } while ((long)iVar2 < (long)uVar10);
        }
        goto LAB_0358f120;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar8 = thunk_FUN_01f117cc();
      uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndxq_f64__);
      puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshl_s16__;
    }
    uVar6 = thunk_FUN_01efb3a4(puVar7);
    FUN_034f3578(uVar8,uVar9,uVar6,0);
  }
LAB_0358f248:
  uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshl_s32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar9);
}


