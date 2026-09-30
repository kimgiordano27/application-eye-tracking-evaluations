/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardTextureData
ENTRY_POINT: 02cbebac
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


undefined8 OVRPlugin__GetVirtualKeyboardTextureData(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  long unaff_x29;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  uStack0000000000000010 = in_x3;
  if ((CAPI_ovr_GroupPresence_LaunchRejoinDialog_Native_mA6E92BEB44537B15AA311B19D141CF7CED96679C::
       il2cppPInvokeFunc == (code *)0x0) &&
     (CAPI_ovr_GroupPresence_LaunchRejoinDialog_Native_mA6E92BEB44537B15AA311B19D141CF7CED96679C::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(long,long,long),18ul,37ul>_char_const____18ul__char_const____37ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1,0xa029f4,1),
     CAPI_ovr_GroupPresence_LaunchRejoinDialog_Native_mA6E92BEB44537B15AA311B19D141CF7CED96679C::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x3e9b);
  }
  uVar1 = (*CAPI_ovr_GroupPresence_LaunchRejoinDialog_Native_mA6E92BEB44537B15AA311B19D141CF7CED96679C
            ::il2cppPInvokeFunc)
                    (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10),
                     in_stack_00000018);
  return uVar1;
}


