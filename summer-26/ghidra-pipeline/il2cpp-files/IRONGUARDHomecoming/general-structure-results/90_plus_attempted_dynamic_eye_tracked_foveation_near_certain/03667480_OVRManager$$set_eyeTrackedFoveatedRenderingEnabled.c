/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03667480
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled(undefined1 param_1 [16])

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(long *)((long)unaff_x19 + 0x14) = param_1._8_8_;
  *(long *)((long)unaff_x19 + 0xc) = param_1._0_8_;
  unaff_x19[1] = in_stack_00000038;
  *unaff_x19 = in_stack_00000030;
  return;
}


