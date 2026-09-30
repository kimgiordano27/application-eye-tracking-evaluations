/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 0570ad18
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


undefined8 OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__Invoke(long param_1)

{
  undefined8 uVar1;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  
  uVar1 = FUN_038318d8(0x2c,in_stack_00000038,**(undefined8 **)(param_1 + 0xa20));
  FUN_03ea1edc(in_stack_00000018,*(undefined8 *)PTR_DAT_06a12a08);
  if (in_stack_00000010 == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858(in_stack_00000010);
}


