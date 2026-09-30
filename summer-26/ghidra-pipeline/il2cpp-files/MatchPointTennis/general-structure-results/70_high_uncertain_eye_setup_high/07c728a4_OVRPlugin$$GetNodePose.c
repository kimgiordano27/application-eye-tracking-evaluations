/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 07c728a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePose(long param_1,long param_2,undefined8 param_3)

{
  undefined1 in_w9;
  
  *(undefined1 *)(param_1 + 0x10) = in_w9;
  if (param_2 != 0) {
    FUN_07c6c6cc(param_2,param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


