/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorName
ENTRY_POINT: 056a06e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName(float param_1,float param_2)

{
  bool bVar1;
  float *unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  fVar2 = **(float **)(*(long *)PTR_DAT_069fbb10 + 0xb8) * 8.0;
  fVar3 = param_1 * DAT_010fd0c4;
  if (param_1 * DAT_010fd0c4 <= fVar2) {
    fVar3 = fVar2;
  }
  if (fVar3 <= ABS(unaff_s9 - unaff_s8)) {
    bVar1 = false;
  }
  else {
    fVar3 = ABS(*unaff_x19);
    fVar4 = ABS(unaff_x19[2]);
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = fVar3 * DAT_010fd0c4;
    if (fVar3 * DAT_010fd0c4 <= fVar2) {
      fVar4 = fVar2;
    }
    bVar1 = ABS(unaff_x19[2] - *unaff_x19) < fVar4;
  }
  return bVar1;
}


