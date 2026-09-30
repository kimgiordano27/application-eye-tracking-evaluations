/*
FUNCTION_NAME: FUN_032dcce0
ENTRY_POINT: 032dcce0
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


undefined8 * FUN_032dcce0(undefined8 param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 auStack_38 [8];
  
  FUN_03296828(auStack_38,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
  local_58 = 0;
  local_50 = param_1;
  FUN_032b01d4(&local_c0,&DAT_076ebcf0,&local_58);
  lVar6 = local_a0;
  lVar5 = local_a8;
  lVar4 = local_b0;
  lVar3 = local_b8;
  local_80 = 0;
  local_c0 = &DAT_076ebcf0;
  local_b8 = DAT_076ebd30;
  local_b0 = DAT_076ebd38;
  local_a8 = DAT_076ebd38;
  local_a0 = 0;
  lStack_98 = DAT_076ebd30;
  local_90 = DAT_076ebd38;
  lStack_88 = DAT_076ebd38;
  FUN_032a2e64(&local_c0);
  if ((((lVar3 == local_b8) && (lVar4 == local_b0)) && (lVar5 == local_a8)) &&
     ((lVar5 == lVar4 || (lVar6 == local_a0)))) {
    puVar9 = (undefined8 *)FUN_032fb70c(1,0x138);
    puVar9[0xf] = puVar9;
    FUN_03303368(&local_58,param_1);
    puVar9[2] = local_50;
    puVar9[3] = &DAT_013f16c9;
    puVar7 = (undefined8 *)thunk_FUN_0330311c(CONCAT44(uStack_54,local_58));
    puVar1 = (ushort *)((long)puVar9 + 0x135);
    *puVar9 = *puVar7;
    puVar2 = Method_OVRSpaceQuery_ForComponentThrow__;
    *puVar1 = *puVar1 & 0xfffc | (ushort)(*(int *)(puVar9 + 0x1b) == 0) | 2;
    uVar8 = *(undefined8 *)(puVar2 + 0x10);
    puVar9[8] = puVar9;
    puVar9[9] = puVar9;
    *(undefined4 *)(puVar9 + 0x23) = 1;
    puVar9[0xb] = uVar8;
    FUN_03303328(CONCAT44(uStack_54,local_58));
    FUN_03303308(CONCAT44(uStack_54,local_58),param_1,puVar9 + 4);
    FUN_03303308(CONCAT44(uStack_54,local_58),param_1,puVar9 + 6);
    *(undefined4 *)(puVar9 + 0x22) = 0xffffffff;
    *(undefined4 *)(puVar9 + 0x21) = 0xffffffff;
    puVar9[0x1f] = 0x800000008;
    *(uint *)(puVar9 + 7) = *(uint *)(puVar9 + 7) | 0x20000000;
    *puVar1 = *puVar1 | 0x100;
    *(undefined1 *)(puVar9 + 0x26) = 1;
    local_70[0] = 0;
    local_68 = param_1;
    puStack_60 = puVar9;
    FUN_032e3048(&DAT_076ebcf0,1);
    FUN_032b03b8(&local_c0,&DAT_076ebcf0,local_70);
  }
  else {
    puVar9 = *(undefined8 **)(lVar6 + 0x10);
  }
  FUN_03296ccc(auStack_38);
  return puVar9;
}


