/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$.cctor
ENTRY_POINT: 02cd79bc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_10;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_12_0___cctor(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_1;
  if (CAPI_ovr_UserCapability_GetIsEnabled_m0DC69EAA7EFDE303430DD8D2E2F0ED75B2A227E8::
      il2cppPInvokeFunc == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(long),18ul,32ul>_char_const____18ul__char_const____32ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      (0xa295d1);
    CAPI_ovr_UserCapability_GetIsEnabled_m0DC69EAA7EFDE303430DD8D2E2F0ED75B2A227E8::
    il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (CAPI_ovr_UserCapability_GetIsEnabled_m0DC69EAA7EFDE303430DD8D2E2F0ED75B2A227E8::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                    ,0x7285);
    }
  }
  iVar2 = (*CAPI_ovr_UserCapability_GetIsEnabled_m0DC69EAA7EFDE303430DD8D2E2F0ED75B2A227E8::
            il2cppPInvokeFunc)(uStack0000000000000018);
  return iVar2 != 0;
}


