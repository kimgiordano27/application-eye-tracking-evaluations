/*
FUNCTION_NAME: OVRPlugin.OVRP_1_42_0$$ovrp_GetAdaptiveGpuPerformanceScale2
ENTRY_POINT: 02cdafc0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_42_0__ovrp_GetAdaptiveGpuPerformanceScale2
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 extraout_x0;
  long unaff_x29;
  undefined4 uStack0000000000000004;
  undefined8 uStack0000000000000008;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(undefined4 *)(unaff_x29 + -0xc) = param_2;
  uStack0000000000000008 = param_3;
  if (CAPI_ovr_UserOptions_AddServiceProvider_m485DD807C3C0A34A2F177572D76C173EC4B35AF1::
      il2cppPInvokeFunc == (code *)0x0) {
    uStack0000000000000004 = 0xc;
    __il2cpp_codegen_resolve_pinvoke<void(*)(long,int),18ul,35ul>_char_const____18ul__char_const____35ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
              (0xa295d1,0xa7fc67);
    CAPI_ovr_UserOptions_AddServiceProvider_m485DD807C3C0A34A2F177572D76C173EC4B35AF1::
    il2cppPInvokeFunc = (code *)extraout_x0;
    __CortexA53843419_2BDB000();
    return;
  }
  (*CAPI_ovr_UserOptions_AddServiceProvider_m485DD807C3C0A34A2F177572D76C173EC4B35AF1::
    il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),*(undefined4 *)(unaff_x29 + -0xc));
  return;
}


