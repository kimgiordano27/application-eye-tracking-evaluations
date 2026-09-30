/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 0366791c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFoveatedRendering
               (undefined4 param_1,float param_2,float param_3,undefined1 param_4 [16],
               undefined4 param_5,undefined4 param_6)

{
  undefined4 *unaff_x19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  
  *unaff_x19 = unaff_s9;
  unaff_x19[1] = unaff_s10;
  unaff_x19[2] = unaff_s8;
  unaff_x19[3] = param_5;
                    /* try { // try from 03667928 to 0376798f has its CatchHandler @ 03667818 */
  unaff_x19[4] = param_6;
  unaff_x19[5] = param_1;
  unaff_x19[6] = param_2 - param_3;
  return;
}


