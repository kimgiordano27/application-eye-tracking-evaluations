/*
FUNCTION_NAME: OVR.OpenVR.IVRTrackedCamera._AcquireVideoStreamingService$$EndInvoke
ENTRY_POINT: 02d84cd8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 249
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_11;telemetry_or_network_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_11;functionality_data_collection_or_telemetry_hits_8
*/


void OVR_OpenVR_IVRTrackedCamera__AcquireVideoStreamingService__EndInvoke(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  void *pvVar8;
  undefined4 *puVar9;
  long unaff_x29;
  uint uStack00000000000001bc;
  undefined8 *in_stack_000001d0;
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
  
  in_stack_000001d0[10] = in_stack_000001d0[0x16];
  in_stack_000001d0[9] = in_stack_000001d0[0x15];
  in_stack_000001d0[0xb] = in_stack_000001d0[0x17];
  OVRTelemetry_AddSDKVersionAnnotation_m23002870270198A4E6D69F42AD048B1FAC6B94D1
            (&stack0x00000628,&stack0x00000610,0);
  in_stack_000001d0[0x10] = in_stack_000001d0[0xd];
  in_stack_000001d0[0xf] = in_stack_000001d0[0xc];
  in_stack_000001d0[0x11] = in_stack_000001d0[0xe];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
  uVar5 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                    ((MethodInfo *)0x0);
  in_stack_000001d0[8] = uVar5;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000220);
  uStack00000000000001bc =
       Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(in_stack_000001d0[8],0);
  if ((uStack00000000000001bc & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
    OVRManager_set_instance_m268BE0B7206FEB81BA8B8EB5221AB2BA10E91E0E_inline
              ((OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)in_stack_000001d0[0x54],
               (MethodInfo *)0x0);
    uVar5 = OVRRuntimeSettings_GetRuntimeSettings_m357C35DCF6941F52EDB4FD95F9FEBC78DDFE62AB(0);
    in_stack_000001d8[0x36] = uVar5;
    OVRManager_set_runtimeSettings_m66D09D518E906F1A50738B3BFA760EE8B117C469_inline
              ((OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1 *)
               in_stack_000001d8[0x36],(MethodInfo *)0x0);
    uVar5 = SZArrayNew(*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
                       ,9);
    in_stack_000001d8[0x35] = uVar5;
    in_stack_000001d8[0x34] = in_stack_000001d8[0x35];
    NullCheck((void *)in_stack_000001d8[0x34]);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d8[0x34],0,
               *(String_t **)
                Method_System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__
              );
    in_stack_000001d8[0x33] = in_stack_000001d8[0x34];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001e8);
    uVar5 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(0);
    in_stack_000001d8[0x32] = uVar5;
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
    puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000210);
    in_stack_000001d8[0x2f] = *puVar6;
    in_stack_000001d8[0x2e] = in_stack_000001d8[0x2f];
    if (in_stack_000001d8[0x2e] == 0) {
      in_stack_000001d0[0x48] = in_stack_000001d8[0x2e];
      *(undefined4 *)(unaff_x29 + -0x6c) = 3;
      in_stack_000001d0[0x46] = in_stack_000001d8[0x30];
      in_stack_000001d0[0x45] = in_stack_000001d8[0x30];
      in_stack_000001d0[0x44] = 0;
      *(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -0x6c);
      in_stack_000001d0[0x42] = in_stack_000001d0[0x46];
      in_stack_000001d0[0x41] = in_stack_000001d0[0x45];
    }
    else {
      in_stack_000001d0[0x4c] = in_stack_000001d8[0x2e];
      *(undefined4 *)(unaff_x29 + -0x4c) = 3;
      in_stack_000001d0[0x4a] = in_stack_000001d8[0x30];
      in_stack_000001d0[0x49] = in_stack_000001d8[0x30];
      NullCheck((void *)in_stack_000001d0[0x4c]);
      uVar5 = VirtualFuncInvoker0<String_t*>::Invoke(3,(Il2CppObject *)in_stack_000001d0[0x4c]);
      in_stack_000001d8[0x2d] = uVar5;
      in_stack_000001d0[0x44] = in_stack_000001d8[0x2d];
      *(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -0x4c);
      in_stack_000001d0[0x42] = in_stack_000001d0[0x4a];
      in_stack_000001d0[0x41] = in_stack_000001d0[0x49];
    }
    NullCheck((void *)in_stack_000001d0[0x42]);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d0[0x42],
               (long)*(int *)(unaff_x29 + -0x8c),(String_t *)in_stack_000001d0[0x44]);
    in_stack_000001d8[0x2c] = in_stack_000001d0[0x41];
    NullCheck((void *)in_stack_000001d8[0x2c]);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d8[0x2c],4,
               *(String_t **)
                Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo_FixupMembers__
              );
    in_stack_000001d8[0x2b] = in_stack_000001d8[0x2c];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
    uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
    in_stack_000001d8[0x2a] = uVar5;
    in_stack_000001d8[0x29] = in_stack_000001d8[0x2a];
    if (in_stack_000001d8[0x29] == 0) {
      in_stack_000001d0[0x3c] = in_stack_000001d8[0x29];
      *(undefined4 *)(unaff_x29 + -0xcc) = 5;
      in_stack_000001d0[0x3a] = in_stack_000001d8[0x2b];
      in_stack_000001d0[0x39] = in_stack_000001d8[0x2b];
      in_stack_000001d0[0x38] = 0;
      *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0xcc);
      in_stack_000001d0[0x36] = in_stack_000001d0[0x3a];
      in_stack_000001d0[0x35] = in_stack_000001d0[0x39];
    }
    else {
      in_stack_000001d0[0x40] = in_stack_000001d8[0x29];
      *(undefined4 *)(unaff_x29 + -0xac) = 5;
      in_stack_000001d0[0x3e] = in_stack_000001d8[0x2b];
      in_stack_000001d0[0x3d] = in_stack_000001d8[0x2b];
      NullCheck((void *)in_stack_000001d0[0x40]);
      uVar5 = VirtualFuncInvoker0<String_t*>::Invoke(3,(Il2CppObject *)in_stack_000001d0[0x40]);
      in_stack_000001d8[0x28] = uVar5;
      in_stack_000001d0[0x38] = in_stack_000001d8[0x28];
      *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0xac);
      in_stack_000001d0[0x36] = in_stack_000001d0[0x3e];
      in_stack_000001d0[0x35] = in_stack_000001d0[0x3d];
    }
    NullCheck((void *)in_stack_000001d0[0x36]);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d0[0x36],
               (long)*(int *)(unaff_x29 + -0xec),(String_t *)in_stack_000001d0[0x38]);
    in_stack_000001d8[0x27] = in_stack_000001d0[0x35];
    NullCheck((void *)in_stack_000001d8[0x27]);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d8[0x27],6,
               *(String_t **)
                Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_WriteEnum__
              );
    in_stack_000001d8[0x26] = in_stack_000001d8[0x27];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
    uVar5 = OVRPlugin_get_nativeSDKVersion_mBE25B31B01647B580765EA355C508A235EB07E63(0);
    in_stack_000001d8[0x25] = uVar5;
    in_stack_000001d8[0x24] = in_stack_000001d8[0x25];
    if (in_stack_000001d8[0x24] == 0) {
      in_stack_000001d0[0x30] = in_stack_000001d8[0x24];
      in_stack_000001d0[0x2e] = in_stack_000001d8[0x26];
      in_stack_000001d0[0x2d] = in_stack_000001d8[0x26];
      in_stack_000001d0[0x2c] = 0;
      in_stack_000001d0[0x2a] = in_stack_000001d0[0x2e];
      in_stack_000001d0[0x29] = in_stack_000001d0[0x2d];
    }
    else {
      in_stack_000001d0[0x34] = in_stack_000001d8[0x24];
      in_stack_000001d0[0x32] = in_stack_000001d8[0x26];
      in_stack_000001d0[0x31] = in_stack_000001d8[0x26];
      NullCheck((void *)in_stack_000001d0[0x34]);
      uVar5 = VirtualFuncInvoker0<String_t*>::Invoke(3,(Il2CppObject *)in_stack_000001d0[0x34]);
      in_stack_000001d8[0x23] = uVar5;
      in_stack_000001d0[0x2c] = in_stack_000001d8[0x23];
      in_stack_000001d0[0x2a] = in_stack_000001d0[0x32];
      in_stack_000001d0[0x29] = in_stack_000001d0[0x31];
    }
    NullCheck((void *)in_stack_000001d0[0x2a]);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d0[0x2a],7,
               (String_t *)in_stack_000001d0[0x2c]);
    in_stack_000001d8[0x22] = in_stack_000001d0[0x29];
    NullCheck((void *)in_stack_000001d8[0x22]);
    StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
              ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)in_stack_000001d8[0x22],8,
               *(String_t **)
                Method_System_Collections_Generic_Dictionary<string,_JsonSchemaType>_Add__);
    uVar5 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(in_stack_000001d8[0x22],0);
    in_stack_000001d8[0x21] = uVar5;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(in_stack_000001d8[0x21],0);
    uVar5 = SZArrayNew((Il2CppClass *)*in_stack_00000218,2);
    in_stack_000001d8[0x20] = uVar5;
    in_stack_000001d8[0x1f] = in_stack_000001d8[0x20];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
    uVar2 = OVRManager_get_systemHeadsetType_mCF5CFA237F93EC8DE90C8F9241846C505C7388B1(0);
    *(undefined4 *)(unaff_x29 + -0x34) = uVar2;
    Il2CppFakeBox<int>::Il2CppFakeBox
              ((Il2CppFakeBox<int> *)&stack0x000004e8,
               *(Il2CppClass **)
                Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Key__,
               (int *)(unaff_x29 + -0x34));
    uVar5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(&stack0x000004e8,0);
    in_stack_000001d8[0x1a] = uVar5;
    NullCheck((void *)in_stack_000001d8[0x1f]);
    ArrayElementTypeCheck((Il2CppArray *)in_stack_000001d8[0x1f],(void *)in_stack_000001d8[0x1a]);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001d8[0x1f],0,
               (Il2CppObject *)in_stack_000001d8[0x1a]);
    in_stack_000001d8[0x19] = in_stack_000001d8[0x1f];
    uVar2 = OVRManager_get_xrApi_m727D2444A42B1D7E2D1EF3C3ECC493FDDA647712
                      (in_stack_000001d0[0x54],0);
    *(undefined4 *)(unaff_x29 + -0x38) = uVar2;
    Il2CppFakeBox<int>::Il2CppFakeBox
              ((Il2CppFakeBox<int> *)&stack0x000004b8,
               *(Il2CppClass **)
                Method_System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_get_Current__,
               (int *)(unaff_x29 + -0x38));
    uVar5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(&stack0x000004b8,0);
    in_stack_000001d8[0x14] = uVar5;
    NullCheck((void *)in_stack_000001d8[0x19]);
    ArrayElementTypeCheck((Il2CppArray *)in_stack_000001d8[0x19],(void *)in_stack_000001d8[0x14]);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001d8[0x19],1,
               (Il2CppObject *)in_stack_000001d8[0x14]);
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_QName_CheckPrefixNS__,
               in_stack_000001d8[0x19],0);
    iVar3 = OVRManager_get_xrApi_m727D2444A42B1D7E2D1EF3C3ECC493FDDA647712
                      (in_stack_000001d0[0x54],0);
    if (iVar3 == 3) {
      uVar5 = SZArrayNew((Il2CppClass *)*in_stack_00000218,2);
      in_stack_000001d8[0x12] = uVar5;
      in_stack_000001d8[0x11] = in_stack_000001d8[0x12];
      uVar5 = OVRManager_get_xrInstance_m337F7A5B861DC2EA9D7FCB585ED53B1BE4D21547
                        (in_stack_000001d0[0x54],0);
      in_stack_000001d8[0x10] = uVar5;
      in_stack_000001d8[0xf] = in_stack_000001d8[0x10];
      uVar5 = Box((Il2CppClass *)*in_stack_00000230,&stack0x00000488);
      in_stack_000001d8[0xe] = uVar5;
      NullCheck((void *)in_stack_000001d8[0x11]);
      ArrayElementTypeCheck((Il2CppArray *)in_stack_000001d8[0x11],(void *)in_stack_000001d8[0xe]);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001d8[0x11],0
                 ,(Il2CppObject *)in_stack_000001d8[0xe]);
      in_stack_000001d8[0xd] = in_stack_000001d8[0x11];
      uVar5 = OVRManager_get_xrSession_mF16F24B7F737FC50D705676638DD85179ABB9679
                        (in_stack_000001d0[0x54],0);
      in_stack_000001d8[0xc] = uVar5;
      in_stack_000001d8[0xb] = in_stack_000001d8[0xc];
      uVar5 = Box((Il2CppClass *)*in_stack_00000230,&stack0x00000468);
      in_stack_000001d8[10] = uVar5;
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
    uVar4 = OVRManager_IsUnityAlphaOrBetaVersion_m3281FEF5765FFD207B8BDBB627CC6EDDF18688E0(0);
    if ((uVar4 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000200);
      in_stack_000001d8[8] = *(undefined8 *)(lVar7 + 0x178);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(in_stack_000001d8[8],0);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001e8);
    uVar2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
    *(undefined4 *)(unaff_x29 + -0x2c) = uVar2;
    if ((((*(int *)(unaff_x29 + -0x2c) == 0xb) || (*(int *)(unaff_x29 + -0x2c) == 0)) ||
        (*(int *)(unaff_x29 + -0x2c) == 1)) ||
       ((*(int *)(unaff_x29 + -0x2c) == 7 || (*(int *)(unaff_x29 + -0x2c) == 2)))) {
      OVRManager_set_isSupportedPlatform_mE8A33FC72544A424CC63ACAF84F71CEC1EC9CE6F_inline
                ((OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)in_stack_000001d0[0x54],
                 true,(MethodInfo *)0x0);
    }
    else {
      OVRManager_set_isSupportedPlatform_mE8A33FC72544A424CC63ACAF84F71CEC1EC9CE6F_inline
                ((OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)in_stack_000001d0[0x54],
                 false,(MethodInfo *)0x0);
    }
    uVar4 = OVRManager_get_isSupportedPlatform_m6AE0B37666BB1660CCFC7F9EAD30E550C5D7FBFA_inline
                      ((OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
                       in_stack_000001d0[0x54],(MethodInfo *)0x0);
    if ((uVar4 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_WriteObject__
                 ,0);
      OVRTelemetryMarker_SetResult_mC26EF54EA58688FAD90DCC02BDF51171CC14A5E3
                (&stack0x000003f8,unaff_x29 + -0x28,3,0);
      uVar5 = in_stack_000001e0[0x24];
      in_stack_000001d8[1] = in_stack_000001e0[0x25];
      *in_stack_000001d8 = uVar5;
      in_stack_000001d8[2] = in_stack_000001e0[0x26];
    }
    else {
      OVRManager_set_chromatic_mC1109A775529EF48476D51176DEC780678AAE0EF
                (in_stack_000001d0[0x54],0,0);
      *(undefined1 *)(in_stack_000001d0[0x54] + 0x69) = 0;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
      OVRManager_StaticInitializeMixedRealityCapture_mECD5892929515DFF005276CD46C2B270F0F7A533
                (in_stack_000001d0[0x54],0);
      OVRManager_Initialize_m339CEB2C05C31DCDA1C4390EE2635DC90D538821(in_stack_000001d0[0x54],0);
      OVRManager_InitPermissionRequest_m119AB6ECF8AC0DF7B5165493E5F285A734ABCEB5
                (in_stack_000001d0[0x54],0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000208);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000208);
      OVRTelemetryMarker_AddPoint_m5DF94030CCE86DDE95347ECF9A4C581ADF85E2E9
                (&stack0x000003b8,unaff_x29 + -0x28,*(undefined4 *)(lVar7 + 4),0);
      in_stack_000001e0[0x20] = in_stack_000001e0[0x1d];
      in_stack_000001e0[0x1f] = in_stack_000001e0[0x1c];
      in_stack_000001e0[0x21] = in_stack_000001e0[0x1e];
      uVar5 = SZArrayNew((Il2CppClass *)*in_stack_00000218,2);
      in_stack_000001e0[0x1a] = uVar5;
      in_stack_000001e0[0x19] = in_stack_000001e0[0x1a];
      uVar5 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                        ((MethodInfo *)0x0);
      in_stack_000001e0[0x18] = uVar5;
      NullCheck((void *)in_stack_000001e0[0x18]);
      OVRDisplay_get_displayFrequency_mEBAAEE931893607AEA59FEF00916CCEC79C8DF6B
                (in_stack_000001e0[0x18],0);
      uVar5 = Box(*(Il2CppClass **)
                   Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
                  ,&stack0x00000390);
      in_stack_000001e0[0x16] = uVar5;
      NullCheck((void *)in_stack_000001e0[0x19]);
      ArrayElementTypeCheck((Il2CppArray *)in_stack_000001e0[0x19],(void *)in_stack_000001e0[0x16]);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001e0[0x19],0
                 ,(Il2CppObject *)in_stack_000001e0[0x16]);
      in_stack_000001e0[0x15] = in_stack_000001e0[0x19];
      uVar5 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                        ((MethodInfo *)0x0);
      in_stack_000001e0[0x14] = uVar5;
      NullCheck((void *)in_stack_000001e0[0x14]);
      uVar5 = OVRDisplay_get_displayFrequenciesAvailable_mB0AD342C0A7F312A4F7215CA5DC4D8244CF9F9AE
                        (in_stack_000001e0[0x14],0);
      in_stack_000001e0[0x13] = uVar5;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000228);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
      in_stack_000001e0[0x12] = *(undefined8 *)(lVar7 + 8);
      in_stack_000001e0[0x11] = in_stack_000001e0[0x12];
      if (in_stack_000001e0[0x11] == 0) {
        in_stack_000001d0[0x21] = in_stack_000001e0[0x11];
        in_stack_000001d0[0x20] = in_stack_000001e0[0x13];
        in_stack_000001d0[0x1f] = *in_stack_00000238;
        in_stack_000001d0[0x1d] = in_stack_000001e0[0x15];
        in_stack_000001d0[0x1c] = in_stack_000001e0[0x15];
        in_stack_000001d0[0x1b] = *in_stack_00000240;
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000228);
        puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
        in_stack_000001e0[0x10] = *puVar6;
        uVar5 = il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            Method_System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_CopyTo__)
        ;
        in_stack_000001e0[0xf] = uVar5;
        Func_2__ctor_mE82649E276996E9D5EACA7C8F5B15E20B28BE28D
                  ((Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *)in_stack_000001e0[0xf],
                   (Il2CppObject *)in_stack_000001e0[0x10],
                   *(long *)
                    Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Value__
                   ,(MethodInfo *)0x0);
        in_stack_000001e0[0xe] = in_stack_000001e0[0xf];
        uVar5 = in_stack_000001e0[0xe];
        lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
        *(undefined8 *)(lVar7 + 8) = uVar5;
        lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
        Il2CppCodeGenWriteBarrier((void **)(lVar7 + 8),(void *)in_stack_000001e0[0xe]);
        in_stack_000001d0[0x28] = in_stack_000001e0[0xe];
        in_stack_000001d0[0x27] = in_stack_000001d0[0x20];
        in_stack_000001d0[0x26] = in_stack_000001d0[0x1f];
        in_stack_000001d0[0x24] = in_stack_000001d0[0x1d];
        in_stack_000001d0[0x23] = in_stack_000001d0[0x1c];
        in_stack_000001d0[0x22] = in_stack_000001d0[0x1b];
      }
      else {
        in_stack_000001d0[0x28] = in_stack_000001e0[0x11];
        in_stack_000001d0[0x27] = in_stack_000001e0[0x13];
        in_stack_000001d0[0x26] = *in_stack_00000238;
        in_stack_000001d0[0x24] = in_stack_000001e0[0x15];
        in_stack_000001d0[0x23] = in_stack_000001e0[0x15];
        in_stack_000001d0[0x22] = *in_stack_00000240;
      }
      uVar5 = Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisString_t_m3D07AA7226DDD2E4D23FF4442D7A928D78DA1B17
                        ((Il2CppObject *)in_stack_000001d0[0x27],
                         (Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *)in_stack_000001d0[0x28]
                         ,*(MethodInfo **)
                           Method_System_Xml_Serialization_XmlReflectionImporter_<>c_<ImportClassMapping>b__28_0__
                        );
      in_stack_000001e0[0xd] = uVar5;
      uVar5 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194
                        ((Il2CppObject *)in_stack_000001e0[0xd],
                         *(MethodInfo **)
                          Method_UnityEngine_TextCore_Text_TextProcessingStack<float>__ctor__);
      in_stack_000001e0[0xc] = uVar5;
      uVar5 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD
                        (in_stack_000001d0[0x26],in_stack_000001e0[0xc],0);
      in_stack_000001e0[0xb] = uVar5;
      NullCheck((void *)in_stack_000001d0[0x24]);
      ArrayElementTypeCheck((Il2CppArray *)in_stack_000001d0[0x24],(void *)in_stack_000001e0[0xb]);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001d0[0x24],1
                 ,(Il2CppObject *)in_stack_000001e0[0xb]);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
      Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                (in_stack_000001d0[0x22],in_stack_000001d0[0x23],0);
      if ((*(byte *)(in_stack_000001d0[0x54] + 0x10f) & 1) != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
        uVar5 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                          ((MethodInfo *)0x0);
        in_stack_000001e0[9] = uVar5;
        NullCheck((void *)in_stack_000001e0[9]);
        OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82(in_stack_000001e0[9],0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
      uVar4 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(0);
      if ((uVar4 & 1) != 0) {
        uVar5 = Component_GetComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_mF0B4099235709D379979102F6053FD6042D8A77C
                          ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
                           in_stack_000001d0[0x54],(MethodInfo *)*in_stack_000001f0);
        in_stack_000001e0[7] = uVar5;
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000220);
        uVar4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_000001e0[7],0)
        ;
        if ((uVar4 & 1) != 0) {
          uVar5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                            (in_stack_000001d0[0x54],0);
          in_stack_000001e0[5] = uVar5;
          NullCheck((void *)in_stack_000001e0[5]);
          uVar5 = GameObject_AddComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_m9801277350485D9C445EC7E0035EFCF0579BC30E
                            ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                             in_stack_000001e0[5],
                             *(MethodInfo **)
                              Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Entry__
                            );
          in_stack_000001e0[4] = uVar5;
        }
        uVar5 = Component_GetComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_mF0B4099235709D379979102F6053FD6042D8A77C
                          ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
                           in_stack_000001d0[0x54],(MethodInfo *)*in_stack_000001f0);
        in_stack_000001e0[3] = uVar5;
        in_stack_000001d0[0x4d] = in_stack_000001e0[3];
        in_stack_000001e0[2] = in_stack_000001d0[0x4d];
        uVar2 = *(undefined4 *)(in_stack_000001d0[0x54] + 100);
        NullCheck((void *)in_stack_000001e0[2]);
        *(undefined4 *)(in_stack_000001e0[2] + 0x28) = uVar2;
        *in_stack_000001e0 = in_stack_000001d0[0x4d];
        NullCheck((void *)*in_stack_000001e0);
        uVar4 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1
                          (*in_stack_000001e0,0);
        if ((uVar4 & 1) == 0) {
          pvVar8 = (void *)in_stack_000001d0[0x4d];
          NullCheck(pvVar8);
          Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar8,1,0);
        }
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
        OVRPlugin_SetDeveloperMode_m666BA62AB965FE5E7E2857C29F619EE186CC8155(1,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
      pvVar8 = (void *)OVRManager_get_runtimeSettings_m6DFAF39BFB4B75B251235D43B02696D70BFA897A_inline
                                 ((MethodInfo *)0x0);
      NullCheck(pvVar8);
      *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)((long)pvVar8 + 0x18);
      OVRManager_set_colorGamut_m12885C55A4AF562CF4DA969CE3DFE90B2905509F
                (in_stack_000001d0[0x54],*(undefined4 *)(unaff_x29 + -0x30),0);
      uVar2 = *(undefined4 *)(in_stack_000001d0[0x54] + 0x30);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
      OVRPlugin_SetEyeBufferSharpenType_mF9C093758526297D065147C475D3FC473E3CECF5(uVar2,0);
      if ((*(byte *)(in_stack_000001d0[0x54] + 0x100) & 1) != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
        uVar4 = OVRPlugin_SetSimultaneousHandsAndControllersEnabled_m58736E9A0BB38074C30D9CB6364C1F307882A09A
                          (1,0);
        if ((uVar4 & 1) == 0) {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
          Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                    (*(undefined8 *)
                      Method_System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_Compare__
                     ,0);
        }
      }
      if ((*(byte *)(in_stack_000001d0[0x54] + 0x101) & 1) != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
        OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E(0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000208);
        puVar9 = (undefined4 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000208);
        OVRTelemetryMarker_AddPoint_m5DF94030CCE86DDE95347ECF9A4C581ADF85E2E9
                  (&stack0x00000268,unaff_x29 + -0x28,*puVar9,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
      uVar4 = OVRPlugin_get_localDimmingSupported_m33C94209109E4B84E3F531A9005747FF38D6D75C(0);
      if ((uVar4 & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)
                    Method_System_Xml_XmlWellFormedWriter_NamespaceResolverProxy_System_Xml_IXmlNamespaceResolver_GetNamespacesInScope__
                   ,0);
        *(undefined1 *)(in_stack_000001d0[0x54] + 0x106) = 0;
      }
      else {
        bVar1 = *(byte *)(in_stack_000001d0[0x54] + 0x106);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
        OVRPlugin_set_localDimming_mB802F316C5988ACA499BA45E7B9D6590570025AB(bVar1 & 1,0);
      }
      if ((*(byte *)(in_stack_000001d0[0x54] + 0x38) & 1) != 0) {
        XRSettings_set_eyeTextureResolutionScale_m92F1029D68F387D9B0C2DB35DFAB2FD82C64A30B
                  (*(undefined4 *)(in_stack_000001d0[0x54] + 0x40),0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000200);
      *(undefined1 *)(lVar7 + 0x180) = 1;
    }
  }
  else {
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(in_stack_000001d0[0x54],0,0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000220);
    Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(in_stack_000001d0[0x54],0);
    OVRTelemetryMarker_SetResult_mC26EF54EA58688FAD90DCC02BDF51171CC14A5E3
              (&stack0x000005c8,unaff_x29 + -0x28,3,0);
    in_stack_000001d0[4] = in_stack_000001d0[1];
    in_stack_000001d0[3] = *in_stack_000001d0;
    in_stack_000001d0[5] = in_stack_000001d0[2];
  }
  il2cpp::utils::
  FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::$_0,false>::
  ~FinallyHelper((FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::__0,false>
                  *)&stack0x00000690);
  return;
}


