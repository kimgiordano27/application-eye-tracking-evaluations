/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_SetCameraDevicePreferredColorFrameSize
ENTRY_POINT: 02cd8754
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


void OVRPlugin_OVRP_1_16_0__ovrp_SetCameraDevicePreferredColorFrameSize
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x0;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  uStack0000000000000008 = param_3;
  uStack0000000000000010 = param_2;
  if ((CAPI_ovr_AdvancedAbuseReportOptions_SetObjectType_Native_m7EA58958EFC641CB87869F550CBED6FEB3BA7443
       ::il2cppPInvokeFunc == (code *)0x0) &&
     (__il2cpp_codegen_resolve_pinvoke<void(*)(long,long),18ul,45ul>_char_const____18ul__char_const____45ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                (0xa295d1,0xa7fbed),
     CAPI_ovr_AdvancedAbuseReportOptions_SetObjectType_Native_m7EA58958EFC641CB87869F550CBED6FEB3BA7443
     ::il2cppPInvokeFunc = extraout_x0, extraout_x0 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x7512);
  }
  (*CAPI_ovr_AdvancedAbuseReportOptions_SetObjectType_Native_m7EA58958EFC641CB87869F550CBED6FEB3BA7443
    ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),uStack0000000000000010);
  return;
}


