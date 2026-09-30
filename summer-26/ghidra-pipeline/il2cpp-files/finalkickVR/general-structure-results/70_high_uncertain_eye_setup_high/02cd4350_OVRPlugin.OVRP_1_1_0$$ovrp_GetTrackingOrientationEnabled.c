/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationEnabled
ENTRY_POINT: 02cd4350
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationEnabled(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long unaff_x29;
  
  *(undefined8 *)(param_1 + 0x888) = param_2;
  if (*(long *)(param_1 + 0x888) != 0) {
    uVar1 = (*CAPI_ovr_Price_GetAmountInHundredths_mA51FA874736E107F84634EBA998B1E17B1FAA4FF::
              il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x6b50);
}


