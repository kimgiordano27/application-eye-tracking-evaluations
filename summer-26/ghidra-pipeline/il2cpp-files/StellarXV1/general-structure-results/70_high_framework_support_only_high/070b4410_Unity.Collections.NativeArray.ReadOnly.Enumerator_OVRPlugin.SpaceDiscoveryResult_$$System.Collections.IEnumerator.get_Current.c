/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 070b4410
PROGRAM: StellarXV1-libil2cpp.so
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
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  
                    /* catch() { ... } // from try @ 070b434c with catch @ 070b4414
                       catch() { ... } // from try @ 070b43fc with catch @ 070b4414
                       try { // try from 070b4414 to 071b443b has its CatchHandler @ 070b42f4 */
  if ((*(ushort *)(*(long *)(param_1 + 0x10) + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 070b4394 with catch @ 070b4420
                       catch() { ... } // from try @ 070b4408 with catch @ 070b4420 */
    FUN_040b1acc();
  }
  uVar1 = thunk_FUN_040b4efc();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 070b443c to 071b4453 has its CatchHandler @ 070b44d0 */
    FUN_040b1acc(*(long *)(unaff_x19 + 0x20));
  }
  FUN_076bca34(uVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 070b4458 to 071b445b has its CatchHandler @ 070b44c8 */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
                    /* try { // try from 070b447c to 071b447f has its CatchHandler @ 070b44c4 */
                    /* try { // try from 070b4480 to 071b449b has its CatchHandler @ 070b44cc */
  lVar3 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  thunk_FUN_040ec700(*(undefined8 *)(lVar2 + 0xb8),uVar1);
  return;
}


