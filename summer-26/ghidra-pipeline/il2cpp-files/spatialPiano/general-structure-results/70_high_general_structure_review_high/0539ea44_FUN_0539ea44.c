/*
FUNCTION_NAME: FUN_0539ea44
ENTRY_POINT: 0539ea44
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_9;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0539eea0) */
/* WARNING: Removing unreachable block (ram,0x0539f0d0) */
/* WARNING: Removing unreachable block (ram,0x0539f0c8) */
/* WARNING: Removing unreachable block (ram,0x0539f15c) */

undefined4 FUN_0539ea44(char *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 *puStack_218;
  undefined8 local_210;
  undefined8 *puStack_208;
  ulong local_200;
  long local_1a8;
  undefined8 *local_1a0;
  long local_198;
  undefined8 *local_190;
  long local_188;
  undefined8 *local_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = PTR_DAT_067cefa0;
  if ((DAT_06bbd676 & 1) == 0) {
    FUN_02f08768(Newtonsoft_Json_Serialization_JsonProperty_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Serialization_JsonPropertyCollection_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_JsonReaderException_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchema_TypeInfo);
    FUN_02f08768(PTR_DAT_067d2db8);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchemaBuilder_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchemaConstants_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchemaException_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchemaModel_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchemaModelBuilder_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchemaNodeCollection_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchemaResolver_TypeInfo);
    FUN_02f08768(PTR_DAT_067d2c60);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchemaType_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Schema_JsonSchemaWriter_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Linq_JsonSelectSettings_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_JsonSerializationException_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_JsonSerializer_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo);
    FUN_02f08768(PTR_DAT_067d2c68);
    FUN_02f08768(Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    FUN_02f08768(PTR_DAT_067d2c70);
    FUN_02f08768(PTR_DAT_067d2c78);
    FUN_02f08768(Newtonsoft_Json_Serialization_JsonStringContract_TypeInfo);
    FUN_02f08768(PTR_DAT_067caa30);
    FUN_02f08768(PTR_DAT_067cefa0);
    FUN_02f08768(Newtonsoft_Json_JsonConverterCollection_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_JsonTextReader_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_JsonTextWriter_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_JsonToken_TypeInfo);
    DAT_06bbd676 = 1;
  }
  puVar2 = Newtonsoft_Json_JsonSerializer_TypeInfo;
  puVar6 = Newtonsoft_Json_JsonSerializationException_TypeInfo;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  local_100 = 0;
  local_f8 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_178 = 0;
  local_170 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0547f8f0(&local_210,0x9b8056f,0,0xffffffffffffffff,0);
  uStack_78 = puStack_208;
  local_80 = local_210;
  local_70 = local_200;
  FUN_03e4c870(&local_98,2,*(undefined8 *)puVar6);
  local_188 = 0;
  local_210 = 0;
  puStack_208 = (undefined8 *)0x0;
  local_200 = 0;
  local_180 = &local_98;
  FUN_03e46cc0(&local_210,2,*(undefined8 *)puVar2);
  local_190 = &local_b0;
  uStack_a8 = puStack_208;
  local_b0 = local_210;
  local_a0 = local_200;
  local_198 = 0;
  local_f8 = FUN_0348f874(*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)Newtonsoft_Json_Serialization_JsonStringContract_TypeInfo);
  FUN_036051c4(&local_210,&local_f8,2,
               *(undefined8 *)Newtonsoft_Json_Serialization_JsonProperty_TypeInfo);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  local_c0 = local_200;
  local_1a0 = &local_d0;
  uStack_c8 = puStack_208;
  local_d0 = local_210;
  local_1a8 = 0;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar12 = FUN_050edfb8(uVar14,0,0);
  puVar6 = Newtonsoft_Json_Schema_JsonSchemaNodeCollection_TypeInfo;
  puVar1 = Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
  if ((uVar12 & 1) != 0) {
    uVar10 = FUN_053a497c(*(undefined8 *)(param_1 + 0x20));
    FUN_03e45f9c(&local_d0,(long)(int)uVar10,*(undefined8 *)puVar1);
    FUN_03e4cd10(&local_98,(ulong)uVar10 << 0x20 | 3,0,*(undefined8 *)puVar6);
  }
  local_168 = FUN_0348e8c4(*(undefined8 *)(param_1 + 0x28),
                           *(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaException_TypeInfo);
  FUN_03e40564(&local_210,&local_168,
               *(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaConstants_TypeInfo);
  puVar8 = Newtonsoft_Json_JsonToken_TypeInfo;
  puVar7 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
  puVar5 = Newtonsoft_Json_Schema_JsonSchema_TypeInfo;
  puVar4 = Newtonsoft_Json_JsonReaderException_TypeInfo;
  puVar3 = Newtonsoft_Json_Serialization_JsonPropertyCollection_TypeInfo;
  puVar2 = PTR_DAT_067d2c78;
  memcpy(&local_160,&local_210,0x68);
  local_210 = 0;
  puStack_208 = &local_160;
  while (uVar12 = FUN_034a3eb0(&local_160,*(undefined8 *)puVar4), (uVar12 & 1) != 0) {
    FUN_034a3c48(&local_160,*(undefined8 *)puVar5);
    uVar10 = FUN_053a497c();
    FUN_03e45f9c(&local_d0,(long)(int)uVar10,*(undefined8 *)puVar1);
    FUN_03e4cd10(&local_98,(ulong)uVar10 << 0x20 | 3,0,*(undefined8 *)puVar6);
  }
  FUN_04affed0(&local_160,*(undefined8 *)puVar3);
  uVar14 = FUN_03e45cf4(&local_d0,*(undefined8 *)puVar7);
  System_Data_DataColumnPropertyDescriptor___ctor
            (&local_210,&local_80,*(undefined8 *)puVar8,uVar14,local_c0._4_4_,0);
  FUN_0348f664(&local_210,*(undefined8 *)(param_1 + 0x18),2,*(undefined8 *)puVar2);
  local_e0 = local_200;
  puStack_218 = &local_f0;
  puStack_e8 = puStack_208;
  local_f0 = local_210;
  local_220 = 0;
  if (*param_1 == '\0') {
LAB_0539ef40:
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0539ef78;
  }
  else {
    auVar15 = FUN_03e198ec(param_1,*(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaBuilder_TypeInfo)
    ;
    FUN_03e43be4(&local_f0,auVar15._0_8_,auVar15._8_8_,
                 *(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaModelBuilder_TypeInfo);
    if (*param_1 == '\0') goto LAB_0539ef40;
  }
  uVar14 = FUN_03e43930(&local_f0,*(undefined8 *)PTR_DAT_067d2c70);
  FUN_03e4cd10(&local_98,local_e0 & 0xffffffff00000000 | 2,uVar14,*(undefined8 *)puVar6);
LAB_0539ef78:
  FUN_05480678(&local_210,&local_80,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_TypeInfo,
               (long)local_e0._4_4_,0);
  puVar6 = Newtonsoft_Json_Linq_JsonSelectSettings_TypeInfo;
  puVar1 = Newtonsoft_Json_Schema_JsonSchemaModel_TypeInfo;
  if (0 < local_88._4_4_) {
    iVar13 = 0;
    do {
      uVar14 = FUN_03e4c8a0(&local_98,iVar13,*(undefined8 *)puVar6);
      FUN_03e47154(&local_b0,uVar14,*(undefined8 *)puVar1);
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_88._4_4_);
  }
  FUN_05480678(&local_210,&local_80,*(undefined8 *)Newtonsoft_Json_JsonTextReader_TypeInfo,
               (long)local_a0._4_4_,0);
  local_170 = 0;
  local_178 = local_a0 >> 0x20;
  local_170 = FUN_03e46eac(&local_b0,
                           *(undefined8 *)Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo
                          );
  if (*(int *)(*(long *)PTR_DAT_067caa30 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar11 = FUN_05430a2c(&local_178,param_2,0);
  uVar14 = *param_2;
  puStack_208 = (undefined8 *)uStack_78;
  local_210 = local_80;
  local_200 = local_70;
  if (*(int *)(*(long *)Newtonsoft_Json_JsonConverterCollection_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uStack_238 = puStack_208;
  local_240 = local_210;
  local_230 = local_200;
  FUN_0539fe1c(&local_240,uVar14,uVar11);
  FUN_03e44358(&local_f0,*(undefined8 *)PTR_DAT_067d2c60);
  FUN_03e466f8(local_1a0,*(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaWriter_TypeInfo);
  if (local_1a8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
  FUN_03e478b0(local_190,*(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaResolver_TypeInfo);
  lVar9 = local_188;
  if (local_198 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
  FUN_03e4d484(local_180,*(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaType_TypeInfo);
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0(lVar9);
  }
  return uVar11;
}


