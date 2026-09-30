/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboardSpace
ENTRY_POINT: 02cbdd24
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


undefined8 OVRPlugin__CreateVirtualKeyboardSpace(void)

{
  undefined8 uVar1;
  long unaff_x29;
  
  CAPI_ovr_Challenges_UpdateInfo_m489FB29CED2CEB5B9561572741D5A9D099660C62::il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(unsigned_long,long),18ul,26ul>_char_const____18ul__char_const____26ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (0xa295d1,0x9f2b9b);
  if (CAPI_ovr_Challenges_UpdateInfo_m489FB29CED2CEB5B9561572741D5A9D099660C62::il2cppPInvokeFunc !=
      (code *)0x0) {
    uVar1 = (*CAPI_ovr_Challenges_UpdateInfo_m489FB29CED2CEB5B9561572741D5A9D099660C62::
              il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10))
    ;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x3cb4);
}


