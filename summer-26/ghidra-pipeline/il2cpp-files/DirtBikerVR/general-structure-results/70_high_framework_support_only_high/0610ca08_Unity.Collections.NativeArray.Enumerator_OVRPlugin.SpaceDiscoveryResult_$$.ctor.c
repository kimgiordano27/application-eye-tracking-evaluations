/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 0610ca08
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


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* try { // try from 0610ca0c to 0620ca17 has its CatchHandler @ 0610ca24 */
  lVar1 = *(long *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 0610c93c with catch @ 0610ca18
                       catch() { ... } // from try @ 0610ca00 with catch @ 0610ca18
                       try { // try from 0610ca18 to 0620ca3f has its CatchHandler @ 0610c8e0 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  uVar2 = thunk_FUN_03ac74bc();
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


