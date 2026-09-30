/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 02cc1780
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


undefined8 OVRPlugin__GetNativeOpenXRSession(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  CAPI_ovr_NetSync_Disconnect_m8D767A3924F9D26ABBA3BF2F9D0FBAC250A09A45::il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(long),18ul,23ul>_char_const____18ul__char_const____23ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (param_1);
  if (CAPI_ovr_NetSync_Disconnect_m8D767A3924F9D26ABBA3BF2F9D0FBAC250A09A45::il2cppPInvokeFunc !=
      (code *)0x0) {
    uVar1 = (*CAPI_ovr_NetSync_Disconnect_m8D767A3924F9D26ABBA3BF2F9D0FBAC250A09A45::
              il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x4407);
}


