/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05ea3464
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long *unaff_x21;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0988a8d8 == '\0') {
    FUN_04077588(PTR_DAT_09285b38);
    DAT_0988a8d8 = '\x01';
  }
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *unaff_x21;
  }
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (*(int *)(*(long *)PTR_DAT_09285890 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_09285890);
  }
  uVar4 = FUN_076de68c(0);
  if (lVar3 != 0) {
    FUN_076fff44(lVar3,uVar1,uVar2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


