/*
FUNCTION_NAME: FUN_059b93a8
ENTRY_POINT: 059b93a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_059b93a8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((DAT_06dc14dd & 1) == 0) {
    FUN_02d965b8(OVRTelemetryConstants_OVRManager_TypeInfo);
    FUN_02d965b8(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    DAT_06dc14dd = 1;
  }
  plVar1 = (long *)(param_1 + 0x10);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    FUN_0400f984(lVar2,*(undefined8 *)OVRTelemetryConstants_OVRManager_TypeInfo);
    *plVar1 = lVar2;
    LeanTween__value(plVar1,lVar2);
  }
  return lVar2;
}


