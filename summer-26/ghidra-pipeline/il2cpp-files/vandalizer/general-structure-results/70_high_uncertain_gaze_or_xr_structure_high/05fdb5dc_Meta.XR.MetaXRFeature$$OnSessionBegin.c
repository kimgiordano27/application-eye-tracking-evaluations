/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 05fdb5dc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionBegin(undefined1 param_1 [16],float param_2,float param_3)

{
  int in_w8;
  long lVar1;
  long unaff_x20;
  float unaff_s8;
  float unaff_s11;
  
  if (in_w8 == 0) {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x20 + 0xaf2) = 1;
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
  FUN_06e6a69c(unaff_s8 + unaff_s11 * *(float *)(lVar1 + 0x18) * 0.5,
               param_2 + unaff_s11 * *(float *)(lVar1 + 0x1c) * 0.5,
               param_3 + unaff_s11 * *(float *)(lVar1 + 0x20) * 0.5);
  return;
}


