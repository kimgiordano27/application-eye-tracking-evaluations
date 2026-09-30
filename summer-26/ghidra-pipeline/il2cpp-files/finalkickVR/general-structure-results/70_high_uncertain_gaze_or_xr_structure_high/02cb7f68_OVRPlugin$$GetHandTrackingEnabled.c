/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 02cb7f68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_6;functionality_gaze_retrieval_or_extraction
*/


undefined8
OVRPlugin__GetHandTrackingEnabled(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  long unaff_x29;
  undefined8 uStack0000000000000018;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  uStack0000000000000018 = param_3;
  if ((CAPI_ovr_PlatformInitializeWithAccessToken_m55D572BC2957AC85A0CABA2828AA79C05027A5D7::
       il2cppPInvokeFunc == (code *)0x0) &&
     (CAPI_ovr_PlatformInitializeWithAccessToken_m55D572BC2957AC85A0CABA2828AA79C05027A5D7::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(unsigned_long,char*),18ul,38ul>_char_const____18ul__char_const____38ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1,"ovr_PlatformInitializeWithAccessToken"),
     CAPI_ovr_PlatformInitializeWithAccessToken_m55D572BC2957AC85A0CABA2828AA79C05027A5D7::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x3098);
  }
  pvVar1 = (void *)il2cpp_codegen_marshal_string(*(String_t **)(unaff_x29 + -0x10));
  uVar2 = (*CAPI_ovr_PlatformInitializeWithAccessToken_m55D572BC2957AC85A0CABA2828AA79C05027A5D7::
            il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),pvVar1);
  il2cpp_codegen_marshal_free(pvVar1);
  return uVar2;
}


