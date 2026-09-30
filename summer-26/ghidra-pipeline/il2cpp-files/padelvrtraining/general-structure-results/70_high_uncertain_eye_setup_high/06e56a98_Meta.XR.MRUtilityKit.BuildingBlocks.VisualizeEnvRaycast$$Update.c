/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$Update
ENTRY_POINT: 06e56a98
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_BuildingBlocks_VisualizeEnvRaycast__Update(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x19;
  
  if (param_1 == 0) {
LAB_06e56b10:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
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
    if (lVar3 == 0) goto LAB_06e56b10;
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


