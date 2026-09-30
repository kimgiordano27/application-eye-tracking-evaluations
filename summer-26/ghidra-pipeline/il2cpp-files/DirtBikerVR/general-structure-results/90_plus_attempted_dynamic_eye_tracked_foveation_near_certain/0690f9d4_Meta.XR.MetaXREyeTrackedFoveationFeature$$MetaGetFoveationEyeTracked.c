/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 0690f9d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 125
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked(undefined8 param_1)

{
  undefined4 *unaff_x19;
  long *unaff_x23;
  
  *unaff_x19 = 0;
  *(undefined8 *)(unaff_x19 + 10) = param_1;
  thunk_FUN_03afed3c(unaff_x19 + 10,0);
                    /* try { // try from 0690f9ec to 06a0f9ef has its CatchHandler @ 0690fa6c */
                    /* try { // try from 0690f9f0 to 06a0f9f3 has its CatchHandler @ 0690fa80 */
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                    /* try { // try from 0690f9f4 to 06a0f9f7 has its CatchHandler @ 0690fa60 */
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 0690f9f8 to 06a0f9fb has its CatchHandler @ 0690fa7c */
                    /* try { // try from 0690f9fc to 06a0f9ff has its CatchHandler @ 0690fa50 */
                    /* try { // try from 0690fa00 to 06a0fa03 has its CatchHandler @ 0690fa78 */
                    /* try { // try from 0690fa04 to 06a0fa07 has its CatchHandler @ 0690fa38 */
                    /* try { // try from 0690fa08 to 06a0fa0b has its CatchHandler @ 0690fa70 */
                    /* catch() { ... } // from try @ 0690f6a4 with catch @ 0690fa0c
                       try { // try from 0690fa0c to 06a0fa9b has its CatchHandler @ 0690f598 */
                    /* catch() { ... } // from try @ 0690f72c with catch @ 0690fa10 */
  FUN_043e980c(unaff_x19 + 2,&stack0x00000018);
                    /* catch() { ... } // from try @ 0690f7e8 with catch @ 0690fa14 */
  return;
}


