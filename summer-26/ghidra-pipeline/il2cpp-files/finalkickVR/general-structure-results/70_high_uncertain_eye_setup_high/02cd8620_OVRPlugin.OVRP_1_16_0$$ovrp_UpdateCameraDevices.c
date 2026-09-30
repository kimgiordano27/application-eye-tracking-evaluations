/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 02cd8620
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = 8;
  CAPI_ovr_VoipEncoder_GetCompressedDataSize_m657FCBB541CF4F7E2ECC3C6AF2A27699DCB2997E::
  il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(long),18ul,38ul>_char_const____18ul__char_const____38ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (0xa295d1);
  if (CAPI_ovr_VoipEncoder_GetCompressedDataSize_m657FCBB541CF4F7E2ECC3C6AF2A27699DCB2997E::
      il2cppPInvokeFunc != (code *)0x0) {
    uVar1 = (*CAPI_ovr_VoipEncoder_GetCompressedDataSize_m657FCBB541CF4F7E2ECC3C6AF2A27699DCB2997E::
              il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x741e);
}


