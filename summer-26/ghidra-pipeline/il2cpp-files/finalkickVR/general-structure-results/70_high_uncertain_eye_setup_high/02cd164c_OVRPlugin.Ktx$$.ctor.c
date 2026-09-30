/*
FUNCTION_NAME: OVRPlugin.Ktx$$.ctor
ENTRY_POINT: 02cd164c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Ktx___ctor(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  CAPI_ovr_Message_GetRejoinDialogResult_m2A99E2A908F08ABCE418F6A29D8C6908B3BEE4D0::
  il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,34ul>_char_const____18ul__char_const____34ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (param_1);
  if (CAPI_ovr_Message_GetRejoinDialogResult_m2A99E2A908F08ABCE418F6A29D8C6908B3BEE4D0::
      il2cppPInvokeFunc != (code *)0x0) {
    uVar1 = (*CAPI_ovr_Message_GetRejoinDialogResult_m2A99E2A908F08ABCE418F6A29D8C6908B3BEE4D0::
              il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x656f);
}


