/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 04937708
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_Vector2f>__ToArray(long param_1)

{
  long lVar1;
  undefined8 in_x9;
  long unaff_x19;
  
  *(undefined8 *)(param_1 + 0x220) = in_x9;
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_050635c0();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x228) = 0;
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  return;
}


