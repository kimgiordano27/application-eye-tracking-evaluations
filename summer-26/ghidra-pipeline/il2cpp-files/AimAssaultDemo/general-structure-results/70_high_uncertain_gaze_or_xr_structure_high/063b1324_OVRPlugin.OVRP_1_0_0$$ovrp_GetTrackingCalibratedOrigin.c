/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 063b1324
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x22;
  undefined8 in_stack_00000020;
  long in_stack_00000038;
  
  if (*(int *)(unaff_x19 + 0xac) == 2) {
    if (*(int *)(*(long *)PTR_DAT_07d89f60 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    param_1 = FUN_06224e04(&stack0x00000010,0);
  }
  else if (*(int *)(unaff_x19 + 0xac) == 0) {
    if (*(int *)(*(long *)PTR_DAT_07d89f60 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    param_1 = FUN_06223b94(param_1,0,0);
  }
  in_stack_00000020 = param_1;
  thunk_FUN_037784fc(*(undefined8 *)PTR_DAT_07d89f60,&stack0x00000020);
  FUN_062dc8f8();
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


