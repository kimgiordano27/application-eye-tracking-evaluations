/*
FUNCTION_NAME: OVR.OpenVR.OpenVR$$get_System
ENTRY_POINT: 02dbe9c4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 OVR_OpenVR_OpenVR__get_System(undefined8 param_1,__8 *param_2)

{
  undefined8 uVar1;
  undefined8 in_x9;
  long unaff_x29;
  undefined4 uStack000000000000001c;
  long lStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  int iStack000000000000007c;
  undefined4 uStack000000000000008c;
  int iStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long lStack00000000000000f0;
  
  lStack0000000000000020 = unaff_x29 + -0x38;
  *(undefined8 *)(unaff_x29 + -0x38) = in_x9;
  lStack00000000000000f0 = lStack0000000000000020;
  il2cpp::utils::
  Finally<OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::__8>
            ((utils *)&stack0x000000f0,param_2);
  in_stack_000000e8 = *(undefined8 *)(unaff_x29 + -0x20);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x28);
  in_stack_000000e0._4_4_ = (undefined4)((ulong)uVar1 >> 0x20);
  uStack00000000000000dc = in_stack_000000e0._4_4_;
  *(undefined4 *)(unaff_x29 + -0x28) = in_stack_000000e0._4_4_;
  in_stack_000000e0 = uVar1;
  in_stack_000000d0 =
       GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6
                 (lStack0000000000000020,in_stack_00000028);
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
              ((Il2CppFakeBox<int> *)&stack0x000000a0,(Il2CppClass *)*in_stack_00000070,
               (int *)(unaff_x29 + -0x2c));
    uVar1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(&stack0x000000a0,0);
    uVar1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                      (*(undefined8 *)
                        Field_<PrivateImplementationDetails>_D62A7B00CF5AD77C334BD4EBC934102A7D83AA2199BE0B0D282D5304A50908B3
                       ,uVar1,0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar1,0);
  }
  uStack000000000000008c = *(undefined4 *)(unaff_x29 + -0x2c);
  *(undefined4 *)(unaff_x29 + -0x3c) = uStack000000000000008c;
  iStack000000000000007c = 6;
  il2cpp::utils::
  FinallyHelper<OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::$_8,false>
  ::~FinallyHelper((FinallyHelper<OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::__8,false>
                    *)&stack0x000000f8);
  if (iStack000000000000007c == 0) {
    *(undefined4 *)(unaff_x29 + -4) = 0xfffffc14;
  }
  else {
    *(undefined4 *)(unaff_x29 + -4) = *(undefined4 *)(unaff_x29 + -0x3c);
  }
  return *(undefined4 *)(unaff_x29 + -4);
}


