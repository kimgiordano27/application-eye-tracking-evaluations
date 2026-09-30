/*
FUNCTION_NAME: Virtence.OpenTypeCS.Cff$$.ctor
ENTRY_POINT: 02de2584
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Virtence_OpenTypeCS_Cff___ctor(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long unaff_x29;
  
  if (param_1 == 0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(VirtualKeyboardModelVisibility_tF9EF8EFEA4EAFA8A678439BB262143E6BD686EE9*),10ul,39ul>_char_const____10ul__char_const____39ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ((VirtualKeyboardModelVisibility_tF9EF8EFEA4EAFA8A678439BB262143E6BD686EE9 *)
                       "OVRPlugin");
    OVRP_1_83_0_ovrp_SetVirtualKeyboardModelVisibility_m5B7E0A3260283BDB6524CE09701E8406CD454D66::
    il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (OVRP_1_83_0_ovrp_SetVirtualKeyboardModelVisibility_m5B7E0A3260283BDB6524CE09701E8406CD454D66
        ::il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x6318);
    }
  }
  uVar2 = (*OVRP_1_83_0_ovrp_SetVirtualKeyboardModelVisibility_m5B7E0A3260283BDB6524CE09701E8406CD454D66
            ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return uVar2;
}


