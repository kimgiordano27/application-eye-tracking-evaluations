/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 0366777c
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


void OVRManager__set_foveatedRenderingLevel
               (float param_1,float param_2,undefined4 param_3,undefined1 param_4 [16],float param_5
               ,float param_6,float param_7,float param_8)

{
  long unaff_x19;
  float in_s16;
  float in_s17;
  float in_s19;
  float in_s20;
  float in_s24;
  
  *(undefined4 *)(unaff_x19 + 8) = param_3;
  *(float *)(unaff_x19 + 0xc) = param_1 - param_5;
  *(float *)(unaff_x19 + 0x10) = (param_8 + param_2) - in_s16;
  *(float *)(unaff_x19 + 0x14) = (in_s17 + param_6) - in_s19;
  *(float *)(unaff_x19 + 0x18) = (param_7 - in_s20) - in_s24;
  return;
}


