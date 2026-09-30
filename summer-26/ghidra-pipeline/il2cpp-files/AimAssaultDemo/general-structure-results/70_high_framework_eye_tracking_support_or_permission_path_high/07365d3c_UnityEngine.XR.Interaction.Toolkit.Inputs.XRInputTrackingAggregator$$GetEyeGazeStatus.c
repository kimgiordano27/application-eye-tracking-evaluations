/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 07365d3c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus(void)

{
  ulong uVar1;
  undefined1 in_w8;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x14c) = in_w8;
  *(undefined4 *)(unaff_x20 + 0x50) = unaff_w19;
  uVar1 = FUN_075a6abc();
  if (((uVar1 & 1) != 0) && (*(long *)(unaff_x20 + 0x20) != 0)) {
    FUN_07394854(*(long *)(unaff_x20 + 0x20),unaff_w19,0);
    return;
  }
  return;
}


