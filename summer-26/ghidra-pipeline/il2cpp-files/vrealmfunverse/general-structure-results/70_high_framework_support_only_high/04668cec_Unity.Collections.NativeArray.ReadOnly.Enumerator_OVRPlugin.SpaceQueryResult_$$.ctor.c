/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04668cec
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


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = FUN_02b76218();
                    /* catch() { ... } // from try @ 04668c0c with catch @ 04668cf4
                       catch() { ... } // from try @ 04668c44 with catch @ 04668cf4
                       catch() { ... } // from try @ 04668c70 with catch @ 04668cf4
                       catch() { ... } // from try @ 04668ce4 with catch @ 04668cf4 */
  lVar2 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 04668cf8 to 04768cfb has its CatchHandler @ 04668d04 */
  **(undefined8 **)(lVar1 + 0xb8) = unaff_x20;
                    /* try { // try from 04668cfc to 04768d07 has its CatchHandler @ 04668b54 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04668cf8 with catch @ 04668d04
                        */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


