/*
FUNCTION_NAME: OVR.OpenVR.IVRTrackedCamera._GetVideoStreamTextureD3D11$$EndInvoke
ENTRY_POINT: 02d858e0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 238
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_17;weak_xr_or_state_hits_21;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_permission_setup;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_3
*/


void OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureD3D11__EndInvoke(void)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  long unaff_x29;
  uint uStack0000000000000014;
  undefined4 uStack000000000000002c;
  uint uStack000000000000006c;
  undefined4 uStack00000000000000dc;
  long in_stack_000001d0;
  undefined8 *in_stack_000001e0;
  undefined8 *in_stack_000001f0;
  undefined8 *in_stack_000001f8;
  undefined8 *in_stack_00000200;
  undefined8 *in_stack_00000208;
  undefined8 *in_stack_00000210;
  undefined8 *in_stack_00000218;
  undefined8 *in_stack_00000220;
  undefined8 *in_stack_00000228;
  undefined8 *in_stack_00000238;
  undefined8 *in_stack_00000240;
  
  OVRManager_Initialize_m339CEB2C05C31DCDA1C4390EE2635DC90D538821
            (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
  OVRManager_InitPermissionRequest_m119AB6ECF8AC0DF7B5165493E5F285A734ABCEB5
            (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000208);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000208);
  OVRTelemetryMarker_AddPoint_m5DF94030CCE86DDE95347ECF9A4C581ADF85E2E9
            (&stack0x000003b8,unaff_x29 + -0x28,*(undefined4 *)(lVar4 + 4),0);
  in_stack_000001e0[0x20] = in_stack_000001e0[0x1d];
  in_stack_000001e0[0x1f] = in_stack_000001e0[0x1c];
  in_stack_000001e0[0x21] = in_stack_000001e0[0x1e];
  uVar5 = SZArrayNew((Il2CppClass *)*in_stack_00000218,2);
  in_stack_000001e0[0x1a] = uVar5;
  in_stack_000001e0[0x19] = in_stack_000001e0[0x1a];
  uVar5 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline((MethodInfo *)0x0)
  ;
  in_stack_000001e0[0x18] = uVar5;
  NullCheck((void *)in_stack_000001e0[0x18]);
  uStack00000000000000dc =
       OVRDisplay_get_displayFrequency_mEBAAEE931893607AEA59FEF00916CCEC79C8DF6B
                 (in_stack_000001e0[0x18],0);
  uVar5 = Box(*(Il2CppClass **)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
              ,&stack0x00000390);
  in_stack_000001e0[0x16] = uVar5;
  NullCheck((void *)in_stack_000001e0[0x19]);
  ArrayElementTypeCheck((Il2CppArray *)in_stack_000001e0[0x19],(void *)in_stack_000001e0[0x16]);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000001e0[0x19],0,
             (Il2CppObject *)in_stack_000001e0[0x16]);
  in_stack_000001e0[0x15] = in_stack_000001e0[0x19];
  uVar5 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline((MethodInfo *)0x0)
  ;
  in_stack_000001e0[0x14] = uVar5;
  NullCheck((void *)in_stack_000001e0[0x14]);
  uVar5 = OVRDisplay_get_displayFrequenciesAvailable_mB0AD342C0A7F312A4F7215CA5DC4D8244CF9F9AE
                    (in_stack_000001e0[0x14],0);
  in_stack_000001e0[0x13] = uVar5;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000228);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
  in_stack_000001e0[0x12] = *(undefined8 *)(lVar4 + 8);
  in_stack_000001e0[0x11] = in_stack_000001e0[0x12];
  if (in_stack_000001e0[0x11] == 0) {
    *(undefined8 *)(in_stack_000001d0 + 0x108) = in_stack_000001e0[0x11];
    *(undefined8 *)(in_stack_000001d0 + 0x100) = in_stack_000001e0[0x13];
    *(undefined8 *)(in_stack_000001d0 + 0xf8) = *in_stack_00000238;
    *(undefined8 *)(in_stack_000001d0 + 0xe8) = in_stack_000001e0[0x15];
    *(undefined8 *)(in_stack_000001d0 + 0xe0) = in_stack_000001e0[0x15];
    *(undefined8 *)(in_stack_000001d0 + 0xd8) = *in_stack_00000240;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000228);
    puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
    in_stack_000001e0[0x10] = *puVar6;
    uVar5 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_CopyTo__);
    in_stack_000001e0[0xf] = uVar5;
    Func_2__ctor_mE82649E276996E9D5EACA7C8F5B15E20B28BE28D
              ((Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 *)in_stack_000001e0[0xf],
               (Il2CppObject *)in_stack_000001e0[0x10],
               *(long *)
                Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Value__,
               (MethodInfo *)0x0);
    in_stack_000001e0[0xe] = in_stack_000001e0[0xf];
    uVar5 = in_stack_000001e0[0xe];
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
    *(undefined8 *)(lVar4 + 8) = uVar5;
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000228);
    Il2CppCodeGenWriteBarrier((void **)(lVar4 + 8),(void *)in_stack_000001e0[0xe]);
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
  uVar5 = Enumerable_Select_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisString_t_m3D07AA7226DDD2E4D23FF4442D7A928D78DA1B17
                    (*(Il2CppObject **)(in_stack_000001d0 + 0x138),
                     *(Func_2_t5ACB813DEA6873041E3CE5A28AE88A73E01E6EF8 **)
                      (in_stack_000001d0 + 0x140),
                     *(MethodInfo **)
                      Method_System_Xml_Serialization_XmlReflectionImporter_<>c_<ImportClassMapping>b__28_0__
                    );
  in_stack_000001e0[0xd] = uVar5;
  uVar5 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194
                    ((Il2CppObject *)in_stack_000001e0[0xd],
                     *(MethodInfo **)
                      Method_UnityEngine_TextCore_Text_TextProcessingStack<float>__ctor__);
  in_stack_000001e0[0xc] = uVar5;
  uVar5 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD
                    (*(undefined8 *)(in_stack_000001d0 + 0x130),in_stack_000001e0[0xc],0);
  in_stack_000001e0[0xb] = uVar5;
  NullCheck(*(void **)(in_stack_000001d0 + 0x120));
  ArrayElementTypeCheck(*(Il2CppArray **)(in_stack_000001d0 + 0x120),(void *)in_stack_000001e0[0xb])
  ;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(in_stack_000001d0 + 0x120)
             ,1,(Il2CppObject *)in_stack_000001e0[0xb]);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
  Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
            (*(undefined8 *)(in_stack_000001d0 + 0x110),*(undefined8 *)(in_stack_000001d0 + 0x118),0
            );
  if ((*(byte *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x10f) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
    uVar5 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                      ((MethodInfo *)0x0);
    in_stack_000001e0[9] = uVar5;
    NullCheck((void *)in_stack_000001e0[9]);
    OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82(in_stack_000001e0[9],0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
  uStack000000000000006c = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(0);
  if ((uStack000000000000006c & 1) != 0) {
    uVar5 = Component_GetComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_mF0B4099235709D379979102F6053FD6042D8A77C
                      (*(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)
                        (in_stack_000001d0 + 0x2a0),(MethodInfo *)*in_stack_000001f0);
    in_stack_000001e0[7] = uVar5;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000220);
    uVar3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_000001e0[7],0);
    if ((uVar3 & 1) != 0) {
      uVar5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                        (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
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
                      (*(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)
                        (in_stack_000001d0 + 0x2a0),(MethodInfo *)*in_stack_000001f0);
    in_stack_000001e0[3] = uVar5;
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
  uStack000000000000002c =
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
  uStack0000000000000014 =
       OVRPlugin_get_localDimmingSupported_m33C94209109E4B84E3F531A9005747FF38D6D75C(0);
  if ((uStack0000000000000014 & 1) == 0) {
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
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000200);
  *(undefined1 *)(lVar4 + 0x180) = 1;
  il2cpp::utils::
  FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::$_0,false>::
  ~FinallyHelper((FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::__0,false>
                  *)&stack0x00000690);
  return;
}


