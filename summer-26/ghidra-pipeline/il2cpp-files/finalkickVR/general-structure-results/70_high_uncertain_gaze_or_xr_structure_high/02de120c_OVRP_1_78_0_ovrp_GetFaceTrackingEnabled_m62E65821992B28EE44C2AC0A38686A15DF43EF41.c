/*
FUNCTION_NAME: OVRP_1_78_0_ovrp_GetFaceTrackingEnabled_m62E65821992B28EE44C2AC0A38686A15DF43EF41
ENTRY_POINT: 02de120c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_13;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_6;functionality_gaze_retrieval_or_extraction
*/


undefined4
OVRP_1_78_0_ovrp_GetFaceTrackingEnabled_m62E65821992B28EE44C2AC0A38686A15DF43EF41
          (undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (OVRP_1_78_0_ovrp_GetFaceTrackingEnabled_m62E65821992B28EE44C2AC0A38686A15DF43EF41::
      il2cppPInvokeFunc == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(int*),10ul,28ul>_char_const____10ul__char_const____28ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ((int *)"OVRPlugin");
    OVRP_1_78_0_ovrp_GetFaceTrackingEnabled_m62E65821992B28EE44C2AC0A38686A15DF43EF41::
    il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (OVRP_1_78_0_ovrp_GetFaceTrackingEnabled_m62E65821992B28EE44C2AC0A38686A15DF43EF41::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x6017);
    }
  }
  uVar2 = (*OVRP_1_78_0_ovrp_GetFaceTrackingEnabled_m62E65821992B28EE44C2AC0A38686A15DF43EF41::
            il2cppPInvokeFunc)(param_1);
  return uVar2;
}


