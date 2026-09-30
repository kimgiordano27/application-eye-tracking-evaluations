/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._SetOverlayFlag$$Invoke
ENTRY_POINT: 02d97480
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVROverlay__SetOverlayFlag__Invoke
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               MethodInfo *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined4 uVar4;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  int iStack0000000000000034;
  float fStack0000000000000074;
  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *pVStack0000000000000078;
  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *pVStack0000000000000080;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  
  *(ulong *)(unaff_x29 + -0x88) = CONCAT44(param_2,param_1);
  *(undefined4 *)(unaff_x29 + -0x80) = param_3;
  puVar3 = *(undefined8 **)(unaff_x29 + -0x70);
  *puVar3 = *(undefined8 *)(unaff_x29 + -0x88);
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(unaff_x29 + -0x80);
  pVStack0000000000000078 =
       *(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 **)(unaff_x29 + -0x18);
  pVStack0000000000000080 = pVStack0000000000000078;
  uStack000000000000008c = param_1;
  uStack0000000000000090 = param_2;
  uStack0000000000000094 = param_3;
  fStack0000000000000074 =
       (float)Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline
                        (pVStack0000000000000078,param_5);
  if (1.0 < fStack0000000000000074) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_<CreateOverdrawMode>b__2__
               ,0);
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
    iVar1 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
    if ((iVar1 != 3) && (*(int *)(*(long *)(unaff_x29 + -0x10) + 0xec) == 1)) {
      uVar4 = il2cpp_codegen_multiply<float,float>
                        ((**(float **)(unaff_x29 + -0x20) /
                         *(float *)(*(long *)(unaff_x29 + -0x20) + 8)) / 3.1415927,180.0);
      *(undefined4 *)(unaff_x29 + -0x3c) = uVar4;
      if (180.0 < *(float *)(unaff_x29 + -0x3c)) {
        uVar2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(unaff_x29 + -0x3c);
        uVar2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                          (*(undefined8 *)
                            Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_<CreateOverdrawMode>b__0__
                           ,uVar2,*(undefined8 *)
                                   Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_<CreateOverdrawMode>b__1__
                           ,0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(uVar2,0);
        *(undefined1 *)(unaff_x29 + -1) = 0;
        goto LAB_02d976ac;
      }
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
    iStack0000000000000034 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
    if ((iStack0000000000000034 == 3) && (*(int *)(*(long *)(unaff_x29 + -0x10) + 0xec) == 9)) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_<CreateWireframeNotSupportedWarning>b__0__
                 ,0);
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      *(undefined1 *)(unaff_x29 + -1) = 1;
    }
  }
LAB_02d976ac:
  return *(byte *)(unaff_x29 + -1) & 1;
}


