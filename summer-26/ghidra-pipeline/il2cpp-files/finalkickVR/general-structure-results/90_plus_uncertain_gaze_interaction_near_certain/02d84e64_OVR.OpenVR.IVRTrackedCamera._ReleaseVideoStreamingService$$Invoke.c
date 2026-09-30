/*
FUNCTION_NAME: OVR.OpenVR.IVRTrackedCamera._ReleaseVideoStreamingService$$Invoke
ENTRY_POINT: 02d84e64
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 214
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_10;functionality_data_collection_or_telemetry_hits_6
*/


void OVR_OpenVR_IVRTrackedCamera__ReleaseVideoStreamingService__Invoke(void)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  undefined4 *puVar8;
  long unaff_x29;
  undefined4 uStack00000000000000fc;
  uint uStack000000000000010c;
  int iStack000000000000013c;
  undefined4 uStack000000000000014c;
  undefined4 uStack000000000000015c;
  long in_stack_000001d0;
  undefined8 *in_stack_000001d8;
  undefined8 *in_stack_000001e0;
  undefined8 *in_stack_000001e8;
  undefined8 *in_stack_000001f0;
  undefined8 *in_stack_000001f8;
  undefined8 *in_stack_00000200;
  undefined8 *in_stack_00000208;
  undefined8 *in_stack_00000210;
  undefined8 *in_stack_00000218;
  undefined8 *in_stack_00000220;
  undefined8 *in_stack_00000228;
  undefined8 *in_stack_00000230;
  undefined8 *in_stack_00000238;
  undefined8 *in_stack_00000240;
  
  uVar4 = OVRRuntimeSettings_GetRuntimeSettings_m357C35DCF6941F52EDB4FD95F9FEBC78DDFE62AB(0);
  in_stack_000001d8[0x36] = uVar4;
  OVRManager_set_runtimeSettings_m66D09D518E906F1A50738B3BFA760EE8B117C469_inline
            ((OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1 *)in_stack_000001d8[0x36]
             ,(MethodInfo *)0x0);
  uVar4 = SZArrayNew(*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
                     ,9);
  in_stack_000001d8[0x35] = uVar4;
  in_stack_000001d8[0x34] = in_stack_000001d8[0x35];
  NullCheck((void *)in_stack_000001d8[0x34]);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d8[0x34],0,
             *(String_t **)
              Method_System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__
            );
  in_stack_000001d8[0x33] = in_stack_000001d8[0x34];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001e8);
  uVar4 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(0);
  in_stack_000001d8[0x32] = uVar4;
  NullCheck((void *)in_stack_000001d8[0x33]);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d8[0x33],1,
             (String_t *)in_stack_000001d8[0x32]);
  in_stack_000001d8[0x31] = in_stack_000001d8[0x33];
  NullCheck((void *)in_stack_000001d8[0x31]);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d8[0x31],2,
             *(String_t **)Method_System_Xml_XmlUrlResolver_<GetEntityAsync>d__15_MoveNext__);
  in_stack_000001d8[0x30] = in_stack_000001d8[0x31];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000210);
  in_stack_000001d8[0x2f] = *puVar5;
  in_stack_000001d8[0x2e] = in_stack_000001d8[0x2f];
  if (in_stack_000001d8[0x2e] == 0) {
    *(undefined8 *)(in_stack_000001d0 + 0x240) = in_stack_000001d8[0x2e];
    *(undefined4 *)(unaff_x29 + -0x6c) = 3;
    *(undefined8 *)(in_stack_000001d0 + 0x230) = in_stack_000001d8[0x30];
    *(undefined8 *)(in_stack_000001d0 + 0x228) = in_stack_000001d8[0x30];
    *(undefined8 *)(in_stack_000001d0 + 0x220) = 0;
    *(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -0x6c);
    *(undefined8 *)(in_stack_000001d0 + 0x210) = *(undefined8 *)(in_stack_000001d0 + 0x230);
    *(undefined8 *)(in_stack_000001d0 + 0x208) = *(undefined8 *)(in_stack_000001d0 + 0x228);
  }
  else {
    *(undefined8 *)(in_stack_000001d0 + 0x260) = in_stack_000001d8[0x2e];
    *(undefined4 *)(unaff_x29 + -0x4c) = 3;
    *(undefined8 *)(in_stack_000001d0 + 0x250) = in_stack_000001d8[0x30];
    *(undefined8 *)(in_stack_000001d0 + 0x248) = in_stack_000001d8[0x30];
    NullCheck(*(void **)(in_stack_000001d0 + 0x260));
    uVar4 = VirtualFuncInvoker0<String_t*>::Invoke(3,*(Il2CppObject **)(in_stack_000001d0 + 0x260));
    in_stack_000001d8[0x2d] = uVar4;
    *(undefined8 *)(in_stack_000001d0 + 0x220) = in_stack_000001d8[0x2d];
    *(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -0x4c);
    *(undefined8 *)(in_stack_000001d0 + 0x210) = *(undefined8 *)(in_stack_000001d0 + 0x250);
    *(undefined8 *)(in_stack_000001d0 + 0x208) = *(undefined8 *)(in_stack_000001d0 + 0x248);
  }
  NullCheck(*(void **)(in_stack_000001d0 + 0x210));
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)(in_stack_000001d0 + 0x210)
             ,(long)*(int *)(unaff_x29 + -0x8c),*(String_t **)(in_stack_000001d0 + 0x220));
  in_stack_000001d8[0x2c] = *(undefined8 *)(in_stack_000001d0 + 0x208);
  NullCheck((void *)in_stack_000001d8[0x2c]);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d8[0x2c],4,
             *(String_t **)
              Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo_FixupMembers__
            );
  in_stack_000001d8[0x2b] = in_stack_000001d8[0x2c];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
  in_stack_000001d8[0x2a] = uVar4;
  in_stack_000001d8[0x29] = in_stack_000001d8[0x2a];
  if (in_stack_000001d8[0x29] == 0) {
    *(undefined8 *)(in_stack_000001d0 + 0x1e0) = in_stack_000001d8[0x29];
    *(undefined4 *)(unaff_x29 + -0xcc) = 5;
    *(undefined8 *)(in_stack_000001d0 + 0x1d0) = in_stack_000001d8[0x2b];
    *(undefined8 *)(in_stack_000001d0 + 0x1c8) = in_stack_000001d8[0x2b];
    *(undefined8 *)(in_stack_000001d0 + 0x1c0) = 0;
    *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0xcc);
    *(undefined8 *)(in_stack_000001d0 + 0x1b0) = *(undefined8 *)(in_stack_000001d0 + 0x1d0);
    *(undefined8 *)(in_stack_000001d0 + 0x1a8) = *(undefined8 *)(in_stack_000001d0 + 0x1c8);
  }
  else {
    *(undefined8 *)(in_stack_000001d0 + 0x200) = in_stack_000001d8[0x29];
    *(undefined4 *)(unaff_x29 + -0xac) = 5;
    *(undefined8 *)(in_stack_000001d0 + 0x1f0) = in_stack_000001d8[0x2b];
    *(undefined8 *)(in_stack_000001d0 + 0x1e8) = in_stack_000001d8[0x2b];
    NullCheck(*(void **)(in_stack_000001d0 + 0x200));
    uVar4 = VirtualFuncInvoker0<String_t*>::Invoke(3,*(Il2CppObject **)(in_stack_000001d0 + 0x200));
    in_stack_000001d8[0x28] = uVar4;
    *(undefined8 *)(in_stack_000001d0 + 0x1c0) = in_stack_000001d8[0x28];
    *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0xac);
    *(undefined8 *)(in_stack_000001d0 + 0x1b0) = *(undefined8 *)(in_stack_000001d0 + 0x1f0);
    *(undefined8 *)(in_stack_000001d0 + 0x1a8) = *(undefined8 *)(in_stack_000001d0 + 0x1e8);
  }
  NullCheck(*(void **)(in_stack_000001d0 + 0x1b0));
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)(in_stack_000001d0 + 0x1b0)
             ,(long)*(int *)(unaff_x29 + -0xec),*(String_t **)(in_stack_000001d0 + 0x1c0));
  in_stack_000001d8[0x27] = *(undefined8 *)(in_stack_000001d0 + 0x1a8);
  NullCheck((void *)in_stack_000001d8[0x27]);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d8[0x27],6,
             *(String_t **)
              Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_WriteEnum__
            );
  in_stack_000001d8[0x26] = in_stack_000001d8[0x27];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
  uVar4 = OVRPlugin_get_nativeSDKVersion_mBE25B31B01647B580765EA355C508A235EB07E63(0);
  in_stack_000001d8[0x25] = uVar4;
  in_stack_000001d8[0x24] = in_stack_000001d8[0x25];
  if (in_stack_000001d8[0x24] == 0) {
    *(undefined8 *)(in_stack_000001d0 + 0x180) = in_stack_000001d8[0x24];
    *(undefined8 *)(in_stack_000001d0 + 0x170) = in_stack_000001d8[0x26];
    *(undefined8 *)(in_stack_000001d0 + 0x168) = in_stack_000001d8[0x26];
    *(undefined8 *)(in_stack_000001d0 + 0x160) = 0;
    *(undefined8 *)(in_stack_000001d0 + 0x150) = *(undefined8 *)(in_stack_000001d0 + 0x170);
    *(undefined8 *)(in_stack_000001d0 + 0x148) = *(undefined8 *)(in_stack_000001d0 + 0x168);
  }
  else {
    *(undefined8 *)(in_stack_000001d0 + 0x1a0) = in_stack_000001d8[0x24];
    *(undefined8 *)(in_stack_000001d0 + 400) = in_stack_000001d8[0x26];
    *(undefined8 *)(in_stack_000001d0 + 0x188) = in_stack_000001d8[0x26];
    NullCheck(*(void **)(in_stack_000001d0 + 0x1a0));
    uVar4 = VirtualFuncInvoker0<String_t*>::Invoke(3,*(Il2CppObject **)(in_stack_000001d0 + 0x1a0));
    in_stack_000001d8[0x23] = uVar4;
    *(undefined8 *)(in_stack_000001d0 + 0x160) = in_stack_000001d8[0x23];
    *(undefined8 *)(in_stack_000001d0 + 0x150) = *(undefined8 *)(in_stack_000001d0 + 400);
    *(undefined8 *)(in_stack_000001d0 + 0x148) = *(undefined8 *)(in_stack_000001d0 + 0x188);
  }
  NullCheck(*(void **)(in_stack_000001d0 + 0x150));
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)(in_stack_000001d0 + 0x150)
             ,7,*(String_t **)(in_stack_000001d0 + 0x160));
  in_stack_000001d8[0x22] = *(undefined8 *)(in_stack_000001d0 + 0x148);
  NullCheck((void *)in_stack_000001d8[0x22]);
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
            ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d8[0x22],8,
             *(String_t **)
              Method_System_Collections_Generic_Dictionary<string,_JsonSchemaType>_Add__);
  uVar4 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(in_stack_000001d8[0x22],0);
  in_stack_000001d8[0x21] = uVar4;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
  Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(in_stack_000001d8[0x21],0);
  uVar4 = SZArrayNew((Il2CppClass *)*in_stack_00000218,2);
  in_stack_000001d8[0x20] = uVar4;
  in_stack_000001d8[0x1f] = in_stack_000001d8[0x20];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
  uStack000000000000015c =
       OVRManager_get_systemHeadsetType_mCF5CFA237F93EC8DE90C8F9241846C505C7388B1(0);
  *(undefined4 *)(unaff_x29 + -0x34) = uStack000000000000015c;
  Il2CppFakeBox<int>::Il2CppFakeBox
            ((Il2CppFakeBox<int> *)&stack0x000004e8,
             *(Il2CppClass **)
              Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Key__,
             (int *)(unaff_x29 + -0x34));
  uVar4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(&stack0x000004e8,0);
  in_stack_000001d8[0x1a] = uVar4;
  NullCheck((void *)in_stack_000001d8[0x1f]);
  ArrayElementTypeCheck((Il2CppArray *)in_stack_000001d8[0x1f],(void *)in_stack_000001d8[0x1a]);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001d8[0x1f],0,
             (Il2CppObject *)in_stack_000001d8[0x1a]);
  in_stack_000001d8[0x19] = in_stack_000001d8[0x1f];
  uStack000000000000014c =
       OVRManager_get_xrApi_m727D2444A42B1D7E2D1EF3C3ECC493FDDA647712
                 (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
  *(undefined4 *)(unaff_x29 + -0x38) = uStack000000000000014c;
  Il2CppFakeBox<int>::Il2CppFakeBox
            ((Il2CppFakeBox<int> *)&stack0x000004b8,
             *(Il2CppClass **)
              Method_System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_get_Current__,
             (int *)(unaff_x29 + -0x38));
  uVar4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(&stack0x000004b8,0);
  in_stack_000001d8[0x14] = uVar4;
  NullCheck((void *)in_stack_000001d8[0x19]);
  ArrayElementTypeCheck((Il2CppArray *)in_stack_000001d8[0x19],(void *)in_stack_000001d8[0x14]);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001d8[0x19],1,
             (Il2CppObject *)in_stack_000001d8[0x14]);
  Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
            (*(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_QName_CheckPrefixNS__,
             in_stack_000001d8[0x19],0);
  iStack000000000000013c =
       OVRManager_get_xrApi_m727D2444A42B1D7E2D1EF3C3ECC493FDDA647712
                 (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
  if (iStack000000000000013c == 3) {
    uVar4 = SZArrayNew((Il2CppClass *)*in_stack_00000218,2);
    in_stack_000001d8[0x12] = uVar4;
    in_stack_000001d8[0x11] = in_stack_000001d8[0x12];
    uVar4 = OVRManager_get_xrInstance_m337F7A5B861DC2EA9D7FCB585ED53B1BE4D21547
                      (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
    in_stack_000001d8[0x10] = uVar4;
    in_stack_000001d8[0xf] = in_stack_000001d8[0x10];
    uVar4 = Box((Il2CppClass *)*in_stack_00000230,&stack0x00000488);
    in_stack_000001d8[0xe] = uVar4;
    NullCheck((void *)in_stack_000001d8[0x11]);
    ArrayElementTypeCheck((Il2CppArray *)in_stack_000001d8[0x11],(void *)in_stack_000001d8[0xe]);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001d8[0x11],0,
               (Il2CppObject *)in_stack_000001d8[0xe]);
    in_stack_000001d8[0xd] = in_stack_000001d8[0x11];
    uVar4 = OVRManager_get_xrSession_mF16F24B7F737FC50D705676638DD85179ABB9679
                      (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
    in_stack_000001d8[0xc] = uVar4;
    in_stack_000001d8[0xb] = in_stack_000001d8[0xc];
    uVar4 = Box((Il2CppClass *)*in_stack_00000230,&stack0x00000468);
    in_stack_000001d8[10] = uVar4;
    NullCheck((void *)in_stack_000001d8[0xd]);
    ArrayElementTypeCheck((Il2CppArray *)in_stack_000001d8[0xd],(void *)in_stack_000001d8[10]);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001d8[0xd],1,
               (Il2CppObject *)in_stack_000001d8[10]);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)
                Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_ReadObject__
               ,in_stack_000001d8[0xd],0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
  uStack000000000000010c =
       OVRManager_IsUnityAlphaOrBetaVersion_m3281FEF5765FFD207B8BDBB627CC6EDDF18688E0(0);
  if ((uStack000000000000010c & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000200);
    in_stack_000001d8[8] = *(undefined8 *)(lVar6 + 0x178);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(in_stack_000001d8[8],0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001e8);
  uStack00000000000000fc = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
  *(undefined4 *)(unaff_x29 + -0x2c) = uStack00000000000000fc;
  if ((((*(int *)(unaff_x29 + -0x2c) == 0xb) || (*(int *)(unaff_x29 + -0x2c) == 0)) ||
      (*(int *)(unaff_x29 + -0x2c) == 1)) ||
     ((*(int *)(unaff_x29 + -0x2c) == 7 || (*(int *)(unaff_x29 + -0x2c) == 2)))) {
    OVRManager_set_isSupportedPlatform_mE8A33FC72544A424CC63ACAF84F71CEC1EC9CE6F_inline
              (*(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 **)(in_stack_000001d0 + 0x2a0)
               ,true,(MethodInfo *)0x0);
  }
  else {
    OVRManager_set_isSupportedPlatform_mE8A33FC72544A424CC63ACAF84F71CEC1EC9CE6F_inline
              (*(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 **)(in_stack_000001d0 + 0x2a0)
               ,false,(MethodInfo *)0x0);
  }
  uVar3 = OVRManager_get_isSupportedPlatform_m6AE0B37666BB1660CCFC7F9EAD30E550C5D7FBFA_inline
                    (*(OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 **)
                      (in_stack_000001d0 + 0x2a0),(MethodInfo *)0x0);
  if ((uVar3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_WriteObject__
               ,0);
    OVRTelemetryMarker_SetResult_mC26EF54EA58688FAD90DCC02BDF51171CC14A5E3
              (&stack0x000003f8,unaff_x29 + -0x28,3,0);
    uVar4 = in_stack_000001e0[0x24];
    in_stack_000001d8[1] = in_stack_000001e0[0x25];
    *in_stack_000001d8 = uVar4;
    in_stack_000001d8[2] = in_stack_000001e0[0x26];
  }
  else {
    OVRManager_set_chromatic_mC1109A775529EF48476D51176DEC780678AAE0EF
              (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0,0);
    *(undefined1 *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x69) = 0;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
    OVRManager_StaticInitializeMixedRealityCapture_mECD5892929515DFF005276CD46C2B270F0F7A533
              (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
    OVRManager_Initialize_m339CEB2C05C31DCDA1C4390EE2635DC90D538821
              (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
    OVRManager_InitPermissionRequest_m119AB6ECF8AC0DF7B5165493E5F285A734ABCEB5
              (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000208);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000208);
    OVRTelemetryMarker_AddPoint_m5DF94030CCE86DDE95347ECF9A4C581ADF85E2E9
              (&stack0x000003b8,unaff_x29 + -0x28,*(undefined4 *)(lVar6 + 4),0);
    in_stack_000001e0[0x20] = in_stack_000001e0[0x1d];
    in_stack_000001e0[0x1f] = in_stack_000001e0[0x1c];
    in_stack_000001e0[0x21] = in_stack_000001e0[0x1e];
    uVar4 = SZArrayNew((Il2CppClass *)*in_stack_00000218,2);
    in_stack_000001e0[0x1a] = uVar4;
    in_stack_000001e0[0x19] = in_stack_000001e0[0x1a];
    uVar4 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                      ((MethodInfo *)0x0);
    in_stack_000001e0[0x18] = uVar4;
    NullCheck((void *)in_stack_000001e0[0x18]);
    OVRDisplay_get_displayFrequency_mEBAAEE931893607AEA59FEF00916CCEC79C8DF6B
              (in_stack_000001e0[0x18],0);
    uVar4 = Box(*(Il2CppClass **)
                 Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
                ,&stack0x00000390);
    in_stack_000001e0[0x16] = uVar4;
    NullCheck((void *)in_stack_000001e0[0x19]);
    ArrayElementTypeCheck((Il2CppArray *)in_stack_000001e0[0x19],(void *)in_stack_000001e0[0x16]);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001e0[0x19],0,
               (Il2CppObject *)in_stack_000001e0[0x16]);
    in_stack_000001e0[0x15] = in_stack_000001e0[0x19];
    uVar4 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                      ((MethodInfo *)0x0);
    in_stack_000001e0[0x14] = uVar4;
    NullCheck((void *)in_stack_000001e0[0x14]);
    uVar4 = OVRDisplay_get_displayFrequenciesAvailable_mB0AD342C0A7F312A4F7215CA5DC4D8244CF9F9AE
                      (in_stack_000001e0[0x14],0);
    in_stack_000001e0[0x13] = uVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000228);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
    in_stack_000001e0[0x12] = *(undefined8 *)(lVar6 + 8);
    in_stack_000001e0[0x11] = in_stack_000001e0[0x12];
    if (in_stack_000001e0[0x11] == 0) {
      *(undefined8 *)(in_stack_000001d0 + 0x108) = in_stack_000001e0[0x11];
      *(undefined8 *)(in_stack_000001d0 + 0x100) = in_stack_000001e0[0x13];
      *(undefined8 *)(in_stack_000001d0 + 0xf8) = *in_stack_00000238;
      *(undefined8 *)(in_stack_000001d0 + 0xe8) = in_stack_000001e0[0x15];
      *(undefined8 *)(in_stack_000001d0 + 0xe0) = in_stack_000001e0[0x15];
      *(undefined8 *)(in_stack_000001d0 + 0xd8) = *in_stack_00000240;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000228);
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
      in_stack_000001e0[0x10] = *puVar5;
      uVar4 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_CopyTo__);
      in_stack_000001e0[0xf] = uVar4;
      Func_2__ctor_mE82649E276996E9D5EACA7C8F5B15E20B28BE28D
                ((Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *)in_stack_000001e0[0xf],
                 (Il2CppObject *)in_stack_000001e0[0x10],
                 *(long *)
                  Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Value__,
                 (MethodInfo *)0x0);
      in_stack_000001e0[0xe] = in_stack_000001e0[0xf];
      uVar4 = in_stack_000001e0[0xe];
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
      *(undefined8 *)(lVar6 + 8) = uVar4;
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
      Il2CppCodeGenWriteBarrier((void **)(lVar6 + 8),(void *)in_stack_000001e0[0xe]);
      *(undefined8 *)(in_stack_000001d0 + 0x140) = in_stack_000001e0[0xe];
      *(undefined8 *)(in_stack_000001d0 + 0x138) = *(undefined8 *)(in_stack_000001d0 + 0x100);
      *(undefined8 *)(in_stack_000001d0 + 0x130) = *(undefined8 *)(in_stack_000001d0 + 0xf8);
      *(undefined8 *)(in_stack_000001d0 + 0x120) = *(undefined8 *)(in_stack_000001d0 + 0xe8);
      *(undefined8 *)(in_stack_000001d0 + 0x118) = *(undefined8 *)(in_stack_000001d0 + 0xe0);
      *(undefined8 *)(in_stack_000001d0 + 0x110) = *(undefined8 *)(in_stack_000001d0 + 0xd8);
    }
    else {
      *(undefined8 *)(in_stack_000001d0 + 0x140) = in_stack_000001e0[0x11];
      *(undefined8 *)(in_stack_000001d0 + 0x138) = in_stack_000001e0[0x13];
      *(undefined8 *)(in_stack_000001d0 + 0x130) = *in_stack_00000238;
      *(undefined8 *)(in_stack_000001d0 + 0x120) = in_stack_000001e0[0x15];
      *(undefined8 *)(in_stack_000001d0 + 0x118) = in_stack_000001e0[0x15];
      *(undefined8 *)(in_stack_000001d0 + 0x110) = *in_stack_00000240;
    }
    uVar4 = Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisString_t_m3D07AA7226DDD2E4D23FF4442D7A928D78DA1B17
                      (*(Il2CppObject **)(in_stack_000001d0 + 0x138),
                       *(Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 **)
                        (in_stack_000001d0 + 0x140),
                       *(MethodInfo **)
                        Method_System_Xml_Serialization_XmlReflectionImporter_<>c_<ImportClassMapping>b__28_0__
                      );
    in_stack_000001e0[0xd] = uVar4;
    uVar4 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194
                      ((Il2CppObject *)in_stack_000001e0[0xd],
                       *(MethodInfo **)
                        Method_UnityEngine_TextCore_Text_TextProcessingStack<float>__ctor__);
    in_stack_000001e0[0xc] = uVar4;
    uVar4 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD
                      (*(undefined8 *)(in_stack_000001d0 + 0x130),in_stack_000001e0[0xc],0);
    in_stack_000001e0[0xb] = uVar4;
    NullCheck(*(void **)(in_stack_000001d0 + 0x120));
    ArrayElementTypeCheck
              (*(Il2CppArray **)(in_stack_000001d0 + 0x120),(void *)in_stack_000001e0[0xb]);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)
                (in_stack_000001d0 + 0x120),1,(Il2CppObject *)in_stack_000001e0[0xb]);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)(in_stack_000001d0 + 0x110),*(undefined8 *)(in_stack_000001d0 + 0x118)
               ,0);
    if ((*(byte *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x10f) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
      uVar4 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                        ((MethodInfo *)0x0);
      in_stack_000001e0[9] = uVar4;
      NullCheck((void *)in_stack_000001e0[9]);
      OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82(in_stack_000001e0[9],0);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
    uVar3 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(0);
    if ((uVar3 & 1) != 0) {
      uVar4 = Component_GetComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_mF0B4099235709D379979102F6053FD6042D8A77C
                        (*(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)
                          (in_stack_000001d0 + 0x2a0),(MethodInfo *)*in_stack_000001f0);
      in_stack_000001e0[7] = uVar4;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000220);
      uVar3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_000001e0[7],0);
      if ((uVar3 & 1) != 0) {
        uVar4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                          (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
        in_stack_000001e0[5] = uVar4;
        NullCheck((void *)in_stack_000001e0[5]);
        uVar4 = GameObject_AddComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_m9801277350485D9C445EC7E0035EFCF0579BC30E
                          ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                           in_stack_000001e0[5],
                           *(MethodInfo **)
                            Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Entry__
                          );
        in_stack_000001e0[4] = uVar4;
      }
      uVar4 = Component_GetComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_mF0B4099235709D379979102F6053FD6042D8A77C
                        (*(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)
                          (in_stack_000001d0 + 0x2a0),(MethodInfo *)*in_stack_000001f0);
      in_stack_000001e0[3] = uVar4;
      *(undefined8 *)(in_stack_000001d0 + 0x268) = in_stack_000001e0[3];
      in_stack_000001e0[2] = *(undefined8 *)(in_stack_000001d0 + 0x268);
      uVar1 = *(undefined4 *)(*(long *)(in_stack_000001d0 + 0x2a0) + 100);
      NullCheck((void *)in_stack_000001e0[2]);
      *(undefined4 *)(in_stack_000001e0[2] + 0x28) = uVar1;
      *in_stack_000001e0 = *(undefined8 *)(in_stack_000001d0 + 0x268);
      NullCheck((void *)*in_stack_000001e0);
      uVar3 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(*in_stack_000001e0,0);
      if ((uVar3 & 1) == 0) {
        pvVar7 = *(void **)(in_stack_000001d0 + 0x268);
        NullCheck(pvVar7);
        Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar7,1,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
      OVRPlugin_SetDeveloperMode_m666BA62AB965FE5E7E2857C29F619EE186CC8155(1,0);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
    pvVar7 = (void *)OVRManager_get_runtimeSettings_m6DFAF39BFB4B75B251235D43B02696D70BFA897A_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar7);
    *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)((long)pvVar7 + 0x18);
    OVRManager_set_colorGamut_m12885C55A4AF562CF4DA969CE3DFE90B2905509F
              (*(undefined8 *)(in_stack_000001d0 + 0x2a0),*(undefined4 *)(unaff_x29 + -0x30),0);
    uVar1 = *(undefined4 *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x30);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
    OVRPlugin_SetEyeBufferSharpenType_mF9C093758526297D065147C475D3FC473E3CECF5(uVar1,0);
    if ((*(byte *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x100) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
      uVar3 = OVRPlugin_SetSimultaneousHandsAndControllersEnabled_m58736E9A0BB38074C30D9CB6364C1F307882A09A
                        (1,0);
      if ((uVar3 & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
        Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                  (*(undefined8 *)
                    Method_System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_Compare__
                   ,0);
      }
    }
    if ((*(byte *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x101) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
      OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E(0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000208);
      puVar8 = (undefined4 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000208);
      OVRTelemetryMarker_AddPoint_m5DF94030CCE86DDE95347ECF9A4C581ADF85E2E9
                (&stack0x00000268,unaff_x29 + -0x28,*puVar8,0);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
    uVar3 = OVRPlugin_get_localDimmingSupported_m33C94209109E4B84E3F531A9005747FF38D6D75C(0);
    if ((uVar3 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_System_Xml_XmlWellFormedWriter_NamespaceResolverProxy_System_Xml_IXmlNamespaceResolver_GetNamespacesInScope__
                 ,0);
      *(undefined1 *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x106) = 0;
    }
    else {
      bVar2 = *(byte *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x106);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
      OVRPlugin_set_localDimming_mB802F316C5988ACA499BA45E7B9D6590570025AB(bVar2 & 1,0);
    }
    if ((*(byte *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x38) & 1) != 0) {
      XRSettings_set_eyeTextureResolutionScale_m92F1029D68F387D9B0C2DB35DFAB2FD82C64A30B
                (*(undefined4 *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x40),0);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000200);
    *(undefined1 *)(lVar6 + 0x180) = 1;
  }
  il2cpp::utils::
  FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::$_0,false>::
  ~FinallyHelper((FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::__0,false>
                  *)&stack0x00000690);
  return;
}


