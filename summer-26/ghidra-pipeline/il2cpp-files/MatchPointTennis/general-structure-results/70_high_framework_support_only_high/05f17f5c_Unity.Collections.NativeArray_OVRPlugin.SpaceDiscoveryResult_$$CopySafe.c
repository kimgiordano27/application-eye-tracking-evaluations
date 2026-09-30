/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 05f17f5c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(void)

{
  long lVar1;
  long unaff_x23;
  
  lVar1 = FUN_04481fb8();
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
                    /* catch() { ... } // from try @ 05f17f18 with catch @ 05f17f68
                       catch() { ... } // from try @ 05f17f58 with catch @ 05f17f68 */
                    /* try { // try from 05f17f6c to 06017f6f has its CatchHandler @ 05f17f78 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 05f17f70 to 06017f7b has its CatchHandler @ 05f17ea0 */
    lVar1 = FUN_04481fb8();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f17f6c with catch @ 05f17f78
                        */
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  FUN_05f17bf0();
  return;
}


