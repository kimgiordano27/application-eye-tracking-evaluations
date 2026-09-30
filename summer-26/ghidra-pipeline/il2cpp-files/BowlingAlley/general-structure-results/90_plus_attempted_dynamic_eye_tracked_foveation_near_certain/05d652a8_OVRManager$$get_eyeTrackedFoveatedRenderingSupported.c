/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05d652a8
PROGRAM: BowlingAlley-libil2cpp.so
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
  long *plVar1;
  long in_x9;
  long *unaff_x19;
  long unaff_x20;
  
  if ((uint)*(byte *)(*unaff_x19 + 0x130) < (uint)in_x9) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + in_x9 * 8 + -8) != param_1) {
      plVar1 = (long *)0x0;
    }
  }
  thunk_FUN_0333a630(param_2,plVar1);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
  thunk_FUN_0333a630((undefined8 *)(unaff_x20 + 0x38));
  return;
}


