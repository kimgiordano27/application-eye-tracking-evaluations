/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 05ea3bf4
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Implicit(long param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x30))();
  iVar1 = *(int *)(unaff_x20 + 0x18) + iVar2;
  *(int *)(unaff_x20 + 0x18) = iVar1;
  *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + (long)iVar2;
  if (unaff_x19 != 0) {
    iVar2 = iVar1 - *(int *)(unaff_x19 + 0x18);
    if (iVar2 != 0 && *(int *)(unaff_x19 + 0x18) <= iVar1) {
      *(int *)(unaff_x20 + 0x18) = iVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


