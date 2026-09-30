/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem._GetControllerStatePacked$$BeginInvoke
ENTRY_POINT: 02db15e8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


byte OVR_OpenVR_CVRSystem__GetControllerStatePacked__BeginInvoke(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x29;
  ulong *in_stack_00000010;
  ulong *puStack0000000000000018;
  byte bStack0000000000000027;
  
  puStack0000000000000018 = *(ulong **)(param_1 + 0xe20);
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if ((OVRPlugin_ResetAppPerfStats_mDDEEB7329441AFBADC0C47159E76A3E203CC4D03::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000018);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_98AD55AF6020A9603F23AAB9CC2B3BD010FFD61A44E98EDADE7BE9FB01F7A1A9
              );
    OVRPlugin_ResetAppPerfStats_mDDEEB7329441AFBADC0C47159E76A3E203CC4D03::s_Il2CppMethodInitialized
         = 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
  uVar1 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  *(undefined4 *)(unaff_x29 + -0x14) = uVar1;
  if (*(int *)(unaff_x29 + -0x14) == 3) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000018);
    *(byte *)(unaff_x29 + -0x15) = *(byte *)(lVar3 + 0x69) & 1;
    if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Field_<PrivateImplementationDetails>_98AD55AF6020A9603F23AAB9CC2B3BD010FFD61A44E98EDADE7BE9FB01F7A1A9
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000018);
      *(undefined1 *)(lVar3 + 0x69) = 1;
    }
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
    uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    *(undefined8 *)(unaff_x29 + -0x20) = uVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    bStack0000000000000027 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                   (*(undefined8 *)(unaff_x29 + -0x20),*puVar5,0);
    bStack0000000000000027 = bStack0000000000000027 & 1;
    if (bStack0000000000000027 == 0) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
      iVar2 = OVRP_1_9_0_ovrp_ResetAppPerfStats_mB09945F33C36220D6580284F662AA0C11128B16E(0);
      *(bool *)(unaff_x29 + -1) = iVar2 == 1;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


