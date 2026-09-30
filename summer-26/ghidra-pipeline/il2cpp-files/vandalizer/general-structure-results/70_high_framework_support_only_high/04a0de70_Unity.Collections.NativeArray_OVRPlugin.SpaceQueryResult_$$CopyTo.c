/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 04a0de70
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_05586b3c();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
                    /* try { // try from 04a0de94 to 04b0dea3 has its CatchHandler @ 04a0dea4 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 04a0de18 with catch @ 04a0dea4
                       catch() { ... } // from try @ 04a0de94 with catch @ 04a0dea4 */
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* try { // try from 04a0dea8 to 04b0deab has its CatchHandler @ 04a0deb4 */
                    /* try { // try from 04a0deac to 04b0deb7 has its CatchHandler @ 04a0dd60 */
  FUN_04a0e67c();
  return;
}


