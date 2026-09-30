/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameBgraPixels
ENTRY_POINT: 02cd8b2c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameBgraPixels(void)

{
  undefined8 uVar1;
  
  CAPI_ovr_ChallengeOptions_Create_mFCC953B595E4BCEC5DA4BBDA65160668F0F6026E::il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(),18ul,28ul>_char_const____18ul__char_const____28ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         ();
  if (CAPI_ovr_ChallengeOptions_Create_mFCC953B595E4BCEC5DA4BBDA65160668F0F6026E::il2cppPInvokeFunc
      != (code *)0x0) {
    uVar1 = (*CAPI_ovr_ChallengeOptions_Create_mFCC953B595E4BCEC5DA4BBDA65160668F0F6026E::
              il2cppPInvokeFunc)();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x76c2);
}


