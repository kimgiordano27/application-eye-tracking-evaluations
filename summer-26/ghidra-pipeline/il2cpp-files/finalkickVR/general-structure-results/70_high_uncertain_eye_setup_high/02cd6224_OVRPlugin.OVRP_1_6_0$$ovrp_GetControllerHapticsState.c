/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsState
ENTRY_POINT: 02cd6224
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsState(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  if ((param_1 == 0) &&
     (CAPI_ovr_TestUser_GetFriendAccessToken_Native_m1E9C9BDE2FB87BFB7ABD6BBE56804628892757B9::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,34ul>_char_const____18ul__char_const____34ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1),
     CAPI_ovr_TestUser_GetFriendAccessToken_Native_m1E9C9BDE2FB87BFB7ABD6BBE56804628892757B9::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x6f64);
  }
  uVar1 = (*CAPI_ovr_TestUser_GetFriendAccessToken_Native_m1E9C9BDE2FB87BFB7ABD6BBE56804628892757B9
            ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return uVar1;
}


