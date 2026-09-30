/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 06aac36c
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  float *unaff_x19;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  puVar1 = (undefined8 *)FUN_0338f71c();
  fVar2 = (float)(*(code *)*puVar1)();
  param_2 = param_2 - unaff_s9;
  param_3 = param_3 - unaff_s10;
  fVar2 = (float)FUN_07a00a64(fVar2 - unaff_s8,0);
  *unaff_x19 = unaff_s8;
  unaff_x19[1] = unaff_s9;
  unaff_x19[2] = unaff_s10;
  unaff_x19[3] = fVar2;
  unaff_x19[4] = param_2;
  unaff_x19[5] = param_3;
  unaff_x19[6] = param_4;
  return;
}


