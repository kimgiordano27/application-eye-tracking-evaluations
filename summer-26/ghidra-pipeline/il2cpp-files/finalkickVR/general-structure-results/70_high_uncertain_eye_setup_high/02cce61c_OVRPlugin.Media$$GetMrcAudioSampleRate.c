/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcAudioSampleRate
ENTRY_POINT: 02cce61c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Media__GetMrcAudioSampleRate(void)

{
  uint uVar1;
  int iVar2;
  long unaff_x29;
  
  uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(long),18ul,41ul>_char_const____18ul__char_const____41ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                    (0xa295d1);
  CAPI_ovr_LeaderboardUpdateStatus_GetDidUpdate_mF555BBAB3E7DB44E18F81654E1F43EB30B48922E::
  il2cppPInvokeFunc = (code *)(ulong)uVar1;
  if (CAPI_ovr_LeaderboardUpdateStatus_GetDidUpdate_mF555BBAB3E7DB44E18F81654E1F43EB30B48922E::
      il2cppPInvokeFunc != (code *)0x0) {
    iVar2 = (*CAPI_ovr_LeaderboardUpdateStatus_GetDidUpdate_mF555BBAB3E7DB44E18F81654E1F43EB30B48922E
              ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x5f27);
}


