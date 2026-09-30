/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 02cd11bc
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


undefined8 OVRPlugin_Ktx__GetKtxTextureData(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_1;
  if ((CAPI_ovr_Message_GetPartyID_m8DFC102342190F25ED86D9C1DBB4ABB067CA8C45::il2cppPInvokeFunc ==
       (code *)0x0) &&
     (CAPI_ovr_Message_GetPartyID_m8DFC102342190F25ED86D9C1DBB4ABB067CA8C45::il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,23ul>_char_const____18ul__char_const____23ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1),
     CAPI_ovr_Message_GetPartyID_m8DFC102342190F25ED86D9C1DBB4ABB067CA8C45::il2cppPInvokeFunc ==
     (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x64dc);
  }
  uVar1 = (*CAPI_ovr_Message_GetPartyID_m8DFC102342190F25ED86D9C1DBB4ABB067CA8C45::il2cppPInvokeFunc
          )(uStack0000000000000018);
  return uVar1;
}


