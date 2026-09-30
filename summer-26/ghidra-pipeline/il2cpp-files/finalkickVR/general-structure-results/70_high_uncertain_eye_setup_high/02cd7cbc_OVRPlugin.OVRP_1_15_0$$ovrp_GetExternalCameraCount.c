/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraCount
ENTRY_POINT: 02cd7cbc
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


undefined8
OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraCount
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 uStack0000000000000018;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  uStack0000000000000018 = param_3;
  if ((CAPI_ovr_UserCapabilityArray_GetElement_mF4C23B0D9E0FFDE501DF4DA526DDD2A766603811::
       il2cppPInvokeFunc == (code *)0x0) &&
     (CAPI_ovr_UserCapabilityArray_GetElement_mF4C23B0D9E0FFDE501DF4DA526DDD2A766603811::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long,unsigned_long),18ul,35ul>_char_const____18ul__char_const____35ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1,0xa35014),
     CAPI_ovr_UserCapabilityArray_GetElement_mF4C23B0D9E0FFDE501DF4DA526DDD2A766603811::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x72e8);
  }
  uVar1 = (*CAPI_ovr_UserCapabilityArray_GetElement_mF4C23B0D9E0FFDE501DF4DA526DDD2A766603811::
            il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10));
  return uVar1;
}


