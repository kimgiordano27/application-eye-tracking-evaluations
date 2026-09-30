/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 0366772c
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


void OVRManager__get_foveatedRenderingLevel
               (float param_1,undefined1 param_2 [16],undefined4 param_3)

{
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  
  *(undefined4 *)(unaff_x19 + 8) = param_3;
  *(float *)(unaff_x19 + 0xc) =
       (unaff_s15 * unaff_s12 + param_1 + unaff_s8 * unaff_s11) - unaff_s9 * unaff_s13;
  *(float *)(unaff_x19 + 0x10) =
       (unaff_s10 * unaff_s13 + unaff_s9 * unaff_s14 + unaff_s8 * unaff_s12) - unaff_s15 * unaff_s11
  ;
  *(float *)(unaff_x19 + 0x14) =
       (unaff_s9 * unaff_s11 + unaff_s15 * unaff_s14 + unaff_s8 * unaff_s13) - unaff_s10 * unaff_s12
  ;
  *(float *)(unaff_x19 + 0x18) =
       ((unaff_s8 * unaff_s14 - unaff_s10 * unaff_s11) - unaff_s9 * unaff_s12) -
       unaff_s15 * unaff_s13;
  return;
}


