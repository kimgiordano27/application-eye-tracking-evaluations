/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 05b90424
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float Meta_XR_Samples_SampleMetadata__SendEvent(long param_1,float param_2)

{
  long *unaff_x19;
  float fVar1;
  float fVar2;
  double dVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  fVar2 = 0.0;
  if (*(float *)(param_1 + 0x3d4) <= SQRT(param_2)) {
    fVar1 = (unaff_s8 * unaff_s13 + unaff_s9 * unaff_s11 + unaff_s10 * unaff_s12) / SQRT(param_2);
    fVar2 = 1.0;
    if (fVar1 <= 1.0) {
      fVar2 = fVar1;
    }
    fVar4 = -1.0;
    if (-1.0 <= fVar1) {
      fVar4 = fVar2;
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    dVar3 = acos((double)fVar4);
    fVar2 = (float)dVar3 * DAT_012e3848;
  }
  return fVar2;
}


