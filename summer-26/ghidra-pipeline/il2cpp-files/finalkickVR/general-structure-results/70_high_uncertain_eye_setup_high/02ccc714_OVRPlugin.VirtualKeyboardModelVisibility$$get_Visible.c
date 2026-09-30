/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelVisibility$$get_Visible
ENTRY_POINT: 02ccc714
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


undefined8 OVRPlugin_VirtualKeyboardModelVisibility__get_Visible(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  if (param_1 != 0) {
    uVar1 = (*CAPI_ovr_LanguagePackInfo_GetNativeName_Native_mF8BCD2AB19553BA859BD61EBB252D4D39753C04B
              ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x5b04);
}


