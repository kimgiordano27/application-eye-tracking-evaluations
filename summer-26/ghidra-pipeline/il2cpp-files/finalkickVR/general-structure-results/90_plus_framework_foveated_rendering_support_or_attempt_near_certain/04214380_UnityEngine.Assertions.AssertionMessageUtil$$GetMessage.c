/*
FUNCTION_NAME: UnityEngine.Assertions.AssertionMessageUtil$$GetMessage
ENTRY_POINT: 04214380
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 105
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


byte UnityEngine_Assertions_AssertionMessageUtil__GetMessage(long param_1)

{
  byte bVar1;
  long unaff_x29;
  byte bStack000000000000000f;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)**(undefined8 **)(param_1 + 0x8c8));
  bStack000000000000000f =
       RuntimePlatformChecks_IsSupportedPlatform_mF18A0D2301ADD4EB402425FD5BC590DF8749E41A(0);
  bStack000000000000000f = bStack000000000000000f & 1;
  if (bStack000000000000000f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    bVar1 = Internal_GetEyeTrackedFoveatedRenderingSupported_mA2F9106F5BD6571BB7D19D2FFDF61EF36D33F0E5
                      (0);
    *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


