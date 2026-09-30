/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClampRayOriginToCamFrustumPlanes
ENTRY_POINT: 072a4630
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentDepthRaycaster__ClampRayOriginToCamFrustumPlanes
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 in_w9;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = in_w9;
  if (0 < param_4) {
    FUN_0769c874(*(undefined8 *)(param_1 + 0x10),0,param_4,0);
    return;
  }
  return;
}


