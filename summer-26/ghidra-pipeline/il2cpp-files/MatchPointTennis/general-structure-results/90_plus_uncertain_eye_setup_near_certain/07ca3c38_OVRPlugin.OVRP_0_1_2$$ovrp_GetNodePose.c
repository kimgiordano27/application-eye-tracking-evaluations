/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 07ca3c38
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(undefined8 param_1,undefined1 param_2 [16])

{
  long lVar1;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x22;
  float fVar2;
  undefined8 uStack0000000000000020;
  float fStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  fVar2 = *(float *)(unaff_x20 + 0x3c);
  fStack0000000000000028 = param_2._8_4_;
  uStack0000000000000020 = CONCAT44(param_2._4_4_ * fVar2,param_2._0_4_ * fVar2);
  _fStack0000000000000028 = CONCAT44(param_2._12_4_,fStack0000000000000028 * fVar2);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uStack0000000000000030 = param_1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
    FUN_07c05f20(&stack0x00000040,&stack0x00000020,lVar1 + unaff_x22 * 0x1c + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


