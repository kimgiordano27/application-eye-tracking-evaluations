/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 0610cb5c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
                    /* try { // try from 0610cb74 to 0620cb83 has its CatchHandler @ 0610cb84 */
                    /* catch() { ... } // from try @ 0610caf4 with catch @ 0610cb84
                       catch() { ... } // from try @ 0610cb74 with catch @ 0610cb84 */
  if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
                    /* try { // try from 0610cb88 to 0620cb8b has its CatchHandler @ 0610cb94 */
    FUN_03ac4090();
  }
                    /* try { // try from 0610cb8c to 0620cb97 has its CatchHandler @ 0610c8e0 */
  uVar2 = thunk_FUN_03ac74bc();
                    /* catch() { ... } // from try @ 0610cadc with catch @ 0610cb94
                       catch() { ... } // from try @ 0610cb88 with catch @ 0610cb94 */
  if ((*(ushort *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090(*(long *)(param_1 + 0x20));
  }
  FUN_0679343c(uVar2,0);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar3 = *(long *)(param_1 + 0x20);
  **(undefined8 **)(lVar1 + 0xb8) = uVar2;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  thunk_FUN_03afed3c(*(undefined8 *)(lVar1 + 0xb8),uVar2);
  return;
}


