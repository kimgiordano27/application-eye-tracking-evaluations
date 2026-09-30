/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 02cda678
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(long param_1,long param_2)

{
  code *extraout_x0;
  long unaff_x29;
  undefined8 in_stack_00000010;
  
  __il2cpp_codegen_resolve_pinvoke<void(*)(long,long),18ul,29ul>_char_const____18ul__char_const____29ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
            (param_1,param_2);
  CAPI_ovr_NetSyncOptions_SetZoneId_Native_mC8F2D49704898DE3B1558E0D2AE452D01D7F4421::
  il2cppPInvokeFunc = extraout_x0;
  if (extraout_x0 != (code *)0x0) {
    (*extraout_x0)(*(undefined8 *)(unaff_x29 + -8),in_stack_00000010);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x7a33);
}


