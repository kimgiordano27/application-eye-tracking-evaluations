/*
FUNCTION_NAME: Internal_LoadOVRPlugin_m9C05A911848136E203C79089AB828E9F8B094BA8
ENTRY_POINT: 04219efc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


bool Internal_LoadOVRPlugin_m9C05A911848136E203C79089AB828E9F8B094BA8(long param_1)

{
  byte bVar1;
  char cVar2;
  long local_30;
  
  if (Internal_LoadOVRPlugin_m9C05A911848136E203C79089AB828E9F8B094BA8::il2cppPInvokeFunc ==
      (code *)0x0) {
    bVar1 = __il2cpp_codegen_resolve_pinvoke<unsigned_char(*)(char16_t*),15ul,14ul>_char_const____15ul__char_const____14ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ((wchar16 *)"OculusXRPlugin");
    Internal_LoadOVRPlugin_m9C05A911848136E203C79089AB828E9F8B094BA8::il2cppPInvokeFunc =
         (code *)(ulong)bVar1;
    if (Internal_LoadOVRPlugin_m9C05A911848136E203C79089AB828E9F8B094BA8::il2cppPInvokeFunc ==
        (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Unity.XR.Oculus.cpp"
                    ,0x1dcb);
    }
  }
  local_30 = 0;
  if (param_1 != 0) {
    local_30 = param_1 + 0x14;
  }
  cVar2 = (*Internal_LoadOVRPlugin_m9C05A911848136E203C79089AB828E9F8B094BA8::il2cppPInvokeFunc)
                    (local_30);
  return cVar2 != '\0';
}


