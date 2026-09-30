/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 033e16f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke(void)

{
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x24;
  
  while( true ) {
    FUN_033e1828();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_0290c824();
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w21 == unaff_w22) break;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_033e17c0();
  }
  return;
}


