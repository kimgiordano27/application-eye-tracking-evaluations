/*
FUNCTION_NAME: OVRMixedRealityCaptureTest_Update_m01BDD9AB5922541C8070BDEDDD7EE4798A86A3E3
ENTRY_POINT: 02e48804
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_14;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRMixedRealityCaptureTest_Update_m01BDD9AB5922541C8070BDEDDD7EE4798A86A3E3
               (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 local_7a0;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined8 uStack_78c;
  byte local_781;
  undefined8 local_780;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined8 uStack_76c;
  undefined1 local_760 [31];
  byte local_741;
  undefined8 local_71c;
  undefined4 uStack_714;
  undefined8 local_700;
  undefined8 local_6e0;
  undefined8 uStack_6d4;
  undefined8 uStack_6cc;
  undefined8 local_6c0 [2];
  undefined8 uStack_6ac;
  undefined8 local_69c;
  undefined8 local_680;
  undefined8 local_660;
  undefined8 uStack_654;
  undefined8 uStack_64c;
  undefined8 local_63c;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 local_600 [2];
  undefined8 uStack_5ec;
  undefined8 local_5dc;
  undefined8 local_5c0;
  undefined8 local_59c;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_560;
  undefined8 uStack_554;
  undefined8 uStack_54c;
  undefined8 local_540 [2];
  undefined8 uStack_52c;
  undefined8 local_51c;
  undefined4 uStack_514;
  undefined4 uStack_50c;
  undefined8 uStack_508;
  undefined4 uStack_504;
  undefined8 local_500;
  undefined8 local_4e0;
  undefined8 uStack_4d4;
  undefined8 uStack_4cc;
  undefined8 local_4bc;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_47c;
  undefined4 uStack_474;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  undefined4 uStack_464;
  undefined8 local_460;
  undefined8 local_438;
  undefined8 local_42c;
  undefined8 local_410;
  undefined8 local_3f0;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_3e8;
  byte local_3d9;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_3d8;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_3d0;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  byte local_3a1;
  undefined8 local_3a0;
  undefined8 uStack_398;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  void *local_360;
  float local_354;
  float local_350;
  float local_34c;
  void *local_348;
  byte local_339;
  void *local_338;
  void *local_330;
  int local_328;
  byte local_321;
  undefined8 local_320;
  undefined8 uStack_314;
  undefined8 uStack_30c;
  byte local_301;
  undefined8 local_300;
  undefined4 uStack_2f8;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  byte local_2c1;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  float local_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  float local_284;
  undefined8 local_280;
  undefined8 uStack_278;
  float local_264;
  undefined8 local_260;
  undefined8 uStack_258;
  float local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  int local_214;
  undefined8 local_210;
  undefined8 uStack_204;
  undefined8 uStack_1fc;
  undefined8 local_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  byte local_1b1;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  int local_194;
  Il2CppObject *local_190;
  undefined4 local_188;
  undefined4 local_184;
  Il2CppArray *local_180;
  Il2CppArray *local_178;
  int local_16c;
  int local_168;
  byte local_163;
  byte local_162;
  byte local_161;
  undefined8 local_160;
  byte local_151;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined8 local_130 [4];
  undefined8 local_110 [4];
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b0 [4];
  float local_8c;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float local_6c;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *local_28;
  
  puVar5 = StringLiteral_708;
  puVar4 = 
  Field_<PrivateImplementationDetails>_85AA75D7B90CBA18B8326D7653A3B43E741161EB1AEB144AC1246CAD659B141B
  ;
  puVar3 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRMixedRealityCaptureTest_Update_m01BDD9AB5922541C8070BDEDDD7EE4798A86A3E3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_709);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Stack_StackEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_string>_TryGetValue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_710);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_711);
    OVRMixedRealityCaptureTest_Update_m01BDD9AB5922541C8070BDEDDD7EE4798A86A3E3::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  local_6c = 0.0;
  local_70 = 0.0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)0x0;
  local_8c = 0.0;
  local_b0[0] = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_110[0] = 0;
  local_130[0] = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_151 = (byte)local_28[0x20] & 1;
  if (local_151 == 0) {
    OVRMixedRealityCaptureTest_Initialize_m5C90ED6A66CC849FC7AFCEE83368849496A2B955(local_28,0);
  }
  else {
    local_160 = *(undefined8 *)(local_28 + 0x28);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_161 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_160,0);
    local_161 = local_161 & 1;
    if (local_161 != 0) {
      local_162 = Media_GetInitialized_m0786F11D130FC9598B90C01A542F76A002F4D048(0);
      local_162 = local_162 & 1;
      if (local_162 != 0) {
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                  );
        local_163 = OVRInput_GetDown_mEC4F71AEC93D3AF1A041934CA4C61680C6DB9AC7(1,0x80000000,0);
        local_163 = local_163 & 1;
        if (local_163 != 0) {
          local_168 = *(int *)(local_28 + 0x24);
          if (local_168 == 2) {
            *(undefined4 *)(local_28 + 0x24) = 0;
          }
          else {
            local_16c = *(int *)(local_28 + 0x24);
            uVar13 = il2cpp_codegen_add<int,int>(local_16c,1);
            *(undefined4 *)(local_28 + 0x24) = uVar13;
          }
          local_180 = (Il2CppArray *)
                      SZArrayNew(*(Il2CppClass **)
                                  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                                 ,1);
          local_188 = *(undefined4 *)(local_28 + 0x24);
          local_184 = local_188;
          local_178 = local_180;
          local_190 = (Il2CppObject *)Box(*(Il2CppClass **)StringLiteral_709,&local_188);
          NullCheck(local_180);
          ArrayElementTypeCheck(local_180,local_190);
          ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                    ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_180,0,local_190
                    );
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                    (*(undefined8 *)StringLiteral_711,local_180,0);
        }
        local_194 = *(int *)(local_28 + 0x24);
        if (local_194 == 0) {
          OVRMixedRealityCaptureTest_UpdateDefaultExternalCamera_mEDEDB186C3EB3FB837AAFCB3B4CE566EE8383980
                    (local_28);
          il2cpp_codegen_initobj(&local_40,0x10);
          uStack_1a8 = uStack_38;
          local_1b0 = local_40;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
          uStack_1c8 = uStack_1a8;
          uVar9 = uStack_1c8;
          local_1d0 = local_1b0;
          uVar6 = local_1d0;
          local_1d0._0_4_ = (undefined4)local_1b0;
          uVar13 = (undefined4)local_1d0;
          local_1d0._4_4_ = (undefined4)((ulong)local_1b0 >> 0x20);
          uVar7 = local_1d0._4_4_;
          uStack_1c8._0_4_ = (undefined4)uStack_1a8;
          uVar8 = (undefined4)uStack_1c8;
          uStack_1c8._4_4_ = (undefined4)((ulong)uStack_1a8 >> 0x20);
          uVar10 = uStack_1c8._4_4_;
          local_1d0 = uVar6;
          uStack_1c8 = uVar9;
          local_1b1 = OVRPlugin_OverrideExternalCameraFov_m8849D6E87FCBDFECBEC1E25E5099A631AE9824E4
                                (uVar13,uVar7,uVar8,uVar10,0,0,0);
          local_1b1 = local_1b1 & 1;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
          puVar12 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          local_210 = *puVar12;
          uStack_1e8 = (undefined4)puVar12[1];
          uStack_1fc = *(undefined8 *)((long)puVar12 + 0x14);
          uStack_204 = *(undefined8 *)((long)puVar12 + 0xc);
          uStack_1e4 = uStack_204;
          uStack_1dc = uStack_1fc;
          local_1f0 = local_210;
          OVRPlugin_OverrideExternalCameraStaticPose_mEA816D3079803A2375D520C5AFF748780CF6AC58
                    (0,0,&local_210,0);
        }
        else {
          local_214 = *(int *)(local_28 + 0x24);
          if (local_214 == 1) {
            uStack_228 = *(undefined8 *)(local_28 + 0x38);
            local_230 = *(undefined8 *)(local_28 + 0x30);
            local_50 = local_230;
            uStack_48 = uStack_228;
            il2cpp_codegen_initobj(&local_60,0x10);
            uStack_238 = uStack_48;
            uVar6 = uStack_238;
            local_240 = local_50;
            uStack_238._0_4_ = (float)uStack_48;
            fVar14 = (float)uStack_238;
            local_244 = (float)uStack_238;
            uStack_238 = uVar6;
            uVar13 = il2cpp_codegen_multiply<float,float>(fVar14,2.0);
            uStack_58 = CONCAT44(uStack_58._4_4_,uVar13);
            uStack_258 = uStack_48;
            uVar6 = uStack_258;
            local_260 = local_50;
            uStack_258._4_4_ = (float)((ulong)uStack_48 >> 0x20);
            fVar14 = uStack_258._4_4_;
            local_264 = uStack_258._4_4_;
            uStack_258 = uVar6;
            uVar13 = il2cpp_codegen_multiply<float,float>(fVar14,2.0);
            uStack_58 = CONCAT44(uVar13,(undefined4)uStack_58);
            uStack_278 = uStack_48;
            local_280 = local_50;
            uVar6 = local_280;
            local_280._0_4_ = (float)local_50;
            fVar14 = (float)local_280;
            local_284 = (float)local_280;
            local_280 = uVar6;
            uVar13 = il2cpp_codegen_multiply<float,float>(fVar14,2.0);
            local_60 = CONCAT44(local_60._4_4_,uVar13);
            uStack_298 = uStack_48;
            local_2a0 = local_50;
            uVar6 = local_2a0;
            local_2a0._4_4_ = (float)((ulong)local_50 >> 0x20);
            fVar14 = local_2a0._4_4_;
            local_2a4 = local_2a0._4_4_;
            local_2a0 = uVar6;
            uVar13 = il2cpp_codegen_multiply<float,float>(fVar14,2.0);
            local_60 = CONCAT44(uVar13,(undefined4)local_60);
            uStack_2b8 = uStack_58;
            local_2c0 = local_60;
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
            uStack_2d8 = uStack_2b8;
            uVar9 = uStack_2d8;
            local_2e0 = local_2c0;
            uVar6 = local_2e0;
            local_2e0._0_4_ = (undefined4)local_2c0;
            uVar13 = (undefined4)local_2e0;
            local_2e0._4_4_ = (undefined4)((ulong)local_2c0 >> 0x20);
            uVar7 = local_2e0._4_4_;
            uStack_2d8._0_4_ = (undefined4)uStack_2b8;
            uVar8 = (undefined4)uStack_2d8;
            uStack_2d8._4_4_ = (undefined4)((ulong)uStack_2b8 >> 0x20);
            uVar10 = uStack_2d8._4_4_;
            local_2e0 = uVar6;
            uStack_2d8 = uVar9;
            local_2c1 = OVRPlugin_OverrideExternalCameraFov_m8849D6E87FCBDFECBEC1E25E5099A631AE9824E4
                                  (uVar13,uVar7,uVar8,uVar10,0,1);
            local_2c1 = local_2c1 & 1;
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
            puVar12 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
            local_320 = *puVar12;
            uStack_2f8 = (undefined4)puVar12[1];
            uStack_30c = *(undefined8 *)((long)puVar12 + 0x14);
            uStack_314 = *(undefined8 *)((long)puVar12 + 0xc);
            uStack_2f4 = uStack_314;
            uStack_2ec = uStack_30c;
            local_300 = local_320;
            local_301 = OVRPlugin_OverrideExternalCameraStaticPose_mEA816D3079803A2375D520C5AFF748780CF6AC58
                                  (0,0,&local_320,0);
            local_301 = local_301 & 1;
            bVar11 = OVRPlugin_GetUseOverriddenExternalCameraFov_m8338AC617E952C1CFB6DCC1403CDBB38032747D9
                               (0,0);
            local_321 = bVar11 & 1;
            if ((bVar11 & 1) == 0) {
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
              Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(*(undefined8 *)puVar5,0);
            }
          }
          else {
            local_328 = *(int *)(local_28 + 0x24);
            if (local_328 == 2) {
              local_338 = (void *)Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4
                                            (local_28,*(MethodInfo **)
                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary<int,_string>_TryGetValue__
                                            );
              local_330 = local_338;
              local_68 = local_338;
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
              local_339 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_338,0);
              local_339 = local_339 & 1;
              if (local_339 == 0) {
                local_348 = local_68;
                NullCheck(local_68);
                local_34c = (float)Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB
                                             (local_348);
                local_350 = (float)il2cpp_codegen_multiply<float,float>(local_34c,0.017453292);
                local_6c = local_350;
                fVar14 = (float)il2cpp_codegen_multiply<float,float>(local_350,0.5);
                local_354 = tanf(fVar14);
                local_360 = local_68;
                NullCheck(local_68);
                local_364 = (float)Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D
                                             (local_360,0);
                fVar14 = (float)il2cpp_codegen_multiply<float,float>(local_354,local_364);
                local_368 = atanf(fVar14);
                local_70 = (float)il2cpp_codegen_multiply<float,float>(local_368,2.0);
                il2cpp_codegen_initobj(&local_80,0x10);
                local_36c = local_6c;
                fVar14 = (float)il2cpp_codegen_multiply<float,float>(local_6c,0.5);
                local_378 = tanf(fVar14);
                local_80 = CONCAT44(local_378,local_378);
                local_37c = local_70;
                local_374 = local_378;
                local_370 = local_378;
                local_8c = local_378;
                fVar14 = (float)il2cpp_codegen_multiply<float,float>(local_70,0.5);
                local_388 = tanf(fVar14);
                uStack_78 = CONCAT44(local_388,local_388);
                uStack_398 = uStack_78;
                local_3a0 = local_80;
                local_384 = local_388;
                local_380 = local_388;
                local_8c = local_388;
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
                uStack_3b8 = uStack_398;
                uVar9 = uStack_3b8;
                local_3c0 = local_3a0;
                uVar6 = local_3c0;
                local_3c0._0_4_ = (undefined4)local_3a0;
                uVar13 = (undefined4)local_3c0;
                local_3c0._4_4_ = (undefined4)((ulong)local_3a0 >> 0x20);
                uVar7 = local_3c0._4_4_;
                uStack_3b8._0_4_ = (undefined4)uStack_398;
                uVar8 = (undefined4)uStack_3b8;
                uStack_3b8._4_4_ = (undefined4)((ulong)uStack_398 >> 0x20);
                uVar10 = uStack_3b8._4_4_;
                local_3c0 = uVar6;
                uStack_3b8 = uVar9;
                local_3a1 = OVRPlugin_OverrideExternalCameraFov_m8849D6E87FCBDFECBEC1E25E5099A631AE9824E4
                                      (uVar13,uVar7,uVar8,uVar10,0,1,0);
                local_3a1 = local_3a1 & 1;
                local_3c8 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
                            Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(0);
                NullCheck(local_3c8);
                local_3d8 = (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                            Component_GetComponentInParent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m132CAE22DC4B18ACA26D293EE1D3799068ADAA5D
                                      (local_3c8,
                                       *(MethodInfo **)
                                        Method_System_Collections_Stack_StackEnumerator_Reset__);
                local_3d0 = local_3d8;
                local_88 = local_3d8;
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
                bVar11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_3d8,0);
                local_3d9 = bVar11 & 1;
                if ((bVar11 & 1) == 0) {
                  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
                  puVar12 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
                  local_780 = *puVar12;
                  uStack_778 = (undefined4)puVar12[1];
                  uStack_76c = *(undefined8 *)((long)puVar12 + 0x14);
                  uStack_774 = (undefined4)*(undefined8 *)((long)puVar12 + 0xc);
                  uStack_770 = (undefined4)((ulong)*(undefined8 *)((long)puVar12 + 0xc) >> 0x20);
                  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
                  uStack_798 = uStack_778;
                  local_7a0 = local_780;
                  uStack_78c = uStack_76c;
                  uStack_794 = uStack_774;
                  uStack_790 = uStack_770;
                  local_781 = OVRPlugin_OverrideExternalCameraStaticPose_mEA816D3079803A2375D520C5AFF748780CF6AC58
                                        (0,0,&local_7a0,0);
                  local_781 = local_781 & 1;
                }
                else {
                  local_3e8 = local_88;
                  NullCheck(local_88);
                  local_3f0 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                        (local_3e8,(MethodInfo *)0x0);
                  OVRExtensions_ToOVRPose_m52593B4249478412DFA025AD6DE338B96CFBC265(local_3f0,0,0);
                  local_410 = local_42c;
                  local_b0[0] = local_42c;
                  local_438 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                        (local_28,0);
                  OVRExtensions_ToOVRPose_m52593B4249478412DFA025AD6DE338B96CFBC265(local_438,0,0);
                  local_460 = local_47c;
                  uStack_c8 = uStack_474;
                  local_d0 = local_47c;
                  uStack_b8 = uStack_464;
                  uStack_c0 = uStack_46c;
                  OVRPose_Inverse_m13457B6B61C9A6D088EBB4F9BCDB1D8137CB21C7(local_b0,0);
                  local_4a0 = local_4bc;
                  local_4e0 = local_d0;
                  uStack_54c = 0;
                  uStack_554 = 0;
                  local_540[0] = local_4bc;
                  uStack_52c = uStack_4a8;
                  local_560 = local_d0;
                  uStack_4d4 = uStack_554;
                  uStack_4cc = uStack_54c;
                  OVRPose_op_Multiply_mCAC208D92589C2CA928CB093B3C504DFA9866AFE
                            (local_540,&local_560,0);
                  local_500 = local_51c;
                  uStack_e8 = uStack_514;
                  local_f0 = local_51c;
                  uStack_d8 = uStack_504;
                  uStack_e0 = uStack_50c;
                  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
                  OVRPlugin_GetTrackingTransformRelativePose_m594736E2B1E616394C8BEBE60A2ACB5FEE4F3005
                            (2,0);
                  local_580 = local_59c;
                  local_600[0] = local_59c;
                  uStack_5ec = uStack_588;
                  OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_600,0);
                  local_5c0 = local_5dc;
                  local_110[0] = local_5dc;
                  OVRPose_Inverse_m13457B6B61C9A6D088EBB4F9BCDB1D8137CB21C7(local_110,0);
                  local_620 = local_63c;
                  local_660 = local_f0;
                  uStack_6cc = 0;
                  uStack_6d4 = 0;
                  local_6c0[0] = local_63c;
                  uStack_6ac = uStack_628;
                  local_6e0 = local_f0;
                  uStack_654 = uStack_6d4;
                  uStack_64c = uStack_6cc;
                  OVRPose_op_Multiply_mCAC208D92589C2CA928CB093B3C504DFA9866AFE
                            (local_6c0,&local_6e0,0);
                  local_680 = local_69c;
                  local_130[0] = local_69c;
                  OVRPose_ToPosef_m07DD283CB7D729999F7223E8879214C080066192(local_130,0);
                  local_700 = local_71c;
                  uStack_148 = uStack_714;
                  local_150 = local_71c;
                  local_741 = OVRPlugin_OverrideExternalCameraStaticPose_mEA816D3079803A2375D520C5AFF748780CF6AC58
                                        (0,1,local_760,0);
                  local_741 = local_741 & 1;
                }
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
                bVar11 = OVRPlugin_GetUseOverriddenExternalCameraFov_m8338AC617E952C1CFB6DCC1403CDBB38032747D9
                                   (0,0);
                if ((bVar11 & 1) == 0) {
                  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
                  Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                            (*(undefined8 *)puVar5,0);
                }
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
                bVar11 = OVRPlugin_GetUseOverriddenExternalCameraStaticPose_m6F48A2E135F43889623814D7F1150DC71DCD8EB5
                                   (0,0);
                if ((bVar11 & 1) == 0) {
                  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
                  Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                            (*(undefined8 *)StringLiteral_710,0);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


