/*
FUNCTION_NAME: OVRSceneManager_LocateUserInRoom_mB7080AB225EB7D0ECACF80CFB1336180265677D6
ENTRY_POINT: 02dece7c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRSceneManager_LocateUserInRoom_mB7080AB225EB7D0ECACF80CFB1336180265677D6
               (long param_1,OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 *param_2,
               undefined8 param_3)

{
  undefined *puVar1;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *pNVar2;
  byte bVar3;
  uint uVar4;
  __4 *extraout_x1;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  void *local_408;
  undefined1 local_400 [16];
  byte local_3e1;
  undefined1 local_3e0 [16];
  void *local_3d0;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  byte local_3a1;
  undefined4 local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 local_33c;
  undefined8 local_330;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_300;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined4 uStack_298;
  undefined8 uStack_28c;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 uStack_204;
  undefined4 uStack_200;
  undefined8 uStack_1fc;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac [2];
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  byte local_15d;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 *local_138;
  FinallyHelper<OVRSceneManager_LocateUserInRoom_mB7080AB225EB7D0ECACF80CFB1336180265677D6::__4,false>
  aFStack_130 [16];
  int local_120;
  byte local_119;
  undefined8 local_118;
  byte local_10d;
  undefined4 local_10c;
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined8 local_e0;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *local_d8;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *local_d0;
  undefined1 local_c3;
  undefined2 local_c2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_30 = param_3;
  local_28 = param_1;
  if ((OVRSceneManager_LocateUserInRoom_mB7080AB225EB7D0ECACF80CFB1336180265677D6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_0EBBFED81071BF15F38AA1387D6D74E5788591B4AA6E85C7B739CF903789D438
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_39D974909C7E64675317DD1A8583B8D8DE92E68B180532FADD22B482AD93DC83
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_5BBE6FB653430A43512696B35BDA7366625E8852BC165C59F708B794B8B0F2E8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_C77A066B9EC0272B121AD30CBAEDA4AD20F986D49CC6D0007EBF45888D8B09BF
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_3CD085A87F325CB6566DE06EB72EBADFCEE4B199DE660E11CBE907EA8B224D85
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_E1DC3A1EA16CD5E9DBD0F81E8F7AE4BBB4DF3BCFEF388DE056B3EE11868EE846
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_48FA2B2FD7A202D3952D07F8ED3C23196F51A91F4130D0C23DA616CFFF547D2C
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Nullable<long>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_63B9A2AF170B4D10A53D6BD82DA0D3A8B60A142A65B217D370789C05CD5C6AEC
              );
    OVRSceneManager_LocateUserInRoom_mB7080AB225EB7D0ECACF80CFB1336180265677D6::
    s_Il2CppMethodInitialized = 1;
  }
  local_38 = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_74 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_c2 = 0;
  local_c3 = 0;
  local_d0 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)0x0;
  local_d8 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)0x0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)Method_System_Nullable<long>__ctor__);
  local_e0 = OVRAnchor_get_Handle_m0AB024A709BAD2087D8F4C899ECDA9F6909B25CB_inline
                       (param_2,(MethodInfo *)0x0);
  local_38 = local_e0;
  local_100 = OVRAnchor_get_Uuid_mB4A38F13C1AA2C5F8DC98BFED64D55DE34F4059D_inline
                        (param_2,(MethodInfo *)0x0);
  local_108 = local_38;
  local_f0 = local_100;
  local_50 = local_100;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_10c = OVRPlugin_GetTrackingOriginType_m2EDAA913509E615DD626803932B8CE16955F961A(0);
  local_10d = OVRPlugin_TryLocateSpace_m845BF1CAA48C0AFCAA25673E1FAFD5A0D1CA8A41
                        (local_108,local_10c,&local_70,0);
  local_10d = local_10d & 1;
  if (local_10d != 0) {
    local_118 = local_38;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_119 = OVRPlugin_GetSpaceBoundary2DCount_m1610819A4B4F3393811F58CAF5CD75A237D130DF
                          (local_118,&local_74,0);
    local_119 = local_119 & 1;
    if (local_119 != 0) {
      local_120 = local_74;
      NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5
                ((NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 *)&local_88,local_74,2,1,
                 *(MethodInfo **)
                  Field_<PrivateImplementationDetails>_3CD085A87F325CB6566DE06EB72EBADFCEE4B199DE660E11CBE907EA8B224D85
                );
      local_138 = (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 *)&local_88;
      il2cpp::utils::
      Finally<OVRSceneManager_LocateUserInRoom_mB7080AB225EB7D0ECACF80CFB1336180265677D6::__4>
                ((utils *)&local_138,extraout_x1);
      local_140 = local_38;
      uStack_148 = uStack_80;
      local_150 = local_88;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      uStack_168 = uStack_148;
      local_170 = local_150;
      bVar3 = OVRPlugin_GetSpaceBoundary2D_mBE8E28758418E47157A81F561E41E28EB96D90AF
                        (local_140,local_150,uStack_148,0);
      local_15d = bVar3 & 1;
      pNVar2 = local_d8;
      if ((bVar3 & 1) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(local_1ac,2,0xffffffff,0);
        local_190 = local_1ac[0];
        uStack_17c = (undefined4)uStack_198;
        uStack_180 = uStack_19c;
        local_1b8 = CONCAT44(uStack_17c,uStack_19c);
        local_178 = (undefined4)((ulong)uStack_198 >> 0x20);
        local_1b0 = local_178;
        local_1d8 = local_178;
        local_1d4 = OVRExtensions_FromVector3f_m4B3B578358199C40F4345A055E0DDE60EDF508DC
                              (uStack_19c,0);
        local_1f0 = CONCAT44(uStack_17c,local_1d4);
        local_210 = local_70;
        uStack_1fc = CONCAT44(local_58,uStack_5c);
        uStack_200 = (undefined4)((ulong)_uStack_64 >> 0x20);
        local_220 = CONCAT44(uStack_5c,uStack_200);
        local_218 = local_58;
        local_240 = local_58;
        uVar5 = uStack_5c;
        uVar6 = local_58;
        local_1e8 = local_178;
        local_1cc = local_178;
        local_1c0 = local_178;
        local_90 = local_178;
        local_1c8 = local_1f0;
        local_98 = local_1f0;
        local_23c = OVRExtensions_FromVector3f_m4B3B578358199C40F4345A055E0DDE60EDF508DC
                              (uStack_200,0);
        local_230 = CONCAT44(uVar5,local_23c);
        uStack_26c = (undefined4)((ulong)local_1f0 >> 0x20);
        local_270 = (undefined4)local_1f0;
        local_268 = local_1e8;
        uVar7 = local_1e8;
        local_278 = uVar6;
        local_234 = uVar6;
        local_228 = uVar6;
        local_264 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                              (local_270,uStack_26c,local_1e8,local_23c,uVar5,uVar6,0);
        local_258 = CONCAT44(uStack_26c,local_264);
        uStack_298 = uStack_68;
        local_2a0 = local_70;
        uStack_28c = CONCAT44(local_58,uStack_5c);
        uStack_2a8 = CONCAT44(uStack_64,uStack_68);
        local_2b0 = local_70;
        uStack_2dc = (undefined4)((ulong)local_70 >> 0x20);
        local_2e0 = (undefined4)local_70;
        uVar5 = uStack_68;
        local_25c = uVar7;
        local_250 = uVar7;
        local_a0 = uVar7;
        local_a8 = local_258;
        local_2d0 = OVRExtensions_FromQuatf_m9D9957171C088A2715767B6FE9449E97CC764E23(local_2e0,0);
        uStack_2b8 = CONCAT44(uStack_64,uVar5);
        local_2c0 = CONCAT44(uStack_2dc,local_2d0);
        local_300 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(local_2d0,0);
        uStack_2e8 = CONCAT44(uStack_64,uVar5);
        local_2f0 = CONCAT44(uStack_2dc,local_300);
        local_320 = local_a8;
        local_318 = local_a0;
        uStack_35c = (undefined4)((ulong)local_a8 >> 0x20);
        local_360 = (undefined4)local_a8;
        local_358 = local_a0;
        local_33c = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C
                              (local_300,uStack_2dc,uVar5,uStack_64,local_360,uStack_35c,local_a0,0)
        ;
        local_380 = CONCAT44(uStack_2dc,local_33c);
        uStack_368 = uStack_80;
        local_370 = local_88;
        local_398 = uVar5;
        local_378 = uVar5;
        local_90 = uVar5;
        local_330 = local_380;
        local_98 = local_380;
        local_390 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                              (local_33c,uStack_2dc,uVar5,0);
        local_388 = CONCAT44(uStack_2dc,local_390);
        uStack_3b8 = uStack_368;
        local_3c0 = local_370;
        bVar3 = OVRSceneManager_PointInPolygon2D_m21429B1C4F7CDF331C6980A07D81DA7D72F7680D
                          (local_390,uStack_2dc,local_370,uStack_368,0);
        local_3a1 = bVar3 & 1;
        if ((bVar3 & 1) != 0) {
          local_3d0 = *(void **)(local_28 + 0xc0);
          local_3e0 = local_50;
          NullCheck(local_3d0);
          local_400 = local_3e0;
          bVar3 = Dictionary_2_TryGetValue_mDB59884D2BBF2537BFDFE01AA8E5CE3EF0C180BF
                            (local_3d0,local_3e0._0_8_,local_3e0._8_8_,&local_c0,
                             *(undefined8 *)
                              Field_<PrivateImplementationDetails>_0EBBFED81071BF15F38AA1387D6D74E5788591B4AA6E85C7B739CF903789D438
                            );
          local_3e1 = bVar3 & 1;
          if ((bVar3 & 1) != 0) {
            local_408 = *(void **)(local_28 + 200);
            uStack_418 = uStack_b8;
            local_420 = local_c0;
            local_410 = local_b0;
            NullCheck(local_408);
            uStack_438 = uStack_418;
            local_440 = local_420;
            local_430 = local_410;
            List_1_Add_m7F57FBD118D280903224A07B314ADD42BF7DFBC1_inline
                      (local_408,&local_440,
                       *(undefined8 *)
                        Field_<PrivateImplementationDetails>_C77A066B9EC0272B121AD30CBAEDA4AD20F986D49CC6D0007EBF45888D8B09BF
                      );
          }
        }
        uVar4 = Enumerable_Any_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_mE086E6EDE6CD45610D14693A3ADB2D0D30336D21
                          (*(Il2CppObject **)(local_28 + 200),
                           *(MethodInfo **)
                            Field_<PrivateImplementationDetails>_5BBE6FB653430A43512696B35BDA7366625E8852BC165C59F708B794B8B0F2E8
                          );
        if ((uVar4 & 1) == 0) {
          local_c2 = OVRSceneManager_get_Verbose_m7F89EAFB7FBB9989CFC1ACC5A6EF2789917B170E
                               (local_28,0);
          uVar4 = Nullable_1_get_HasValue_m708832CEE7BFE56B811529C190A1BAEB80E6EAA3_inline
                            ((Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_c2,
                             *(MethodInfo **)
                              Field_<PrivateImplementationDetails>_48FA2B2FD7A202D3952D07F8ED3C23196F51A91F4130D0C23DA616CFFF547D2C
                            );
          pNVar2 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_c2;
          if ((uVar4 & 1) != 0) {
            local_d0 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_c2;
            local_c3 = Nullable_1_GetValueOrDefault_m9A9401B9AE0B1623F091FB8B68F2620261999226_inline
                                 ((Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_c2,
                                  *(MethodInfo **)
                                   Field_<PrivateImplementationDetails>_E1DC3A1EA16CD5E9DBD0F81E8F7AE4BBB4DF3BCFEF388DE056B3EE11868EE846
                                 );
            LogForwarder_Log_mEA2227D3CC8532C4FE53B12DF1CE6F98ED09B867
                      (&local_c3,
                       *(undefined8 *)
                        Field_<PrivateImplementationDetails>_4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D
                       ,*(undefined8 *)
                         Field_<PrivateImplementationDetails>_63B9A2AF170B4D10A53D6BD82DA0D3A8B60A142A65B217D370789C05CD5C6AEC
                       ,0);
            pNVar2 = local_d8;
          }
        }
        else {
          uVar4 = Enumerable_Any_TisGuid_t_m2D401259B13C8F83D2F20264A345F9D10F9A76F6
                            (*(Il2CppObject **)(local_28 + 0xb8),
                             *(MethodInfo **)
                              Field_<PrivateImplementationDetails>_39D974909C7E64675317DD1A8583B8D8DE92E68B180532FADD22B482AD93DC83
                            );
          pNVar2 = local_d8;
          if ((uVar4 & 1) == 0) {
            OVRSceneManager_InstantiateSceneRooms_mC1A2A0B09EB3E81942DC44E6564FE4BB45F04C61
                      (local_28,*(undefined8 *)(local_28 + 200),0);
            pNVar2 = local_d8;
          }
        }
      }
      local_d8 = pNVar2;
      il2cpp::utils::
      FinallyHelper<OVRSceneManager_LocateUserInRoom_mB7080AB225EB7D0ECACF80CFB1336180265677D6::$_4,false>
      ::~FinallyHelper(aFStack_130);
    }
  }
  return;
}


