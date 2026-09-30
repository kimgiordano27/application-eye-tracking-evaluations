/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 04db8294
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon__get_TelemetryAnnotation
               (long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  int unaff_w22;
  code *pcVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uStack000000000000000c;
  
  pcVar12 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x48);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02f41e9c(param_1);
  }
  lVar8 = (*pcVar12)();
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02f41e9c(lVar10);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x260);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  lVar10 = (*pcVar12)();
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar9 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02f41e9c(lVar11);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  iVar2 = (*pcVar12)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x50));
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar9 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02f41e9c(lVar11);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  iVar3 = (*pcVar12)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x50));
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar9 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02f41e9c(lVar11);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uVar4 = (*pcVar12)();
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar9 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02f41e9c(lVar11);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x268);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uVar5 = (*pcVar12)();
  if ((int)uVar5 <= (int)uVar4) {
    uVar4 = uVar5;
  }
  uVar14 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    iVar13 = 0;
    do {
      iVar6 = FUN_0609d588(lVar8 + iVar2 + (long)iVar13,lVar10 + iVar3 + (long)iVar13);
      if (iVar6 != 0) {
        return;
      }
      uVar14 = uVar14 - 1;
      iVar13 = iVar13 + unaff_w22;
    } while (uVar14 != 0);
  }
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar9 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uStack000000000000000c = (*pcVar12)();
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar9 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x268);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uVar7 = (*pcVar12)();
  FUN_050d2bd4(&stack0x0000000c,uVar7,0);
  return;
}


