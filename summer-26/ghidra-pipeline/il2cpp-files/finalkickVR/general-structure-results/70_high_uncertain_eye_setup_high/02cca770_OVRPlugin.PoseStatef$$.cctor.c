/*
FUNCTION_NAME: OVRPlugin.PoseStatef$$.cctor
ENTRY_POINT: 02cca770
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


undefined4 OVRPlugin_PoseStatef___cctor(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = param_3;
  uStack0000000000000010 = param_2;
  if (CAPI_ovr_DataStore_Contains_Native_mD399BB90C5D13DC22330E6E8A8042CEAC2208CD9::
      il2cppPInvokeFunc == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<unsigned_int(*)(long,long),18ul,23ul>_char_const____18ul__char_const____23ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      (0xa295d1,0x9885ad);
    CAPI_ovr_DataStore_Contains_Native_mD399BB90C5D13DC22330E6E8A8042CEAC2208CD9::il2cppPInvokeFunc
         = (code *)(ulong)uVar1;
    if (CAPI_ovr_DataStore_Contains_Native_mD399BB90C5D13DC22330E6E8A8042CEAC2208CD9::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                    ,0x569f);
    }
  }
  uVar2 = (*CAPI_ovr_DataStore_Contains_Native_mD399BB90C5D13DC22330E6E8A8042CEAC2208CD9::
            il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),uStack0000000000000010);
  return uVar2;
}


