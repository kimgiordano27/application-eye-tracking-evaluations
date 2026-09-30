/*
FUNCTION_NAME: OVRPlugin.Vector3f$$ToString
ENTRY_POINT: 02cc9428
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


undefined8 OVRPlugin_Vector3f__ToString(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((CAPI_ovr_ChallengeArray_GetElement_mA31CE3C82A67FCB889BB2D39D2307787A7D85927::
       il2cppPInvokeFunc == (code *)0x0) &&
     (CAPI_ovr_ChallengeArray_GetElement_mA31CE3C82A67FCB889BB2D39D2307787A7D85927::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long,unsigned_long),18ul,30ul>_char_const____18ul__char_const____30ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1,0x9e954a),
     CAPI_ovr_ChallengeArray_GetElement_mA31CE3C82A67FCB889BB2D39D2307787A7D85927::il2cppPInvokeFunc
     == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x5435);
  }
  uVar1 = (*CAPI_ovr_ChallengeArray_GetElement_mA31CE3C82A67FCB889BB2D39D2307787A7D85927::
            il2cppPInvokeFunc)(param_1,param_2);
  return uVar1;
}


