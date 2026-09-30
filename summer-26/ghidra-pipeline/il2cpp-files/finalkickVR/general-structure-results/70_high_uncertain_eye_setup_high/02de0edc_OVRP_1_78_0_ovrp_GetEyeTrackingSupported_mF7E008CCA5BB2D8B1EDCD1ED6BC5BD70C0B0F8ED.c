/*
FUNCTION_NAME: OVRP_1_78_0_ovrp_GetEyeTrackingSupported_mF7E008CCA5BB2D8B1EDCD1ED6BC5BD70C0B0F8ED
ENTRY_POINT: 02de0edc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_13;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined4
OVRP_1_78_0_ovrp_GetEyeTrackingSupported_mF7E008CCA5BB2D8B1EDCD1ED6BC5BD70C0B0F8ED
          (undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (OVRP_1_78_0_ovrp_GetEyeTrackingSupported_mF7E008CCA5BB2D8B1EDCD1ED6BC5BD70C0B0F8ED::
      il2cppPInvokeFunc == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(int*),10ul,29ul>_char_const____10ul__char_const____29ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ((int *)"OVRPlugin");
    OVRP_1_78_0_ovrp_GetEyeTrackingSupported_mF7E008CCA5BB2D8B1EDCD1ED6BC5BD70C0B0F8ED::
    il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (OVRP_1_78_0_ovrp_GetEyeTrackingSupported_mF7E008CCA5BB2D8B1EDCD1ED6BC5BD70C0B0F8ED::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x5fae);
    }
  }
  uVar2 = (*OVRP_1_78_0_ovrp_GetEyeTrackingSupported_mF7E008CCA5BB2D8B1EDCD1ED6BC5BD70C0B0F8ED::
            il2cppPInvokeFunc)(param_1);
  return uVar2;
}


