/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 02ce101c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Meta_Conduit_Manifest_<>c_<ResolveAllActions>b__29_1__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Meta_Conduit_Manifest_<>c_<ResolveErrorHandlers>b__30_0__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Meta_Conduit_Manifest_<>c_<ResolveErrorHandlers>b__30_1__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_MaquinaDemo_<PonerPantallaComprar>d__15_System_Collections_IEnumerator_Reset__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Newtonsoft_Json_JsonTextReader_<ReadFromFinishedAsync>d__5_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Runtime_InteropServices_Marshal_<>c_<GetCustomMarshalerInstance>b__201_0__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_1__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_Newtonsoft_Json_JsonValidatingReader_SchemaScope_GetRequiredProperties__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Text_RegularExpressions_MatchCollection_Enumerator_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_1__);
  PlatformInternal_ParseMessageHandle_m5F7FF1235E90049C795C4B11965FD7383DBFB844::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined4 *)(unaff_x29 + -0x24) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -0xc);
  *(undefined4 *)(unaff_x29 + -0x24) = *(undefined4 *)(unaff_x29 + -0x28);
  *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x29 + -0x24);
  if (*(uint *)(unaff_x29 + -0x2c) < 0x4e83f2de) {
    *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(uint *)(unaff_x29 + -0x30) < 0x267db4f5) {
      *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(unaff_x29 + -0x24);
      if (*(uint *)(unaff_x29 + -0x34) < 0x1569feb6) {
        *(undefined4 *)(unaff_x29 + -0x38) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(uint *)(unaff_x29 + -0x38) < 0x102fa3df) {
          *(undefined4 *)(unaff_x29 + -0x3c) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0x3c) == 0x3e0d149) goto FUN_02ce1c04;
          *(undefined4 *)(unaff_x29 + -0x40) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0x40) == 0xb6d8d76) {
            uVar2 = *(undefined8 *)(unaff_x29 + -8);
            uVar1 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass_<>c_<Render>b__33_0__
                              );
            MessageWithLivestreamingApplicationStatus__ctor_m5FBC41731F1413EC7E9AE03371211E227E54A143
                      (uVar1,uVar2,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
            goto LAB_02ce1fb8;
          }
          *(undefined4 *)(unaff_x29 + -0x44) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0x44) != 0x102fa3de) goto LAB_02ce1fb8;
        }
        else {
          *(undefined4 *)(unaff_x29 + -0x48) = *(undefined4 *)(unaff_x29 + -0x24);
          if (0x11741f03 < *(uint *)(unaff_x29 + -0x48)) {
            *(undefined4 *)(unaff_x29 + -0x54) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -0x54) == 0x121c317c) {
              uVar2 = *(undefined8 *)(unaff_x29 + -8);
              uVar1 = il2cpp_codegen_object_new
                                (*(Il2CppClass **)
                                  Method_Newtonsoft_Json_JsonValidatingReader_SchemaScope_GetRequiredProperties__
                                );
              MessageWithUserCapabilityList__ctor_m68B5BF01D0327AC3E13FEEA1EC8FA5D9592E26F8
                        (uVar1,uVar2,0);
              *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
              goto LAB_02ce1fb8;
            }
            *(undefined4 *)(unaff_x29 + -0x58) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -0x58) != 0x1569feb5) goto LAB_02ce1fb8;
            goto LAB_02ce1d8c;
          }
          *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0x4c) == 0x112aca17) goto LAB_02ce1e34;
          *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0x50) != 0x11741f03) goto LAB_02ce1fb8;
        }
        goto FUN_02ce1f14;
      }
      *(undefined4 *)(unaff_x29 + -0x5c) = *(undefined4 *)(unaff_x29 + -0x24);
      if (*(uint *)(unaff_x29 + -0x5c) < 0x19c2b32c) {
        *(undefined4 *)(unaff_x29 + -0x60) = *(undefined4 *)(unaff_x29 + -0x24);
        if ((*(int *)(unaff_x29 + -0x60) != 0x185251ce) &&
           (*(undefined4 *)(unaff_x29 + -100) = *(undefined4 *)(unaff_x29 + -0x24),
           *(int *)(unaff_x29 + -100) != 0x186dc4dd)) {
          *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0x68) != 0x19c2b32b) goto LAB_02ce1fb8;
          goto LAB_02ce1f84;
        }
      }
      else {
        *(undefined4 *)(unaff_x29 + -0x6c) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(uint *)(unaff_x29 + -0x6c) < 0x1c577d88) {
          *(undefined4 *)(unaff_x29 + -0x70) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0x70) == 0x1ad31b4f) goto LAB_02ce1edc;
          *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0x74) != 0x1c577d87) goto LAB_02ce1fb8;
        }
        else {
          *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0x78) == 0x1ed726c7) goto FUN_02ce1f14;
          *(undefined4 *)(unaff_x29 + -0x7c) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0x7c) != 0x267db4f4) goto LAB_02ce1fb8;
        }
      }
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -0x24);
      if (*(uint *)(unaff_x29 + -0x80) < 0x34557eb3) {
        *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(uint *)(unaff_x29 + -0x84) < 0x30ff006f) {
          *(undefined4 *)(unaff_x29 + -0x88) = *(undefined4 *)(unaff_x29 + -0x24);
          if ((*(int *)(unaff_x29 + -0x88) != 0x27670f58) &&
             (*(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -0x24),
             *(int *)(unaff_x29 + -0x8c) != 0x2dafcdd5)) {
            *(undefined4 *)(unaff_x29 + -0x90) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -0x90) != 0x30ff006e) goto LAB_02ce1fb8;
            goto FUN_02ce1f14;
          }
        }
        else {
          *(undefined4 *)(unaff_x29 + -0x94) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(uint *)(unaff_x29 + -0x94) < 0x329206d2) {
            *(undefined4 *)(unaff_x29 + -0x98) = *(undefined4 *)(unaff_x29 + -0x24);
            if ((*(int *)(unaff_x29 + -0x98) != 0x3215666d) &&
               (*(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x29 + -0x24),
               *(int *)(unaff_x29 + -0x9c) != 0x329206d1)) goto LAB_02ce1fb8;
          }
          else {
            *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -0xa0) != 0x3302f770) {
              *(undefined4 *)(unaff_x29 + -0xa4) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xa4) != 0x34557eb2) goto LAB_02ce1fb8;
              goto FUN_02ce1f14;
            }
          }
        }
      }
      else {
        *(undefined4 *)(unaff_x29 + -0xa8) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(uint *)(unaff_x29 + -0xa8) < 0x3e9b1f62) {
          *(undefined4 *)(unaff_x29 + -0xac) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(uint *)(unaff_x29 + -0xac) < 0x35b5c4e4) {
            *(undefined4 *)(unaff_x29 + -0xb0) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -0xb0) != 0x3497d7f6) {
              *(undefined4 *)(unaff_x29 + -0xb4) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xb4) != 0x35b5c4e3) goto LAB_02ce1fb8;
              goto LAB_02ce1edc;
            }
          }
          else {
            *(undefined4 *)(unaff_x29 + -0xb8) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -0xb8) == 0x36e84f8c) goto FUN_02ce1f14;
            *(undefined4 *)(unaff_x29 + -0xbc) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -0xbc) != 0x3e9b1f61) goto LAB_02ce1fb8;
          }
        }
        else {
          *(undefined4 *)(unaff_x29 + -0xc0) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(uint *)(unaff_x29 + -0xc0) < 0x4cb13a6f) {
            *(undefined4 *)(unaff_x29 + -0xc4) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -0xc4) == 0x44e40dca) {
              uVar2 = *(undefined8 *)(unaff_x29 + -8);
              uVar1 = il2cpp_codegen_object_new
                                (*(Il2CppClass **)
                                  Method_Meta_Conduit_Manifest_<>c_<ResolveAllActions>b__29_0__);
              MessageWithLivestreamingVideoStats__ctor_mF036640B14D18BF0AE1DB323EC5E9030382760AD
                        (uVar1,uVar2,0);
              *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
              goto LAB_02ce1fb8;
            }
            *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -200) != 0x4cb13a6e) goto LAB_02ce1fb8;
