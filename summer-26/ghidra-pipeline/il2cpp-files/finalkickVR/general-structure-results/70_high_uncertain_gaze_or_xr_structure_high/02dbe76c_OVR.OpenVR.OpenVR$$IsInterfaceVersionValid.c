/*
FUNCTION_NAME: OVR.OpenVR.OpenVR$$IsInterfaceVersionValid
ENTRY_POINT: 02dbe76c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


undefined4
OVR_OpenVR_OpenVR__IsInterfaceVersionValid(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  undefined1 auVar5 [16];
  undefined4 uStack000000000000001c;
  undefined8 *in_stack_00000058;
  ulong *in_stack_00000060;
  ulong *in_stack_00000068;
  ulong *puStack0000000000000070;
  int iStack000000000000007c;
  undefined4 uStack000000000000008c;
  int iStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  *(undefined8 *)(unaff_x29 + -0x18) = param_3;
  puStack0000000000000070 = param_1;
  if ((OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000060);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000068);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000070);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Unity_Services_Core_Internal_CoreRegistration_ProvidesComponent<IDiagnosticsFactory>__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_1458F720AE7177FB84F58A428FF4727F7B070A3A055760DC7C6D3E83C33698E3
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_D62A7B00CF5AD77C334BD4EBC934102A7D83AA2199BE0B0D282D5304A50908B3
              );
    OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined4 *)(unaff_x29 + -0x3c) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x10);
  il2cpp_codegen_initobj(*(void **)(unaff_x29 + -0x48),8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x50) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -0x58) = *puVar4;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)(unaff_x29 + -0x58),0);
  *(byte *)(unaff_x29 + -0x59) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x59) & 1) != 0) {
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x28),0x10);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
    uVar2 = OVRP_1_83_0_ovrp_GetVirtualKeyboardDirtyTextures_m7B836FE58CDF51A3ACBA9EF63993E04873CE13AB
                      ((void *)(unaff_x29 + -0x28),0);
    *(undefined4 *)(unaff_x29 + -0x60) = uVar2;
    *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x29 + -0x60);
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x10);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    in_stack_00000058[5] = *(undefined8 *)(unaff_x29 + -0x20);
    in_stack_00000058[4] = uVar3;
    *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x7c);
    uVar3 = SZArrayNew(*(Il2CppClass **)
                        Method_Unity_Services_Core_Internal_CoreRegistration_ProvidesComponent<IDiagnosticsFactory>__
                       ,*(uint *)(unaff_x29 + -0x84));
    *(undefined8 *)(unaff_x29 + -0x90) = uVar3;
    **(undefined8 **)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x90);
    Il2CppCodeGenWriteBarrier(*(void ***)(unaff_x29 + -0x68),*(void **)(unaff_x29 + -0x90));
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    in_stack_00000058[1] = *(undefined8 *)(unaff_x29 + -0x20);
    *in_stack_00000058 = uVar3;
    *(undefined4 *)(unaff_x29 + -0xa4) = *(undefined4 *)(unaff_x29 + -0x9c);
    if (*(int *)(unaff_x29 + -0xa4) == 0) {
      *(undefined4 *)(unaff_x29 + -0xa8) = *(undefined4 *)(unaff_x29 + -0x2c);
      if (*(int *)(unaff_x29 + -0xa8) != 0) {
        Il2CppFakeBox<int>::Il2CppFakeBox
                  ((Il2CppFakeBox<int> *)(unaff_x29 + -0xc0),(Il2CppClass *)*puStack0000000000000070
                   ,(int *)(unaff_x29 + -0x2c));
        uVar3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741
                          ((Il2CppFakeBox<int> *)(unaff_x29 + -0xc0));
        *(undefined8 *)(unaff_x29 + -200) = uVar3;
        uVar3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                          (*(undefined8 *)
                            Field_<PrivateImplementationDetails>_1458F720AE7177FB84F58A428FF4727F7B070A3A055760DC7C6D3E83C33698E3
                           ,*(undefined8 *)(unaff_x29 + -200),0);
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar3;
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                  (*(undefined8 *)(unaff_x29 + -0xd0),0);
      }
      *(undefined4 *)(unaff_x29 + -0xd4) = *(undefined4 *)(unaff_x29 + -0x2c);
      *(undefined4 *)(unaff_x29 + -4) = *(undefined4 *)(unaff_x29 + -0xd4);
      goto FUN_02dbeb8c;
    }
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x10);
    *(undefined8 *)(unaff_x29 + -0xe8) = **(undefined8 **)(unaff_x29 + -0xe0);
    auVar5 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC
                       (*(undefined8 *)(unaff_x29 + -0xe8),3);
    *(long *)(unaff_x29 + -0xf8) = auVar5._0_8_;
    *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xf8);
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0xf0);
    in_stack_000000f0 = unaff_x29 + -0x38;
    il2cpp::utils::
    Finally<OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::__8>
              ((utils *)&stack0x000000f0,auVar5._8_8_);
    in_stack_000000e8 = *(undefined8 *)(unaff_x29 + -0x20);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    in_stack_000000e0._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
    uStack00000000000000dc = in_stack_000000e0._4_4_;
    *(undefined4 *)(unaff_x29 + -0x28) = in_stack_000000e0._4_4_;
    in_stack_000000e0 = uVar3;
    in_stack_000000d0 =
         GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(unaff_x29 + -0x38,0);
    *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000000d0;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
    uStack000000000000001c =
         OVRP_1_83_0_ovrp_GetVirtualKeyboardDirtyTextures_m7B836FE58CDF51A3ACBA9EF63993E04873CE13AB
                   (unaff_x29 + -0x28,0);
    *(undefined4 *)(unaff_x29 + -0x2c) = uStack000000000000001c;
    iStack00000000000000bc = *(int *)(unaff_x29 + -0x2c);
    in_stack_000000c0 = uStack000000000000001c;
    if (iStack00000000000000bc != 0) {
      Il2CppFakeBox<int>::Il2CppFakeBox
                ((Il2CppFakeBox<int> *)&stack0x000000a0,(Il2CppClass *)*puStack0000000000000070,
                 (int *)(unaff_x29 + -0x2c));
      uVar3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(&stack0x000000a0,0);
      uVar3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)
                          Field_<PrivateImplementationDetails>_D62A7B00CF5AD77C334BD4EBC934102A7D83AA2199BE0B0D282D5304A50908B3
                         ,uVar3,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar3,0);
    }
    uStack000000000000008c = *(undefined4 *)(unaff_x29 + -0x2c);
    *(undefined4 *)(unaff_x29 + -0x3c) = uStack000000000000008c;
    iStack000000000000007c = 6;
    il2cpp::utils::
    FinallyHelper<OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::$_8,false>
    ::~FinallyHelper((FinallyHelper<OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::__8,false>
                      *)&stack0x000000f8);
    if (iStack000000000000007c != 0) {
      *(undefined4 *)(unaff_x29 + -4) = *(undefined4 *)(unaff_x29 + -0x3c);
      goto FUN_02dbeb8c;
    }
  }
  *(undefined4 *)(unaff_x29 + -4) = 0xfffffc14;
FUN_02dbeb8c:
  return *(undefined4 *)(unaff_x29 + -4);
}


