/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 06aab104
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


void OVRManager__get_xrSession(undefined8 param_1)

{
  long lVar1;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  FUN_06a5e4b0(param_1,0,0);
  uStack0000000000000014 = CONCAT44(in_stack_00000038,in_stack_00000030._4_4_);
  FUN_06a70228();
  if (DAT_086d7c55 == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    DAT_086d7c55 = '\x01';
  }
  lVar1 = *(long *)(DAT_083d2c90 + 0xb8);
  FUN_07a00c3c(0,0,0,0,*(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x4c),
               *(undefined4 *)(lVar1 + 0x50),0);
  return;
}


