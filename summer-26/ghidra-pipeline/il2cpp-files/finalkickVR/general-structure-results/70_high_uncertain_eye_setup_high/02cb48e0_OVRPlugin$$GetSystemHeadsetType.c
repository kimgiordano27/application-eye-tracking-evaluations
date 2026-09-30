/*
FUNCTION_NAME: OVRPlugin$$GetSystemHeadsetType
ENTRY_POINT: 02cb48e0
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


void OVRPlugin__GetSystemHeadsetType(undefined8 param_1)

{
  code *extraout_x0;
  
  if ((CAPI_ovr_ApplicationOptions_Destroy_mC38C903B04C62469D86FA4E3CEA6EE99BE25F3CC::
       il2cppPInvokeFunc == (code *)0x0) &&
     (__il2cpp_codegen_resolve_pinvoke<void(*)(long),18ul,31ul>_char_const____18ul__char_const____31ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                (0xa295d1),
     CAPI_ovr_ApplicationOptions_Destroy_mC38C903B04C62469D86FA4E3CEA6EE99BE25F3CC::
     il2cppPInvokeFunc = extraout_x0, extraout_x0 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x758b);
  }
  (*CAPI_ovr_ApplicationOptions_Destroy_mC38C903B04C62469D86FA4E3CEA6EE99BE25F3CC::il2cppPInvokeFunc
  )(param_1);
  return;
}


