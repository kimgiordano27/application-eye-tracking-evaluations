/*
FUNCTION_NAME: FUN_0343ede8
ENTRY_POINT: 0343ede8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


undefined8 FUN_0343ede8(long param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_0483286a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    DAT_0483286a = 1;
  }
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_OVRPassthroughColorLut_RefreshIfInitialized__);
    FUN_034efd20(uVar7,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(Method_System_Text_RegularExpressions_RegexParser_PopGroup__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar5);
  }
  if (param_3 < 0) {
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    uVar7 = FUN_035ac8e0(uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar8 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_OVRPassthroughLayer_SetColorMap__);
    FUN_034f3578(uVar8,uVar5,uVar7,0);
  }
  else {
    puVar6 = 
    Method_System_Text_RegularExpressions_Regex_System_Runtime_Serialization_ISerializable_GetObjectData__
    ;
    if (((-1 < param_4) && (param_4 <= *(int *)(param_2 + 0x18))) &&
       (puVar6 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
       , param_3 <= *(int *)(param_2 + 0x18) - param_4)) {
      if (*(int *)(param_1 + 0x18) == 0) {
        local_38 = 0;
        puVar11 = &local_38;
        FUN_0343d764(param_1,param_2,param_3,param_4,&local_38,0,*(undefined4 *)(param_1 + 0x14),1);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x24);
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = param_4 / iVar1;
        }
        if (param_4 != iVar3 * iVar1) {
          uVar7 = thunk_FUN_01efb3a4(
                                    Method_System_Text_RegularExpressions_RegexParser_ScanBackslash__
                                    );
          uVar7 = FUN_035ac8e0(uVar7,0);
          thunk_FUN_01efb3a4(Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__)
          ;
          uVar8 = thunk_FUN_01f117cc();
          FUN_03437810(uVar8,uVar7,0);
          goto LAB_0343f064;
        }
        if (*(long *)(param_1 + 0x70) == 0) {
          local_48 = 0;
          uVar2 = *(undefined4 *)(param_1 + 0x14);
          puVar9 = &local_48;
          puVar11 = &local_48;
        }
        else {
          lVar4 = FUN_01f08890(*(undefined8 *)
                                Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                               *(int *)(*(long *)(param_1 + 0x70) + 0x18) + param_4);
          lVar10 = *(long *)(param_1 + 0x70);
          if (lVar10 == 0) {
LAB_0343ef90:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          thunk_FUN_01f0a9f4(lVar10,0,lVar4,0,*(undefined4 *)(lVar10 + 0x18),0);
          if (*(long *)(param_1 + 0x70) == 0) goto LAB_0343ef90;
          thunk_FUN_01f0a9f4(param_2,param_3,lVar4,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x18)
                             ,param_4,0);
          local_50 = 0;
          if (lVar4 == 0) goto LAB_0343ef90;
          uVar2 = *(undefined4 *)(param_1 + 0x14);
          param_4 = *(int *)(lVar4 + 0x18);
          puVar9 = &local_50;
          puVar11 = &local_50;
          param_3 = 0;
          param_2 = lVar4;
        }
        local_50 = 0;
        FUN_0343e34c(param_1,param_2,param_3,param_4,puVar9,0,uVar2,1);
      }
      System_Collections_CollectionBase__OnValidate(param_1);
      return *puVar11;
    }
    uVar7 = thunk_FUN_01efb3a4(puVar6);
    uVar7 = FUN_035ac8e0(uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar8,uVar7,0);
  }
LAB_0343f064:
  uVar7 = thunk_FUN_01efb3a4(Method_System_Text_RegularExpressions_RegexParser_PopGroup__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar7);
}


