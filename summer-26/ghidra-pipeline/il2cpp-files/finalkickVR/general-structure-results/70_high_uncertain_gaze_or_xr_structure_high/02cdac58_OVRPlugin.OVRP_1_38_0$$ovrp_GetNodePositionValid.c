/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 02cdac58
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(long param_1)

{
  code *extraout_x0;
  long unaff_x29;
  
  __il2cpp_codegen_resolve_pinvoke<void(*)(long),18ul,26ul>_char_const____18ul__char_const____26ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
            (param_1);
  CAPI_ovr_RosterOptions_Destroy_m37FC57DFACC91B1F59738C11C9CE30FE69468E5C::il2cppPInvokeFunc =
       extraout_x0;
  if (extraout_x0 != (code *)0x0) {
    (*extraout_x0)(*(undefined8 *)(unaff_x29 + -8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x7af5);
}


