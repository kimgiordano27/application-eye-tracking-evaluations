/*
FUNCTION_NAME: FUN_0358ebfc
ENTRY_POINT: 0358ebfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint FUN_0358ebfc(long param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar12;
  undefined *puVar11;
  
  if ((DAT_0483345f & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_0483345f = 1;
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
    iVar2 = FUN_01eca4a4(param_1);
    if (iVar2 == 1) {
      iVar2 = FUN_01eca460(param_1,0);
      if ((iVar2 - param_3 == 0 || iVar2 < (int)param_3) &&
         (iVar3 = FUN_03582fa8(param_1), (int)param_3 <= iVar3 + iVar2)) {
        if ((-1 < param_4) &&
           (iVar3 = FUN_03582fa8(param_1), param_4 <= (int)((iVar2 - param_3) + iVar3))) {
          lVar4 = thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    );
          iVar3 = param_4 + param_3;
          if (lVar4 == 0) {
            if ((int)param_3 < iVar3) {
              do {
                plVar7 = (long *)FUN_03583008(param_1,param_3);
                if (plVar7 == (long *)0x0) {
                  if (param_2 == 0) {
                    return param_3;
                  }
                }
                else {
                  uVar6 = (**(code **)(*plVar7 + 0x138))
                                    (plVar7,param_2,*(undefined8 *)(*plVar7 + 0x140));
                  if ((uVar6 & 1) != 0) {
                    return param_3;
                  }
                }
                param_4 = param_4 + -1;
                param_3 = param_3 + 1;
              } while (param_4 != 0);
            }
          }
          else if (param_2 == 0) {
            if ((int)param_3 < iVar3) {
              uVar1 = param_3;
              if (param_3 <= *(uint *)(lVar4 + 0x18)) {
                uVar1 = *(uint *)(lVar4 + 0x18);
              }
              do {
                if (uVar1 == param_3) goto LAB_0358eda0;
                if (*(long *)(lVar4 + (long)(int)param_3 * 8 + 0x20) == 0) {
                  return param_3;
                }
                param_4 = param_4 + -1;
                param_3 = param_3 + 1;
              } while (param_4 != 0);
            }
          }
          else if ((int)param_3 < iVar3) {
            plVar7 = (long *)(lVar4 + (long)(int)param_3 * 8 + 0x20);
            lVar12 = (long)iVar3 - (long)(int)param_3;
            do {
              if (*(uint *)(lVar4 + 0x18) <= param_3) {
LAB_0358eda0:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              plVar5 = (long *)*plVar7;
              if ((plVar5 != (long *)0x0) &&
                 (uVar6 = (**(code **)(*plVar5 + 0x138))
                                    (plVar5,param_2,*(undefined8 *)(*plVar5 + 0x140)),
                 (uVar6 & 1) != 0)) {
                return param_3;
              }
              param_3 = param_3 + 1;
              lVar12 = lVar12 + -1;
              plVar7 = plVar7 + 1;
            } while (lVar12 != 0);
          }
          return iVar2 - 1;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar8 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
        puVar11 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
      }
      else {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar8 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
        puVar11 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
      }
      uVar10 = thunk_FUN_01efb3a4(puVar11);
      FUN_034f3578(uVar8,uVar9,uVar10,0);
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Callback_SetNotificationCallback<SystemVoipState>__)
      ;
      uVar8 = thunk_FUN_01f117cc();
      uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndaq_f32__);
      FUN_0357bdc0(uVar8,uVar9);
    }
  }
  uVar9 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndx_f32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar9);
}


