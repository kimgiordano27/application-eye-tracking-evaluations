/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._AddApplicationManifest$$.ctor
ENTRY_POINT: 02d85ee0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 108
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVR_OpenVR_IVRApplications__AddApplicationManifest___ctor(undefined8 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  long lVar6;
  long in_x9;
  long unaff_x29;
  uint uStack0000000000000014;
  undefined4 uStack000000000000002c;
  uint uStack000000000000003c;
  long in_stack_000001d0;
  undefined8 *in_stack_000001e0;
  undefined8 *in_stack_000001f8;
  undefined8 *in_stack_00000200;
  undefined8 *in_stack_00000208;
  undefined8 *in_stack_00000210;
  undefined4 in_stack_000002e4;
  
  *(undefined4 *)(param_1[2] + 0x28) = in_stack_000002e4;
  *param_1 = *(undefined8 *)(in_x9 + 0x268);
  NullCheck((void *)*param_1);
  uStack000000000000003c =
       Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(*in_stack_000001e0,0);
  if ((uStack000000000000003c & 1) == 0) {
    pvVar4 = *(void **)(in_stack_000001d0 + 0x268);
    NullCheck(pvVar4);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar4,1,0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
  OVRPlugin_SetDeveloperMode_m666BA62AB965FE5E7E2857C29F619EE186CC8155(1,0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
  pvVar4 = (void *)OVRManager_get_runtimeSettings_m6DFAF39BFB4B75B251235D43B02696D70BFA897A_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar4);
  *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)((long)pvVar4 + 0x18);
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
    puVar5 = (undefined4 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000208);
    OVRTelemetryMarker_AddPoint_m5DF94030CCE86DDE95347ECF9A4C581ADF85E2E9
              (&stack0x00000268,unaff_x29 + -0x28,*puVar5,0);
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
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000200);
  *(undefined1 *)(lVar6 + 0x180) = 1;
  il2cpp::utils::
  FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::$_0,false>::
  ~FinallyHelper((FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::__0,false>
                  *)&stack0x00000690);
  return;
}


