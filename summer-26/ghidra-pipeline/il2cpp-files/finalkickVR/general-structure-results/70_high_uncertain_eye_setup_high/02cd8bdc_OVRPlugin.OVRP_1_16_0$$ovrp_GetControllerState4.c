/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetControllerState4
ENTRY_POINT: 02cd8bdc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_GetControllerState4(long param_1)

{
  code *extraout_x0;
  long unaff_x29;
  
  __il2cpp_codegen_resolve_pinvoke<void(*)(long),18ul,29ul>_char_const____18ul__char_const____29ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
            (param_1);
  CAPI_ovr_ChallengeOptions_Destroy_m2D79D4D52D8BA675A96A6DDA9A2AEFE678EC1C51::il2cppPInvokeFunc =
       extraout_x0;
  if (extraout_x0 != (code *)0x0) {
    (*extraout_x0)(*(undefined8 *)(unaff_x29 + -8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x76d7);
}


