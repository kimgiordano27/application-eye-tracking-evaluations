/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 0570adfc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke(long *param_1)

{
  long lVar1;
  long lStack0000000000000010;
  undefined8 in_stack_00000018;
  
  lVar1 = *param_1;
  lStack0000000000000010 = lVar1;
  __cxa_end_catch();
  FUN_03ea1edc(in_stack_00000018,*(undefined8 *)PTR_DAT_06a12a08);
  if (lVar1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858(lVar1);
}


