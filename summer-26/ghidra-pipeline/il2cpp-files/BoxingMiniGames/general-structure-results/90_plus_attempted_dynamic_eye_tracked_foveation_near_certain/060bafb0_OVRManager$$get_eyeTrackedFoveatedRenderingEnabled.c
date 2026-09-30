/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 060bafb0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  long unaff_x19;
  undefined8 uVar1;
  long *unaff_x21;
  
  FUN_05d84434();
  FUN_05ffd170();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x150);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_071c0684(uVar1,0,0);
  FUN_05ffd214();
  return;
}