LAB_02ce1c74:
            uVar2 = *(undefined8 *)(unaff_x29 + -8);
            uVar1 = il2cpp_codegen_object_new(*(Il2CppClass **)Method_Loom_<>c_<Update>b__21_0__);
            MessageWithLaunchReportFlowResult__ctor_mCB37C1FD980FFFBAE79167CC2EFE38B96FACD138
                      (uVar1,uVar2,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
            goto LAB_02ce1fb8;
          }
          *(undefined4 *)(unaff_x29 + -0xcc) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0xcc) == 0x4e81dc59) goto FUN_02ce1f14;
          *(undefined4 *)(unaff_x29 + -0xd0) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0xd0) != 0x4e83f2dd) goto LAB_02ce1fb8;
        }
      }
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0xd4) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(uint *)(unaff_x29 + -0xd4) < 0x63dffc8f) {
      *(undefined4 *)(unaff_x29 + -0xd8) = *(undefined4 *)(unaff_x29 + -0x24);
      if (*(uint *)(unaff_x29 + -0xd8) < 0x5793f457) {
        *(undefined4 *)(unaff_x29 + -0xdc) = *(undefined4 *)(unaff_x29 + -0x24);
        if (0x520f744c < *(uint *)(unaff_x29 + -0xdc)) {
          *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0x24);
          if (0x5662a011 < *(uint *)(unaff_x29 + -0xec)) {
            *(undefined4 *)(unaff_x29 + -0xf8) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -0xf8) != 0x577ba8a0) {
              *(undefined4 *)(unaff_x29 + -0xfc) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xfc) == 0x5793f456) {
                uVar2 = *(undefined8 *)(unaff_x29 + -8);
                uVar1 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_Mono_Globalization_Unicode_MSCompatUnicodeTable_<>c_<BuildTailoringTables>b__17_0__
                                  );
                MessageWithLinkedAccountList__ctor_m3B1481FDA83E936C455EEF5839224EEEB17FED29
                          (uVar1,uVar2,0);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
              }
              goto LAB_02ce1fb8;
            }
