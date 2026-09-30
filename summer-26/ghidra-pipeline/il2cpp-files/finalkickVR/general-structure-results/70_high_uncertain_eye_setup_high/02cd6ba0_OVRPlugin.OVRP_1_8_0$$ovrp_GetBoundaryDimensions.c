/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryDimensions
ENTRY_POINT: 02cd6ba0
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


undefined8 OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryDimensions(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((CAPI_ovr_User_GetImageUrl_Native_m44A08EA544EB59B5526F0C6EDB15CBAF75F4C37B::il2cppPInvokeFunc
       == (code *)0x0) &&
     (CAPI_ovr_User_GetImageUrl_Native_m44A08EA544EB59B5526F0C6EDB15CBAF75F4C37B::il2cppPInvokeFunc
           = (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,21ul>_char_const____18ul__char_const____21ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                               (0xa295d1),
     CAPI_ovr_User_GetImageUrl_Native_m44A08EA544EB59B5526F0C6EDB15CBAF75F4C37B::il2cppPInvokeFunc
     == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x70a8);
  }
  uVar1 = (*CAPI_ovr_User_GetImageUrl_Native_m44A08EA544EB59B5526F0C6EDB15CBAF75F4C37B::
            il2cppPInvokeFunc)(param_1);
  return uVar1;
}


