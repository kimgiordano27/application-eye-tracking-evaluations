/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_OrientationTracked
ENTRY_POINT: 02ccc5bc
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


undefined8 OVRPlugin_BodyJointLocation__get_OrientationTracked(void)

{
  undefined8 uVar1;
  long unaff_x29;
  
  CAPI_ovr_LanguagePackInfo_GetEnglishName_Native_m4B590560CA77AAACFF5466F7326C4C3D3F0F2694::
  il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,36ul>_char_const____18ul__char_const____36ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (0xa295d1);
  if (CAPI_ovr_LanguagePackInfo_GetEnglishName_Native_m4B590560CA77AAACFF5466F7326C4C3D3F0F2694::
      il2cppPInvokeFunc != (code *)0x0) {
    uVar1 = (*CAPI_ovr_LanguagePackInfo_GetEnglishName_Native_m4B590560CA77AAACFF5466F7326C4C3D3F0F2694
              ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x5add);
}


