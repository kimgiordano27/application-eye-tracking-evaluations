/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 03137560
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel
               (float param_1,float param_2,undefined4 param_3,float param_4,undefined1 param_5 [16]
               ,float param_6,undefined1 param_7 [16],float param_8)

{
  long unaff_x19;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  float in_s17;
  float in_s18;
  float in_s20;
  float in_s22;
  
  *(undefined4 *)(unaff_x19 + 8) = param_3;
  *(float *)(unaff_x19 + 0xc) = (param_4 + param_1) - unaff_s9 * unaff_s13;
  *(float *)(unaff_x19 + 0x10) = (param_8 + param_2) - unaff_s15 * unaff_s11;
  *(float *)(unaff_x19 + 0x14) = (in_s17 + param_6) - unaff_s10 * unaff_s12;
  *(float *)(unaff_x19 + 0x18) = ((in_s22 - in_s18) - in_s20) - unaff_s15 * unaff_s13;
  return;
}


