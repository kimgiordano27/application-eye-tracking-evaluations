/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 05f17930
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  long lVar1;
  long unaff_x19;
  
                    /* catch() { ... } // from try @ 05f178a4 with catch @ 05f17930
                       catch() { ... } // from try @ 05f17920 with catch @ 05f17930 */
                    /* try { // try from 05f17934 to 06017937 has its CatchHandler @ 05f17940 */
                    /* try { // try from 05f17938 to 06017943 has its CatchHandler @ 05f177ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f17934 with catch @ 05f17940
                        */
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_04481fb8(param_1);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  FUN_05f17d84(param_2,param_3,param_4,param_5,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x40));
  return;
}


