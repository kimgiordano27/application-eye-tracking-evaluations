/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 04db8924
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


undefined8
Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation
          (long param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  lVar5 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_02f41e9c(param_1);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x248);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar5);
  }
  uVar3 = (*pcVar6)();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x90);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar5);
  }
  iVar2 = (*pcVar6)();
  FUN_0609bf0c(param_2,uVar3,(long)iVar2,0);
  return 0;
}


