/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 0338154c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 158
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__GetTrackingTransformRelativePose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 03381554 to 034815eb has its CatchHandler @ 03381554
                       catch() { ... } // from try @ 03381554 with catch @ 03381554
                       catch() { ... } // from try @ 03381618 with catch @ 03381554
                       catch() { ... } // from try @ 03381670 with catch @ 03381554
                       catch() { ... } // from try @ 033816a8 with catch @ 03381554 */
  uVar1 = FUN_0336f2b8();
  thunk_FUN_01c273e8(PTR_DAT_04231770);
  uVar2 = thunk_FUN_01c496e0();
  uVar3 = thunk_FUN_01c273e8(
                            VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnFailureDelegate_TypeInfo
                            );
  FUN_0323fce4(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_Dispose__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar1);
}


