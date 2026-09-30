/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 052ecfbc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionCreate
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,float param_6)

{
  bool in_ZR;
  undefined4 *unaff_x19;
  undefined4 unaff_s9;
  
                    /* try { // try from 052ecfbc to 053ecfc3 has its CatchHandler @ 052ecfcc */
  *unaff_x19 = param_1;
  unaff_x19[1] = param_2;
                    /* try { // try from 052ecfc4 to 053ecfcf has its CatchHandler @ 052ecb4c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052ecfbc with catch @ 052ecfcc
                        */
  if (!in_ZR) {
    param_4 = unaff_s9;
  }
  unaff_x19[2] = param_3;
  unaff_x19[3] = param_4;
  *(ulong *)(unaff_x19 + 4) = CONCAT44(param_5 * 0.5,param_6 * 0.5);
  return;
}


