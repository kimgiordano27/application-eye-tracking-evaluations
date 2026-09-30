/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 061d2a28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = PTR_DAT_069fc218;
  if ((*(byte *)(unaff_x20 + 0xe6f) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc218);
    FUN_02d965b8(PTR_DAT_069fb990);
    *(undefined1 *)(unaff_x20 + 0xe6f) = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_06304820(0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_063550b4(param_1,0);
    return;
  }
  return;
}


