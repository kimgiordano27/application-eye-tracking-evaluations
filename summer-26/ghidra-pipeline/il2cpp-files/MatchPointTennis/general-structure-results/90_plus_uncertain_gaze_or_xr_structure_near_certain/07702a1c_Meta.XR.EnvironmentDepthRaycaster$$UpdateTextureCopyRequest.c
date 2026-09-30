/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$UpdateTextureCopyRequest
ENTRY_POINT: 07702a1c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__UpdateTextureCopyRequest
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  FUN_07709cd8(&stack0x00000008,param_3,param_4,0);
  *unaff_x19 = uStack0000000000000008;
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  param_1[2] = unaff_x19[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}


