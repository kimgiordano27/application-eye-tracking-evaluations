/*
FUNCTION_NAME: ProximaWebSocketSharp.Server.WebSocketSessionManager.<get_InactiveIDs>d__21$$System.IDisposable.Dispose
ENTRY_POINT: 077a9328
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint ProximaWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__System_IDisposable_Dispose
               (long param_1,uint param_2,uint param_3)

{
  param_2 = *(uint *)(param_1 + 0x20) | param_2;
  if ((param_3 >> 0xd & 1) != 0) {
    param_2 = *(uint *)(param_1 + 0x24) | param_2;
  }
  if ((param_3 >> 0xf & 1) != 0) {
    param_2 = *(uint *)(param_1 + 0x28) | param_2;
  }
  if ((param_3 >> 0xc & 1) != 0) {
    param_2 = *(uint *)(param_1 + 0x2c) | param_2;
  }
  if ((param_3 >> 10 & 1) != 0) {
    param_2 = *(uint *)(param_1 + 0x30) | param_2;
  }
  if ((param_3 >> 0x15 & 1) != 0) {
    param_2 = *(uint *)(param_1 + 0x34) | param_2;
  }
  if ((param_3 >> 0x17 & 1) != 0) {
    param_2 = *(uint *)(param_1 + 0x38) | param_2;
  }
  if ((param_3 >> 0x14 & 1) != 0) {
    param_2 = *(uint *)(param_1 + 0x3c) | param_2;
  }
  if ((param_3 >> 0xb & 1) != 0) {
    return *(uint *)(param_1 + 0x40) | param_2;
  }
  return param_2;
}


