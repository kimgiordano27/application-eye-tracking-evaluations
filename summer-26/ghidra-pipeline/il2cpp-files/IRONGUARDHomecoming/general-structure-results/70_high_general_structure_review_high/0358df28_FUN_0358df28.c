/*
FUNCTION_NAME: FUN_0358df28
ENTRY_POINT: 0358df28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint FUN_0358df28(long param_1,uint param_2,int param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  
  if ((DAT_0483345e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Flow_InvokeDelegate__);
    thunk_FUN_01efb3a4(Method_Drawing_DrawingManager_PostRender__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_0483345e = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar14 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                               );
    FUN_034efd20(uVar9,uVar14,0);
  }
  else {
    if ((param_3 < 0) || ((int)param_2 < 0)) {
      puVar2 = Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__;
      if (-1 < (int)param_2) {
        puVar2 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__;
      }
      uVar14 = thunk_FUN_01efb3a4(puVar2);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar9 = thunk_FUN_01f117cc();
      uVar8 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                                );
      FUN_034f3578(uVar9,uVar14,uVar8,0);
      uVar14 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndmq_f64__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,uVar14);
    }
    iVar4 = FUN_03582fa8(param_1);
    if ((int)(iVar4 - param_2) < param_3) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar9 = thunk_FUN_01f117cc();
      uVar14 = thunk_FUN_01efb3a4(
                                 Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                                 );
      FUN_034f6754(uVar9,uVar14,0);
    }
    else {
      iVar4 = FUN_01eca4a4(param_1);
      puVar3 = Method_Unity_VisualScripting_Flow_InvokeDelegate__;
      puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
      if (iVar4 == 1) {
        if (param_5 == (long *)0x0) {
          lVar6 = *(long *)Method_Unity_VisualScripting_Flow_InvokeDelegate__;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar6 = *(long *)puVar3;
          }
          param_5 = (long *)**(undefined8 **)(lVar6 + 0xb8);
        }
        iVar4 = param_2 + param_3 + -1;
        lVar6 = thunk_FUN_01f116d0(param_1,*(undefined8 *)puVar2);
        puVar2 = Method_Drawing_DrawingManager_PostRender__;
        if (lVar6 == 0) {
          if ((int)param_2 <= iVar4) {
            do {
              uVar1 = param_2 + ((int)(iVar4 - param_2) >> 1);
              uVar14 = FUN_03583008(param_1,uVar1);
              if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar10 = *param_5;
              lVar6 = *(long *)puVar2;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar6) {
                    puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0358e148;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_01ecb238(param_5,lVar6,0);
LAB_0358e148:
              iVar5 = (*(code *)*puVar7)(param_5,uVar14,param_4,puVar7[1]);
              if (iVar5 == 0) {
                return uVar1;
              }
              if (iVar5 < 0) {
                param_2 = uVar1 + 1;
              }
              else {
                iVar4 = uVar1 - 1;
              }
            } while ((int)param_2 <= iVar4);
          }
        }
        else if ((int)param_2 <= iVar4) {
          do {
            uVar1 = param_2 + ((int)(iVar4 - param_2) >> 1);
            if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar11 = *param_5;
            uVar14 = *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            lVar10 = *(long *)puVar2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0358e080;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(param_5,lVar10,0);
LAB_0358e080:
            iVar5 = (*(code *)*puVar7)(param_5,uVar14,param_4,puVar7[1]);
            if (iVar5 == 0) {
              return uVar1;
            }
            if (iVar5 < 0) {
              param_2 = uVar1 + 1;
            }
            else {
              iVar4 = uVar1 - 1;
            }
          } while ((int)param_2 <= iVar4);
        }
        return ~param_2;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Callback_SetNotificationCallback<SystemVoipState>__)
      ;
      uVar9 = thunk_FUN_01f117cc();
      uVar14 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndaq_f32__);
      FUN_0357bdc0(uVar9,uVar14);
    }
  }
  uVar14 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndmq_f64__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,uVar14);
}


