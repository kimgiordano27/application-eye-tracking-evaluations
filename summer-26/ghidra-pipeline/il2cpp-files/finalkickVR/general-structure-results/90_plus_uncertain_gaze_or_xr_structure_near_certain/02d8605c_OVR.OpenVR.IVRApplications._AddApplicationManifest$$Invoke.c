/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._AddApplicationManifest$$Invoke
ENTRY_POINT: 02d8605c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 108
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVR_OpenVR_IVRApplications__AddApplicationManifest__Invoke(uint param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x29;
  uint uStack0000000000000014;
  uint uStack0000000000000028;
  long in_stack_000001d0;
  undefined8 *in_stack_000001f8;
  undefined8 *in_stack_00000200;
  undefined8 *in_stack_00000208;
  undefined8 *in_stack_00000210;
  
  uStack0000000000000028 = param_1;
  if ((param_1 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000001f8);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_Compare__
               ,0);
  }
  if ((*(byte *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x101) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
    OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E(0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000208);
    puVar2 = (undefined4 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000208);
    OVRTelemetryMarker_AddPoint_m5DF94030CCE86DDE95347ECF9A4C581ADF85E2E9
              (&stack0x00000268,unaff_x29 + -0x28,*puVar2,0);
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
    bVar1 = *(byte *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x106);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
    OVRPlugin_set_localDimming_mB802F316C5988ACA499BA45E7B9D6590570025AB(bVar1 & 1,0);
  }
  if ((*(byte *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x38) & 1) != 0) {
    XRSettings_set_eyeTextureResolutionScale_m92F1029D68F387D9B0C2DB35DFAB2FD82C64A30B
              (*(undefined4 *)(*(long *)(in_stack_000001d0 + 0x2a0) + 0x40),0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000200);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000200);
  *(undefined1 *)(lVar3 + 0x180) = 1;
  il2cpp::utils::
  FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::$_0,false>::
  ~FinallyHelper((FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::__0,false>
                  *)&stack0x00000690);
  return;
}


