/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_IsCreated
ENTRY_POINT: 06e23ee0
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_IsCreated(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  uVar3 = 0;
  while (lVar2 = *(long *)(unaff_x20 + 0x10), lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x19 == 0) break;
    uVar1 = (**(code **)(unaff_x19 + 0x18))
                      (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(lVar2 + uVar3 * 8 + 0x20),
                       *(undefined8 *)(unaff_x19 + 0x28));
    if (((uVar1 & 1) == 0) || (uVar3 = uVar3 + 1, (long)*(int *)(unaff_x20 + 0x18) <= (long)uVar3))
    {
      return uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


