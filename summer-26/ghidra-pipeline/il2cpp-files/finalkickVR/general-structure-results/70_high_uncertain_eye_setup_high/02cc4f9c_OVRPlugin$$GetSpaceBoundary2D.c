/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 02cc4f9c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceBoundary2D(void)

{
  undefined8 uVar1;
  
  if ((CAPI_ovr_Voip_GetMicrophoneAvailability_m24D4A665D3F17D3CE526FA6E97E588386BB125B3::
       il2cppPInvokeFunc == (code *)0x0) &&
     (CAPI_ovr_Voip_GetMicrophoneAvailability_m24D4A665D3F17D3CE526FA6E97E588386BB125B3::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(),18ul,35ul>_char_const____18ul__char_const____35ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (),
     CAPI_ovr_Voip_GetMicrophoneAvailability_m24D4A665D3F17D3CE526FA6E97E588386BB125B3::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x4b3b);
  }
  uVar1 = (*CAPI_ovr_Voip_GetMicrophoneAvailability_m24D4A665D3F17D3CE526FA6E97E588386BB125B3::
            il2cppPInvokeFunc)();
  return uVar1;
}


