/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 02cd3054
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_79_0__ovrp_QplCreateMarkerHandle(code *param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  CAPI_ovr_NetSyncSessionsChangedNotification_GetSessions_m852FE24D1879C94AE04677C2EB27EB1FD009C625
  ::il2cppPInvokeFunc = param_1;
  if (param_1 != (code *)0x0) {
    uVar1 = (*param_1)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x68d2);
}


