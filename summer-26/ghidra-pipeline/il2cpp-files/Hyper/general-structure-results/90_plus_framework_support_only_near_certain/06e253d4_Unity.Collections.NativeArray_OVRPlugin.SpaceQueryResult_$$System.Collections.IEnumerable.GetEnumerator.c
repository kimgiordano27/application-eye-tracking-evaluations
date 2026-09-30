/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 06e253d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  iVar3 = (int)lVar4;
  if (iVar3 < (int)param_2) {
    uVar2 = iVar3 << 1;
    if (0x7feffffe < uVar2) {
      uVar2 = 0x7fefffff;
    }
    uVar1 = 4;
    if (lVar4 != 0) {
      uVar1 = uVar2;
    }
    if ((int)uVar1 <= (int)param_2) {
      uVar1 = param_2;
    }
    FUN_06e24724(param_1,uVar1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf0));
    return;
  }
  return;
}


