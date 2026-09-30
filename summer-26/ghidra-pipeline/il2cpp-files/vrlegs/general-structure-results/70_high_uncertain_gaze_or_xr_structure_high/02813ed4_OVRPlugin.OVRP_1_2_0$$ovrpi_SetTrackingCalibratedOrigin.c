/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 02813ed4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined4 OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
  }
  else {
    FUN_02215a88(param_1,*(int *)(param_1 + 0x18) + -1,&stack0x00000008,
                 *(undefined8 *)PTR_DAT_03cfdc48);
    *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000010;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x20,0);
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_022190f4(lVar1,*(int *)(lVar1 + 0x18) + -1,*(undefined8 *)PTR_DAT_03cfdce0);
  }
  return unaff_w20;
}


