/*
FUNCTION_NAME: Oculus.Interaction.Locomotion.LocomotionTurnerInteractor$$get_ShouldHover
ENTRY_POINT: 03599b3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


undefined4 Oculus_Interaction_Locomotion_LocomotionTurnerInteractor__get_ShouldHover(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *unaff_x19;
  
  iVar1 = Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual__UpdatePose();
  (**(code **)(*unaff_x19 + 0x1b8))();
  iVar2 = Oculus_Interaction_Locomotion_LocomotionTurnerInteractorVisual__UpdatePose();
  if (iVar1 == iVar2) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (iVar1 < iVar2) {
      uVar3 = 2;
    }
  }
  return uVar3;
}


