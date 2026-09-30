/*
FUNCTION_NAME: OVRManager$$get_runtimeSettings
ENTRY_POINT: 06922a34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__get_runtimeSettings(undefined8 param_1)

{
  int in_w10;
  uint unaff_w19;
  double dVar1;
  double unaff_d8;
  double __x;
  double in_stack_00000008;
  
  if (in_w10 == 0) {
    thunk_FUN_03ae8be4(param_1);
  }
                    /* try { // try from 06922a48 to 06a22a4b has its CatchHandler @ 06922ab8 */
                    /* try { // try from 06922a4c to 06a22a4f has its CatchHandler @ 06922aa4 */
                    /* try { // try from 06922a50 to 06a22a53 has its CatchHandler @ 06922ab0 */
  __x = (double)(1 << (ulong)(unaff_w19 & 0x1f)) * unaff_d8;
                    /* try { // try from 06922a54 to 06a22a57 has its CatchHandler @ 06922aa0 */
                    /* try { // try from 06922a58 to 06a22a5b has its CatchHandler @ 06922a9c */
  dVar1 = modf(__x,&stack0x00000008);
                    /* try { // try from 06922a5c to 06a22a5f has its CatchHandler @ 06922a98 */
                    /* try { // try from 06922a60 to 06a22a63 has its CatchHandler @ 06922a84 */
  if (0.0 <= __x) {
                    /* catch() { ... } // from try @ 069228ec with catch @ 06922a7c */
                    /* catch() { ... } // from try @ 069228dc with catch @ 06922a80 */
                    /* catch() { ... } // from try @ 069228d0 with catch @ 06922a84
                       catch() { ... } // from try @ 06922a60 with catch @ 06922a84 */
    if (dVar1 != 0.5) {
      in_stack_00000008 = (double)(long)(__x + 0.5);
      goto LAB_06922ab8;
    }
                    /* catch() { ... } // from try @ 06922874 with catch @ 06922a88 */
    dVar1 = 1.0;
  }
  else {
                    /* catch() { ... } // from try @ 06922a04 with catch @ 06922a64
                       try { // try from 06922a64 to 06a22acf has its CatchHandler @ 06922748 */
                    /* catch() { ... } // from try @ 06922a1c with catch @ 06922a68 */
                    /* catch() { ... } // from try @ 069229c0 with catch @ 06922a6c */
    if (dVar1 != -0.5) {
      in_stack_00000008 = (double)(long)(__x + -0.5);
      goto LAB_06922ab8;
    }
                    /* catch() { ... } // from try @ 069229d8 with catch @ 06922a70 */
                    /* catch() { ... } // from try @ 06922958 with catch @ 06922a74 */
    dVar1 = -1.0;
                    /* catch() { ... } // from try @ 06922970 with catch @ 06922a78 */
  }
  if (((long)in_stack_00000008 & 1U) != 0) {
    in_stack_00000008 = in_stack_00000008 + dVar1;
  }
LAB_06922ab8:
  return (long)in_stack_00000008;
}


