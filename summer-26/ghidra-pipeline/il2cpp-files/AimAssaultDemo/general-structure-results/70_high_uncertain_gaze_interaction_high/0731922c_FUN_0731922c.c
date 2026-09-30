/*
FUNCTION_NAME: FUN_0731922c
ENTRY_POINT: 0731922c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void FUN_0731922c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = UnityEngine_Rendering_DebugRendererBatcherStats_TypeInfo;
  if ((DAT_08268ea7 & 1) == 0) {
    FUN_0373b518(UnityEngine_Rendering_DebugRendererBatcherStats_TypeInfo);
    DAT_08268ea7 = 1;
  }
  Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(param_1,*(undefined8 *)puVar1)
  ;
  return;
}


