/*
FUNCTION_NAME: OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F
ENTRY_POINT: 02dac33c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_14
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8,byte param_9,
               byte param_10,undefined8 param_11,undefined8 param_12,int param_13,
               undefined4 param_14,undefined8 *param_15,int param_16,int param_17,byte param_18,
               undefined8 param_19,byte param_20,undefined4 param_21,undefined4 param_22,
               byte param_23,byte param_24,byte param_25,byte param_26,byte param_27,byte param_28,
               byte param_29,byte param_30,undefined8 param_31)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 uStack_47c;
  undefined8 local_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined8 uStack_45c;
  ulong local_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined8 uStack_42c;
  undefined8 local_420;
  undefined4 local_414;
  byte local_40d;
  undefined4 local_40c;
  byte local_405;
  int local_404;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined8 uStack_3dc;
  int local_3c4;
  ulong local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined8 uStack_39c;
  undefined8 local_390;
  undefined8 local_388;
  uint local_37c;
  int local_374;
  undefined4 local_370;
  int local_36c;
  undefined8 local_368;
  undefined8 local_360;
  uint local_354;
  int local_350;
  byte local_349;
  undefined8 local_348;
  undefined8 local_340;
  byte local_32e;
  byte local_32d;
  int local_32c;
  undefined4 local_328;
  int local_324;
  undefined8 local_320;
  undefined8 local_318;
  uint local_30c;
  int local_308;
  byte local_301;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2e9;
  undefined8 local_2e8;
  undefined8 local_2e0;
  int local_2d8;
  undefined1 local_2d1;
  undefined8 local_2d0;
  undefined8 local_2c8;
  int local_2c0;
  undefined1 local_2b9;
  undefined8 local_2b8;
  undefined8 local_2b0;
  int local_2a8;
  undefined1 local_2a1;
  undefined8 local_2a0;
  undefined8 local_298;
  int local_290;
  int local_28c;
  uint local_288;
  byte local_281;
  uint local_280;
  byte local_279;
  uint local_278;
  byte local_271;
  uint local_270;
  byte local_269;
  uint local_268;
  byte local_261;
  uint local_260;
  byte local_259;
  uint local_258;
  byte local_251;
  uint local_250;
  byte local_249;
  uint local_248;
  byte local_241;
  uint local_240;
  byte local_239;
  undefined4 local_238;
  byte local_232;
  byte local_231;
  undefined8 local_230;
  undefined8 local_228;
  byte local_21d;
  uint local_21c;
  undefined8 local_218;
  undefined8 local_210;
  int local_208;
  undefined4 local_204;
  undefined8 *local_200;
  undefined4 *local_1f8;
  int local_1f0;
  uint local_1ec;
  undefined8 local_1e8;
  uint local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  undefined4 local_1c4;
  undefined8 *local_1c0;
  undefined4 *local_1b8;
  int local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  undefined8 local_198;
  undefined8 local_190;
  int local_188;
  undefined4 local_184;
  undefined8 *local_180;
  undefined4 *local_178;
  int local_170;
  uint local_16c;
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  undefined8 local_150;
  int local_148;
  undefined4 local_144;
  undefined8 *local_140;
  undefined4 *local_138;
  int local_12c;
  uint local_128;
  uint local_124;
  undefined8 local_120;
  undefined8 local_118;
  int local_110;
  undefined4 local_10c;
  undefined8 *local_108;
  undefined4 *local_100;
  int local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined4 *local_d0;
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  byte local_b2;
  byte local_b1;
  byte local_b0;
  byte local_af;
  byte local_ae;
  byte local_ad;
  byte local_ac;
  byte local_ab;
  byte local_aa;
  byte local_a9;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  byte local_83;
  byte local_82;
  byte local_81;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  bool local_51;
  
  puVar8 = 
  Field_<PrivateImplementationDetails>_3505B8A2248AC03FE41ACADF8F29294572BBADEE1DD2E1A45D025766681C012C
  ;
  puVar7 = 
  Field_<PrivateImplementationDetails>_312748FBDD26553EF984AB827A029BA4371D46EB654C3323F7FDDC1135F284CD
  ;
  puVar6 = 
  Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
  ;
  puVar5 = 
  Field_<PrivateImplementationDetails>_22CDB0218DF95C2FE34F5B86A85B3FF904B5E7374399C45AD383B9CF010EAD25
  ;
  puVar4 = Method_UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_<>c_<_cctor>b__9_0__;
  puVar3 = Method_System_Data_TypeLimiter_Scope_<>c_<_ctor>b__3_0__;
  puVar2 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_80 = param_21;
  local_78 = param_22;
  local_81 = param_8 & 1;
  local_82 = param_9 & 1;
  local_83 = param_10 & 1;
  local_a4 = param_16;
  local_a8 = param_17;
  local_a9 = param_18 & 1;
  local_aa = param_20 & 1;
  local_ab = param_23 & 1;
  local_ac = param_24 & 1;
  local_ad = param_25 & 1;
  local_ae = param_26 & 1;
  local_af = param_27 & 1;
  local_b0 = param_28 & 1;
  local_b1 = param_29 & 1;
  local_b2 = param_30 & 1;
  local_c0 = param_31;
  local_a0 = param_14;
  local_9c = param_13;
  local_98 = param_12;
  local_90 = param_11;
  local_70 = param_4;
  local_6c = param_5;
  local_68 = param_6;
  local_64 = param_7;
  local_60 = param_1;
  uStack_5c = param_2;
  local_58 = param_3;
  if ((OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_37E23627A08EC0A60752A2316DABF6781ABC887E0C6195DAA82B6FECD0C5528F
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar8);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F::
    s_Il2CppMethodInitialized = 1;
  }
  local_c4 = 0;
  local_c8 = 0;
  local_d0 = (undefined4 *)0x0;
  local_d8 = (undefined8 *)0x0;
  local_dc = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_f8 = 0;
  local_100 = (undefined4 *)0x0;
  local_108 = (undefined8 *)0x0;
  local_10c = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_124 = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = (undefined4 *)0x0;
  local_140 = (undefined8 *)0x0;
  local_144 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_170 = 0;
  local_178 = (undefined4 *)0x0;
  local_180 = (undefined8 *)0x0;
  local_184 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_1ac = 0;
  local_1b0 = 0;
  local_1b8 = (undefined4 *)0x0;
  local_1c0 = (undefined8 *)0x0;
  local_1c4 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1dc = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1ec = 0;
  local_1f0 = 0;
  local_1f8 = (undefined4 *)0x0;
  local_200 = (undefined8 *)0x0;
  local_204 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_21c = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_21d = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  local_21d = local_21d & 1;
  if (local_21d == 0) {
    local_51 = false;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_228 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    puVar13 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
    local_230 = *puVar13;
    local_231 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                          (local_228,local_230,0);
    local_231 = local_231 & 1;
    if (local_231 == 0) {
      local_404 = local_a4;
      if (local_a4 == 0) {
        local_405 = local_81 & 1;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        local_40c = OVRPlugin_ToBool_mA03A0E6DE11F1A1726BE77C6A026C7D86B74BCD0(local_405 & 1);
        local_40d = local_82 & 1;
        local_414 = OVRPlugin_ToBool_mA03A0E6DE11F1A1726BE77C6A026C7D86B74BCD0(local_82 & 1,0);
        local_420 = local_90;
        local_440 = *param_15;
        uStack_438 = (undefined4)param_15[1];
        uStack_42c = *(undefined8 *)((long)param_15 + 0x14);
        uStack_434 = (undefined4)*(undefined8 *)((long)param_15 + 0xc);
        uStack_430 = (undefined4)((ulong)*(undefined8 *)((long)param_15 + 0xc) >> 0x20);
        local_450 = CONCAT44(uStack_5c,local_60);
        local_448 = local_58;
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Field_<PrivateImplementationDetails>_37E23627A08EC0A60752A2316DABF6781ABC887E0C6195DAA82B6FECD0C5528F
                  );
        uStack_468 = uStack_438;
        local_470 = local_440;
        uStack_45c = uStack_42c;
        uStack_464 = uStack_434;
        uStack_460 = uStack_430;
        uStack_47c = (undefined4)(local_450 >> 0x20);
        iVar12 = OVRP_0_1_1_ovrp_SetOverlayQuad2_m4C4B963D5FE9EC8A0D39144ED9B2A9F2A1EEBC7E
                           (local_450 & 0xffffffff,uStack_47c,local_448,local_40c,local_414,
                            local_420,0,&local_470,0);
        local_51 = iVar12 == 1;
      }
      else {
        local_51 = false;
      }
    }
    else {
      local_232 = local_81 & 1;
      if (local_232 != 0) {
        local_238 = 0;
      }
      local_c4 = (uint)(local_232 != 0);
      local_239 = local_82 & 1;
      if (local_239 != 0) {
        local_240 = local_c4;
        local_c4 = local_c4 | 2;
      }
      local_241 = local_83 & 1;
      if (local_241 != 0) {
        local_248 = local_c4;
        local_c4 = local_c4 | 4;
      }
      local_249 = local_ab & 1;
      if (local_249 != 0) {
        local_250 = local_c4;
        local_c4 = local_c4 | 8;
      }
      local_251 = local_b0 & 1;
      if (local_251 != 0) {
        local_258 = local_c4;
        local_c4 = local_c4 | 0x200;
      }
      local_259 = local_ad & 1;
      if (local_259 != 0) {
        local_260 = local_c4;
        local_c4 = local_c4 | 0x10;
      }
      local_261 = local_af & 1;
      if (local_261 != 0) {
        local_268 = local_c4;
        local_c4 = local_c4 | 0x80;
      }
      local_269 = local_ae & 1;
      if (local_269 != 0) {
        local_270 = local_c4;
        local_c4 = local_c4 | 0x20;
      }
      local_271 = local_ac & 1;
      if (local_271 != 0) {
        local_278 = local_c4;
        local_c4 = local_c4 | 0x40;
      }
      local_279 = local_b1 & 1;
      if (local_279 != 0) {
        local_280 = local_c4;
        local_c4 = local_c4 | 0x100;
      }
      local_281 = local_b2 & 1;
      if (local_281 != 0) {
        local_288 = local_c4;
        local_c4 = local_c4 | 0x400;
      }
      local_28c = local_a8;
      if ((local_a8 == 1) || (local_290 = local_a8, local_a8 == 2)) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        local_298 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        puVar13 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        local_2a0 = *puVar13;
        bVar11 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E
                           (local_298,local_2a0,0);
        if ((bVar11 & 1) != 0) {
          return false;
        }
        local_2a1 = 0;
      }
      local_2a8 = local_a8;
      if (local_a8 == 4) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        local_2b0 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
        puVar13 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
        local_2b8 = *puVar13;
        bVar11 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E
                           (local_2b0,local_2b8,0);
        if ((bVar11 & 1) != 0) {
          return false;
        }
        local_2b9 = 0;
      }
      local_2c0 = local_a8;
      if (local_a8 == 5) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        local_2c8 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
        puVar13 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar7);
        local_2d0 = *puVar13;
        bVar11 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E
                           (local_2c8,local_2d0,0);
        if ((bVar11 & 1) != 0) {
          return false;
        }
        local_2d1 = 0;
      }
      local_2d8 = local_a8;
      if (local_a8 == 9) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        local_2e0 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        puVar13 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_2e8 = *puVar13;
        bVar11 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E
                           (local_2e0,local_2e8,0);
        if ((bVar11 & 1) != 0) {
          return false;
        }
        local_2e9 = 0;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_2f8 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar8);
      puVar13 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
      local_300 = *puVar13;
      local_301 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                            (local_2f8,local_300,0);
      local_301 = local_301 & 1;
      if ((local_301 == 0) || (local_308 = local_9c, local_9c == -1)) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        local_340 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar6);
        puVar13 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
        local_348 = *puVar13;
        local_349 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                              (local_340,local_348,0);
        local_349 = local_349 & 1;
        if ((local_349 == 0) || (local_350 = local_9c, local_9c == -1)) {
          local_37c = local_c4;
          local_388 = local_90;
          local_390 = local_98;
          local_3b0 = *param_15;
          uStack_3a8 = (undefined4)param_15[1];
          uStack_39c = *(undefined8 *)((long)param_15 + 0x14);
          uStack_3a4 = (undefined4)*(undefined8 *)((long)param_15 + 0xc);
          uStack_3a0 = (undefined4)((ulong)*(undefined8 *)((long)param_15 + 0xc) >> 0x20);
          local_3c0 = CONCAT44(uStack_5c,local_60);
          local_3b8 = local_58;
          local_3c4 = local_a4;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
          uStack_3e8 = uStack_3a8;
          local_3f0 = local_3b0;
          uStack_3dc = uStack_39c;
          uStack_3e4 = uStack_3a4;
          uStack_3e0 = uStack_3a0;
          local_400 = local_3c0;
          uVar9 = local_400;
          local_3f8 = local_3b8;
          local_400._4_4_ = (undefined4)(local_3c0 >> 0x20);
          uVar10 = local_400._4_4_;
          local_400 = uVar9;
          iVar12 = OVRP_1_6_0_ovrp_SetOverlayQuad3_m7DEEB1609FB20B0EBF404129B1B45D71FC9A40FC
                             (local_3c0 & 0xffffffff,uVar10,local_3b8,local_37c,local_388,local_390,
                              0,&local_3f0,local_3c4,0);
          local_51 = iVar12 == 1;
        }
        else {
          local_354 = local_c4;
          local_360 = local_90;
          local_368 = local_98;
          local_36c = local_9c;
          local_370 = local_a0;
          local_374 = local_a4;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar6);
          iVar12 = OVRP_1_15_0_ovrp_EnqueueSubmitLayer_m4B90DCCD24308E3FB43213780AE5AD342009FB49
                             (local_354,local_360,local_368,local_36c,local_370,param_15,&local_60,
                              local_374);
          local_51 = iVar12 == 0;
        }
      }
      else {
        local_30c = local_c4;
        local_318 = local_90;
        local_320 = local_98;
        local_324 = local_9c;
        local_328 = local_a0;
        local_32c = local_a4;
        local_32d = local_a9 & 1;
        if (local_32d == 0) {
          local_f8 = local_a4;
          local_100 = &local_60;
          local_10c = local_a0;
          local_110 = local_9c;
          local_118 = local_98;
          local_120 = local_90;
          local_124 = local_c4;
          local_108 = param_15;
        }
        else {
          local_c8 = local_a4;
          local_d0 = &local_60;
          local_dc = local_a0;
          local_e0 = local_9c;
          local_e8 = local_98;
          local_f0 = local_90;
          local_f4 = local_c4;
          local_d8 = param_15;
        }
        local_138 = &local_60;
        local_128 = (uint)(local_32d != 0);
        local_12c = local_a4;
        local_144 = local_a0;
        local_148 = local_9c;
        local_150 = local_98;
        local_158 = local_90;
        local_15c = local_c4;
        local_32e = local_aa & 1;
        if (local_32e == 0) {
          local_1a8 = param_19;
          local_1ac = local_128;
          local_1b0 = local_a4;
          local_1b8 = local_138;
          local_1c4 = local_a0;
          local_1c8 = local_9c;
          local_1d0 = local_98;
          local_1d8 = local_90;
          local_1dc = local_c4;
          local_1c0 = param_15;
        }
        else {
          local_168 = param_19;
          local_16c = local_128;
          local_170 = local_a4;
          local_178 = local_138;
          local_184 = local_a0;
          local_188 = local_9c;
          local_190 = local_98;
          local_198 = local_90;
          local_19c = local_c4;
          local_180 = param_15;
        }
        local_1e0 = (uint)(local_32e != 0);
        local_1e8 = param_19;
        local_1ec = local_128;
        local_1f0 = local_a4;
        local_1f8 = local_138;
        local_204 = local_a0;
        local_208 = local_9c;
        local_210 = local_98;
        local_218 = local_90;
        local_21c = local_c4;
        local_200 = param_15;
        local_140 = param_15;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar8);
        iVar12 = OVRP_1_34_0_ovrp_EnqueueSubmitLayer2_m9103D51B5F7C07C5EC63A671CACF326350AE0FA9
                           (local_21c,local_218,local_210,local_208,local_204,local_200,local_1f8,
                            local_1f0);
        local_51 = iVar12 == 0;
      }
    }
  }
  return local_51;
}


