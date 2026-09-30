/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_OpenCameraDevice
ENTRY_POINT: 02cd8804
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_OpenCameraDevice(long param_1)

{
  code *extraout_x0;
  long unaff_x29;
  undefined8 in_stack_00000010;
  
  if ((*(long *)(param_1 + 0xc98) == 0) &&
     (__il2cpp_codegen_resolve_pinvoke<void(*)(long,long),18ul,42ul>_char_const____18ul__char_const____42ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                (0xa295d1,0xa16862),
     CAPI_ovr_ApplicationOptions_SetDeeplinkMessage_Native_mB0B1E48C779B03C1BC9486B68436F73A0BD586EF
     ::il2cppPInvokeFunc = extraout_x0, extraout_x0 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x75b9);
  }
  (*CAPI_ovr_ApplicationOptions_SetDeeplinkMessage_Native_mB0B1E48C779B03C1BC9486B68436F73A0BD586EF
    ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),in_stack_00000010);
  return;
}


