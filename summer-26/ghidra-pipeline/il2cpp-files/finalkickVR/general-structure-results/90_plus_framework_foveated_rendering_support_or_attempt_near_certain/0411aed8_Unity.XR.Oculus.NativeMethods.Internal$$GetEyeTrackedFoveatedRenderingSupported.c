/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0411aed8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 123
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported
               (undefined8 param_1,Il2CppClass *param_2,Il2CppObject *param_3)

{
  long unaff_x29;
  
  InterfaceActionInvoker0::Invoke(2,param_2,param_3);
  XRInteractionGroup_ReRegisterGroupMemberWithInteractionManager_mEE704B12E778F60E736764F6A3C18ECB2694FE01
            (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10),0);
  return;
}


