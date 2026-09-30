/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 090c9b1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(long param_1,undefined1 param_2 [16])

{
  long lVar1;
  uint unaff_w19;
  undefined4 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  *(long *)(param_1 + 0x28) = param_2._8_8_;
  *(long *)(param_1 + 0x20) = param_2._0_8_;
  lVar1 = *(long *)(unaff_x21 + 0x158);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
    *(undefined4 *)(lVar1 + unaff_x22 * 4 + 0x20) = *unaff_x20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


