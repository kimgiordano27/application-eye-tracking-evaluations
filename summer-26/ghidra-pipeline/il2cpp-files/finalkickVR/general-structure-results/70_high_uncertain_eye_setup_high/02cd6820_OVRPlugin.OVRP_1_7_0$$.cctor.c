/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$.cctor
ENTRY_POINT: 02cd6820
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


undefined8 OVRPlugin_OVRP_1_7_0___cctor(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 uStack0000000000000018;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  uStack0000000000000018 = param_3;
  if ((CAPI_ovr_TestUserAppAccessArray_GetElement_m76D4858E49431215EDC76D07266106DE7325EAD1::
       il2cppPInvokeFunc == (code *)0x0) &&
     (CAPI_ovr_TestUserAppAccessArray_GetElement_m76D4858E49431215EDC76D07266106DE7325EAD1::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long,unsigned_long),18ul,38ul>_char_const____18ul__char_const____38ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1,0x9f2ce0),
     CAPI_ovr_TestUserAppAccessArray_GetElement_m76D4858E49431215EDC76D07266106DE7325EAD1::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x7030);
  }
  uVar1 = (*CAPI_ovr_TestUserAppAccessArray_GetElement_m76D4858E49431215EDC76D07266106DE7325EAD1::
            il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10));
  return uVar1;
}


