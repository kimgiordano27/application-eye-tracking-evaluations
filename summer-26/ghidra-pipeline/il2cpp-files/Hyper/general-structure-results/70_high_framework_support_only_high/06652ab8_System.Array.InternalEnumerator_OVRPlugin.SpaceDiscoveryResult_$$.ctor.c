/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 06652ab8
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  int iVar1;
  uint uVar2;
  int *unaff_x19;
  undefined8 unaff_x20;
  
  iVar1 = *unaff_x19;
  uVar2 = iVar1 - 1;
  if (uVar2 < *(uint *)(param_1 + 0x18)) {
    *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20) = unaff_x20;
    *unaff_x19 = iVar1 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


