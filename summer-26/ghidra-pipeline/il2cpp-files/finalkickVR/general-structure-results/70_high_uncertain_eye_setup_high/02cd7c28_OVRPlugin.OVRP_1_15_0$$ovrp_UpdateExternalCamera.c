/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_UpdateExternalCamera
ENTRY_POINT: 02cd7c28
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_UpdateExternalCamera(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  if ((param_1 == 0) &&
     (CAPI_ovr_UserCapability_GetReasonCode_Native_mA4F6EF43ECAA2FBF8602602AA70F0E6A0AE04740::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,33ul>_char_const____18ul__char_const____33ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1),
     CAPI_ovr_UserCapability_GetReasonCode_Native_mA4F6EF43ECAA2FBF8602602AA70F0E6A0AE04740::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x72d3);
  }
  uVar1 = (*CAPI_ovr_UserCapability_GetReasonCode_Native_mA4F6EF43ECAA2FBF8602602AA70F0E6A0AE04740::
            il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return uVar1;
}


