/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSurfacePositionDebugger
ENTRY_POINT: 04a98e88
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSurfacePositionDebugger(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  code *pcVar6;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  uVar3 = thunk_FUN_02b79644();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x68);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  (*pcVar6)(uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x68));
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar4 + 0xb8) = uVar3;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  puVar2 = PTR_DAT_06322c28;
  lVar4 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(undefined8 *)(lVar4 + 0xb8),uVar3);
  uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  FUN_03fbce74(uVar3,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x70),0);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8) = uVar3;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  puVar2 = PTR_DAT_06312db8;
  lVar4 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(long *)(lVar4 + 0xb8) + 8,uVar3);
  uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  FUN_04cf4310(uVar3,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x78),0);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10) = uVar3;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(long *)(lVar4 + 0xb8) + 0x10,uVar3);
  return;
}


