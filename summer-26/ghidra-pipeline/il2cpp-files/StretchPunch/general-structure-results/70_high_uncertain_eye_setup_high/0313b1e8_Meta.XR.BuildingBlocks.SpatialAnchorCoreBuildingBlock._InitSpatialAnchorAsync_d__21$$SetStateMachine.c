/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<InitSpatialAnchorAsync>d__21$$SetStateMachine
ENTRY_POINT: 0313b1e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21__SetStateMachine
               (long param_1,int param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 < *(int *)(param_1 + 0x18)) {
    FUN_033b3224(0xf,0x15,0);
  }
  plVar2 = (long *)(param_1 + 0x10);
  if (*plVar2 != 0) {
    if (*(int *)(*plVar2 + 0x18) == param_2) {
      return;
    }
    lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    if (param_2 < 1) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01dde7f8();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01dde7f8();
      }
      lVar1 = **(long **)(lVar1 + 0xb8);
      *plVar2 = lVar1;
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x18);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01dde7f8();
      }
      lVar1 = FUN_01d7d9bc(lVar1,param_2);
      if (0 < *(int *)(param_1 + 0x18)) {
        FUN_033b4f38(*plVar2,0,lVar1,0,*(int *)(param_1 + 0x18),0);
      }
      *plVar2 = lVar1;
    }
    thunk_FUN_01e10808(plVar2,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


