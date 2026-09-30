/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$Copy
ENTRY_POINT: 047a4bd0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>__Copy(long param_1)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  int unaff_w24;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
                    /* try { // try from 047a4be8 to 048a4c2f has its CatchHandler @ 047a4be8
                       catch() { ... } // from try @ 047a4be8 with catch @ 047a4be8
                       catch() { ... } // from try @ 047a4ce8 with catch @ 047a4be8
                       catch() { ... } // from try @ 047a4d18 with catch @ 047a4be8
                       catch() { ... } // from try @ 047a4d8c with catch @ 047a4be8 */
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    FUN_047a42cc();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
                    /* try { // try from 047a4c30 to 048a4ce7 has its CatchHandler @ 047a4ce8 */
    FUN_047a4c5c();
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w24 + unaff_w21 + 2U < 3) break;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    param_1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_0367c9fc();
    }
  }
  return;
}


