/*
FUNCTION_NAME: OVRPlugin$$get_latency
ENTRY_POINT: 0337f524
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__get_latency(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_MoveNext__
                            );
  uVar2 = thunk_FUN_01c273e8(
                            VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnFailureDelegate_TypeInfo
                            );
  FUN_0323fce4(param_1,uVar1,uVar2,0);
  uVar1 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_get_Current__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(param_1,uVar1);
}


