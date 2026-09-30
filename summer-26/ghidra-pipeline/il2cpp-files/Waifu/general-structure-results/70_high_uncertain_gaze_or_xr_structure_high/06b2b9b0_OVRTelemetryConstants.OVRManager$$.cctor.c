/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 06b2b9b0
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRTelemetryConstants_OVRManager___cctor(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  long unaff_x19;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c9e90,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ca458,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083fc7c0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c6710,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x3ac) = 1;
  if (*(int *)(DAT_083c9e90 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (DAT_086e442c == '\0') {
    FUN_0335b6c8(&DAT_083c9e90,1);
    DataMemoryBarrier(2,3);
    DAT_086e442c = '\x01';
  }
  if (*(int *)(DAT_083c9e90 + 0xe0) == 0) {
    FUN_033b9870();
  }
  pcVar3 = *(char **)(DAT_083c9e90 + 0xb8);
  if (*pcVar3 == '\0') {
    if (*(int *)(DAT_083c9e90 + 0xe0) == 0) {
      FUN_033b9870();
      pcVar3 = *(char **)(DAT_083c9e90 + 0xb8);
    }
    uVar1 = *(undefined8 *)(pcVar3 + 8);
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_079ca0b0(uVar1,0);
    lVar2 = 0;
  }
  else {
    if (*(int *)(DAT_083c9548 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar1 = FUN_06b00e80();
    lVar2 = FUN_03398a84(DAT_083c6710);
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
  }
  return lVar2;
}


