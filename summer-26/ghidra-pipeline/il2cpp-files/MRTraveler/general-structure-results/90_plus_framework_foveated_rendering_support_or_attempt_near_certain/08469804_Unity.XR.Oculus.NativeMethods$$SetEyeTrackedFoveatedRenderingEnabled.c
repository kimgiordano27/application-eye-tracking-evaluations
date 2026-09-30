/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 08469804
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 125
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined1  [16] Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled(void)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double in_stack_00000008;
  
  fVar1 = (float)FUN_08585e98();
  fVar2 = (float)FUN_08585ed4();
  fVar1 = fVar1 * fVar2;
  dVar3 = modf((double)fVar1,&stack0x00000008);
  if (0.0 <= fVar1) {
    if (dVar3 != 0.5) {
      fVar1 = (float)(int)(fVar1 + 0.5);
      goto LAB_08469898;
    }
    fVar2 = 1.0;
  }
  else {
    if (dVar3 != -0.5) {
      fVar1 = (float)(int)(fVar1 + -0.5);
      goto LAB_08469898;
    }
    fVar2 = -1.0;
  }
  fVar1 = (float)in_stack_00000008;
  if (((long)in_stack_00000008 & 1U) != 0) {
    fVar1 = (float)in_stack_00000008 + fVar2;
  }
LAB_08469898:
  fVar2 = (float)FUN_08585ed4();
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (double)fVar1 / (double)fVar2;
  return auVar4;
}


