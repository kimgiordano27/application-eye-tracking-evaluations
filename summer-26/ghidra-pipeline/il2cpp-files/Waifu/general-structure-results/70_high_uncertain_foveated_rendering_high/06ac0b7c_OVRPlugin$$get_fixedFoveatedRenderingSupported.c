/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 06ac0b7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRPlugin__get_fixedFoveatedRenderingSupported
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float in_s16;
  float in_s21;
  float in_s23;
  float in_s24;
  
  return (*(float *)(unaff_x19 + 0x2c) * ((unaff_s10 * param_1 + in_s16) - unaff_s8 * param_3) +
         param_6 * (((in_s23 - in_s21) - unaff_s9 * param_2) - unaff_s10 * param_3) +
         *(float *)(unaff_x19 + 0x30) * ((unaff_s9 * param_3 + param_5) - unaff_s10 * param_2)) -
         in_s24 * ((unaff_s8 * param_2 + param_4) - unaff_s9 * param_1);
}


