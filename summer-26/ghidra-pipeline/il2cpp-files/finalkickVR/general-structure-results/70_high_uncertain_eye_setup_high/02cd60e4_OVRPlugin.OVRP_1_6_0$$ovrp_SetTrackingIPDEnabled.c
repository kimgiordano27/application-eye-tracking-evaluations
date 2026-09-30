/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetTrackingIPDEnabled
ENTRY_POINT: 02cd60e4
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


undefined8 OVRPlugin_OVRP_1_6_0__ovrp_SetTrackingIPDEnabled(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((CAPI_ovr_TestUser_GetFbAppAccessArray_m2A6ABA29945048ADD463D66A80272A6C5C9A919E::
       il2cppPInvokeFunc == (code *)0x0) &&
     (CAPI_ovr_TestUser_GetFbAppAccessArray_m2A6ABA29945048ADD463D66A80272A6C5C9A919E::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,33ul>_char_const____18ul__char_const____33ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1),
     CAPI_ovr_TestUser_GetFbAppAccessArray_m2A6ABA29945048ADD463D66A80272A6C5C9A919E::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x6f3d);
  }
  uVar1 = (*CAPI_ovr_TestUser_GetFbAppAccessArray_m2A6ABA29945048ADD463D66A80272A6C5C9A919E::
            il2cppPInvokeFunc)(param_1);
  return uVar1;
}


