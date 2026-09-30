/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$UpdateHandPose
ENTRY_POINT: 050c06b8
PROGRAM: hellodot-libil2cpp.so
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
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *plVar5;
  
  if (DAT_06a70768 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06603db0);
    DAT_06a70768 = '\x01';
  }
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar1 = *unaff_x19;
  }
  if ((**(long **)(lVar1 + 0xb8) == 0) ||
     (plVar5 = *(long **)(**(long **)(lVar1 + 0xb8) + 0x28), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_065d0060) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_050c0754;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065d0060,0);
LAB_050c0754:
                    /* WARNING: Could not recover jumptable at 0x050c0768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,3,puVar2[1]);
  return;
}


