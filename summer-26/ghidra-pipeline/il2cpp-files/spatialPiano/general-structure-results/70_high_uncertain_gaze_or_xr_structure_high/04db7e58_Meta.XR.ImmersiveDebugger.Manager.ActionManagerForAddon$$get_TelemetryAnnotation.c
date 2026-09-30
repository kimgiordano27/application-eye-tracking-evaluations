/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 04db7e58
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
Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon__get_TelemetryAnnotation(long param_1)

{
  ushort uVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  lVar2 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_02f41e9c(param_1);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar3 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x90);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar2);
  }
  (*pcVar3)();
  FUN_0609bf0c();
  return 0;
}


