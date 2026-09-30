/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcActivationMode
ENTRY_POINT: 02ccd074
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_6
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcActivationMode(void)

{
  uint uVar1;
  int iVar2;
  long unaff_x29;
  
  uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(long),18ul,52ul>_char_const____18ul__char_const____52ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                    (0xa295d1);
  CAPI_ovr_LaunchFriendRequestFlowResult_GetDidSendRequest_m3330413DF83E5DFA7F74B28A44AD1FC73AE5B5CD
  ::il2cppPInvokeFunc = (code *)(ulong)uVar1;
  if (CAPI_ovr_LaunchFriendRequestFlowResult_GetDidSendRequest_m3330413DF83E5DFA7F74B28A44AD1FC73AE5B5CD
      ::il2cppPInvokeFunc != (code *)0x0) {
    iVar2 = (*CAPI_ovr_LaunchFriendRequestFlowResult_GetDidSendRequest_m3330413DF83E5DFA7F74B28A44AD1FC73AE5B5CD
              ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x5c45);
}


