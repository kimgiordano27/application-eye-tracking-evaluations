/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 03bd4414
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


long Unity_XR_Oculus_Utils__get_eyeTrackedFoveatedRenderingSupported(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  
  puVar1 = StringLiteral_3973;
  if ((*(byte *)(unaff_x19 + 0x17a) & 1) == 0) {
    FUN_01c5d288(StringLiteral_3973);
    *(undefined1 *)(unaff_x19 + 0x17a) = 1;
  }
  lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar3 == 0) {
    uVar2 = thunk_FUN_01c496e0();
    FUN_03313b6c(uVar2,0);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
    lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
  }
  return lVar3;
}


