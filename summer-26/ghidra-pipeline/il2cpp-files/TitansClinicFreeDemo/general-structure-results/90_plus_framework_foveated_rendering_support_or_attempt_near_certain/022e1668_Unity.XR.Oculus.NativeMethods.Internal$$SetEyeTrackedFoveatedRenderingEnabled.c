/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 022e1668
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__SetEyeTrackedFoveatedRenderingEnabled
               (undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 *unaff_x25;
  
  FUN_0158a488();
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  thunk_FUN_01286abc((undefined8 *)(unaff_x20 + 0x50),param_1);
  *(undefined4 *)(unaff_x20 + 0x70) = 0x3c23d70a;
  uVar1 = thunk_FUN_0124bba8(*unaff_x25);
  FUN_0180e430();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  thunk_FUN_01286abc((undefined8 *)(unaff_x20 + 0x40),uVar1);
  return;
}


