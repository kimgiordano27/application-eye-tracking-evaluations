/*
FUNCTION_NAME: Microsoft.MixedReality.Toolkit.Input.GazeProvider$$get_IsEyeTrackingEnabledAndValid
ENTRY_POINT: 073624f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined4
Microsoft_MixedReality_Toolkit_Input_GazeProvider__get_IsEyeTrackingEnabledAndValid
          (long param_1,undefined4 param_2,long param_3)

{
  long in_x9;
  long in_x10;
  long in_x11;
  long *unaff_x19;
  undefined4 unaff_w20;
  long in_stack_00000000;
  
  while( true ) {
    in_x10 = in_x10 + 4;
    *(undefined4 *)(in_x11 + 0x20) = param_2;
    if (in_x9 == in_x10) break;
    param_2 = *(undefined4 *)(param_1 + in_x10);
    in_x11 = param_3 + in_x10;
  }
  *unaff_x19 = param_3;
  thunk_FUN_040ec700();
  if (in_stack_00000000 != 0) {
    thunk_FUN_040b543c();
  }
  return unaff_w20;
}


