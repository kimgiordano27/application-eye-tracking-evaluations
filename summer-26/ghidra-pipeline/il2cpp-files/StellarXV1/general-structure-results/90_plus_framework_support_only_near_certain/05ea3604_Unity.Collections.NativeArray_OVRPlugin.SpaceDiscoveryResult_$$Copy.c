/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05ea3604
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (long param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  
  iVar1 = FUN_064c43e8(param_2,*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28);
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0767a6c0((long)iVar1,lVar3 - lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


