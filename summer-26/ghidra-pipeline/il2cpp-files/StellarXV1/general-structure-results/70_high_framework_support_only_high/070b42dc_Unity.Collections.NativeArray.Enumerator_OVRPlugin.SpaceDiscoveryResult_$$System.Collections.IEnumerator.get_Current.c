/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 070b42dc
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


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 070b42f4 to 071b434b has its CatchHandler @ 070b42f4
                       catch() { ... } // from try @ 070b42f4 with catch @ 070b42f4
                       catch() { ... } // from try @ 070b4414 with catch @ 070b42f4
                       catch() { ... } // from try @ 070b449c with catch @ 070b42f4
                       catch() { ... } // from try @ 070b44dc with catch @ 070b42f4
                       catch() { ... } // from try @ 070b4508 with catch @ 070b42f4
                       catch() { ... } // from try @ 070b4584 with catch @ 070b42f4 */
    FUN_040b1acc(*(long *)(unaff_x19 + 0x20));
  }
  FUN_076bca34(param_1,0);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar1 + 0xb8) = param_1;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
                    /* try { // try from 070b434c to 071b4377 has its CatchHandler @ 070b4414 */
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  thunk_FUN_040ec700(*(undefined8 *)(lVar1 + 0xb8),param_1);
  return;
}


