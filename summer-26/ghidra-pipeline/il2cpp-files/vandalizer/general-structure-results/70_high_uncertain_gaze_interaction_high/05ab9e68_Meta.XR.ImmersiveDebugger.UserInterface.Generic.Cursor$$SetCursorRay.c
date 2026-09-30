/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 05ab9e68
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;functionality_gaze_interaction_hits_4
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay
               (ulong param_1,long param_2)

{
  uint uVar1;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0322bef4();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  uVar1 = FUN_05ab9d88();
  return ~uVar1 & 1;
}


