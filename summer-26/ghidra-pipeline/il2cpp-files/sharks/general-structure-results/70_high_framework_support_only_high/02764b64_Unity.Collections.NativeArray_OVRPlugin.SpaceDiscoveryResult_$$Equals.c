/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 02764b64
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals
               (ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(param_2 + 0xc0) + 0xa0) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar1 = thunk_FUN_01861bbc();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4(*(long *)(unaff_x19 + 0x20));
  }
  FUN_02c108e4(uVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
                    /* try { // try from 02764bc4 to 02864beb has its CatchHandler @ 02764d5c */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
                    /* try { // try from 02764c04 to 02864c63 has its CatchHandler @ 02764d60 */
  thunk_FUN_0188fd20(*(undefined8 *)(lVar2 + 0xb8),uVar1);
  return;
}


