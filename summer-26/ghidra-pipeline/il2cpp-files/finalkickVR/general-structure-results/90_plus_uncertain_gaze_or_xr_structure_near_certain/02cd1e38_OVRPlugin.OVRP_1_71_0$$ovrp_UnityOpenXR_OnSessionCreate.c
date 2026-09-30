/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 02cd1e38
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  if ((param_1 == 0) &&
     (CAPI_ovr_Message_GetUserDataStoreUpdateResponse_mCF4D5CEAB6E464D14B8D2694EF1A1DE4555B4623::
      il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,43ul>_char_const____18ul__char_const____43ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1),
     CAPI_ovr_Message_GetUserDataStoreUpdateResponse_mCF4D5CEAB6E464D14B8D2694EF1A1DE4555B4623::
     il2cppPInvokeFunc == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x667d);
  }
  uVar1 = (*CAPI_ovr_Message_GetUserDataStoreUpdateResponse_mCF4D5CEAB6E464D14B8D2694EF1A1DE4555B4623
            ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return uVar1;
}


