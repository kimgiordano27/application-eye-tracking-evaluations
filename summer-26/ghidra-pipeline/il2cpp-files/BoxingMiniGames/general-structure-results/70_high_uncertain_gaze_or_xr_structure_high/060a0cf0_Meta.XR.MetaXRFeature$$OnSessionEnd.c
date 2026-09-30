/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 060a0cf0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float Meta_XR_MetaXRFeature__OnSessionEnd(float param_1,float param_2,float param_3,float param_4)

{
  bool in_NG;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000058;
  
  if (!in_NG) {
    param_1 = param_1 - (unaff_s13 *
                        (param_3 * unaff_s12 + param_1 * unaff_s13 + param_2 * unaff_s11)) / param_4
    ;
  }
                    /* try { // try from 060a0d34 to 061a0ec7 has its CatchHandler @ 060a0d34
                       catch() { ... } // from try @ 060a0d34 with catch @ 060a0d34
                       catch() { ... } // from try @ 060a0ed4 with catch @ 060a0d34
                       catch() { ... } // from try @ 060a0f80 with catch @ 060a0d34
                       catch() { ... } // from try @ 060a0fa4 with catch @ 060a0d34
                       catch() { ... } // from try @ 060a0fec with catch @ 060a0d34
                       catch() { ... } // from try @ 060a10a0 with catch @ 060a0d34
                       catch() { ... } // from try @ 060a10b8 with catch @ 060a0d34 */
  return in_stack_00000058._4_4_ + param_1;
}


