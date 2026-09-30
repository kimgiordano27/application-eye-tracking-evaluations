/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_1$$.cctor
ENTRY_POINT: 02cdd160
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 OVRPlugin_OVRP_1_55_1___cctor(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  undefined8 *in_stack_00000010;
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
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uStack0000000000000008 = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x10);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar1 = CAPI_ovr_Message_GetType_m423043F7F22673776E081CE00F34D7E17BB1CFF5
                    (*(undefined8 *)(unaff_x29 + -0x38),uStack0000000000000008);
  *(undefined4 *)(unaff_x29 + -0x3c) = uVar1;
  *(undefined4 *)(unaff_x29 + -0x24) = *(undefined4 *)(unaff_x29 + -0x3c);
  *(undefined4 *)(unaff_x29 + -0x40) = *(undefined4 *)(unaff_x29 + -0x24);
  if (*(uint *)(unaff_x29 + -0x40) < 0x3aaf591e) {
    *(undefined4 *)(unaff_x29 + -0x44) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(uint *)(unaff_x29 + -0x44) < 0x1bd94ab0) {
      *(undefined4 *)(unaff_x29 + -0x48) = *(undefined4 *)(unaff_x29 + -0x24);
      if (*(uint *)(unaff_x29 + -0x48) < 0xeb4040e) {
        *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(unaff_x29 + -0x24);
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
                                 Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_0__
                               );
                MessageWithShareMediaResult__ctor_mEBFE031EC66500EE0B2490FC155912768EEA4755
                          (in_stack_00000108,in_stack_00000110,0);
                *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000108;
                goto LAB_02cdf8b4;
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0x5c) == 0x2d32f60) goto LAB_02cdecf0;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x60) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0x60) == 0x3d3458d) {
LAB_02cdeb68:
                uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
                uVar2 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_Newtonsoft_Json_Linq_JToken_<BeforeSelf>d__50_System_Collections_IEnumerator_Reset__
                                  );
                OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceContainer(uVar2,uVar3,0);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
                goto LAB_02cdf8b4;
              }
              *(undefined4 *)(unaff_x29 + -100) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -100) == 0x3e76231) goto LAB_02cdebd8;
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
                uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
                uVar2 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_Oculus_Interaction_PoseDetection_JointVelocityActiveState_<>c_<Awake>b__41_0__
                                  );
                MessageWithApplicationInviteList__ctor_mFF2B922F7B2FFC5A777B26897EE03D058483B7AD
                          (uVar2,uVar3,0);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
                goto LAB_02cdf8b4;
              }
              *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0x78) == 0x5f1e153) {
                uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
                uVar2 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_Newtonsoft_Json_Schema_JsonSchemaBuilder_<>c__DisplayClass23_0_<MapType>b__0__
                                  );
                MessageWithAvatarEditorResult__ctor_m77337C986137AC90A97A454838ACD988550899F8
                          (uVar2,uVar3,0);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
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
              if (*(int *)(unaff_x29 + -0x84) == 0x6a85abe) goto LAB_02cdf5b0;
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
              if (*(int *)(unaff_x29 + -0x8c) == 0x80ad3c7) goto LAB_02cded98;
              *(undefined4 *)(unaff_x29 + -0x90) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0x90) == 0x8260ab1) goto LAB_02cdec80;
            }
          }
          else {
            *(undefined4 *)(unaff_x29 + -0x94) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(uint *)(unaff_x29 + -0x94) < 0x904b599) {
              *(undefined4 *)(unaff_x29 + -0x98) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0x98) == 0x8891a7f) goto LAB_02cdef20;
              *(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0x9c) == 0x904b598) {
                uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
                uVar2 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_Newtonsoft_Json_JsonTextReader_<DoReadAsBooleanAsync>d__40_MoveNext__
                                  );
                MessageWithLaunchFriendRequestFlowResult__ctor_mA5A0ADFF3D47527DFE4DE78CF131342CFD274189
                          (uVar2,uVar3,0);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
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
              if (*(int *)(unaff_x29 + -0xa4) == 0xeb4040d) goto FUN_02cdeee8;
            }
          }
        }
      }
      else {
        *(undefined4 *)(unaff_x29 + -0xa8) = *(undefined4 *)(unaff_x29 + -0x24);
        if (*(uint *)(unaff_x29 + -0xa8) < 0x14aa212a) {
          *(undefined4 *)(unaff_x29 + -0xac) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(uint *)(unaff_x29 + -0xac) < 0x117fc8ff) {
            *(undefined4 *)(unaff_x29 + -0xb0) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(uint *)(unaff_x29 + -0xb0) < 0x11449fc6) {
              *(undefined4 *)(unaff_x29 + -0xb4) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xb4) == 0xf9ecf9f) {
                uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
                uVar2 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0_<CreateObjectUsingCreatorWithParameters>b__1__
                                  );
                MessageWithInvitePanelResultInfo__ctor_m927C9D955E90ED77A77DFAB4AAD92EB119428321
                          (uVar2,uVar3,0);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
                goto LAB_02cdf8b4;
              }
              *(undefined4 *)(unaff_x29 + -0xb8) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xb8) == 0x11449fc5) goto LAB_02cdedd0;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0xbc) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xbc) == 0x1175be60) goto LAB_02cdeeb0;
              *(undefined4 *)(unaff_x29 + -0xc0) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xc0) == 0x117fc8fe) goto LAB_02cdf230;
            }
          }
          else {
            *(undefined4 *)(unaff_x29 + -0xc4) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(uint *)(unaff_x29 + -0xc4) < 0x14806b86) {
              *(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -200) == 0x121ab45f) goto LAB_02cdef20;
              *(undefined4 *)(unaff_x29 + -0xcc) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xcc) == 0x14806b85) goto LAB_02cdec48;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0xd0) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xd0) == 0x14a22a97) {
                uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
                uVar2 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_Newtonsoft_Json_JsonTextReader_<HandleNullAsync>d__35_MoveNext__
                                  );
                MessageWithLaunchUnblockFlowResult__ctor_m5E09CF0C5450D4723D5683C8B45E9490CE2121BC
                          (uVar2,uVar3,0);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
                goto LAB_02cdf8b4;
              }
              *(undefined4 *)(unaff_x29 + -0xd4) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xd4) == 0x14aa2129) {
LAB_02cdebd8:
                uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
                uVar2 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_Newtonsoft_Json_Linq_JToken_<ReadFromAsync>d__3_MoveNext__
                                  );
                MessageWithAchievementUpdate__ctor_mF4C0776A915C7035A9F20B5D090745292CA5FEF5
                          (uVar2,uVar3,0);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
                goto LAB_02cdf8b4;
              }
            }
          }
        }
        else {
          *(undefined4 *)(unaff_x29 + -0xd8) = *(undefined4 *)(unaff_x29 + -0x24);
          if (*(uint *)(unaff_x29 + -0xd8) < 0x18378bf0) {
            *(undefined4 *)(unaff_x29 + -0xdc) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(uint *)(unaff_x29 + -0xdc) < 0x15770370) {
              *(undefined4 *)(unaff_x29 + -0xe0) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xe0) == 0x152663b1) {
LAB_02cdeba0:
                uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
                uVar2 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_Newtonsoft_Json_Linq_JToken_<GetAncestors>d__48_System_Collections_IEnumerator_Reset__
                                  );
                MessageWithAchievementProgressList__ctor_mE547DFCC9EEEBF3BA0F7B2AB2E644A8515CF1C7D
                          (uVar2,uVar3,0);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
                goto LAB_02cdf8b4;
              }
              *(undefined4 *)(unaff_x29 + -0xe4) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xe4) == 0x1577036f) {
                in_stack_00000140 = *(undefined8 *)(unaff_x29 + -0x10);
                in_stack_00000138 =
                     il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_Newtonsoft_Json_JsonValidatingReader_<>c_<ValidateEndObject>b__51_0__
                               );
                MessageWithRejoinDialogResult__ctor_mF50058C8BC5B7E49B65691E8F32BF40365D2364A
                          (in_stack_00000138,in_stack_00000140,0);
                *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000138;
                goto LAB_02cdf8b4;
              }
            }
            else {
              *(undefined4 *)(unaff_x29 + -0xe8) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xe8) == 0x167d4bc2) goto LAB_02cdef90;
              *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xec) == 0x18378bef) goto FUN_02cdf1f8;
            }
          }
          else {
            *(undefined4 *)(unaff_x29 + -0xf0) = *(undefined4 *)(unaff_x29 + -0x24);
            if (*(uint *)(unaff_x29 + -0xf0) < 0x18f0b01c) {
              *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xf4) == 0x186b58b1) goto LAB_02cdf000;
              *(undefined4 *)(unaff_x29 + -0xf8) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xf8) == 0x18f0b01b) {
                in_stack_000001b0 = *(undefined8 *)(unaff_x29 + -0x10);
                in_stack_000001a8 =
                     il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_Newtonsoft_Json_JsonTextReader_<ReadFinishedAsync>d__36_MoveNext__
                               );
                MessageWithOrgScopedID__ctor_m389170D8644D01E443674D7744AEE9AA9370E84E
                          (in_stack_000001a8,in_stack_000001b0,0);
                *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000001a8;
                goto LAB_02cdf8b4;
              }
            }
            else {
              *(undefined4 *)(unaff_x29 + -0xfc) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0xfc) == 0x195c66c6) {
LAB_02cdef90:
                uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
                uVar2 = il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_Newtonsoft_Json_Schema_JsonSchemaWriter_<>c_<WriteType>b__7_0__
                                  );
                MessageWithDataStoreUnderPublicUserDataStore__ctor_m3E1784A0D4D106381013617730FCBA33A52A70B2
                          (uVar2,uVar3,0);
                *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
                goto LAB_02cdf8b4;
              }
              *(undefined4 *)(unaff_x29 + -0x100) = *(undefined4 *)(unaff_x29 + -0x24);
              if (*(int *)(unaff_x29 + -0x100) == 0x1ad307b4) goto LAB_02cdf7d8;
              if (*(int *)(unaff_x29 + -0x24) == 0x1bd94aaf) goto FUN_02cdf428;
            }
          }
        }
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x2a7dd256) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x2247596f) {
        if (*(uint *)(unaff_x29 + -0x24) < 0x1f90f0d6) {
          if (*(uint *)(unaff_x29 + -0x24) < 0x1d118ab3) {
            if (*(int *)(unaff_x29 + -0x24) == 0x1c068319) {
LAB_02cdef58:
              uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
              uVar2 = il2cpp_codegen_object_new
                                (*(Il2CppClass **)
                                  Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__1__
                                );
              MessageWithDataStoreUnderPrivateUserDataStore__ctor_mBEBA644C5CEFBAD3274D11BEDBD89CFCEC6FE912
                        (uVar2,uVar3,0);
              *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
              goto LAB_02cdf8b4;
            }
            if (*(int *)(unaff_x29 + -0x24) == 0x1d118ab2) {
              in_stack_00000190 = *(undefined8 *)(unaff_x29 + -0x10);
              in_stack_00000188 =
                   il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_Newtonsoft_Json_JsonTextReader_<ReadIntoWrappedTypeObjectAsync>d__43_MoveNext__
                             );
              MessageWithPartyUpdateNotification__ctor_m89F9F2DB564F45A7C219B724C45117D872090F37
                        (in_stack_00000188,in_stack_00000190,0);
              *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000188;
              goto LAB_02cdf8b4;
            }
          }
          else {
            if (*(int *)(unaff_x29 + -0x24) == 0x1dd5e5fb) goto LAB_02cdf6fc;
            if (*(int *)(unaff_x29 + -0x24) == 0x1f90f0d5) goto LAB_02cdecf0;
          }
        }
        else if (*(uint *)(unaff_x29 + -0x24) < 0x2124806a) {
          if (*(int *)(unaff_x29 + -0x24) == 0x1fbb72d9) goto LAB_02cdf000;
          if (*(int *)(unaff_x29 + -0x24) == 0x21248069) goto LAB_02cdeeb0;
        }
        else {
          if (*(int *)(unaff_x29 + -0x24) == 0x21cbe0c0) {
            in_stack_000000d0 = *(undefined8 *)(unaff_x29 + -0x10);
            in_stack_000000c8 =
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_2__);
            MessageWithUserAccountAgeCategory__ctor_mB461F9B47BF490767EF6C7BDCA8D5F25861388F5
                      (in_stack_000000c8,in_stack_000000d0,0);
            *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000c8;
            goto LAB_02cdf8b4;
          }
          if (*(int *)(unaff_x29 + -0x24) == 0x2247596e) {
            uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
            in_stack_000001e8 =
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4_MoveNext__
                           );
            MessageWithLivestreamingStatus__ctor_m0D680D173CD10ACCEB24B011F78568F04D6632BB
                      (in_stack_000001e8,uVar2,0);
            *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000001e8;
            goto LAB_02cdf8b4;
          }
        }
      }
      else if (*(uint *)(unaff_x29 + -0x24) < 0x24472f6d) {
        if (*(uint *)(unaff_x29 + -0x24) < 0x2309f39a) {
          if (*(int *)(unaff_x29 + -0x24) == 0x22810483) {
            in_stack_00000090 = *(undefined8 *)(unaff_x29 + -0x10);
            in_stack_00000088 =
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_Newtonsoft_Json_JsonWriter_<WriteTokenSyncReadingAsync>d__31_MoveNext__
                           );
            MessageWithUserProof__ctor_mBD6ADA55A81EE174E872892B88682379129C6883
                      (in_stack_00000088,in_stack_00000090,0);
            *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000088;
            goto LAB_02cdf8b4;
          }
          if (*(int *)(unaff_x29 + -0x24) == 0x2309f399) {
            in_stack_000000b0 = *(undefined8 *)(unaff_x29 + -0x10);
            in_stack_000000a8 =
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_Newtonsoft_Json_JsonValidatingReader_SchemaScope_GetRequiredProperties__
                           );
            MessageWithUserCapabilityList__ctor_m68B5BF01D0327AC3E13FEEA1EC8FA5D9592E26F8
                      (in_stack_000000a8,in_stack_000000b0,0);
            *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000a8;
            goto LAB_02cdf8b4;
          }
        }
        else {
          if (*(int *)(unaff_x29 + -0x24) == 0x234bc3f1) {
LAB_02cdf68c:
            in_stack_000000c0 = *(undefined8 *)(unaff_x29 + -0x10);
            in_stack_000000b8 =
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_Newtonsoft_Json_JsonWriter_<WriteTokenAsync>d__30_MoveNext__);
            MessageWithUserList__ctor_mE78C4D5F31748BC143CAB01558634738FBDB5BF0
                      (in_stack_000000b8,in_stack_000000c0,0);
            *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000b8;
            goto LAB_02cdf8b4;
          }
          if (*(int *)(unaff_x29 + -0x24) == 0x24472f6c) goto LAB_02cdf5b0;
        }
      }
      else if (*(uint *)(unaff_x29 + -0x24) < 0x267cf744) {
        if (*(int *)(unaff_x29 + -0x24) == 0x264885ca) goto LAB_02cdf000;
        if (*(int *)(unaff_x29 + -0x24) == 0x267cf743) goto LAB_02cdf68c;
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x2955af24) goto LAB_02cdf000;
        if (*(int *)(unaff_x29 + -0x24) == 0x296116e5) {
LAB_02cdeeb0:
          uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar2 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__0__
                            );
          MessageWithChallenge__ctor_mF3DB35873189900D182C82271103685B7332DAC4(uVar2,uVar3,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
          goto LAB_02cdf8b4;
        }
        if (*(int *)(unaff_x29 + -0x24) == 0x2a7dd255) goto LAB_02cdeb68;
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x3271abdb) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x2f42e728) {
        if (*(uint *)(unaff_x29 + -0x24) < 0x2d008993) {
          if (*(int *)(unaff_x29 + -0x24) == 0x2a8f1055) goto LAB_02cdf000;
          if (*(int *)(unaff_x29 + -0x24) == 0x2d008992) goto LAB_02cdedd0;
        }
        else {
          if (*(int *)(unaff_x29 + -0x24) == 0x2e4dd8d6) goto LAB_02cdf000;
          if (*(int *)(unaff_x29 + -0x24) == 0x2f42e727) goto LAB_02cdeba0;
        }
      }
      else if (*(uint *)(unaff_x29 + -0x24) < 0x314c84b9) {
        if (*(int *)(unaff_x29 + -0x24) == 0x2fdd0ccd) {
          uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar2 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_JsonReader_<ReaderReadAndAssertAsync>d__2_MoveNext__
                            );
          MessageWithAssetFileDownloadUpdate__ctor_m1BA031B512670AA3490532626854FB8BADB3B67E
                    (uVar2,uVar3,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
          goto LAB_02cdf8b4;
        }
        if (*(int *)(unaff_x29 + -0x24) == 0x314c84b8) goto LAB_02cdf000;
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x316509dc) goto LAB_02cdef20;
        if (*(int *)(unaff_x29 + -0x24) == 0x3271abda) goto LAB_02cdf5b0;
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x35f6769c) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x35692f2c) {
        if (*(int *)(unaff_x29 + -0x24) == 0x34364a0a) {
LAB_02cdf6fc:
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
        if (*(int *)(unaff_x29 + -0x24) == 0x35692f2b) goto LAB_02cdf7d8;
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x35728882) goto LAB_02cdf000;
        if (*(int *)(unaff_x29 + -0x24) == 0x35f6769b) goto LAB_02cdf1c0;
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x387e7f37) {
      if (*(int *)(unaff_x29 + -0x24) == 0x37f21084) {
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
      if (*(int *)(unaff_x29 + -0x24) == 0x387e7f36) {
        in_stack_000001c0 = *(undefined8 *)(unaff_x29 + -0x10);
        in_stack_000001b8 =
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Newtonsoft_Json_JsonTextReader_<ParseValueAsync>d__8_MoveNext__);
        MessageWithNetSyncSessionsChangedNotification__ctor_m793CEDD38A05E5F0E296043AD03D1FAE0FDC3B9F
                  (in_stack_000001b8,in_stack_000001c0,0);
        *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000001b8;
        goto LAB_02cdf8b4;
      }
    }
    else {
      if (*(int *)(unaff_x29 + -0x24) == 0x39607bfc) goto FUN_02cdf1f8;
      if (*(int *)(unaff_x29 + -0x24) == 0x3a0f8419) goto LAB_02cdf498;
      if (*(int *)(unaff_x29 + -0x24) == 0x3aaf591d) goto LAB_02cdf5b0;
    }
  }
  else if (*(uint *)(unaff_x29 + -0x24) < 0x5ae8cd53) {
    if (*(uint *)(unaff_x29 + -0x24) < 0x4afc6f75) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x436f345e) {
        if (*(uint *)(unaff_x29 + -0x24) < 0x41cfda51) {
          if (*(uint *)(unaff_x29 + -0x24) < 0x3e20cb58) {
            if (*(int *)(unaff_x29 + -0x24) == 0x3c147509) goto LAB_02cdf000;
            if (*(int *)(unaff_x29 + -0x24) == 0x3e20cb57) goto LAB_02cdf5b0;
          }
          else {
            if (*(int *)(unaff_x29 + -0x24) == 0x3f9b0d0d) {
              in_stack_00000160 = *(undefined8 *)(unaff_x29 + -0x10);
              in_stack_00000158 =
                   il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_Newtonsoft_Json_Serialization_JsonTypeReflector_<>c__DisplayClass22_0_<GetCreator>b__0__
                             );
              MessageWithPurchase__ctor_m037CDF852A598384888B143C531493B40C371548
                        (in_stack_00000158,in_stack_00000160,0);
              *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000158;
              goto LAB_02cdf8b4;
            }
            if (*(int *)(unaff_x29 + -0x24) == 0x41cfda50) goto LAB_02cdecf0;
          }
        }
        else if (*(uint *)(unaff_x29 + -0x24) < 0x420ac1d0) {
          if (*(int *)(unaff_x29 + -0x24) == 0x41d2828b) goto LAB_02cdf6fc;
          if (*(int *)(unaff_x29 + -0x24) == 0x420ac1cf) goto LAB_02cded60;
        }
        else {
          if (*(int *)(unaff_x29 + -0x24) == 0x43264356) {
FUN_02cdeee8:
            uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar2 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__);
            MessageWithChallengeList__ctor_m52B35FC654DBB6AA2193AED50814C4F323A4F77D(uVar2,uVar3,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
            goto LAB_02cdf8b4;
          }
          if (*(int *)(unaff_x29 + -0x24) == 0x436f345d) goto LAB_02cdf61c;
        }
      }
      else if (*(uint *)(unaff_x29 + -0x24) < 0x4737ea1e) {
        if (*(uint *)(unaff_x29 + -0x24) < 0x44fc006f) {
          if (*(int *)(unaff_x29 + -0x24) == 0x446aecfa) {
LAB_02cded98:
            uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar2 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeEnum>b__14_0__);
            MessageWithAssetFileDownloadCancelResult__ctor_m39956DF547D0F94367D316B45E9D185D8621E2AD
                      (uVar2,uVar3,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
            goto LAB_02cdf8b4;
          }
          if (*(int *)(unaff_x29 + -0x24) == 0x44fc006e) goto LAB_02cdec48;
        }
        else {
          if (*(int *)(unaff_x29 + -0x24) == 0x453fc9aa) {
            in_stack_000000f0 = *(undefined8 *)(unaff_x29 + -0x10);
            in_stack_000000e8 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000010);
            MessageWithSystemVoipState__ctor_m0C3EC0CE847837D8BEC905086E0869F60ECFD81B
                      (in_stack_000000e8,in_stack_000000f0,0);
            *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000e8;
            goto LAB_02cdf8b4;
          }
          if (*(int *)(unaff_x29 + -0x24) == 0x4737ea1d) {
            uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar2 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<PopulateObject>b__42_0__
                              );
            MessageWithGroupPresenceLeaveIntent__ctor_m8A022A95004362652CFBF0437D322DC8C3F2E033
                      (uVar2,uVar3,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
            goto LAB_02cdf8b4;
          }
        }
      }
      else if (*(uint *)(unaff_x29 + -0x24) < 0x47933761) {
        if (*(int *)(unaff_x29 + -0x24) == 0x47570a95) {
LAB_02cdf498:
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
        if (*(int *)(unaff_x29 + -0x24) == 0x47933760) {
          in_stack_000001a0 = *(undefined8 *)(unaff_x29 + -0x10);
          in_stack_00000198 =
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_Newtonsoft_Json_JsonTextReader_<ReadFromFinishedAsync>d__5_MoveNext__
                         );
          MessageWithPartyUnderCurrentParty__ctor_mC826C6CD125895FEDF1B33F9F9D691445BA62936
                    (in_stack_00000198,in_stack_000001a0,0);
          *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000198;
          goto LAB_02cdf8b4;
        }
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x48ff55be) goto LAB_02cdf000;
        if (*(int *)(unaff_x29 + -0x24) == 0x4901dac0) goto FUN_02cdf1f8;
        if (*(int *)(unaff_x29 + -0x24) == 0x4afc6f74) {
          uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar2 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass58_0_<CreateSerializationErrorCallback>b__0__
                            );
          MessageWithAssetDetailsList__ctor_mC917393B5FA4E0F7CADA6F9B096920F3BED70AB3(uVar2,uVar3,0)
          ;
          *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
          goto LAB_02cdf8b4;
        }
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x521adf0e) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x4e207cda) {
        if (*(uint *)(unaff_x29 + -0x24) < 0x4c5b268b) {
          if ((*(int *)(unaff_x29 + -0x24) == 0x4b8efc86) ||
             (*(int *)(unaff_x29 + -0x24) == 0x4c5b268a)) goto LAB_02cdf000;
        }
        else {
          if (*(int *)(unaff_x29 + -0x24) == 0x4db6aff8) {
LAB_02cdf000:
            uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar2 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_1__);
            Message__ctor_m47141728F28DC527D3A2E609BAF53C97A7D63EB9(uVar2,uVar3,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
            goto LAB_02cdf8b4;
          }
          if (*(int *)(unaff_x29 + -0x24) == 0x4e207cd9) {
FUN_02cdf1f8:
            uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar2 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_Newtonsoft_Json_JsonTextReader_<ParseCommentAsync>d__16_MoveNext__
                              );
            MessageWithLeaderboardEntryList__ctor_mEC5439E558640325310B923C22A77A92795B016B
                      (uVar2,uVar3,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
            goto LAB_02cdf8b4;
          }
        }
      }
      else if (*(uint *)(unaff_x29 + -0x24) < 0x51659515) {
        if (*(int *)(unaff_x29 + -0x24) == 0x4f9fde1d) goto LAB_02cdeba0;
        if (*(int *)(unaff_x29 + -0x24) == 0x51659514) goto LAB_02cded98;
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x51f8ce0c) {
LAB_02cdf7d8:
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
        if (*(int *)(unaff_x29 + -0x24) == 0x521adf0d) goto LAB_02cdf000;
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x57b752b4) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x5534a925) {
        if (*(int *)(unaff_x29 + -0x24) == 0x54e2d1f8) goto LAB_02cdf5b0;
        if (*(int *)(unaff_x29 + -0x24) == 0x5534a924) {
          uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar2 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Oculus_Interaction_HandGrab_Visuals_JointCollection_<>c__DisplayClass2_0_<_ctor>b__0__
                            );
          MessageWithAppDownloadProgressResult__ctor_m4655E9C6CE9443FD1F035711DB0860F4E42F7F36
                    (uVar2,uVar3,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
          goto LAB_02cdf8b4;
        }
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x568e76c0) goto LAB_02cdeeb0;
        if (*(int *)(unaff_x29 + -0x24) == 0x57b752b3) goto LAB_02cdf000;
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x587c2a8e) {
      if (*(int *)(unaff_x29 + -0x24) == 0x586f2d14) goto LAB_02cdefc8;
      if (*(int *)(unaff_x29 + -0x24) == 0x587c2a8d) goto LAB_02cdf68c;
    }
    else {
      if (*(int *)(unaff_x29 + -0x24) == 0x58d254a5) {
        in_stack_00000080 = *(undefined8 *)(unaff_x29 + -0x10);
        in_stack_00000078 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000010);
        MessageWithSystemVoipState__ctor_m0C3EC0CE847837D8BEC905086E0869F60ECFD81B
                  (in_stack_00000078,in_stack_00000080,0);
        *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000078;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x593ccbdd) goto LAB_02cdebd8;
      if (*(int *)(unaff_x29 + -0x24) == 0x5ae8cd52) goto LAB_02cded60;
    }
  }
  else if (*(uint *)(unaff_x29 + -0x24) < 0x6c8a8229) {
    if (*(uint *)(unaff_x29 + -0x24) < 0x63599e2c) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x5d955d39) {
        if (*(uint *)(unaff_x29 + -0x24) < 0x5b7ca1b7) {
          if (*(int *)(unaff_x29 + -0x24) == 0x5b4fbbe0) goto LAB_02cdedd0;
          if (*(int *)(unaff_x29 + -0x24) == 0x5b7ca1b6) goto FUN_02cdeee8;
        }
        else {
          if (*(int *)(unaff_x29 + -0x24) == 0x5c896f3e) goto LAB_02cdf6fc;
          if (*(int *)(unaff_x29 + -0x24) == 0x5d955d38) {
LAB_02cdecf0:
            uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
            uVar2 = il2cpp_codegen_object_new
                              (*(Il2CppClass **)
                                Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeClass>b__16_0__);
            MessageWithAssetDetails__ctor_m24BFCFE510E189567F67D51916AA6BCD24455779(uVar2,uVar3,0);
            *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
            goto LAB_02cdf8b4;
          }
        }
      }
      else if (*(uint *)(unaff_x29 + -0x24) < 0x629101bd) {
        if (*(int *)(unaff_x29 + -0x24) == 0x5db3474c) goto FUN_02cdf1f8;
        if (*(int *)(unaff_x29 + -0x24) == 0x629101bc) goto LAB_02cdeb68;
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x6336cefa) {
LAB_02cdedd0:
          uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar2 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_Equals__
                            );
          MessageWithAssetFileDownloadResult__ctor_m6182BB02044EFCD0699CCF88FD133CC4284D6D72
                    (uVar2,uVar3,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
          goto LAB_02cdf8b4;
        }
        if (*(int *)(unaff_x29 + -0x24) == 0x63599e2b) goto LAB_02cdf498;
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x679a84b7) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x67526a84) {
        if (*(int *)(unaff_x29 + -0x24) == 0x67367f45) {
LAB_02cdefc8:
          uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar2 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<CreateObjectUsingCreatorWithParameters>b__38_0__
                            );
          MessageWithDestinationList__ctor_m4AB7810BF2DE0E9AC5AE7E026FA7E61D4F2EE572(uVar2,uVar3,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
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
          uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar2 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Newtonsoft_Json_JsonTextReader_<DoReadAsBytesAsync>d__42_MoveNext__
                            );
          MessageWithLaunchInvitePanelFlowResult__ctor_mA5394950D425A7250212D60F67F1193CB777B704
                    (uVar2,uVar3,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
          goto LAB_02cdf8b4;
        }
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x68670a0f) {
      if (*(int *)(unaff_x29 + -0x24) == 0x6859d641) goto LAB_02cdeeb0;
      if (*(int *)(unaff_x29 + -0x24) == 0x68670a0e) {
        uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar2 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_Serialization_JsonContract_<>c__DisplayClass57_0_<CreateSerializationCallback>b__0__
                          );
        MessageWithApplicationVersion__ctor_mD0F44F02727F9E5A1C9809315A5985B38C312BC0(uVar2,uVar3,0)
        ;
        *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
        goto LAB_02cdf8b4;
      }
    }
    else {
      if (*(int *)(unaff_x29 + -0x24) == 0x6ad44ef8) {
LAB_02cdf1c0:
        uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar2 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_JsonTextReader_<ParseConstructorAsync>d__25_MoveNext__
                          );
        MessageWithLeaderboardList__ctor_mEEBF53FD0EAE33BAD4A63905BC2D2A9505630C03(uVar2,uVar3,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x6bcf9e47) {
LAB_02cdf61c:
        in_stack_000000e0 = *(undefined8 *)(unaff_x29 + -0x10);
        in_stack_000000d8 =
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_0__);
        MessageWithUser__ctor_mB03B2FC17D28C913511406D71F8CE7B57A0C667F
                  (in_stack_000000d8,in_stack_000000e0,0);
        *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000d8;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x6c8a8228) goto LAB_02cdef58;
    }
  }
  else if (*(uint *)(unaff_x29 + -0x24) < 0x744ce346) {
    if (*(uint *)(unaff_x29 + -0x24) < 0x6ee4f33d) {
      if (*(uint *)(unaff_x29 + -0x24) < 0x6da7ba90) {
        if (*(int *)(unaff_x29 + -0x24) == 0x6d5d7886) {
LAB_02cded60:
          uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar2 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Meta_WitAi_Json_JsonConvert_<>c_<DeserializeClass>b__16_1__);
          MessageWithAssetFileDeleteResult__ctor_mD1DF1F17A175EFEF235BABD9018D8E8A6A6AE833
                    (uVar2,uVar3,0);
          *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
          goto LAB_02cdf8b4;
        }
        if (*(int *)(unaff_x29 + -0x24) == 0x6da7ba8f) goto LAB_02cdf7d8;
      }
      else {
        if (*(int *)(unaff_x29 + -0x24) == 0x6daa9cc3) goto LAB_02cdf000;
        if (*(int *)(unaff_x29 + -0x24) == 0x6ee4f33c) goto LAB_02cdf5b0;
      }
    }
    else if (*(uint *)(unaff_x29 + -0x24) < 0x717259e4) {
      if (*(int *)(unaff_x29 + -0x24) == 0x6fd62528) {
        uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar2 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_<set_ReferenceResolver>b__0__
                          );
        MessageWithLaunchBlockFlowResult__ctor_m865455E6BFFCABDB103AD74C31D5482E8D25800E
                  (uVar2,uVar3,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x717259e3) goto LAB_02cdf000;
    }
    else {
      if (*(int *)(unaff_x29 + -0x24) == 0x72c692fa) {
LAB_02cdf230:
        uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar2 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_JsonTextReader_<MatchAndSetAsync>d__21_MoveNext__
                          );
        MessageWithLeaderboardDidUpdate__ctor_m01307625359BA0D58C9CDD2CA49D458403414538
                  (uVar2,uVar3,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x744ce345) {
        in_stack_000001e0 = *(undefined8 *)(unaff_x29 + -0x10);
        in_stack_000001d8 =
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Newtonsoft_Json_JsonTextReader_<ParsePropertyAsync>d__31_MoveNext__)
        ;
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
        uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar2 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_<CreateObjectUsingCreatorWithParameters>b__38_2__
                          );
        MessageWithGroupPresenceJoinIntent__ctor_m4D876A9C8C4E31D3172E1F5B4074857362ECD777
                  (uVar2,uVar3,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x77584ef3) goto LAB_02cdeeb0;
    }
    else {
      if (*(int *)(unaff_x29 + -0x24) == 0x78c90470) {
LAB_02cdef20:
        uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar2 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_0__);
        MessageWithChallengeEntryList__ctor_mC6345CAC3FA8893420D34DC769115768BF4000BD(uVar2,uVar3,0)
        ;
        *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
        goto LAB_02cdf8b4;
      }
      if (*(int *)(unaff_x29 + -0x24) == 0x7c2060de) {
LAB_02cdec48:
        uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar2 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_Oculus_Interaction_PoseDetection_JointRotationActiveState_<>c_<Awake>b__32_0__
                          );
        MessageWithAppDownloadResult__ctor_m9E91D2860A2BDE5C9759D8D1EEC3CC90EFBBB4B8(uVar2,uVar3,0);
        *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
        goto LAB_02cdf8b4;
      }
    }
  }
  else if (*(uint *)(unaff_x29 + -0x24) < 0x7d201557) {
    if ((*(int *)(unaff_x29 + -0x24) == 0x7c2afdcb) || (*(int *)(unaff_x29 + -0x24) == 0x7d201556))
    {
      uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar2 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0_<GenerateInternal>b__0__
                        );
      MessageWithBlockedUserList__ctor_m19D5D3671BF8E61EA5F8659FE62D2466085B3E22(uVar2,uVar3,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
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
FUN_02cdf428:
      in_stack_00000170 = *(undefined8 *)(unaff_x29 + -0x10);
      in_stack_00000168 =
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_Newtonsoft_Json_JsonTextReader_<ReadStringValueAsync>d__37_MoveNext__)
      ;
      MessageWithProductList__ctor_mAB84EA1FD34EE164D80E3715D19987E90CF5B0EE
                (in_stack_00000168,in_stack_00000170,0);
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000168;
      goto LAB_02cdf8b4;
    }
    if (*(int *)(unaff_x29 + -0x24) == 0x7f4ca0c6) goto LAB_02cdef20;
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
    uVar2 = Box(*(Il2CppClass **)
                 Method_Newtonsoft_Json_Linq_JToken_<Annotations>d__186_System_Collections_IEnumerator_Reset__
                ,&stack0x00000030);
    uVar2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                      (*(undefined8 *)
                        Method_TMPro_KerningTable_<>c__DisplayClass3_0_<AddKerningPair>b__0__,uVar2)
    ;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar2,0);
  }
LAB_02cdf8b4:
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x20);
  return *(undefined8 *)(unaff_x29 + -8);
}


