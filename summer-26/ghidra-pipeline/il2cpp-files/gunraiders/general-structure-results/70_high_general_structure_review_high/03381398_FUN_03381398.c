/*
FUNCTION_NAME: FUN_03381398
ENTRY_POINT: 03381398
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_03381398(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = 
  VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnFailureDelegate_TypeInfo
  ;
  puVar2 = UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo;
  if ((DAT_04533607 & 1) == 0) {
    FUN_01c5d288(UnityEngine_UIElements_ListViewDragger_TypeInfo);
    FUN_01c5d288(Photon_Realtime_LoadBalancingClient_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnFailureDelegate_TypeInfo
                );
    DAT_04533607 = 1;
  }
  FUN_0336c7fc(param_1,*(undefined8 *)puVar3);
  FUN_0336c7fc(param_2,*(undefined8 *)puVar2);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  iVar4 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  if (iVar4 == 0x10) {
    lVar8 = *param_1;
    bVar1 = *(byte *)(*(long *)Photon_Realtime_LoadBalancingClient_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Photon_Realtime_LoadBalancingClient_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x033814f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar8 + 0x2e8))(param_1,param_2,param_3,0,*(undefined8 *)(lVar8 + 0x2f0));
      return;
    }
  }
  else {
    if (iVar4 != 4) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar5 = FUN_03295500(0);
      FUN_019b2708(param_1);
      uVar6 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      uVar7 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_ProbeVolumeAsset>_get_Current__
                                );
      uVar5 = FUN_0336f2b8(uVar7,uVar5,uVar6);
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar6 = thunk_FUN_01c496e0();
      uVar7 = thunk_FUN_01c273e8(
                                VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnFailureDelegate_TypeInfo
                                );
      FUN_0323fce4(uVar6,uVar5,uVar7,0);
      uVar5 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_Dispose__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar5);
    }
    bVar1 = *(byte *)(*(long *)UnityEngine_UIElements_ListViewDragger_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)UnityEngine_UIElements_ListViewDragger_TypeInfo)) {
      FUN_0320ee08(param_1,param_2,param_3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748(param_1);
}


