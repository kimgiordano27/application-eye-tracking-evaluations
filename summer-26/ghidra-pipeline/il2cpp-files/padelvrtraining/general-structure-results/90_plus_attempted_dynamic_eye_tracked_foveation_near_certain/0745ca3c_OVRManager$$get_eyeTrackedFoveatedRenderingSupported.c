/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0745ca3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_x9;
  long in_x10;
  undefined8 unaff_x19;
  long unaff_x20;
  
  uVar1 = unaff_x19;
  if (*(long *)(in_x10 + in_x9 * 8 + -8) != param_1) {
    uVar1 = 0;
  }
  thunk_FUN_03d1023c(param_2,uVar1);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x20 + 0x28));
  return;
}


