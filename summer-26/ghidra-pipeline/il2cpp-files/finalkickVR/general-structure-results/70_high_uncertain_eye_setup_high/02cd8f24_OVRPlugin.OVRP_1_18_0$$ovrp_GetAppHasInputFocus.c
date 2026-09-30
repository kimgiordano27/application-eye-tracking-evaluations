/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 02cd8f24
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus(void)

{
  code *extraout_x0;
  long unaff_x29;
  
  __il2cpp_codegen_resolve_pinvoke<void(*)(long,int),18ul,48ul>_char_const____18ul__char_const____48ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
            (0xa295d1,0xa936e0);
  CAPI_ovr_ChallengeOptions_SetIncludeActiveChallenges_mF97BF14B895F9E7E6C786C630F1CE01DE1F5EB4E::
  il2cppPInvokeFunc = extraout_x0;
  if (extraout_x0 != (code *)0x0) {
    (*extraout_x0)(*(undefined8 *)(unaff_x29 + -8),*(byte *)(unaff_x29 + -9) & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x7742);
}


