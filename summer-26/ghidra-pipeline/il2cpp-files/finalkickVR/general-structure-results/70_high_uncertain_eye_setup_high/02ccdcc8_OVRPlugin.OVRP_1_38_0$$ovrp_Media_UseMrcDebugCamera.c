/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_UseMrcDebugCamera
ENTRY_POINT: 02ccdcc8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRPlugin_OVRP_1_38_0__ovrp_Media_UseMrcDebugCamera(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_1;
  if (CAPI_ovr_LeaderboardEntry_GetRank_m922C3904577E55CA16599E7072A0A11B6DE95EDB::il2cppPInvokeFunc
      == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(long),18ul,29ul>_char_const____18ul__char_const____29ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      (0xa295d1);
    CAPI_ovr_LeaderboardEntry_GetRank_m922C3904577E55CA16599E7072A0A11B6DE95EDB::il2cppPInvokeFunc =
         (code *)(ulong)uVar1;
    if (CAPI_ovr_LeaderboardEntry_GetRank_m922C3904577E55CA16599E7072A0A11B6DE95EDB::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                    ,0x5df5);
    }
  }
  uVar2 = (*CAPI_ovr_LeaderboardEntry_GetRank_m922C3904577E55CA16599E7072A0A11B6DE95EDB::
            il2cppPInvokeFunc)(uStack0000000000000018);
  return uVar2;
}


