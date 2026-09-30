/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 02cd2594
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(undefined8 param_1,undefined8 param_2)

{
  code *extraout_x0;
  long unaff_x29;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_2;
  if ((CAPI_ovr_Microphone_Stop_m6B2430DE30831A00BFF65B0ED3BB9D9B107457C0::il2cppPInvokeFunc ==
       (code *)0x0) &&
     (__il2cpp_codegen_resolve_pinvoke<void(*)(long),18ul,20ul>_char_const____18ul__char_const____20ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                (0xa295d1),
     CAPI_ovr_Microphone_Stop_m6B2430DE30831A00BFF65B0ED3BB9D9B107457C0::il2cppPInvokeFunc =
          extraout_x0, extraout_x0 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x6774);
  }
  (*CAPI_ovr_Microphone_Stop_m6B2430DE30831A00BFF65B0ED3BB9D9B107457C0::il2cppPInvokeFunc)
            (*(undefined8 *)(unaff_x29 + -8));
  return;
}


