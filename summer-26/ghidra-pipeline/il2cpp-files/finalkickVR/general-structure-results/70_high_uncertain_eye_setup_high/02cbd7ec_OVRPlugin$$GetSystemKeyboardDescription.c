/*
FUNCTION_NAME: OVRPlugin$$GetSystemKeyboardDescription
ENTRY_POINT: 02cbd7ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSystemKeyboardDescription(void)

{
  undefined8 uVar1;
  uint in_w4;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  
  CAPI_ovr_Challenges_GetEntriesByIds_m5E314D44CD9F4B63B0EB680D6A54F19F25BB0FF8::il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(unsigned_long,int,int,unsigned_long*,unsigned_int),18ul,31ul>_char_const____18ul__char_const____31ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (0xa295d1,0xa6cebd,1,(ulong *)0x2,in_w4);
  if (CAPI_ovr_Challenges_GetEntriesByIds_m5E314D44CD9F4B63B0EB680D6A54F19F25BB0FF8::
      il2cppPInvokeFunc != (code *)0x0) {
    uStack0000000000000008 = 0;
    if (*(long *)(unaff_x29 + -0x18) != 0) {
      uStack0000000000000008 =
           UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299::GetAddressAtUnchecked
                     (*(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 **)
                       (unaff_x29 + -0x18),0);
    }
    uVar1 = (*CAPI_ovr_Challenges_GetEntriesByIds_m5E314D44CD9F4B63B0EB680D6A54F19F25BB0FF8::
              il2cppPInvokeFunc)
                      (*(undefined8 *)(unaff_x29 + -8),*(undefined4 *)(unaff_x29 + -0xc),
                       *(undefined4 *)(unaff_x29 + -0x10),uStack0000000000000008,
                       *(undefined4 *)(unaff_x29 + -0x1c));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x3c06);
}


