/*
FUNCTION_NAME: OVRPlugin.OVRP_1_56_0$$.cctor
ENTRY_POINT: 02cdd210
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_OVRP_1_56_0___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  
  if (*(uint *)(unaff_x29 + -0x4c) < 0x5f1e154) {
    *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(uint *)(unaff_x29 + -0x50) < 0x3e76232) {
      *(undefined4 *)(unaff_x29 + -0x54) = *(undefined4 *)(unaff_x29 + -0x24);
      if (*(uint *)(unaff_x29 + -0x54) < 0x2d32f61) {
        *(undefined4 *)(unaff_x29 + -0x58) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x58) == 0xe38aef) {
          in_stack_00000110 = *(undefined8 *)(unaff_x29 + -0x10);
          in_stack_00000108 =
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_0__);
          MessageWithShareMediaResult__ctor_mEBFE031EC66500EE0B2490FC155912768EEA4755
                    (in_stack_00000108,in_stack_00000110,0);
          *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000108;
          goto LAB_02cdf8b4;
        }
        *(undefined4 *)(unaff_x29 + -0x5c) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x5c) == 0x2d32f60) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeClass>b__16_0__);
          MessageWithAssetDetails__ctor_m24BFCFE510E189567F67D51916AA6BCD24455779(uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
      }
      else {
        *(undefined4 *)(unaff_x29 + -0x60) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x60) == 0x3d3458d) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Linq_JToken_<BeforeSelf>d__50_System_Collections_IEnumerator_Reset__
                            );
          OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceContainer(uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
        *(undefined4 *)(unaff_x29 + -100) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -100) == 0x3e76231) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Linq_JToken_<ReadFromAsync>d__3_MoveNext__);
          MessageWithAchievementUpdate__ctor_mF4C0776A915C7035A9F20B5D090745292CA5FEF5
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
      }
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x24);
      if (*(uint *)(unaff_x29 + -0x68) < 0x4e5cf63) {
        *(undefined4 *)(unaff_x29 + -0x6c) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x6c) == 0x4b34ca3) goto LAB_02cdf5b0;
        *(undefined4 *)(unaff_x29 + -0x70) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x70) == 0x4e5cf62) {
          in_stack_00000180 = *(undefined8 *)(unaff_x29 + -0x10);
          in_stack_00000178 =
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_Newtonsoft_Json_JsonTextReader_<ReadNumberValueAsync>d__38_MoveNext__
                         );
          MessageWithPidList__ctor_m9765F6D0CE56B7811D54B96031573A4FA8C8F092
                    (in_stack_00000178,in_stack_00000180,0);
          *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000178;
          goto LAB_02cdf8b4;
        }
      }
      else {
        *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x74) == 0x4f8c0f2) {
LAB_02cdec80:
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Oculus_Interaction_PoseDetection_JointVelocityActiveState_<>c_<Awake>b__41_0__
                            );
          MessageWithApplicationInviteList__ctor_mFF2B922F7B2FFC5A777B26897EE03D058483B7AD
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
        *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x78) == 0x5f1e153) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Schema_JsonSchemaBuilder_<>c__DisplayClass23_0_<MapType>b__0__
                            );
          MessageWithAvatarEditorResult__ctor_m77337C986137AC90A97A454838ACD988550899F8
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
      }
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x7c) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(uint *)(unaff_x29 + -0x7c) < 0x8260ab2) {
      *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -0x24);
      if (*(uint *)(unaff_x29 + -0x80) < 0x73484cb) {
        *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x84) == 0x6a85abe) {
LAB_02cdf5b0:
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
        *(undefined4 *)(unaff_x29 + -0x88) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x88) == 0x73484ca) {
          in_stack_000001d0 = *(undefined8 *)(unaff_x29 + -0x10);
          in_stack_000001c8 =
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_Newtonsoft_Json_JsonTextReader_<ParseUnquotedPropertyAsync>d__33_MoveNext__
                         );
          MessageWithNetSyncConnection__ctor_mB80EE97D0AD3D32FD288FB8ECD2F0E2152FC51CC
                    (in_stack_000001c8,in_stack_000001d0,0);
          *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000001c8;
          goto LAB_02cdf8b4;
        }
      }
      else {
        *(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x8c) == 0x80ad3c7) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeEnum>b__14_0__);
          MessageWithAssetFileDownloadCancelResult__ctor_m39956DF547D0F94367D316B45E9D185D8621E2AD
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
        *(undefined4 *)(unaff_x29 + -0x90) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x90) == 0x8260ab1) goto LAB_02cdec80;
      }
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x94) = *(undefined4 *)(unaff_x29 + -0x24);
      if (*(uint *)(unaff_x29 + -0x94) < 0x904b599) {
        *(undefined4 *)(unaff_x29 + -0x98) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x98) == 0x8891a7f) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_0__);
          MessageWithChallengeEntryList__ctor_mC6345CAC3FA8893420D34DC769115768BF4000BD
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
        *(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0x9c) == 0x904b598) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_JsonTextReader_<DoReadAsBooleanAsync>d__40_MoveNext__
                            );
          MessageWithLaunchFriendRequestFlowResult__ctor_mA5A0ADFF3D47527DFE4DE78CF131342CFD274189
                    (uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
      }
      else {
        *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0xa0) == 0xdcbd364) {
          in_stack_00000120 = *(undefined8 *)(unaff_x29 + -0x10);
          in_stack_00000118 =
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_2__
                         );
          MessageWithSendInvitesResult__ctor_m3DBBFDDED3E0D94E629D6E0D821684FD85E678DC
                    (in_stack_00000118,in_stack_00000120,0);
          *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000118;
          goto LAB_02cdf8b4;
        }
        *(undefined4 *)(unaff_x29 + -0xa4) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(int *)(unaff_x29 + -0xa4) == 0xeb4040d) {
          uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar1 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__);
          MessageWithChallengeList__ctor_m52B35FC654DBB6AA2193AED50814C4F323A4F77D(uVar1,uVar2,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
          goto LAB_02cdf8b4;
        }
      }
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


