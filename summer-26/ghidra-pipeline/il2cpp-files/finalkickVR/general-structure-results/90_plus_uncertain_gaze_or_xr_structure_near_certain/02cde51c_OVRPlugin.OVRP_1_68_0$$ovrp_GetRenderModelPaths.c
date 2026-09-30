/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_GetRenderModelPaths
ENTRY_POINT: 02cde51c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_68_0__ovrp_GetRenderModelPaths(void)

{
  undefined8 uVar1;
  uint in_w8;
  undefined8 uVar2;
  uint in_w9;
  long unaff_x29;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  
  if (in_w9 < in_w8) {
    if (*(uint *)(unaff_x29 + -0x24) < 0x744ce346) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x6ee4f33d) {
        if (*(uint *)(unaff_x29 + -0x24) < 0x6da7ba90) {
          if (*(int *)(unaff_x29 + -0x24) == 0x6d5d7886) {
            uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar1 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeClass>b__16_1__);
            MessageWithAssetFileDeleteResult__ctor_mD1DF1F17A175EFEF235BABD9018D8E8A6A6AE833
                      (uVar1,uVar2,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
            goto LAB_02cdf8b4;
          }
          if (*(int *)(unaff_x29 + -0x24) == 0x6da7ba8f) {
            in_stack_00000060 = *(undefined8 *)(unaff_x29 + -0x10);
            in_stack_00000058 =
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_Newtonsoft_Json_JsonTextReader_<ReadStringIntoBufferAsync>d__9_MoveNext__
                           );
            MessageWithPlatformInitialize__ctor_mFB1CC0B496E0E72A5B306AA5D28034327698862E
                      (in_stack_00000058,in_stack_00000060,0);
            *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000058;
            goto LAB_02cdf8b4;
          }
        }
        else {
          if (*(int *)(unaff_x29 + -0x24) == 0x6daa9cc3) {
LAB_02cdf000:
            uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar1 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_1__);
            Message__ctor_m47141728F28DC527D3A2E609BAF53C97A7D63EB9(uVar1,uVar2,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
            goto LAB_02cdf8b4;
          }
          if (*(int *)(unaff_x29 + -0x24) == 0x6ee4f33c) {
            in_stack_00000100 = *(undefined8 *)(unaff_x29 + -0x10);
            in_stack_000000f8 =
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_1__);
            MessageWithString__ctor_m253AF9EDFA30F66B98C55658129BCD8D6AFCFC50
                      (in_stack_000000f8,in_stack_00000100,0);
            *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000f8;
            goto LAB_02cdf8b4;
          }
        }
      }
      else if (*(uint *)(unaff_x29 + -0x24) < 0x717259e4) {
        if (*(int *)(unaff_x29 + -0x24) == 0x6fd62528) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_<set_ReferenceResolver>b__0__
                            );
          MessageWithLaunchBlockFlowResult__ctor_m865455E6BFFCABDB103AD74C31D5482E8D25800E
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
        if (*(int *)(unaff_x29 + -0x24) == 0x717259e3) goto LAB_02cdf000;
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x72c692fa) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_JsonTextReader_<MatchAndSetAsync>d__21_MoveNext__
                            );
          MessageWithLeaderboardDidUpdate__ctor_m01307625359BA0D58C9CDD2CA49D458403414538
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
        if (*(int *)(unaff_x29 + -0x24) == 0x744ce345) {
          in_stack_000001e0 = *(undefined8 *)(unaff_x29 + -0x10);
          in_stack_000001d8 =
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_Newtonsoft_Json_JsonTextReader_<ParsePropertyAsync>d__31_MoveNext__
                         );
          MessageWithMicrophoneAvailabilityState__ctor_mC5D55418A750416CE218DBEA2B7733A927A27ABB
                    (in_stack_000001d8,in_stack_000001e0,0);
          *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000001d8;
          goto LAB_02cdf8b4;
        }
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x7c2060df) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x77584ef4) {
        if (*(int *)(unaff_x29 + -0x24) == 0x773889f6) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<CreateObjectUsingCreatorWithParameters>b__38_2__
                            );
          MessageWithGroupPresenceJoinIntent__ctor_m4D876A9C8C4E31D3172E1F5B4074857362ECD777
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
        if (*(int *)(unaff_x29 + -0x24) == 0x77584ef3) goto LAB_02cdeeb0;
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x78c90470) {
LAB_02cdef20:
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_0__);
          MessageWithChallengeEntryList__ctor_mC6345CAC3FA8893420D34DC769115768BF4000BD
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
        if (*(int *)(unaff_x29 + -0x24) == 0x7c2060de) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Oculus_Interaction_PoseDetection_JointRotationActiveState_<>c_<Awake>b__32_0__
                            );
          MessageWithAppDownloadResult__ctor_m9E91D2860A2BDE5C9759D8D1EEC3CC90EFBBB4B8
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x7d201557) {
      if ((*(int *)(unaff_x29 + -0x24) == 0x7c2afdcb) || (*(int *)(unaff_x29 + -0x24) == 0x7d201556)
         ) {
        uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar1 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0_<GenerateInternal>b__0__
                          );
        MessageWithBlockedUserList__ctor_m19D5D3671BF8E61EA5F8659FE62D2466085B3E22(uVar1,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
        goto LAB_02cdf8b4;
      }
    }
    else {
      if (*(int *)(unaff_x29 + -0x24) == 0x7dd46e2f) {
        in_stack_00000070 = *(undefined8 *)(unaff_x29 + -0x10);
        in_stack_00000068 =
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<PopulateObject>b__42_1__
                       );
        MessageWithHttpTransferUpdate__ctor_m50D0F032B3909EA4B8B9DAC90C778FD6D0F766FF
                  (in_stack_00000068,in_stack_00000070,0);
        *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000068;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x7e9acaf5) {
        in_stack_00000170 = *(undefined8 *)(unaff_x29 + -0x10);
        in_stack_00000168 =
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Newtonsoft_Json_JsonTextReader_<ReadStringValueAsync>d__37_MoveNext__
                       );
        MessageWithProductList__ctor_mAB84EA1FD34EE164D80E3715D19987E90CF5B0EE
                  (in_stack_00000168,in_stack_00000170,0);
        *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000168;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x7f4ca0c6) goto LAB_02cdef20;
    }
  }
  else if (*(uint *)(unaff_x29 + -0x24) < 0x63599e2c) {
    if (*(uint *)(unaff_x29 + -0x24) < 0x5d955d39) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x5b7ca1b7) {
        if (*(int *)(unaff_x29 + -0x24) == 0x5b4fbbe0) goto LAB_02cdedd0;
        if (*(int *)(unaff_x29 + -0x24) == 0x5b7ca1b6) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__);
          MessageWithChallengeList__ctor_m52B35FC654DBB6AA2193AED50814C4F323A4F77D(uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x5c896f3e) {
          in_stack_000000a0 = *(undefined8 *)(unaff_x29 + -0x10);
          in_stack_00000098 =
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_Newtonsoft_Json_JsonWriter_<WriteConstructorDateAsync>d__32_MoveNext__
                         );
          MessageWithUserDataStoreUpdateResponse__ctor_m5B0C948C140D76149C4117093B05452505859694
                    (in_stack_00000098,in_stack_000000a0,0);
          *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000098;
          goto LAB_02cdf8b4;
        }
        if (*(int *)(unaff_x29 + -0x24) == 0x5d955d38) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeClass>b__16_0__);
          MessageWithAssetDetails__ctor_m24BFCFE510E189567F67D51916AA6BCD24455779(uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x629101bd) {
      if (*(int *)(unaff_x29 + -0x24) == 0x5db3474c) {
        uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar1 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_JsonTextReader_<ParseCommentAsync>d__16_MoveNext__
                          );
        MessageWithLeaderboardEntryList__ctor_mEC5439E558640325310B923C22A77A92795B016B
                  (uVar1,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x629101bc) {
        uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar1 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_Linq_JToken_<BeforeSelf>d__50_System_Collections_IEnumerator_Reset__
                          );
        OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceContainer(uVar1,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
        goto LAB_02cdf8b4;
      }
    }
    else {
      if (*(int *)(unaff_x29 + -0x24) == 0x6336cefa) {
LAB_02cdedd0:
        uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar1 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_Equals__);
        MessageWithAssetFileDownloadResult__ctor_m6182BB02044EFCD0699CCF88FD133CC4284D6D72
                  (uVar1,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x63599e2b) {
        in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0x10);
        in_stack_00000148 =
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c_<GetCreator>b__22_1__
                       );
        MessageWithPurchaseList__ctor_mF165BF37BB45CC99A14AE4E8778C65B5136D71F9
                  (in_stack_00000148,in_stack_00000150,0);
        *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000148;
        goto LAB_02cdf8b4;
      }
    }
  }
  else if (*(uint *)(unaff_x29 + -0x24) < 0x679a84b7) {
    if (*(uint *)(unaff_x29 + -0x24) < 0x67526a84) {
      if (*(int *)(unaff_x29 + -0x24) == 0x67367f45) {
        uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar1 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<CreateObjectUsingCreatorWithParameters>b__38_0__
                          );
        MessageWithDestinationList__ctor_m4AB7810BF2DE0E9AC5AE7E026FA7E61D4F2EE572(uVar1,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x67526a83) {
        in_stack_00000130 = *(undefined8 *)(unaff_x29 + -0x10);
        in_stack_00000128 =
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_1__
                       );
        MessageWithSdkAccountList__ctor_m7169E710AA1E928B9247F00556367246E98E1C3E
                  (in_stack_00000128,in_stack_00000130,0);
        *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000128;
        goto LAB_02cdf8b4;
      }
    }
    else {
      if (*(int *)(unaff_x29 + -0x24) == 0x675f5c24) goto LAB_02cdf000;
      if (*(int *)(unaff_x29 + -0x24) == 0x679a84b6) {
        uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar1 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_JsonTextReader_<DoReadAsBytesAsync>d__42_MoveNext__
                          );
        MessageWithLaunchInvitePanelFlowResult__ctor_mA5394950D425A7250212D60F67F1193CB777B704
                  (uVar1,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
        goto LAB_02cdf8b4;
      }
    }
  }
  else if (*(uint *)(unaff_x29 + -0x24) < 0x68670a0f) {
    if (*(int *)(unaff_x29 + -0x24) == 0x6859d641) {
LAB_02cdeeb0:
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__0__
                        );
      MessageWithChallenge__ctor_mF3DB35873189900D182C82271103685B7332DAC4(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
    if (*(int *)(unaff_x29 + -0x24) == 0x68670a0e) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass57_0_<CreateSerializationCallback>b__0__
                        );
      MessageWithApplicationVersion__ctor_mD0F44F02727F9E5A1C9809315A5985B38C312BC0(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
  }
  else {
    if (*(int *)(unaff_x29 + -0x24) == 0x6ad44ef8) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_JsonTextReader_<ParseConstructorAsync>d__25_MoveNext__
                        );
      MessageWithLeaderboardList__ctor_mEEBF53FD0EAE33BAD4A63905BC2D2A9505630C03(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
    if (*(int *)(unaff_x29 + -0x24) == 0x6bcf9e47) {
      in_stack_000000e0 = *(undefined8 *)(unaff_x29 + -0x10);
      in_stack_000000d8 =
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_0__);
      MessageWithUser__ctor_mB03B2FC17D28C913511406D71F8CE7B57A0C667F
                (in_stack_000000d8,in_stack_000000e0,0);
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000d8;
      goto LAB_02cdf8b4;
    }
    if (*(int *)(unaff_x29 + -0x24) == 0x6c8a8228) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__1__
                        );
      MessageWithDataStoreUnderPrivateUserDataStore__ctor_mBEBA644C5CEFBAD3274D11BEDBD89CFCEC6FE912
                (uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
      goto LAB_02cdf8b4;
    }
  }
  in_stack_00000050 = *(undefined8 *)(unaff_x29 + -0x10);
  uStack000000000000004c = *(undefined4 *)(unaff_x29 + -0x24);
  in_stack_00000040 =
       PlatformInternal_ParseMessageHandle_m5F7FF1235E90049C795C4B11965FD7383DBFB844
                 (in_stack_00000050,uStack000000000000004c,0);
  *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000040;
  in_stack_00000038 = *(long *)(unaff_x29 + -0x20);
  if (in_stack_00000038 == 0) {
    in_stack_00000030 = *(undefined4 *)(unaff_x29 + -0x24);
    uStack0000000000000034 = in_stack_00000030;
    uVar1 = Box(*(Il2CppClass **)
                 Method_Newtonsoft_Json_Linq_JToken_<Annotations>d__186_System_Collections_IEnumerator_Reset__
                ,&stack0x00000030);
    uVar1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                      (*(undefined8 *)
                        Method_TMPro_KerningTable_<>c__DisplayClass3_0_<AddKerningPair>b__0__,uVar1)
    ;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar1,0);
  }
LAB_02cdf8b4:
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x20);
  return *(undefined8 *)(unaff_x29 + -8);
}


