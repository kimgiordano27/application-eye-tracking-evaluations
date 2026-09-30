/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 03bd4418
PROGRAM: gunraiders-libil2cpp.so
SCORE: 122
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


long Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingSupported(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  
  plVar3 = *(long **)(unaff_x20 + 0x770);
  if ((*(byte *)(unaff_x19 + 0x17a) & 1) == 0) {
    FUN_01c5d288(StringLiteral_3973);
    *(undefined1 *)(unaff_x19 + 0x17a) = 1;
  }
  lVar2 = **(long **)(*plVar3 + 0xb8);
  if (lVar2 == 0) {
    uVar1 = thunk_FUN_01c496e0();
    FUN_03313b6c(uVar1,0);
    **(undefined8 **)(*plVar3 + 0xb8) = uVar1;
    lVar2 = **(long **)(*plVar3 + 0xb8);
  }
  return lVar2;
}


