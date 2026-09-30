/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetControllerState2
ENTRY_POINT: 02cd791c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_12_0__ovrp_GetControllerState2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_1;
  if ((CAPI_ovr_UserCapability_GetDescription_Native_m9936CF0B575136D7872FA55736ED944D0A03F1AA::
       il2cppPInvokeFunc == (code *)0x0) &&
     (CAPI_ovr_UserCapability_GetDescription_Native_m9936CF0B575136D7872FA55736ED944D0A03F1AA::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,34ul>_char_const____18ul__char_const____34ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1),
     CAPI_ovr_UserCapability_GetDescription_Native_m9936CF0B575136D7872FA55736ED944D0A03F1AA::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x7270);
  }
  uVar1 = (*CAPI_ovr_UserCapability_GetDescription_Native_m9936CF0B575136D7872FA55736ED944D0A03F1AA
            ::il2cppPInvokeFunc)(uStack0000000000000018);
  return uVar1;
}


