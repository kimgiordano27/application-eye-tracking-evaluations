/*
FUNCTION_NAME: System.Threading.ThreadStart$$Invoke
ENTRY_POINT: 034ccd30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void System_Threading_ThreadStart__Invoke(void)

{
  long unaff_x21;
  long *unaff_x22;
  
  thunk_FUN_01efb3a4(Method_OVREyeGaze_OnPermissionGranted__);
  *(undefined1 *)(unaff_x21 + 0xd03) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_034ccb50();
  FUN_034ccd7c();
  return;
}


