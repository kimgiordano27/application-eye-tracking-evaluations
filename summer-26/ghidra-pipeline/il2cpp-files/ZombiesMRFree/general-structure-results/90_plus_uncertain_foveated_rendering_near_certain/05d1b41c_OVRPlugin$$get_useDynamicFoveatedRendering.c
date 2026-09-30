/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 05d1b41c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFoveatedRendering(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_x9;
  long in_x10;
  uint in_w11;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (in_w11 < (uint)in_x9) {
    uVar1 = 0;
  }
  else {
    uVar1 = unaff_x19;
    if (*(long *)(*(long *)(in_x10 + 200) + in_x9 * 8 + -8) != param_1) {
      uVar1 = 0;
    }
  }
  thunk_FUN_03048534(param_2,uVar1);
  *(undefined8 *)(unaff_x20 + 0x130) = unaff_x19;
  thunk_FUN_03048534(unaff_x20 + 0x130);
  return;
}


