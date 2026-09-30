/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 04db4458
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(long param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  code *pcVar6;
  int unaff_w25;
  
  pcVar6 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x38);
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c(*(long *)(unaff_x21 + 0x20));
  }
  iVar2 = (*pcVar6)();
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x21 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar3);
  }
  (*pcVar6)();
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x21 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xa8);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar3);
  }
  (*pcVar6)();
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x21 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar3);
  }
  lVar4 = (*pcVar6)();
  lVar5 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x21 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  (*pcVar6)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x40));
  FUN_0609d3c8(lVar4 + (long)unaff_w25 * (long)iVar2);
  return;
}


