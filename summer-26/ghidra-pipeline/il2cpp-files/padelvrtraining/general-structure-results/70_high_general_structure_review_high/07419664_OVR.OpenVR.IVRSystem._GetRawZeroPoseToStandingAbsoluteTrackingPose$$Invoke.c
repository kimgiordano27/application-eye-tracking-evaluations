/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 07419664
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__Invoke(long param_1)

{
  if ((bRam000000000984559d & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09221c68);
    bRam000000000984559d = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0627c4b0(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_09221c68);
    *(undefined1 *)(param_1 + 0x10) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


