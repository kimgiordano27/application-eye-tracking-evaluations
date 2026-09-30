/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 0738ce78
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__Invoke(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_03d233cc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


