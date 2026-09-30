/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 04d85a18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  thunk_FUN_02f168c4();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c();
    }
    lVar1 = FUN_04d85af0(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
    thunk_FUN_02f168c4();
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar3 = *(long *)(param_1 + 0x20);
    **(long **)(lVar2 + 0xb8) = lVar1;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
  }
  return lVar1;
}


