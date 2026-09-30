/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 051a066c
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_foveatedRenderingLevel(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_03392fac(param_2,*param_1);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  return;
}


