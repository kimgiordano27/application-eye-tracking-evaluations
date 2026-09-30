/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 04d30750
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon__get_TelemetryAnnotation
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auVar9 [16];
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  lVar4 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_02d9a2e0(param_1);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
  }
  uVar2 = (*pcVar8)(param_2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar4 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xf0);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
  }
  auVar9 = (*pcVar8)(uVar2,param_3,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf0));
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar4 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x100);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
  }
  uVar5 = (*pcVar8)(auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x100));
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar4 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
  }
  uVar6 = (*pcVar8)(param_2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60));
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar4 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x90);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
  }
  iVar3 = (*pcVar8)(param_2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x90));
  FUN_06013f40(uVar5,uVar6,(long)iVar3,0);
  return auVar9;
}


