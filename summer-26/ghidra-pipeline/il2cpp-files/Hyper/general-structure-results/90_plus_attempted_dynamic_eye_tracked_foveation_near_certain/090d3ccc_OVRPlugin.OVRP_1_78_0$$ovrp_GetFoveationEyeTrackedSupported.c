/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported
ENTRY_POINT: 090d3ccc
PROGRAM: Hyper-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported(long param_1)

{
  thunk_FUN_049ae08c(*(undefined8 *)(param_1 + 0x38));
  FUN_08d7500c();
  thunk_FUN_049ae08c(PTR_DAT_0ac59040);
                    /* WARNING: Subroutine does not return */
  FUN_04948050();
}


