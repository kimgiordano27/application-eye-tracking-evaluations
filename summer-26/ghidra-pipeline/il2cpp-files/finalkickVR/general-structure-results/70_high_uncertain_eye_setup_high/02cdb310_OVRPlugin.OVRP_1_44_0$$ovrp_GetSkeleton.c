/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetSkeleton
ENTRY_POINT: 02cdb310
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetSkeleton(long param_1,undefined8 param_2)

{
  long unaff_x29;
  
  *(undefined8 *)(param_1 + 0xee0) = param_2;
  if (*(long *)(param_1 + 0xee0) != 0) {
    (*CAPI_ovr_VoipOptions_SetBitrateForNewConnections_m3E95C3A0AC807CE013C19989AC81F05DBB57D083::
      il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8),*(undefined4 *)(unaff_x29 + -0xc));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x7bd3);
}


