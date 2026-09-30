/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnButtonClicked
ENTRY_POINT: 04d0c804
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__OnButtonClicked(ulong param_1)

{
  short sVar1;
  long lVar2;
  short *unaff_x19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02d9a2e0();
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  sVar1 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0xa8) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  *unaff_x19 = sVar1 + 1;
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  FUN_029f6308();
  return;
}


