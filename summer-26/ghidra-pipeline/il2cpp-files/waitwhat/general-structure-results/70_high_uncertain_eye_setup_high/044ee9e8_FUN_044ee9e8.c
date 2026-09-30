/*
FUNCTION_NAME: FUN_044ee9e8
ENTRY_POINT: 044ee9e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_044ee9e8(long param_1,long param_2)

{
  double dVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  dVar1 = (double)*(int *)(*(long *)(param_1 + 0x10) + 0x18) * DAT_012e2a38;
  if (dVar1 == INFINITY || (int)dVar1 <= *(int *)(param_1 + 0x18)) {
    return;
  }
  Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Equality
            (param_1,*(int *)(param_1 + 0x18),
             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xf0));
  return;
}


