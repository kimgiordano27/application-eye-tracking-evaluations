/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04668b40
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


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (ushort *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  
                    /* catch() { ... } // from try @ 04668a90 with catch @ 04668b40
                       catch() { ... } // from try @ 04668abc with catch @ 04668b40
                       catch() { ... } // from try @ 04668b30 with catch @ 04668b40 */
                    /* try { // try from 04668b44 to 04768b47 has its CatchHandler @ 04668b50 */
  if ((*param_1 & 1) == 0) {
                    /* try { // try from 04668b48 to 04768b53 has its CatchHandler @ 046689c8 */
    FUN_02b76218();
  }
  uVar1 = thunk_FUN_02b79644();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04668b44 with catch @ 04668b50
                        */
                    /* catch() { ... } // from try @ 04668be4 with catch @ 04668b54
                       catch() { ... } // from try @ 04668c24 with catch @ 04668b54
                       catch() { ... } // from try @ 04668c5c with catch @ 04668b54
                       catch() { ... } // from try @ 04668c88 with catch @ 04668b54
                       catch() { ... } // from try @ 04668cfc with catch @ 04668b54 */
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218(*(long *)(unaff_x19 + 0x20));
  }
  FUN_04dbdb8c(uVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 04668b84 to 04768be3 has its CatchHandler @ 04668bf4 */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(undefined8 *)(lVar2 + 0xb8),uVar1);
  return;
}


