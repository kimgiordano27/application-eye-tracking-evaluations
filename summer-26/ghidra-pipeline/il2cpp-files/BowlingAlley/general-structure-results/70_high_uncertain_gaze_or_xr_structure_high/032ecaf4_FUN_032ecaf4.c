/*
FUNCTION_NAME: FUN_032ecaf4
ENTRY_POINT: 032ecaf4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_032ecaf4(undefined8 *param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_EraseResult>>__;
  puVar2 = Method_OVRTask_FromRequest<OVRResult<ulong,_OVRPlugin_Result>>__;
  uVar4 = 0;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_3;
    puVar2 = param_2;
    uVar4 = param_4;
  }
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  param_1[5] = puVar2;
  param_1[6] = puVar1;
  param_1[7] = uVar4;
  FUN_03296100(param_1 + 1);
  param_1[0xf] = 0;
  param_1[0x2a] = 0;
  *param_1 = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  uVar3 = _UNK_013a3b98;
  uVar4 = _DAT_013a3b90;
  *(ushort *)(param_1 + 0x53) = *(ushort *)(param_1 + 0x53) & 0xffc0 | 0x10;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xe) = 4;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar4;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f;
  uVar4 = FUN_032efb90();
  param_1[0x57] = uVar4;
  uVar4 = FUN_03332d38();
  param_1[0x58] = uVar4;
  return 1;
}


