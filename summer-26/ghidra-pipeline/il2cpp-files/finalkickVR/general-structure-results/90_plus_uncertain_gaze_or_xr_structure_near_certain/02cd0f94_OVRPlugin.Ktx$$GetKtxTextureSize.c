/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureSize
ENTRY_POINT: 02cd0f94
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_Ktx__GetKtxTextureSize(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  if (param_1 != 0) {
    uVar1 = (*CAPI_ovr_Message_GetNetSyncSetSessionPropertyResult_m506204D8AB8BA466EA27B45483B2E4D0F48D435E
              ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x6488);
}


