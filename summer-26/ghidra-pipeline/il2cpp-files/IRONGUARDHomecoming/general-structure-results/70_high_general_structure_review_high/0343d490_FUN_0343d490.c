/*
FUNCTION_NAME: FUN_0343d490
ENTRY_POINT: 0343d490
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


ulong FUN_0343d490(long param_1,long param_2,int param_3,int param_4,long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long local_48;
  
  local_48 = param_5;
  if ((DAT_04832869 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    DAT_04832869 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    puVar6 = Method_OVRPassthroughColorLut_RefreshIfInitialized__;
  }
  else {
    if (param_5 != 0) {
      if (param_3 < 0) {
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                                  );
        uVar4 = FUN_035ac8e0(uVar4,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar7 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(Method_OVRPassthroughLayer_SetColorMap__);
        FUN_034f3578(uVar7,uVar5,uVar4,0);
      }
      else {
        puVar6 = 
        Method_System_Text_RegularExpressions_Regex_System_Runtime_Serialization_ISerializable_GetObjectData__
        ;
        if (0 < param_4) {
          iVar2 = *(int *)(param_1 + 0x24);
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = param_4 / iVar2;
          }
          if (((param_4 == iVar1 * iVar2) && (param_4 <= *(int *)(param_2 + 0x18))) &&
             (puVar6 = 
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
             , param_3 <= *(int *)(param_2 + 0x18) - param_4)) {
            uVar8 = *(uint *)(param_1 + 0x14);
            if (*(int *)(param_1 + 0x18) == 0) {
              uVar3 = FUN_0343d764(param_1,param_2,param_3,param_4,&local_48,param_6,uVar8,0);
            }
            else {
              if ((uVar8 | 2) != 3) {
                lVar9 = *(long *)(param_1 + 0x70);
                if (lVar9 != 0) {
                  FUN_0343e34c(param_1,lVar9,0,*(undefined4 *)(lVar9 + 0x18),&local_48,param_6,uVar8
                               ,0);
                  iVar2 = *(int *)(param_1 + 0x28);
                  param_4 = param_4 - *(int *)(param_1 + 0x24);
                  thunk_FUN_01f0a9f4(param_2,param_4 + param_3,*(undefined8 *)(param_1 + 0x70),0,
                                     *(int *)(param_1 + 0x24),0);
                  iVar2 = FUN_0343e34c(param_1,param_2,param_3,param_4,&local_48,iVar2 + param_6,
                                       *(undefined4 *)(param_1 + 0x14),0);
                  return (ulong)(uint)(*(int *)(param_1 + 0x28) + iVar2);
                }
                uVar4 = FUN_01f08890(*(undefined8 *)
                                      Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                    );
                *(undefined8 *)(param_1 + 0x70) = uVar4;
                thunk_FUN_01f51358((long *)(param_1 + 0x70),uVar4);
                param_4 = param_4 - *(int *)(param_1 + 0x24);
                thunk_FUN_01f0a9f4(param_2,param_4 + param_3,*(undefined8 *)(param_1 + 0x70),0,
                                   *(int *)(param_1 + 0x24),0);
                uVar8 = *(uint *)(param_1 + 0x14);
              }
              uVar3 = FUN_0343e34c(param_1,param_2,param_3,param_4,&local_48,param_6,uVar8,0);
            }
            return uVar3;
          }
        }
        uVar4 = thunk_FUN_01efb3a4(puVar6);
        uVar4 = FUN_035ac8e0(uVar4,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar7 = thunk_FUN_01f117cc();
        FUN_034f6754(uVar7,uVar4,0);
      }
      uVar4 = thunk_FUN_01efb3a4(Method_System_Text_RegularExpressions_Regex_ValidateMatchTimeout__)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,uVar4);
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    puVar6 = Method_OVRPlayerController_ResetOrientation__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar6);
  FUN_034efd20(uVar4,uVar5,0);
  uVar5 = thunk_FUN_01efb3a4(Method_System_Text_RegularExpressions_Regex_ValidateMatchTimeout__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


