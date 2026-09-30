/*
FUNCTION_NAME: Utils_get_eyeTrackedFoveatedRenderingSupported_m1B48244FA8D6AE0A727028A284984F9346A9825B
ENTRY_POINT: 04214310
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_3;strong_foveation_hits_3;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


byte Utils_get_eyeTrackedFoveatedRenderingSupported_m1B48244FA8D6AE0A727028A284984F9346A9825B(void)

{
  byte bVar1;
  
  bVar1 = NativeMethods_GetEyeTrackedFoveatedRenderingSupported_m7017B3CE2D6DE03700864069DECC810199A2C9E0
                    (0);
  return bVar1 & 1;
}


