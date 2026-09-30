/*
FUNCTION_NAME: OVRManager$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 033a9820
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__SetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x20;
  
  *(undefined1 *)(unaff_x19 + 0x89e) = in_w8;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033a95fc(1);
  return;
}


