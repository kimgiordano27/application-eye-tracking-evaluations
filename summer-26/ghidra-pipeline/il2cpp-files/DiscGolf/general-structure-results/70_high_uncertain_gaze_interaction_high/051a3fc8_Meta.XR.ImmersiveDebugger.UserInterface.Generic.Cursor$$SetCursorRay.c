/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 051a3fc8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;functionality_gaze_interaction_hits_4
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay(long param_1,long param_2)

{
  int in_w9;
  
  if (in_w9 != *(int *)(param_1 + 0x2c)) {
    FUN_055095dc(0);
  }
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  return;
}


