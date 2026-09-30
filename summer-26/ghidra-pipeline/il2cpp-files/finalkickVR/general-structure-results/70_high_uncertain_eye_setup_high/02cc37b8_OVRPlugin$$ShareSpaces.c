/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 02cc37b8
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


undefined8 OVRPlugin__ShareSpaces(void)

{
  undefined8 uVar1;
  
  CAPI_ovr_User_GetSdkAccounts_m13BCDD03F23F3D902D8C1F63E42584F88125AF6C::il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(),18ul,24ul>_char_const____18ul__char_const____24ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         ();
  if (CAPI_ovr_User_GetSdkAccounts_m13BCDD03F23F3D902D8C1F63E42584F88125AF6C::il2cppPInvokeFunc !=
      (code *)0x0) {
    uVar1 = (*CAPI_ovr_User_GetSdkAccounts_m13BCDD03F23F3D902D8C1F63E42584F88125AF6C::
              il2cppPInvokeFunc)();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x4822);
}


