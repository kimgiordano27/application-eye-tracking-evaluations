/*
FUNCTION_NAME: FUN_055c42cc
ENTRY_POINT: 055c42cc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1
*/


long FUN_055c42cc(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_24;
  
  if ((DAT_06dbb6b8 & 1) == 0) {
    FUN_02d965b8(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_02d965b8(Oculus_Platform_Message_Callback<GroupPresenceJoinIntent>_TypeInfo);
    DAT_06dbb6b8 = 1;
  }
  if (param_1 != (long *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
      if ((uVar3 & 1) == 0) {
        uVar6 = thunk_FUN_02dfd288(Oculus_Platform_Message_Callback<InvitePanelResultInfo>_TypeInfo)
        ;
        goto LAB_055c4484;
      }
    }
    FUN_05574e1c(param_1,0);
    iVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    puVar1 = Oculus_Platform_Message_Callback<GroupPresenceJoinIntent>_TypeInfo;
    if (iVar2 != 3) {
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar6 = FUN_0547e2f8(0);
      FUN_02979e58(param_1);
      local_24 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      uVar7 = thunk_FUN_02dfd288(System_Drawing_Point_var);
      uVar7 = thunk_FUN_02dd2d7c(uVar7,&local_24);
      uVar8 = thunk_FUN_02dfd288(Oculus_Platform_Message_Callback<GroupPresenceLeaveIntent>_TypeInfo
                                );
      uVar6 = FUN_055873e0(uVar8,uVar6,uVar7,0);
LAB_055c4484:
      uVar6 = Oculus_Avatar2_OvrAvatarEntity__get_BehaviorSystemEnabled(param_1,uVar6,0);
      uVar7 = thunk_FUN_02dfd288(
                                Oculus_Platform_Message_Callback<LaunchFriendRequestFlowResult>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar7);
    }
    plVar4 = (long *)(**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    lVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    if (plVar4 != (long *)0x0) {
      if (*plVar4 != *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar4);
      }
    }
    FUN_055c4050(lVar5,plVar4);
    if (lVar5 != 0) {
      uVar6 = thunk_FUN_02dd3048(param_1,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
      Oculus_Platform_CAPI__ovr_NetSyncConnection_GetConnectionId(lVar5,uVar6,param_2);
      FUN_055c3b44(lVar5,param_1,param_2);
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


