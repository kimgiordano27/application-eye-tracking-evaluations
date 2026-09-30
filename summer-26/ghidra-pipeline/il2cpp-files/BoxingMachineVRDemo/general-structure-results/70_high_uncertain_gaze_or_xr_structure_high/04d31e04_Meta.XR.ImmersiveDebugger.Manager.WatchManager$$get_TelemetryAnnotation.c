/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 04d31e04
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


undefined8
Meta_XR_ImmersiveDebugger_Manager_WatchManager__get_TelemetryAnnotation(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  long unaff_x20;
  code *unaff_x22;
  code *pcVar7;
  
  if ((in_x9 & 1) == 0) {
    FUN_02d9a2e0(param_1);
  }
  uVar3 = (*unaff_x22)();
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02d9a2e0(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x188);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  uVar4 = (*pcVar7)();
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02d9a2e0(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x90);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  iVar2 = (*pcVar7)();
  FUN_06013f40(uVar3,uVar4,(long)iVar2,0);
  return 0;
}


