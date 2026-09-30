/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$Invoke
ENTRY_POINT: 05b666d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__Invoke
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined8 unaff_x22;
  
  FUN_07145224(param_1,0);
  FUN_07184a44(param_4,0);
  FUN_07184b40(param_3,0);
  *(undefined8 *)(param_1 + 0x10) = unaff_x22;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0x10),0);
  *(undefined8 *)(param_1 + 0x18) = param_5;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0x18),param_5);
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  return;
}


