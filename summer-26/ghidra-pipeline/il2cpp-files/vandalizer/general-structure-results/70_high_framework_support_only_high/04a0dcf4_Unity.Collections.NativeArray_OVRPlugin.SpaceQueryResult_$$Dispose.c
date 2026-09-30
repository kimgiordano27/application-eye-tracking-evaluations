/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 04a0dcf4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0322bef4();
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xc0) + 0xa0) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  uVar1 = thunk_FUN_0322f148();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4(*(long *)(unaff_x19 + 0x20));
  }
  FUN_05e44034(uVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
                    /* try { // try from 04a0dd60 to 04b0dda7 has its CatchHandler @ 04a0dd60
                       catch() { ... } // from try @ 04a0dd60 with catch @ 04a0dd60
                       catch() { ... } // from try @ 04a0de00 with catch @ 04a0dd60
                       catch() { ... } // from try @ 04a0de30 with catch @ 04a0dd60
                       catch() { ... } // from try @ 04a0deac with catch @ 04a0dd60 */
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  thunk_FUN_0329bf60(*(undefined8 *)(lVar2 + 0xb8),uVar1);
  return;
}


