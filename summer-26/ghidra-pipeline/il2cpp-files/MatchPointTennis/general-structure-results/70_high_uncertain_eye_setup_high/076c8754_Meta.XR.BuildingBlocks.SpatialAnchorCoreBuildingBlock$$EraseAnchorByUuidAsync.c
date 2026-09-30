/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock$$EraseAnchorByUuidAsync
ENTRY_POINT: 076c8754
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f2e040);
  *(undefined1 *)(unaff_x21 + 0xdb3) = 1;
  if (unaff_x19 != 0) {
    FUN_076c57a8();
    if (0.0 < *(float *)(unaff_x20 + 0x10)) {
      FUN_076c6e3c();
    }
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      FUN_076c5d54();
      if (*(long **)(unaff_x20 + 0x18) == (long *)0x0) goto LAB_076c8880;
      (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x198))();
    }
    if (0.0 < *(float *)(unaff_x20 + 0x20)) {
      FUN_076c6e3c();
    }
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      FUN_076c5d54();
      if (*(long **)(unaff_x20 + 0x28) == (long *)0x0) goto LAB_076c8880;
      (**(code **)(**(long **)(unaff_x20 + 0x28) + 0x198))();
    }
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      FUN_076c5d54();
      if (*(long **)(unaff_x20 + 0x30) == (long *)0x0) goto LAB_076c8880;
      (**(code **)(**(long **)(unaff_x20 + 0x30) + 0x198))();
    }
    FUN_076c5f44();
    return;
  }
LAB_076c8880:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


