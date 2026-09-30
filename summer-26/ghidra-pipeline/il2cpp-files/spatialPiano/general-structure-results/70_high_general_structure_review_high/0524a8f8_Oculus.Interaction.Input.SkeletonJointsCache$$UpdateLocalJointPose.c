/*
FUNCTION_NAME: Oculus.Interaction.Input.SkeletonJointsCache$$UpdateLocalJointPose
ENTRY_POINT: 0524a8f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Input_SkeletonJointsCache__UpdateLocalJointPose(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x23;
  
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar2[2] == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar2 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar3 = *puVar2;
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)Oculus_Platform_Request<User>_TypeInfo);
    FUN_0472ba3c(uVar1,uVar3,*(undefined8 *)Oculus_Platform_Request<UserCapabilityList>_TypeInfo,0);
    *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = uVar1;
  }
  if (unaff_x20 != 0) {
    uVar1 = FUN_0303b0c0();
    *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


