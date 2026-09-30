/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateAtTime
ENTRY_POINT: 033810ac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetNodePoseStateAtTime(ulong param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x21;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  puVar7 = *(undefined8 **)(unaff_x21 + 0x278);
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(UnityEngine_UIElements_ListViewDragger_TypeInfo);
    FUN_01c5d288(Photon_Realtime_LoadBalancingClient_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnFailureDelegate_TypeInfo
                );
    *(undefined1 *)(unaff_x22 + 0x606) = 1;
  }
  FUN_0336c7fc(param_2,*unaff_x23);
  FUN_0336c7fc(param_3,*puVar7);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  iVar2 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  if (iVar2 == 0x10) {
    lVar6 = *param_2;
    bVar1 = *(byte *)(*(long *)Photon_Realtime_LoadBalancingClient_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Photon_Realtime_LoadBalancingClient_TypeInfo)) {
      (**(code **)(lVar6 + 0x2c8))(param_2,param_3,0,*(undefined8 *)(lVar6 + 0x2d0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(param_2);
  }
  if (iVar2 != 4) {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar3 = FUN_03295500(0);
    FUN_019b2708(param_2);
    uVar4 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    uVar5 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeReferenceVolumeProfile>_get_Current__
                              );
    uVar3 = FUN_0336f2b8(uVar5,uVar3,uVar4);
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar4 = thunk_FUN_01c496e0();
    uVar5 = thunk_FUN_01c273e8(
                              VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnFailureDelegate_TypeInfo
                              );
    FUN_0323fce4(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_ProbeVolumeAsset>_Dispose__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar4,uVar3);
  }
  lVar6 = *param_2;
  bVar1 = *(byte *)(*(long *)UnityEngine_UIElements_ListViewDragger_TypeInfo + 0x130);
  if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
     (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)UnityEngine_UIElements_ListViewDragger_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x03381180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x2c8))(param_2,param_3,*(undefined8 *)(lVar6 + 0x2d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748(param_2);
}


