/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 04a0ed98
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  
  while( true ) {
    FUN_04a0ee58();
    iVar1 = unaff_w25 + -1;
    if (iVar1 == 0 || unaff_w25 < 1) break;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    unaff_w25 = iVar1;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
  }
  if (1 < unaff_w24) {
    do {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
                    /* try { // try from 04a0edc0 to 04b0ee23 has its CatchHandler @ 04a0ee24 */
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_04a0e5c4();
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a0edc0 with catch @ 04a0ee24
                       try { // try from 04a0ee24 to 04b0ee3b has its CatchHandler @ 04a0ed78 */
      FUN_04a0ee58();
      unaff_w21 = unaff_w21 + -1;
                    /* try { // try from 04a0ee3c to 04b0ee53 has its CatchHandler @ 04a0eec8 */
    } while (2 < (unaff_w21 - unaff_w22) + 2);
  }
                    /* try { // try from 04a0ee54 to 04b0eeb7 has its CatchHandler @ 04a0ed78 */
  return;
}


