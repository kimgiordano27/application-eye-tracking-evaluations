/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 06331f88
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__BeginInvoke(void)

{
  byte bVar1;
  long lVar2;
  long in_x9;
  long *unaff_x19;
  
  lVar2 = *unaff_x19;
  bVar1 = *(byte *)(**(long **)(in_x9 + 0x9b0) + 0x130);
  if ((bVar1 <= *(byte *)(lVar2 + 0x130)) &&
     (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) == **(long **)(in_x9 + 0x9b0))) {
                    /* WARNING: Could not recover jumptable at 0x06331fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x318))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373bb54();
}


