/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetActiveController
ENTRY_POINT: 02cd7170
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 122
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 OVRPlugin_OVRP_1_9_0__ovrp_GetActiveController(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  if ((param_1 == 0) &&
     (CAPI_ovr_User_GetPresenceLobbySessionId_Native_m9C179133409242D9B2E535E19F802B60E73F1F59::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,35ul>_char_const____18ul__char_const____35ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1),
     CAPI_ovr_User_GetPresenceLobbySessionId_Native_m9C179133409242D9B2E535E19F802B60E73F1F59::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x716b);
  }
  uVar1 = (*CAPI_ovr_User_GetPresenceLobbySessionId_Native_m9C179133409242D9B2E535E19F802B60E73F1F59
            ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return uVar1;
}


