/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 04cd5724
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


void System_ReadOnlySpan<OVRPlugin_SpaceQueryResult>__ToArray(ulong param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x68);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_0387f550(unaff_x19 + 8,&stack0x00000018);
                    /* catch() { ... } // from try @ 04cd57c4 with catch @ 04cd5824
                       catch() { ... } // from try @ 04cd5814 with catch @ 04cd5824 */
  return;
}


