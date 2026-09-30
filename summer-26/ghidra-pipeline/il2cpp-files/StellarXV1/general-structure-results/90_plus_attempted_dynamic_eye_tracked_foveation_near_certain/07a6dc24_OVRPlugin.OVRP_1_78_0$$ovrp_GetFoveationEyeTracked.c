/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 07a6dc24
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked(undefined8 param_1)

{
  if (DAT_098956f0 == (code *)0x0) {
    DAT_098956f0 = (code *)thunk_FUN_040b519c();
  }
  thunk_FUN_040b5a30(param_1);
  (*DAT_098956f0)();
  return;
}


