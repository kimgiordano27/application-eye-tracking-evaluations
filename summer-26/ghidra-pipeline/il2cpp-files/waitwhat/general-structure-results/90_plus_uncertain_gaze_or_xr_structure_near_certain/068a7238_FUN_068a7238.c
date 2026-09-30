/*
FUNCTION_NAME: FUN_068a7238
ENTRY_POINT: 068a7238
PROGRAM: waitwhat-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_9;validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_068a7238(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = OVRPermissionsRequester_Permission_TypeInfo;
  if ((DAT_075590bf & 1) == 0) {
    FUN_03188a78(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    FUN_03188a78(PTR_DAT_070c9c68);
    FUN_03188a78(OVRPermissionsRequester_Permission_TypeInfo);
    FUN_03188a78(OVRPlugin_<>c_TypeInfo);
    FUN_03188a78(OVRPlugin_<>c__DisplayClass531_0_TypeInfo);
    FUN_03188a78(OVRPlugin_BodyJointLocation_TypeInfo);
    DAT_075590bf = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVRPlugin_<>c_TypeInfo);
    FUN_068a7008(uVar3,0,*(undefined8 *)OVRPlugin_BodyJointLocation_TypeInfo);
    if (*(int *)(*(long *)PTR_DAT_070c9c68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar2 = FUN_03a21ea8(uVar3,*(undefined8 *)
                                UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
  }
  *param_1 = lVar2;
  return;
}


