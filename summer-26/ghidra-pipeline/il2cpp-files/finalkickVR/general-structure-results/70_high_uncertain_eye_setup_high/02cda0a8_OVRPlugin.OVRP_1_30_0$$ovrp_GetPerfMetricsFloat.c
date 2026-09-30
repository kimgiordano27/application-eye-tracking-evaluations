/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetPerfMetricsFloat
ENTRY_POINT: 02cda0a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_30_0__ovrp_GetPerfMetricsFloat(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*CAPI_ovr_MultiplayerErrorOptions_Create_m6942F12E886F7475AFDF36DB09FBC10F9735883D::
              il2cppPInvokeFunc)();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x7971);
}


