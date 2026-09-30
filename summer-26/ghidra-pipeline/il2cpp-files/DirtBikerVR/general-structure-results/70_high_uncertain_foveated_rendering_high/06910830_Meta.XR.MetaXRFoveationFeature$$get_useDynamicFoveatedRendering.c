/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering
ENTRY_POINT: 06910830
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__get_useDynamicFoveatedRendering(void)

{
  long unaff_x19;
  long *unaff_x23;
  
  thunk_FUN_03afed3c();
                    /* try { // try from 06910838 to 06a10843 has its CatchHandler @ 06910b64 */
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 06910848 to 06a10853 has its CatchHandler @ 06910b60 */
  FUN_043e6720(unaff_x19 + 8,&stack0x00000018);
  return;
}


