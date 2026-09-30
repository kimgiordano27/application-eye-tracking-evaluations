/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 02cc5048
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 OVRPlugin__GetSpaceBoundary2D(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 uStack0000000000000010;
  
  if (*(long *)(param_1 + 0xc10) == 0) {
    *(undefined4 *)(unaff_x29 + -0x14) = 8;
    CAPI_ovr_Voip_ReportAppVoipSessions_m41400DB11DC04A2E33FB014D35CAC8AF9E1CAC15::il2cppPInvokeFunc
         = (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(unsigned_long*),18ul,31ul>_char_const____18ul__char_const____31ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             ((ulong *)"ovrplatformloader");
    if (CAPI_ovr_Voip_ReportAppVoipSessions_m41400DB11DC04A2E33FB014D35CAC8AF9E1CAC15::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                    ,0x4b50);
    }
  }
  uStack0000000000000010 = 0;
  if (*(long *)(unaff_x29 + -8) != 0) {
    uStack0000000000000010 =
         UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299::GetAddressAtUnchecked
                   (*(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 **)(unaff_x29 + -8),0);
  }
  uVar1 = (*CAPI_ovr_Voip_ReportAppVoipSessions_m41400DB11DC04A2E33FB014D35CAC8AF9E1CAC15::
            il2cppPInvokeFunc)(uStack0000000000000010);
  return uVar1;
}