LAB_02ce1e34:
            uVar2 = *(undefined8 *)(unaff_x29 + -8);
            uVar1 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_Meta_Conduit_Manifest_<>c_<ResolveErrorHandlers>b__30_1__);
            MessageWithNetSyncVoipAttenuationValueList__ctor_m1BA68B4E915A9310F966A1A24AAFA811EFF00236
                      (uVar1,uVar2,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
            goto LAB_02ce1fb8;
          }
          *(undefined4 *)(unaff_x29 + -0xf0) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0xf0) == 0x5585ff0a) goto LAB_02ce1dfc;
          *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0xf4) != 0x5662a011) goto LAB_02ce1fb8;
LAB_02ce1f84:
          uVar2 = *(undefined8 *)(unaff_x29 + -8);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_System_Text_RegularExpressions_MatchCollection_Enumerator_get_Current__
                            );
          MessageWithUserReportID__ctor_mBFCD6C3AA86D1E2B050219068AA80B039DABA5D7(uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02ce1fb8;
        }
        *(undefined4 *)(unaff_x29 + -0xe0) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0xe0) != 0x4f32e10d) {
          *(undefined4 *)(unaff_x29 + -0xe4) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(int *)(unaff_x29 + -0xe4) != 0x501ac7be) {
            *(undefined4 *)(unaff_x29 + -0xe8) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(int *)(unaff_x29 + -0xe8) == 0x520f744c) {
              uVar2 = *(undefined8 *)(unaff_x29 + -8);
              uVar1 = il2cpp_codegen_object_new
                                (*(Il2CppClass **)
                                  Method_Oculus_Interaction_Locomotion_LocomotionTurnerInteractor_<>c_<_ctor>b__40_0__
                                );
              MessageWithInstalledApplicationList__ctor_m181B22E58222916B75F1758811AEBEE20CFCCDA1
                        (uVar1,uVar2,0);
              *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
            }
            goto LAB_02ce1fb8;
          }
