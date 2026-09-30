/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 02cd88a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(long param_1)

{
  code *extraout_x0;
  long unaff_x29;
  undefined8 in_stack_00000010;
  
  if ((*(long *)(param_1 + 0xca8) == 0) &&
     (__il2cpp_codegen_resolve_pinvoke<void(*)(long,long),18ul,45ul>_char_const____18ul__char_const____45ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                (0xa295d1,0x9f2d42),
     CAPI_ovr_ApplicationOptions_SetDestinationApiName_Native_m6E65DFFC256F83D8591FEA68F515F86D72E6F0FA
     ::il2cppPInvokeFunc = extraout_x0, extraout_x0 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x75e7);
  }
  (*CAPI_ovr_ApplicationOptions_SetDestinationApiName_Native_m6E65DFFC256F83D8591FEA68F515F86D72E6F0FA
    ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),in_stack_00000010);
  return;
}


