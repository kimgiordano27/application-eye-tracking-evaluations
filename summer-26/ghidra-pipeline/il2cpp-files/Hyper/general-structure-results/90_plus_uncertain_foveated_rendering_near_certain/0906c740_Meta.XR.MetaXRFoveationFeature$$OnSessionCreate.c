/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 0906c740
PROGRAM: Hyper-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFoveationFeature__OnSessionCreate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_08bc9f74(param_1,param_3,0);
                    /* try { // try from 0906c75c to 0916c8ef has its CatchHandler @ 0906c75c
                       catch() { ... } // from try @ 0906c75c with catch @ 0906c75c
                       catch() { ... } // from try @ 0906c900 with catch @ 0906c75c
                       catch() { ... } // from try @ 0906ca98 with catch @ 0906c75c
                       catch() { ... } // from try @ 0906cb64 with catch @ 0906c75c */
  FUN_08bcc3c0();
  return;
}


