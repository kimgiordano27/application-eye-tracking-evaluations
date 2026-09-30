/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 06dccaac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(long param_1)

{
  long unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000038 = *(undefined8 *)(unaff_x19 + 0x4c);
  uStack0000000000000030 = *(undefined8 *)(unaff_x19 + 0x44);
  uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0x3c);
  uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0x34);
  uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0x2c);
  uStack0000000000000010 = *(undefined8 *)(unaff_x19 + 0x24);
  uStack0000000000000008 = *(undefined8 *)(unaff_x19 + 0x1c);
  uStack0000000000000000 = *(undefined8 *)(unaff_x19 + 0x14);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03d8f26c(param_1);
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x18));
  return;
}


