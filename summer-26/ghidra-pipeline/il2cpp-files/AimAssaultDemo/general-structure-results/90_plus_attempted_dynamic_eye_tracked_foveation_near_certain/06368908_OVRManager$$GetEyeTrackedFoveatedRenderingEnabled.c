/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06368908
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRManager__GetEyeTrackedFoveatedRenderingEnabled(undefined8 param_1)

{
  long unaff_x20;
  undefined8 in_stack_00000078;
  
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x98) = param_1;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x20 + 0x98),param_1);
    return in_stack_00000078;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


