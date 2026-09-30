/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 060a1130
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_071c3148(param_1,param_2,0);
  *(undefined8 *)(unaff_x19 + 0x108) = uVar1;
  thunk_FUN_036b7ad0(unaff_x19 + 0x108);
  return;
}


