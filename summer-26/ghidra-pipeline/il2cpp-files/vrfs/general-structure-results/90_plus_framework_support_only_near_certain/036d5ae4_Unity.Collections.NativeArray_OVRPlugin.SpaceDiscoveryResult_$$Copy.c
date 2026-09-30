/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 036d5ae4
PROGRAM: vrfs-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long *param_1)

{
  byte bVar1;
  long *unaff_x19;
  long *unaff_x21;
  
  bVar1 = *(byte *)(*param_1 + 300);
  if (((bVar1 <= *(byte *)(*unaff_x21 + 300)) &&
      (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *param_1)) &&
     (unaff_x19 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x036d5b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x318))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


