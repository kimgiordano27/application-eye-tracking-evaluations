/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 01a4b348
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


undefined8 OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(undefined8 param_1)

{
  undefined8 uVar1;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  
  FUN_017cc47c(param_1,0);
                    /* try { // try from 01a4b360 to 01b4b36b has its CatchHandler @ 01a4b66c */
  uVar1 = FUN_01a4b3d0();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                    /* try { // try from 01a4b37c to 01b4b387 has its CatchHandler @ 01a4b688 */
    thunk_FUN_00d32864(*unaff_x24);
  }
  free(unaff_x20);
                    /* try { // try from 01a4b390 to 01b4b39b has its CatchHandler @ 01a4b68c */
  free(unaff_x21);
  free(unaff_x22);
                    /* try { // try from 01a4b3ac to 01b4b3b7 has its CatchHandler @ 01a4b668 */
  free(unaff_x23);
  return uVar1;
}


