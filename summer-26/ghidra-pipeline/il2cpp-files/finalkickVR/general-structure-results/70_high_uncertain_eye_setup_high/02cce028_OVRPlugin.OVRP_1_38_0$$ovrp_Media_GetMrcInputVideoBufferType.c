/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcInputVideoBufferType
ENTRY_POINT: 02cce028
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcInputVideoBufferType(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  if (param_1 != 0) {
    uVar1 = (*CAPI_ovr_LeaderboardEntry_GetUser_m77DA456D1E7E399BF37AB1CF81EA089F9045C1D9::
              il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x5e5b);
}


