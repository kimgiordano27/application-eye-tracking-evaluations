/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_QplMarkerPointCached
ENTRY_POINT: 02cd2c60
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRPlugin_OVRP_1_79_0__ovrp_QplMarkerPointCached(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_1;
  if ((CAPI_ovr_NetSyncSession_GetUserId_mC7FB99B3B4DC57DCFB6C7BF66655EC2F83968779::
       il2cppPInvokeFunc == (code *)0x0) &&
     (CAPI_ovr_NetSyncSession_GetUserId_mC7FB99B3B4DC57DCFB6C7BF66655EC2F83968779::il2cppPInvokeFunc
           = (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(long),18ul,29ul>_char_const____18ul__char_const____29ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                               (0xa295d1),
     CAPI_ovr_NetSyncSession_GetUserId_mC7FB99B3B4DC57DCFB6C7BF66655EC2F83968779::il2cppPInvokeFunc
     == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x6857);
  }
  uVar1 = (*CAPI_ovr_NetSyncSession_GetUserId_mC7FB99B3B4DC57DCFB6C7BF66655EC2F83968779::
            il2cppPInvokeFunc)(uStack0000000000000018);
  return uVar1;
}


