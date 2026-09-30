/*
FUNCTION_NAME: OVRPlugin.OVRP_1_43_0$$.cctor
ENTRY_POINT: 02cdb110
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_43_0___cctor(void)

{
  code *extraout_x0;
  long unaff_x29;
  undefined4 uStack0000000000000004;
  
  uStack0000000000000004 = 0xc;
  __il2cpp_codegen_resolve_pinvoke<void(*)(long,int),18ul,30ul>_char_const____18ul__char_const____30ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
            (0xa295d1,0xa5a4fe);
  CAPI_ovr_UserOptions_SetTimeWindow_mAD9D603833B327AF84CFEAAD3F5AB25533F3BE1A::il2cppPInvokeFunc =
       extraout_x0;
  if (extraout_x0 != (code *)0x0) {
    (*extraout_x0)(*(undefined8 *)(unaff_x29 + -8),*(undefined4 *)(unaff_x29 + -0xc));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x7b96);
}


