/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem._PollNextEventPacked$$EndInvoke
ENTRY_POINT: 02db1400
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVR_OpenVR_CVRSystem__PollNextEventPacked__EndInvoke(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  ulong *in_stack_00000018;
  ulong *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((OVRPlugin_GetAppPerfStats_m6EFAAA8BDE8A02239502B151F481D813C73380E9::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000020);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_95935D91C1BC600A439AE06A1AADF71B12CC7F7B0B5504C6B727F0A32BADA6F5
              );
    OVRPlugin_GetAppPerfStats_m6EFAAA8BDE8A02239502B151F481D813C73380E9::s_Il2CppMethodInitialized =
         1;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  uVar2 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  *(undefined4 *)(unaff_x29 + -0x24) = uVar2;
  if (*(int *)(unaff_x29 + -0x24) == 3) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
    *(byte *)(unaff_x29 + -0x25) = *(byte *)(lVar3 + 0x68) & 1;
    if ((*(byte *)(unaff_x29 + -0x25) & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Field_<PrivateImplementationDetails>_95935D91C1BC600A439AE06A1AADF71B12CC7F7B0B5504C6B727F0A32BADA6F5
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
      *(undefined1 *)(lVar3 + 0x68) = 1;
    }
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x20),0x18);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x20);
    in_stack_00000010[1] = *(undefined8 *)(unaff_x29 + -0x18);
    *in_stack_00000010 = uVar4;
    in_stack_00000010[2] = *(undefined8 *)(unaff_x29 + -0x10);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    *(undefined8 *)(unaff_x29 + -0x30) = uVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    *(undefined8 *)(unaff_x29 + -0x38) = *puVar5;
    bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                      (*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x38),0);
    *(byte *)(unaff_x29 + -0x39) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x39) & 1) == 0) {
      il2cpp_codegen_initobj((void *)(unaff_x29 + -0x20),0x18);
      uVar4 = *(undefined8 *)(unaff_x29 + -0x20);
      in_stack_00000010[1] = *(undefined8 *)(unaff_x29 + -0x18);
      *in_stack_00000010 = uVar4;
      in_stack_00000010[2] = *(undefined8 *)(unaff_x29 + -0x10);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      OVRP_1_9_0_ovrp_GetAppPerfStats_m95CEE562ED0E9D2F2B10600C9FFA57979D021973(&stack0x00000028,0);
      in_stack_00000010[1] = in_stack_00000030;
      *in_stack_00000010 = in_stack_00000028;
      in_stack_00000010[2] = in_stack_00000038;
    }
  }
  return;
}


