/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 044ed414
PROGRAM: waitwhat-libil2cpp.so
SCORE: 111
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length
               (long param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
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
    Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Equality
              (param_1,uVar1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf0));
    return;
  }
  return;
}


