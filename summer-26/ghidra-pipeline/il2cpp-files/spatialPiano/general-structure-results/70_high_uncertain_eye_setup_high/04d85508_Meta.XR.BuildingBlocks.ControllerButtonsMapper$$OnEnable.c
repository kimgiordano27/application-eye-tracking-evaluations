/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnEnable
ENTRY_POINT: 04d85508
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


undefined8 Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnEnable(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x24;
  long unaff_x25;
  
  uVar2 = FUN_050efb68();
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) != 0) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_067ce3f0;
      goto LAB_04d8557c;
    }
    if ((uVar1 & 0x1800) != 0) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_067ce410;
      goto LAB_04d8557c;
    }
    if (uVar2 == 7) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_067ce428;
      goto LAB_04d8557c;
    }
  }
  if (uVar2 != 5) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    uVar5 = thunk_FUN_02f45270();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    FUN_03f25a20(uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return uVar5;
  }
  lVar3 = *(long *)(unaff_x25 + 0xe0);
  puVar4 = (undefined8 *)PTR_DAT_067ce420;
LAB_04d8557c:
  uVar5 = *puVar4;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_050e4454(uVar5,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x24);
  }
  uVar5 = FUN_05115b34(uVar5);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  uVar5 = FUN_02a7e998(uVar5,lVar3);
  return uVar5;
}


