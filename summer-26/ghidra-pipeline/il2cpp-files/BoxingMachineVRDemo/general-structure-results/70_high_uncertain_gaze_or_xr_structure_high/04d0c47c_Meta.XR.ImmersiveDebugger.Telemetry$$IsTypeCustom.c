/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 04d0c47c
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


undefined1 Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom(void)

{
  long lVar1;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (DAT_06b7795b == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    DAT_06b7795b = '\x01';
  }
  lVar1 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  return *(undefined1 *)(unaff_x20 + unaff_w19 + 2);
}


