/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 083beb6c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus
          (undefined8 param_1,int param_2)

{
  long *plVar1;
  long in_stack_00000008;
  char *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  if (param_2 != 1) {
    FUN_03a986fc(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_0412026c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  in_stack_00000008 = *plVar1;
  __cxa_end_catch();
  if (*in_stack_00000010 != '\0') {
    Oculus_Interaction_TubeRenderer__set_MirrorTexture(*in_stack_00000018,0);
  }
  if (in_stack_00000008 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}


