/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$UpdateHandPose
ENTRY_POINT: 0191af08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


void Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  *(undefined1 *)(unaff_x23 + 0x40) = 1;
  puVar1 = UnityEngine_UIElements_VisualElement_<>c__DisplayClass437_0_TypeInfo;
  uVar2 = FUN_0113a140(*unaff_x21,*unaff_x22);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x20);
  }
  lVar3 = FUN_0112fd4c(uVar2,*(undefined8 *)puVar1);
  *(long *)(unaff_x19 + 0x30) = lVar3;
  if (lVar3 != 0) {
                    /* try { // try from 0191af50 to 01a1af5f has its CatchHandler @ 0191b734 */
                    /* try { // try from 0191af64 to 01a1af6f has its CatchHandler @ 0191b72c */
    FUN_0268c458(lVar3,0x3d,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


