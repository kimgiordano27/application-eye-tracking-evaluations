/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 025e6d44
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(ulong param_1)

{
  long unaff_x19;
  long unaff_x20;
  long *plVar1;
  
  plVar1 = *(long **)(unaff_x20 + 0x608);
  if ((param_1 & 1) == 0) {
    thunk_FUN_011f4b58(PTR_DAT_02ae4608);
    *(undefined1 *)(unaff_x19 + 0xe7b) = 1;
  }
  **(undefined8 **)(*plVar1 + 0xb8) = 0x42c8000042c80000;
  return;
}


