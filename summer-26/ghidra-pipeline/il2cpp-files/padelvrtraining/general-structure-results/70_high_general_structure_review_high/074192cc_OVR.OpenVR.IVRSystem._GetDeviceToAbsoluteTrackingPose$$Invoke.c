/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 074192cc
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


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__Invoke(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    *(undefined4 *)(unaff_x19 + 0x30) = 0xffffffff;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


