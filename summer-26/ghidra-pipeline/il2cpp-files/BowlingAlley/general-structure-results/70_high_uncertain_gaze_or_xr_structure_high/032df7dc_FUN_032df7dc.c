/*
FUNCTION_NAME: FUN_032df7dc
ENTRY_POINT: 032df7dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 * FUN_032df7dc(undefined8 *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint local_48 [2];
  undefined8 *local_40;
  void *local_38;
  undefined1 auStack_30 [8];
  undefined8 *local_28;
  
  local_48[0] = 0;
  local_40 = param_1;
  uVar5 = FUN_032e0d10(&DAT_076ebdc8,local_48,&local_28);
  if ((local_28 == (undefined8 *)0x0) || (puVar6 = local_28, (uVar5 & 1) == 0)) {
    FUN_03296828(auStack_30,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
    local_48[0] = 0;
    local_40 = param_1;
    uVar4 = FUN_032e0d10(&DAT_076ebdc8,local_48,&local_28);
    if ((local_28 == (undefined8 *)0x0) || (puVar6 = local_28, ((uVar4 ^ 1) & 1) != 0)) {
      puVar6 = (undefined8 *)FUN_032fb70c(1,0x138);
      puVar6[0xf] = puVar6;
      puVar6[3] = param_1[3];
      FUN_03300854(local_48,&DAT_013aa2c2,param_1[2]);
      pvVar2 = (void *)((ulong)local_48 | 1);
      if ((local_48[0] & 1) != 0) {
        pvVar2 = local_38;
      }
      uVar7 = FUN_03300ea8(pvVar2);
      puVar6[2] = uVar7;
      if ((local_48[0] & 1) != 0) {
        operator_delete(local_38);
      }
      puVar1 = (ushort *)((long)puVar6 + 0x135);
      *puVar6 = *param_1;
      uVar3 = *puVar1;
      *puVar1 = uVar3 | 2;
      uVar4 = *(uint *)(param_1 + 0x23);
      puVar6[0x1f] = 0x800000008;
      *(uint *)(puVar6 + 0x23) = uVar4 & 7;
      *puVar1 = uVar3 | 0x102;
      puVar6[4] = param_1 + 4;
      puVar6[6] = param_1 + 4;
      *(undefined1 *)((long)puVar6 + 0x2a) = 0xf;
      puVar6[0xb] = 0;
      *(undefined1 *)(puVar6 + 0x26) = 1;
      puVar6[8] = param_1;
      puVar6[9] = param_1;
      *(uint *)(puVar6 + 7) = *(uint *)(puVar6 + 7) & 0xff0fffff | 0x200f0000;
      local_48[0] = 0;
      local_40 = param_1;
      local_28 = puVar6;
      FUN_032e0fa0(&DAT_076ebdc8,local_48,&local_28);
    }
    FUN_03296ccc(auStack_30);
  }
  return puVar6;
}


