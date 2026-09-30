/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$.ctor
ENTRY_POINT: 02cd04b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 OVRPlugin_GetBoneSkeleton2Delegate___ctor(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = 8;
  CAPI_ovr_Message_GetLaunchFriendRequestFlowResult_mEEB80E6D72B5B9F1133909D581DF7822F8DD84A7::
  il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,45ul>_char_const____18ul__char_const____45ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (0xa295d1);
  if (CAPI_ovr_Message_GetLaunchFriendRequestFlowResult_mEEB80E6D72B5B9F1133909D581DF7822F8DD84A7::
      il2cppPInvokeFunc != (code *)0x0) {
    uVar1 = (*CAPI_ovr_Message_GetLaunchFriendRequestFlowResult_mEEB80E6D72B5B9F1133909D581DF7822F8DD84A7
              ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x6323);
}


