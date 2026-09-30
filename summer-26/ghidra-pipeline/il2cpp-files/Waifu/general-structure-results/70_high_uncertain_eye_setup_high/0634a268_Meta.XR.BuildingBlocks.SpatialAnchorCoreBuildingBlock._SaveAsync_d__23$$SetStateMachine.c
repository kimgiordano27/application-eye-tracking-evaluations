/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<SaveAsync>d__23$$SetStateMachine
ENTRY_POINT: 0634a268
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<SaveAsync>d__23__SetStateMachine
          (long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x22;
  undefined1 auVar3 [16];
  undefined4 in_stack_00000068;
  
  if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
    lVar2 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
    if ((lVar2 != 0) && ((*(long *)(lVar2 + 0xa8) != 0 && (*(long *)(unaff_x22 + 0x18) != 0)))) {
      lVar2 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 0xd0);
        if (*(int *)(lVar2 + 0xe0) != 0) {
          plVar1 = (long *)(lVar2 + 0xd8);
        }
        if ((*plVar1 != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
          lVar2 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
          if (lVar2 != 0) {
            plVar1 = (long *)(lVar2 + 0xe8);
            if (*(int *)(lVar2 + 0xf8) != 0) {
              plVar1 = (long *)(lVar2 + 0xf0);
            }
            if (*plVar1 != 0) {
              if (*(long *)(unaff_x22 + 0x18) != 0) {
                lVar2 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                if ((((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
                    (*(long *)(unaff_x22 + 0x40) != 0)) && (*(long *)(unaff_x22 + 0x38) != 0)) {
                  auVar3 = FUN_0400278c(&stack0x00000068,
                                        *(undefined4 *)(*(long *)(unaff_x22 + 0x38) + 0x30),8,
                                        unaff_x20,unaff_x19,DAT_0840ee30);
                  return auVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


