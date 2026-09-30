/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 040f1118
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ArraySegment<OVRPlugin_SpaceQueryResult>__ToArray(long param_1)

{
  long lVar1;
  
  memset(&stack0x0000000c,0,0x84);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  FUN_040f0e3c(&stack0x0000000c,0,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  memcpy(*(void **)(lVar1 + 0xb8),&stack0x0000000c,0x84);
  return;
}


