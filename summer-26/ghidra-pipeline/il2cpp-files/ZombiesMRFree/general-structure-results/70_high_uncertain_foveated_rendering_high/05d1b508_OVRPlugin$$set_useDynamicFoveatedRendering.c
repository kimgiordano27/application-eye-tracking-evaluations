/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05d1b508
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_x9;
  undefined8 unaff_x19;
  long unaff_x20;
  
  uVar1 = unaff_x19;
  if (in_x9 != param_1) {
    uVar1 = 0;
  }
  thunk_FUN_03048534(param_2,uVar1);
  *(undefined8 *)(unaff_x20 + 0x120) = unaff_x19;
  thunk_FUN_03048534(unaff_x20 + 0x120);
  return;
}


