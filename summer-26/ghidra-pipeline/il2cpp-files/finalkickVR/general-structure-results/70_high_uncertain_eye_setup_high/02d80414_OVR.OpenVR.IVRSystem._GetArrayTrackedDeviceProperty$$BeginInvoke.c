/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetArrayTrackedDeviceProperty$$BeginInvoke
ENTRY_POINT: 02d80414
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_IVRSystem__GetArrayTrackedDeviceProperty__BeginInvoke(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x29;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *in_stack_00000030;
  ulong *in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000038);
  OVRManager_set_headPoseRelativeOffsetTranslation_m8B70891033EA3A0A28D9C1986E7B5D58016CCBA6::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  bVar1 = OVRPlugin_GetHeadPoseModifier_mF5EB4C2BAE8E41E5282E28B72A3163B0411EC46A
                    (unaff_x29 + -0x30,unaff_x29 + -0x40,0);
  *(byte *)(unaff_x29 + -0x41) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x41) & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x40);
    *(undefined4 *)(unaff_x29 + -0x48) = *(undefined4 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x50);
    *(undefined4 *)(unaff_x29 + -0x70) = *(undefined4 *)(unaff_x29 + -0x48);
    uVar4 = *(undefined4 *)(unaff_x29 + -0x74);
    uVar5 = *(undefined4 *)(unaff_x29 + -0x70);
    uVar3 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                      (*(undefined4 *)(unaff_x29 + -0x78));
    *(undefined4 *)(unaff_x29 + -0x6c) = uVar3;
    *(undefined4 *)(unaff_x29 + -0x68) = uVar4;
    *(undefined4 *)(unaff_x29 + -100) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x60) = *in_stack_00000030;
    *(undefined4 *)(unaff_x29 + -0x58) = *(undefined4 *)(unaff_x29 + -100);
    *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000030[0xc];
    *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -4);
    uStack0000000000000098 = (undefined4)*(undefined8 *)(unaff_x29 + -0x60);
    uStack000000000000009c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x60) >> 0x20);
    uStack0000000000000088 = (undefined4)*(undefined8 *)(unaff_x29 + -0x88);
    uStack000000000000008c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x88) >> 0x20);
    bVar1 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline
                      (uStack0000000000000098,uStack000000000000009c,
                       *(undefined4 *)(unaff_x29 + -0x58),uStack0000000000000088,
                       uStack000000000000008c,*(undefined4 *)(unaff_x29 + -0x80),0);
    *(byte *)(unaff_x29 + -0x89) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x89) & 1) != 0) {
      uVar3 = *(undefined4 *)(unaff_x29 + -4);
      uStack0000000000000050 = (undefined4)in_stack_00000030[0xc];
      uStack0000000000000054 = (undefined4)((ulong)in_stack_00000030[0xc] >> 0x20);
      uStack000000000000005c =
           OVRExtensions_ToFlippedZVector3f_m62CC475050FFCDA6E53230DCE20070AB0228D6FA
                     (uStack0000000000000050);
      *(ulong *)(unaff_x29 + -0x40) = CONCAT44(uStack0000000000000054,uStack000000000000005c);
      *(undefined4 *)(unaff_x29 + -0x38) = uVar3;
      uStack0000000000000064 = uVar3;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
      OVRPlugin_SetHeadPoseModifier_mBB073CB97E2AC7C4952A36E1AE1F7A825AE9D815
                (unaff_x29 + -0x30,unaff_x29 + -0x40,0);
    }
  }
  uVar3 = *(undefined4 *)(unaff_x29 + -4);
  lVar2 = *(long *)(unaff_x29 + -0x18);
  *(undefined8 *)(lVar2 + 0x58) = in_stack_00000030[0xc];
  *(undefined4 *)(lVar2 + 0x60) = uVar3;
  return;
}


