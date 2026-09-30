/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._AddApplicationManifest$$EndInvoke
ENTRY_POINT: 02d86154
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVR_OpenVR_IVRApplications__AddApplicationManifest__EndInvoke(void)

{
  byte bVar1;
  long lVar2;
  uint uStack0000000000000014;
  long in_stack_000001d0;
  undefined8 *in_stack_000001f8;
  undefined8 *in_stack_00000200;
  undefined8 *in_stack_00000210;
  
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
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000200);
  *(undefined1 *)(lVar2 + 0x180) = 1;
  il2cpp::utils::
  FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::$_0,false>::
  ~FinallyHelper((FinallyHelper<OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053::__0,false>
                  *)&stack0x00000690);
  return;
}


