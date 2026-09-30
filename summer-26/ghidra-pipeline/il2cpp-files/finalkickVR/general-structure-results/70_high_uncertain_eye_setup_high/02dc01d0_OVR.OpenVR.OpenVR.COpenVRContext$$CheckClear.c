/*
FUNCTION_NAME: OVR.OpenVR.OpenVR.COpenVRContext$$CheckClear
ENTRY_POINT: 02dc01d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


byte OVR_OpenVR_OpenVR_COpenVRContext__CheckClear
               (ulong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  ulong *in_stack_00000008;
  ulong *puStack0000000000000010;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000037;
  
  *(undefined4 *)(unaff_x29 + -8) = param_2;
  *(undefined4 *)(unaff_x29 + -0xc) = param_3;
  *(undefined8 *)(unaff_x29 + -0x18) = param_4;
  *(undefined8 *)(unaff_x29 + -0x20) = param_5;
  puStack0000000000000010 = param_1;
  if ((OVRPlugin_GetFaceState_mA78C1DD614A2F02BFBF088BBA8E72F37759FAD5C::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000008);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000010);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
              );
    OVRPlugin_GetFaceState_mA78C1DD614A2F02BFBF088BBA8E72F37759FAD5C::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  uVar2 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  *(undefined4 *)(unaff_x29 + -0x24) = uVar2;
  if ((*(int *)(unaff_x29 + -0x24) == 3) &&
     (*(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -8),
     *(int *)(unaff_x29 + -0x28) == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    *(undefined4 *)(unaff_x29 + -8) = 0xffffffff;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x30) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
  bStack0000000000000037 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x30),*puVar4,0);
  bStack0000000000000037 = bStack0000000000000037 & 1;
  if (bStack0000000000000037 == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x29 + -8);
    uStack000000000000002c = *(undefined4 *)(unaff_x29 + -0xc);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    bVar1 = OVRPlugin_GetFaceStateInternal_m9BDC8584B91A51CFD4B6CA5F9DB17C79DB69DBB2
                      (uVar2,uStack000000000000002c,uVar3,0);
    *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


