/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 05cceb30
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0609352c(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8));
  iVar1 = FUN_06093590(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe0));
  if (param_1 != 0) {
    FUN_05fbbdc8(param_1,uVar2,iVar1 == 1,0,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


