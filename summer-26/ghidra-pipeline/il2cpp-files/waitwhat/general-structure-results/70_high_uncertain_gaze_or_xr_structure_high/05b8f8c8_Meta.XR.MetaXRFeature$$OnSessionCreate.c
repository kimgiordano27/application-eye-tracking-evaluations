/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 05b8f8c8
PROGRAM: waitwhat-libil2cpp.so
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
               (long param_1,undefined8 param_2,undefined1 param_3 [16],undefined8 param_4)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  FUN_046763c0(param_2,param_3,*(undefined4 *)(param_1 + 0x3c),param_4,*unaff_x24);
  unaff_x19[1] = uStack0000000000000008;
  *unaff_x19 = uStack0000000000000000;
                    /* try { // try from 05b8f8e0 to 05c8f937 has its CatchHandler @ 05b8fbe8 */
  return;
}


