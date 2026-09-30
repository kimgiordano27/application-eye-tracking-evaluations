/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$EndInvoke
ENTRY_POINT: 042a44b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__EndInvoke
          (long *param_1,uint param_2,uint param_3,long param_4)

{
  uint in_w8;
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((in_w8 < param_2) || (in_w8 - param_2 < param_3)) {
    FUN_050f577c(0);
  }
  lVar1 = *param_1;
  if ((*(ushort *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  auVar2._8_4_ = param_3;
  auVar2._0_8_ = lVar1 + (long)(int)param_2 * 0x40;
  auVar2._12_4_ = 0;
  return auVar2;
}


