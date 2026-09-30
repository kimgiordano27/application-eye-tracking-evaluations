/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$UpdateHandPose
ENTRY_POINT: 05c270cc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


void Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose(undefined8 *param_1)

{
  long *unaff_x19;
  long unaff_x20;
  
  (*(code *)*param_1)();
  thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f76398);
  FUN_04adcad4();
  if (unaff_x20 != 0) {
    FUN_05ec2ca0();
                    /* WARNING: Could not recover jumptable at 0x05c27148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x438))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


