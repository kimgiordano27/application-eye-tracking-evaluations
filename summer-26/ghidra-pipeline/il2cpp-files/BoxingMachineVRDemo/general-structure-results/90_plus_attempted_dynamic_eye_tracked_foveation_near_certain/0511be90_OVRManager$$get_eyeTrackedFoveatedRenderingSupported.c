/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0511be90
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported(long param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  *(undefined8 *)(param_1 + 0x20) = unaff_x21;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x20 + 0x18));
  return;
}


