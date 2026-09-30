/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions
ENTRY_POINT: 088a79f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


float UnityEngine_XR_OpenXR_OpenXRSettings__Internal_HasRequestedEyeTrackingPermissions(void)

{
  float unaff_s8;
  float unaff_s12;
  float unaff_s15;
  float in_s17;
  
                    /* try { // try from 088a79f8 to 089a79fb has its CatchHandler @ 088a7a24 */
                    /* try { // try from 088a79fc to 089a7a33 has its CatchHandler @ 088a730c */
                    /* catch() { ... } // from try @ 088a79f8 with catch @ 088a7a24 */
                    /* try { // try from 088a7a34 to 089a7a3b has its CatchHandler @ 088a7a50 */
                    /* try { // try from 088a7a3c to 089a7a47 has its CatchHandler @ 088a730c */
                    /* try { // try from 088a7a48 to 089a7a4f has its CatchHandler @ 088a7a50 */
                    /* catch() { ... } // from try @ 088a78c0 with catch @ 088a7a50
                       catch() { ... } // from try @ 088a79c4 with catch @ 088a7a50
                       catch() { ... } // from try @ 088a7a34 with catch @ 088a7a50
                       catch() { ... } // from try @ 088a7a48 with catch @ 088a7a50 */
  return unaff_s15 + (unaff_s12 / SQRT(unaff_s8)) * in_s17;
}


