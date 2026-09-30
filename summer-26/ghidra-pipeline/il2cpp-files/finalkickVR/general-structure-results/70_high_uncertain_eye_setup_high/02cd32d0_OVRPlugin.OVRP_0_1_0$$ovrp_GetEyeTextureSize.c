/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_0$$ovrp_GetEyeTextureSize
ENTRY_POINT: 02cd32d0
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


undefined8 OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long unaff_x29;
  
  CAPI_ovr_NetSyncVoipAttenuationValueArray_GetElement_m8ADF40FDA1E41861B36CB146FEE0BCB65A6A4653::
  il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long,unsigned_long),18ul,48ul>_char_const____18ul__char_const____48ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (param_1,param_2);
  if (CAPI_ovr_NetSyncVoipAttenuationValueArray_GetElement_m8ADF40FDA1E41861B36CB146FEE0BCB65A6A4653
      ::il2cppPInvokeFunc != (code *)0x0) {
    uVar1 = (*CAPI_ovr_NetSyncVoipAttenuationValueArray_GetElement_m8ADF40FDA1E41861B36CB146FEE0BCB65A6A4653
              ::il2cppPInvokeFunc)
                      (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x6926);
}


