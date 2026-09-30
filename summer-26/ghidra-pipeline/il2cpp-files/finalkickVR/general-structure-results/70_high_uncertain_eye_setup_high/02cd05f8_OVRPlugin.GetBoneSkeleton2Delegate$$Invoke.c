/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$Invoke
ENTRY_POINT: 02cd05f8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_GetBoneSkeleton2Delegate__Invoke(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = 8;
  CAPI_ovr_Message_GetLaunchReportFlowResult_m18CCEABA6533ED38ADCDB37C0D6A5C9B59026F5D::
  il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,38ul>_char_const____18ul__char_const____38ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (0xa295d1);
  if (CAPI_ovr_Message_GetLaunchReportFlowResult_m18CCEABA6533ED38ADCDB37C0D6A5C9B59026F5D::
      il2cppPInvokeFunc != (code *)0x0) {
    uVar1 = (*CAPI_ovr_Message_GetLaunchReportFlowResult_m18CCEABA6533ED38ADCDB37C0D6A5C9B59026F5D::
              il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x634d);
}


