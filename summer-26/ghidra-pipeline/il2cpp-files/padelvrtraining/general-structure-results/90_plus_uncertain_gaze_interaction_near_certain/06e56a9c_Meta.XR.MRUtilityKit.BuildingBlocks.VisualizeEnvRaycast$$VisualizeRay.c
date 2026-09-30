/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$VisualizeRay
ENTRY_POINT: 06e56a9c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


bool Meta_XR_MRUtilityKit_BuildingBlocks_VisualizeEnvRaycast__VisualizeRay(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x19;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 8);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(unaff_x19 + 8) = uVar1 + 1;
      *(undefined4 *)(unaff_x19 + 0x10) = 0;
      goto LAB_06e56b00;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar4 + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar3 + (long)(int)uVar4 * 0x10 + 0x20) < 0);
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(lVar3 + (long)(int)uVar4 * 0x10 + 0x28);
LAB_06e56b00:
  return uVar4 < uVar1;
}


