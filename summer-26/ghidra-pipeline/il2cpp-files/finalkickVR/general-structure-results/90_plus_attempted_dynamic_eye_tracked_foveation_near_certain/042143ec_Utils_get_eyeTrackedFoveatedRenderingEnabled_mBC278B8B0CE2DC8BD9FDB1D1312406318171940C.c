/*
FUNCTION_NAME: Utils_get_eyeTrackedFoveatedRenderingEnabled_mBC278B8B0CE2DC8BD9FDB1D1312406318171940C
ENTRY_POINT: 042143ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_7;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


byte Utils_get_eyeTrackedFoveatedRenderingEnabled_mBC278B8B0CE2DC8BD9FDB1D1312406318171940C(void)

{
  byte bVar1;
  byte local_11;
  
  bVar1 = Utils_get_eyeTrackedFoveatedRenderingSupported_m1B48244FA8D6AE0A727028A284984F9346A9825B
                    (0);
  if ((bVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    local_11 = NativeMethods_GetEyeTrackedFoveatedRenderingEnabled_m5DFBB25DC1BE4E1F6DE84DC4FBF3C7E0D2C828A6
                         (0);
    local_11 = local_11 & 1;
  }
  return local_11;
}


