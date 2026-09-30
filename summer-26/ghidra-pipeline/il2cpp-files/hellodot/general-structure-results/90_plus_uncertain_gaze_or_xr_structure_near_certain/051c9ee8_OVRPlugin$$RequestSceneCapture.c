/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 051c9ee8
PROGRAM: hellodot-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture
               (long param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5)

{
  float fVar1;
  float fVar2;
  
  *(float *)(param_1 + 0x14) = param_2;
  fVar1 = (param_2 - param_3) / (param_5 - param_3);
  fVar2 = fVar1;
  if (1.0 < fVar1) {
    fVar2 = 1.0;
  }
  fVar2 = 1.0 - fVar2;
  if (fVar1 < 0.0) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0x28) = fVar2;
  return;
}


