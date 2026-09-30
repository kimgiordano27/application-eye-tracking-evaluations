/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 02cd2708
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


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  CAPI_ovr_NetSyncConnection_GetConnectionId_m994D749E88395AE52D43EB1B5694EFBAA94FBAB1::
  il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,38ul>_char_const____18ul__char_const____38ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (param_1);
  if (CAPI_ovr_NetSyncConnection_GetConnectionId_m994D749E88395AE52D43EB1B5694EFBAA94FBAB1::
      il2cppPInvokeFunc != (code *)0x0) {
    uVar1 = (*CAPI_ovr_NetSyncConnection_GetConnectionId_m994D749E88395AE52D43EB1B5694EFBAA94FBAB1::
              il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x679d);
}


