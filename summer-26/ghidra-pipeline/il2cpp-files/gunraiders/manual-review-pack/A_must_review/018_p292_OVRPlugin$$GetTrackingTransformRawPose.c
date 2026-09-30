/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 0338142c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 167
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__GetTrackingTransformRawPose(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  
  iVar2 = (**(code **)(param_1 + 0x1a8))(param_2,*(undefined8 *)(param_1 + 0x1b0));
  if (iVar2 == 0x10) {
    lVar6 = *unaff_x19;
    bVar1 = *(byte *)(*(long *)Photon_Realtime_LoadBalancingClient_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Photon_Realtime_LoadBalancingClient_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x033814f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x2e8))();
      return;
    }
  }
  else {
    if (iVar2 != 4) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar3 = FUN_03295500(0);
      FUN_019b2708();
      uVar4 = (**(code **)(*unaff_x19 + 0x1b8))();
      uVar5 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_ProbeVolumeAsset>_get_Current__
                                );
      uVar3 = FUN_0336f2b8(uVar5,uVar3,uVar4);
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar4 = thunk_FUN_01c496e0();
      uVar5 = thunk_FUN_01c273e8(
                                VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnFailureDelegate_TypeInfo
                                );
      FUN_0323fce4(uVar4,uVar3,uVar5,0);
      uVar3 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_Dispose__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,uVar3);
    }
    bVar1 = *(byte *)(*(long *)UnityEngine_UIElements_ListViewDragger_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)UnityEngine_UIElements_ListViewDragger_TypeInfo)) {
      FUN_0320ee08();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


