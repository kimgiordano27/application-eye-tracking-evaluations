/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange
ENTRY_POINT: 02cd1ed0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnAppSpaceChange(void)

{
  undefined8 uVar1;
  long unaff_x29;
  
                    /* try { // try from 02cd1ef0 to 02dd1f6f has its CatchHandler @ 02cd1f8c */
  if ((CAPI_ovr_Message_GetUserProof_mF6AE1E0E0545866BC15312D683540277B133D74C::il2cppPInvokeFunc ==
       (code *)0x0) &&
     (CAPI_ovr_Message_GetUserProof_mF6AE1E0E0545866BC15312D683540277B133D74C::il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,25ul>_char_const____18ul__char_const____25ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1),
     CAPI_ovr_Message_GetUserProof_mF6AE1E0E0545866BC15312D683540277B133D74C::il2cppPInvokeFunc ==
     (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x6692);
  }
  uVar1 = (*CAPI_ovr_Message_GetUserProof_mF6AE1E0E0545866BC15312D683540277B133D74C::
            il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return uVar1;
}


