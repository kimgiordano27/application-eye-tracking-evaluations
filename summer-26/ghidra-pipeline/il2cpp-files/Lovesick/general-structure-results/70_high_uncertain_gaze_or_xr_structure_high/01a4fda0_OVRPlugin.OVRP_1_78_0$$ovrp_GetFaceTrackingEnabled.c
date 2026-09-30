/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 01a4fda0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(undefined8 param_1)

{
                    /* try { // try from 01a4fda0 to 01b4fda7 has its CatchHandler @ 01a500ac */
  if (DAT_0377b660 == (code *)0x0) {
                    /* try { // try from 01a4fdc8 to 01b4fdcf has its CatchHandler @ 01a500b8 */
                    /* try { // try from 01a4fdec to 01b4fdf3 has its CatchHandler @ 01a500a4 */
    DAT_0377b660 = (code *)thunk_FUN_00d625b4();
  }
  (*DAT_0377b660)(param_1);
                    /* try { // try from 01a4fe08 to 01b4fe0f has its CatchHandler @ 01a500b4 */
  return;
}


