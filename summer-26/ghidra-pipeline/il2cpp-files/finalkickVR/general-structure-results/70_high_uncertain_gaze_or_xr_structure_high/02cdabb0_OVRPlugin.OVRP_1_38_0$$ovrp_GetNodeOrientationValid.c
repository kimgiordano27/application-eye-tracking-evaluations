/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 02cdabb0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_5;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid(void)

{
  undefined8 uVar1;
  
  CAPI_ovr_RosterOptions_Create_m79D97A8B8B371DD89C789C8E10170FF10C7E449F::il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(),18ul,25ul>_char_const____18ul__char_const____25ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         ();
  if (CAPI_ovr_RosterOptions_Create_m79D97A8B8B371DD89C789C8E10170FF10C7E449F::il2cppPInvokeFunc !=
      (code *)0x0) {
    uVar1 = (*CAPI_ovr_RosterOptions_Create_m79D97A8B8B371DD89C789C8E10170FF10C7E449F::
              il2cppPInvokeFunc)();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x7ae0);
}