LAB_02ce1d1c:
          uVar2 = *(undefined8 *)(unaff_x29 + -8);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass_<>c_<Render>b__33_1__
                            );
          MessageWithLivestreamingStartResult__ctor_m347C50095B1CBF4977DF5D7FF46C708918152B97
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02ce1fb8;
        }
      }
      else {
        *(undefined4 *)(unaff_x29 + -0x100) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(uint *)(unaff_x29 + -0x100) < 0x5c95a4f4) {
          if (*(uint *)(unaff_x29 + -0x24) < 0x5842d211) {
            if (*(int *)(unaff_x29 + -0x24) != 0x58129c8e) {
              if (*(int *)(unaff_x29 + -0x24) != 0x5842d210) goto LAB_02ce1fb8;
              goto FUN_02ce1f14;
            }
          }
          else {
            if (*(int *)(unaff_x29 + -0x24) == 0x58cbff2a) {
              uVar2 = *(undefined8 *)(unaff_x29 + -8);
              uVar1 = il2cpp_codegen_object_new
                                (*(Il2CppClass **)
                                  Method_Newtonsoft_Json_JsonTextReader_<ReadFromFinishedAsync>d__5_MoveNext__
                                );
              MessageWithPartyUnderCurrentParty__ctor_mC826C6CD125895FEDF1B33F9F9D691445BA62936
                        (uVar1,uVar2,0);
              *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
              goto LAB_02ce1fb8;
            }
            if (*(int *)(unaff_x29 + -0x24) != 0x5c95a4f3) goto LAB_02ce1fb8;
          }
        }
        else if (*(uint *)(unaff_x29 + -0x24) < 0x5ed0ea33) {
          if (*(int *)(unaff_x29 + -0x24) == 0x5e8953bd) {
            uVar2 = *(undefined8 *)(unaff_x29 + -8);
            uVar1 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_System_Runtime_InteropServices_Marshal_<>c_<GetCustomMarshalerInstance>b__201_0__
                              );
            MessageWithParty__ctor_m8FF6307C633D0284FA8746B921017C42CEB060DB(uVar1,uVar2,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
            goto LAB_02ce1fb8;
          }
          if (*(int *)(unaff_x29 + -0x24) != 0x5ed0ea32) goto LAB_02ce1fb8;
        }
        else {
          if (*(int *)(unaff_x29 + -0x24) == 0x60788c8b) goto LAB_02ce1f84;
          if (*(int *)(unaff_x29 + -0x24) != 0x63dffc8e) goto LAB_02ce1fb8;
        }
      }
    }
    else {
      if (0x6c6e33e3 < *(uint *)(unaff_x29 + -0x24)) {
        if (*(uint *)(unaff_x29 + -0x24) < 0x7287c184) {
          if (0x6fb63223 < *(uint *)(unaff_x29 + -0x24)) {
            if (*(int *)(unaff_x29 + -0x24) != 0x71010917) {
              if (*(int *)(unaff_x29 + -0x24) != 0x7287c183) goto LAB_02ce1fb8;
              goto LAB_02ce1edc;
            }
            goto FUN_02ce1c04;
          }
          if (*(int *)(unaff_x29 + -0x24) == 0x6ed60a35) {
            uVar2 = *(undefined8 *)(unaff_x29 + -8);
            uVar1 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_Meta_Conduit_Manifest_<>c_<ResolveAllActions>b__29_1__);
            MessageWithNetSyncSessionList__ctor_m689E8689B14269A4859C6227AD608162E56C05BF
                      (uVar1,uVar2,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
            goto LAB_02ce1fb8;
          }
          if (*(int *)(unaff_x29 + -0x24) != 0x6fb63223) goto LAB_02ce1fb8;
        }
        else if (*(uint *)(unaff_x29 + -0x24) < 0x7b2f5cdd) {
          if (*(int *)(unaff_x29 + -0x24) != 0x76a5a7c4) {
            if (*(int *)(unaff_x29 + -0x24) != 0x7b2f5cdc) goto LAB_02ce1fb8;
            goto LAB_02ce1d1c;
          }
        }
        else if (*(int *)(unaff_x29 + -0x24) != 0x7bcfd98e) {
          if (*(int *)(unaff_x29 + -0x24) != 0x7f835863) goto LAB_02ce1fb8;
          goto LAB_02ce1c74;
        }
FUN_02ce1f14:
        uVar2 = *(undefined8 *)(unaff_x29 + -8);
        uVar1 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_1__);
        MessageWithString__ctor_m253AF9EDFA30F66B98C55658129BCD8D6AFCFC50(uVar1,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
        goto LAB_02ce1fb8;
      }
      if (*(uint *)(unaff_x29 + -0x24) < 0x67e19d38) {
        if (*(int *)(unaff_x29 + -0x24) == 0x646d855f) {
LAB_02ce1d8c:
          uVar2 = *(undefined8 *)(unaff_x29 + -8);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_JsonTextReader_<ParseUnquotedPropertyAsync>d__33_MoveNext__
                            );
          MessageWithNetSyncConnection__ctor_mB80EE97D0AD3D32FD288FB8ECD2F0E2152FC51CC
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02ce1fb8;
        }
        if (*(int *)(unaff_x29 + -0x24) != 0x6570b2bd) {
          if (*(int *)(unaff_x29 + -0x24) != 0x67e19d37) goto LAB_02ce1fb8;
LAB_02ce1dfc:
          uVar2 = *(undefined8 *)(unaff_x29 + -8);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Meta_Conduit_Manifest_<>c_<ResolveErrorHandlers>b__30_0__);
          MessageWithNetSyncSetSessionPropertyResult__ctor_mD14295E65EDD06A16A1368216C024912ADCF5719
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02ce1fb8;
        }
      }
      else {
        if (0x6a94ad8e < *(uint *)(unaff_x29 + -0x24)) {
          if (*(int *)(unaff_x29 + -0x24) != 0x6b36a54f) {
            if (*(int *)(unaff_x29 + -0x24) == 0x6c6e33e3) {
              uVar2 = *(undefined8 *)(unaff_x29 + -8);
              uVar1 = il2cpp_codegen_object_new
                                (*(Il2CppClass **)
                                  Method_Oculus_Interaction_Locomotion_LocomotionGate_<>c_<_ctor>b__65_0__
                                );
              MessageWithAbuseReportRecording__ctor_m71488D6DF8300058D302B5A9597F8B7E3C3AA29E
                        (uVar1,uVar2,0);
              *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
            }
            goto LAB_02ce1fb8;
          }
          goto FUN_02ce1f14;
        }
        if (*(int *)(unaff_x29 + -0x24) == 0x68027c73) {
LAB_02ce1edc:
          uVar2 = *(undefined8 *)(unaff_x29 + -8);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_MaquinaDemo_<PonerPantallaComprar>d__15_System_Collections_IEnumerator_Reset__
                            );
          MessageWithPartyID__ctor_mDD167EE35D5D78B5DF4FF4D2A2FC87A6E869AA5B(uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02ce1fb8;
        }
        if (*(int *)(unaff_x29 + -0x24) != 0x6a94ad8e) goto LAB_02ce1fb8;
      }
    }
  }
FUN_02ce1c04:
  uVar2 = *(undefined8 *)(unaff_x29 + -8);
  uVar1 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_1__);
  Message__ctor_m47141728F28DC527D3A2E609BAF53C97A7D63EB9(uVar1,uVar2,0);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
LAB_02ce1fb8:
  return *(undefined8 *)(unaff_x29 + -0x20);
}


