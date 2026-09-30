/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 01d2fe1c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__BeginInvoke
               (long *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x358))(param_1,param_2,*(undefined8 *)(*param_1 + 0x360));
  if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x01d2fe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x398))(param_1,iVar1,*(undefined8 *)(*param_1 + 0x3a0));
    return;
  }
  return;
}


