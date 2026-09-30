/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 04114500
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_Utils__set_eyeTrackedFoveatedRenderingEnabled(void *param_1)

{
  long unaff_x29;
  undefined8 *in_stack_00000018;
  Il2CppObject *in_stack_00000020;
  List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 *in_stack_00000028;
  
  NullCheck(param_1);
  List_1_AddRange_m0D9FBC5959A3C2DA58C505EE093C99A7CEE6EF0C
            (in_stack_00000028,in_stack_00000020,(MethodInfo *)*in_stack_00000018);
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x2f1) = 1;
  return;
}


