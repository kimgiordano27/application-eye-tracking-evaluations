/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 036678cc
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


void OVRManager__get_useDynamicFoveatedRendering
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined4 *unaff_x19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float in_s16;
  float in_s17;
  float in_s21;
  float in_s22;
  float in_s23;
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0366786c with catch @ 036678f4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03667870 with catch @ 036678f8
                        */
                    /* try { // try from 03667910 to 03767927 has its CatchHandler @ 036679a0 */
  *unaff_x19 = unaff_s9;
  unaff_x19[1] = unaff_s10;
  unaff_x19[2] = unaff_s8;
  unaff_x19[3] = (unaff_s12 * param_3 + param_5 + param_6) - unaff_s13 * param_2;
  unaff_x19[4] = (unaff_s13 * param_1 + in_s16 + in_s17) - unaff_s11 * param_3;
  unaff_x19[5] = (unaff_s11 * param_2 + in_s22 + unaff_s13 * param_4) - unaff_s12 * param_1;
  unaff_x19[6] = ((in_s23 - in_s21) - unaff_s12 * param_2) - unaff_s13 * param_3;
  return;
}


