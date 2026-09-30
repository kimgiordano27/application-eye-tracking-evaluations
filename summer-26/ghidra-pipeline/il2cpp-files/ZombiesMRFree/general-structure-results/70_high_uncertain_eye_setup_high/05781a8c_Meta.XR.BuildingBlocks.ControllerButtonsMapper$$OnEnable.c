/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnEnable
ENTRY_POINT: 05781a8c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnEnable(void)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  lVar2 = thunk_FUN_03010710();
  if (lVar2 == 0) {
    FUN_05b0fe5c(2,0);
    uVar1 = 0;
LAB_05781b84:
    return uVar1 & 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4(lVar2);
  }
  if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
    thunk_FUN_03010960();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4(lVar2);
    }
    if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
      thunk_FUN_03010960();
      uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
      goto LAB_05781b84;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe9884();
}


