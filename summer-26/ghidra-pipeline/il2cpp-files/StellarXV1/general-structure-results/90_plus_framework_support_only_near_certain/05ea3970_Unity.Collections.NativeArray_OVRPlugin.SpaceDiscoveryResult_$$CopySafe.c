/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 05ea3970
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 106
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe
               (long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(long *)(param_1 + 0x10) + (long)param_2;
  uVar3 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
  *(ulong *)(param_1 + 0x10) = uVar3;
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x28);
    if ((long)uVar4 < (long)uVar3) {
      *(ulong *)(param_1 + 0x10) = uVar4;
      uVar3 = uVar4;
    }
    uVar1 = FUN_064c4400(lVar2,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38));
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


