/*
FUNCTION_NAME: OVR.OpenVR.IVRTrackedCamera._ReleaseVideoStreamTextureGL$$BeginInvoke
ENTRY_POINT: 02d85de8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_19;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVR_OpenVR_IVRTrackedCamera__ReleaseVideoStreamTextureGL__BeginInvoke(undefined8 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  long lVar7;
  long unaff_x29;
  uint uStack0000000000000014;
  undefined4 uStack000000000000002c;
  uint uStack000000000000003c;
  uint uStack000000000000005c;
  undefined8 in_stack_00000060;
  long in_stack_000001d0;
  undefined8 *in_stack_000001e0;
  undefined8 *in_stack_000001f0;
  undefined8 *in_stack_000001f8;
  undefined8 *in_stack_00000200;
  undefined8 *in_stack_00000208;
  undefined8 *in_stack_00000210;
  
  in_stack_000001e0[7] = in_stack_00000060;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  uStack000000000000005c =
       Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_000001e0[7],0);
  if ((uStack000000000000005c & 1) != 0) {
    uVar4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                      (*(undefined8 *)(in_stack_000001d0 + 0x2a0),0);
    in_stack_000001e0[5] = uVar4;
    NullCheck((void *)in_stack_000001e0[5]);
    uVar4 = GameObject_AddComponent_TisOVRSystemPerfMetricsTcpServer_tD146C2687DE96043EC01031488CFB10442814F86_m9801277350485D9C445EC7E0035EFCF0579BC30E
                      ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)in_stack_000001e0[5],
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
  uStack000000000000003c =
       Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(*in_stack_000001e0,0);
  if ((uStack000000000000003c & 1) == 0) {
    pvVar5 = *(void **)(in_stack_000001d0 + 0x268);
    NullCheck(pvVar5);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar5,1,0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
  OVRPlugin_SetDeveloperMode_m666BA62AB965FE5E7E2857C29F619EE186CC8155(1,0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
  pvVar5 = (void *)OVRManager_get_runtimeSettings_m6DFAF39BFB4B75B251235D43B02696D70BFA897A_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar5);
  *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)((long)pvVar5 + 0x18);
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
    puVar6 = (undefined4 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000208);
    OVRTelemetryMarker_AddPoint_m5DF94030CCE86DDE95347ECF9A4C581ADF85E2E9
              (&stack0x00000268,unaff_x29 + -0x28,*puVar6,0);
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
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000200);
  *(undefined1 *)(lVar7 + 0x180) = 1;
  il2cpp::utils::
  FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::$_0,false>::
  ~FinallyHelper((FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::__0,false>
                  *)&stack0x00000690);
  return;
}


