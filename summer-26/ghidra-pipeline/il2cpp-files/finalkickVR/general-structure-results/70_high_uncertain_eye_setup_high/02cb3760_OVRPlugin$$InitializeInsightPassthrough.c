/*
FUNCTION_NAME: OVRPlugin$$InitializeInsightPassthrough
ENTRY_POINT: 02cb3760
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


void OVRPlugin__InitializeInsightPassthrough
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x0;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  
  uStack0000000000000008 = param_3;
  if ((CAPI_ovr_AdvancedAbuseReportOptions_AddSuggestedUser_m7F743ABD15CBBCBC9C25752820BA74AA598D7FFD
       ::il2cppPInvokeFunc == (code *)0x0) &&
     (__il2cpp_codegen_resolve_pinvoke<void(*)(long,unsigned_long),18ul,48ul>_char_const____18ul__char_const____48ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                (0xa295d1,0xa4f739),
     CAPI_ovr_AdvancedAbuseReportOptions_AddSuggestedUser_m7F743ABD15CBBCBC9C25752820BA74AA598D7FFD
     ::il2cppPInvokeFunc = extraout_x0, extraout_x0 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x753a);
  }
  (*CAPI_ovr_AdvancedAbuseReportOptions_AddSuggestedUser_m7F743ABD15CBBCBC9C25752820BA74AA598D7FFD::
    il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),in_stack_00000010);
  return;
}


