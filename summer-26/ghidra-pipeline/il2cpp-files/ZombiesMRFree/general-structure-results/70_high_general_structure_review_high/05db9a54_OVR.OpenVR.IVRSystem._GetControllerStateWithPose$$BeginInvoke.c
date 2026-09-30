/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 05db9a54
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke(long param_1)

{
  int in_w8;
  long unaff_x19;
  
  if (in_w8 != 0) {
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


