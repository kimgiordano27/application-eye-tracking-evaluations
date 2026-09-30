/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 061d25e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


bool Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *unaff_x19;
  long *unaff_x21;
  
  plVar4 = (long *)thunk_FUN_02dd328c();
  lVar1 = *plVar4;
  lVar2 = plVar4[1];
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (*unaff_x19 == lVar1) {
    bVar3 = unaff_x19[1] == lVar2;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


