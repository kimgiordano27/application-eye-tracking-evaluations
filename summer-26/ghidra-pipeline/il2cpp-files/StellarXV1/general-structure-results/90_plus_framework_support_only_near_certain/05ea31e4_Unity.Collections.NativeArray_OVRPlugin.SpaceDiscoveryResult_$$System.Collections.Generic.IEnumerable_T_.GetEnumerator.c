/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 05ea31e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint in_w9;
  long in_x10;
  undefined8 *unaff_x19;
  
  puVar4 = PTR_DAT_09285b38;
  bVar3 = *(byte *)(**(long **)(in_x10 + 0xe98) + 0x130);
                    /* try { // try from 05ea3204 to 05fa3263 has its CatchHandler @ 05ea3274 */
  if ((in_w9 < bVar3) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) != **(long **)(in_x10 + 0xe98))) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_09285b38 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0988a8d8 == '\0') {
    FUN_04077588(PTR_DAT_09285b38);
    DAT_0988a8d8 = '\x01';
  }
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *(long *)puVar4;
  }
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
  if (*(int *)(*(long *)PTR_DAT_09285890 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_09285890);
  }
  uVar6 = FUN_076de68c(0);
  if (lVar5 != 0) {
    FUN_076fff44(lVar5,uVar1,uVar2,uVar6,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


