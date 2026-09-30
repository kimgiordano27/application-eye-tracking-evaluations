/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04668a0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02b76218(param_1);
  }
                    /* try { // try from 04668a24 to 04768a33 has its CatchHandler @ 04668a74 */
  FUN_04dbdb8c();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
                    /* try { // try from 04668a40 to 04768a5b has its CatchHandler @ 04668a78 */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
                    /* try { // try from 04668a5c to 04768a8f has its CatchHandler @ 046689c8 */
  lVar2 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar1 + 0xb8) = unaff_x20;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04668a04 with catch @ 04668a70
                        */
    lVar2 = FUN_02b76218();
  }
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04668a24 with catch @ 04668a74
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04668a40 with catch @ 04668a78
                        */
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


