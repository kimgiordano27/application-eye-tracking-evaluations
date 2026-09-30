/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 05cd7254
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__MoveNext
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar2 = thunk_FUN_037788cc();
                    /* try { // try from 05cd7284 to 05dd72d7 has its CatchHandler @ 05cd7284
                       catch() { ... } // from try @ 05cd7284 with catch @ 05cd7284
                       catch() { ... } // from try @ 05cd739c with catch @ 05cd7284
                       catch() { ... } // from try @ 05cd7424 with catch @ 05cd7284
                       catch() { ... } // from try @ 05cd7468 with catch @ 05cd7284
                       catch() { ... } // from try @ 05cd7498 with catch @ 05cd7284
                       catch() { ... } // from try @ 05cd7514 with catch @ 05cd7284 */
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678(*(long *)(unaff_x19 + 0x20));
  }
  FUN_062855bc(uVar2,0);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  **(undefined8 **)(lVar1 + 0xb8) = uVar2;
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 05cd72d8 to 05dd7303 has its CatchHandler @ 05cd739c */
    lVar1 = FUN_03775678();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  thunk_FUN_037aeb94(*(undefined8 *)(lVar1 + 0xb8),uVar2);
  return;
}


