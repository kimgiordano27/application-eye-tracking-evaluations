/*
FUNCTION_NAME: OVRTelemetry.TelemetryClient$$MarkerAnnotation
ENTRY_POINT: 057b09ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void OVRTelemetry_TelemetryClient__MarkerAnnotation(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_06d5a000;
  if ((DAT_071c5bae & 1) == 0) {
                    /* try { // try from 057b0a0c to 058b0a1b has its CatchHandler @ 057b0b9c */
    FUN_02f07e70(PTR_DAT_06d5a000);
    DAT_071c5bae = 1;
  }
                    /* try { // try from 057b0a1c to 058b0a67 has its CatchHandler @ 057b0918 */
  FUN_05645a04(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_057859f0(param_2,0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_02f411dc();
  uVar3 = FUN_05785ac4(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_02f411dc();
  uVar3 = OVRPlugin_OVRP_1_79_0__ovrp_DestroySpaceUser(param_2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_02f411dc();
  uVar2 = FUN_05785c6c(param_2,0);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar3 = FUN_05785ce8(param_2,0);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x30),uVar3);
  return;
}


