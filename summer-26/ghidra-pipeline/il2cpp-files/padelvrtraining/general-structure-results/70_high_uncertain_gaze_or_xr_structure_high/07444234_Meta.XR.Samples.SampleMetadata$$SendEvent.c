/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 07444234
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07444260) */

bool Meta_XR_Samples_SampleMetadata__SendEvent(float param_1,float param_2)

{
  bool in_NG;
  long unaff_x19;
  long *unaff_x20;
  double dVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (!in_NG) {
    param_1 = (unaff_s8 * unaff_s11 + unaff_s10 * unaff_s13 + unaff_s9 * unaff_s12) / param_1;
    if (param_1 < -1.0) {
      param_1 = -1.0;
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    dVar1 = acos((double)param_1);
    param_2 = (float)dVar1 * DAT_01915214;
  }
  return param_2 <= *(float *)(unaff_x19 + 0x30);
}


