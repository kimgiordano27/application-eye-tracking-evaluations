/*
FUNCTION_NAME: FUN_0354378c
ENTRY_POINT: 0354378c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0354378c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  
  if ((DAT_04833121 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04833121 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar8,uVar6,0);
  }
  else {
    iVar2 = thunk_FUN_01eca4a4(param_2,0);
    if (iVar2 == 1) {
      if ((int)param_3 < 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar8 = thunk_FUN_01f117cc();
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                  );
        uVar7 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                                  );
        FUN_034f3578(uVar8,uVar6,uVar7,0);
      }
      else {
        iVar2 = FUN_03582fa8(param_2,0);
        if (*(int *)(param_1 + 0x18) <= (int)(iVar2 - param_3)) {
          plVar3 = (long *)thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                             );
          uVar1 = *(uint *)(param_1 + 0x18);
          uVar9 = (ulong)uVar1;
          if (plVar3 == (long *)0x0) {
            if (0 < (int)uVar1) {
              iVar2 = 0;
              iVar12 = -1;
              do {
                lVar11 = *(long *)(param_1 + 0x10);
                if (lVar11 == 0) goto LAB_03543920;
                uVar1 = (int)uVar9 + iVar12;
                if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0354391c;
                FUN_0358cf48(param_2,*(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20),
                             param_3 + iVar2,0);
                uVar9 = (ulong)*(uint *)(param_1 + 0x18);
                iVar2 = iVar2 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar2 < (int)*(uint *)(param_1 + 0x18));
            }
          }
          else if (0 < (int)uVar1) {
            lVar11 = 0;
            iVar2 = -1;
            lVar13 = (ulong)param_3 << 0x20;
            do {
              lVar10 = *(long *)(param_1 + 0x10);
              if (lVar10 == 0) {
LAB_03543920:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar1 = (int)uVar9 + iVar2;
              if (*(uint *)(lVar10 + 0x18) <= uVar1) {
LAB_0354391c:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar10 = *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              if ((lVar10 != 0) &&
                 (lVar4 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
                uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar6,0);
              }
              if ((ulong)*(uint *)(plVar3 + 3) <= (ulong)param_3 + lVar11) goto LAB_0354391c;
              plVar5 = (long *)((long)plVar3 + (lVar13 >> 0x1d) + 0x20);
              *plVar5 = lVar10;
              thunk_FUN_01f51358(plVar5,lVar10);
              uVar9 = (ulong)*(int *)(param_1 + 0x18);
              lVar11 = lVar11 + 1;
              iVar2 = iVar2 + -1;
              lVar13 = lVar13 + 0x100000000;
            } while (lVar11 < (long)uVar9);
          }
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar8 = thunk_FUN_01f117cc();
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                                  );
        FUN_034f6754(uVar8,uVar6,0);
      }
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar8 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_14__
                                );
      uVar7 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                                );
      FUN_034efd98(uVar8,uVar6,uVar7,0);
    }
  }
  uVar6 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_n_u32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar6);
}


