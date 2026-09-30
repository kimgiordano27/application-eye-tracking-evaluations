/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 06e23ef0
PROGRAM: Hyper-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose(long param_1)

{
  uint uVar1;
  ulong in_x9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  
  while( true ) {
    if (in_x9 <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x19 == 0) break;
    uVar1 = (**(code **)(unaff_x19 + 0x18))
                      (*(undefined8 *)(unaff_x19 + 0x40),
                       *(undefined8 *)(param_1 + unaff_x21 * 8 + 0x20),
                       *(undefined8 *)(unaff_x19 + 0x28));
    if (((uVar1 & 1) == 0) ||
       (unaff_x21 = unaff_x21 + 1, (long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x21)) {
      return uVar1 & 1;
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) break;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


