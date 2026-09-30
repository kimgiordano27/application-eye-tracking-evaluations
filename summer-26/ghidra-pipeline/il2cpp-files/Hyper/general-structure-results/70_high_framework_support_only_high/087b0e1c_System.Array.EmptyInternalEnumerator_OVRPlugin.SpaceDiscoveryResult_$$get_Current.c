/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 087b0e1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_08d9ef4c(lVar2,0,*(undefined4 *)(lVar2 + 0x18),0);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xffffffff00000000;
    FUN_08d9ef4c(*(undefined8 *)(param_1 + 0x18),0,iVar1,0);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return;
}


