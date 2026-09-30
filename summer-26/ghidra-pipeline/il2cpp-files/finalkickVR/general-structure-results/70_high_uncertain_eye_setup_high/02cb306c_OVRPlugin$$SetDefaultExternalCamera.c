/*
FUNCTION_NAME: OVRPlugin$$SetDefaultExternalCamera
ENTRY_POINT: 02cb306c
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


void OVRPlugin__SetDefaultExternalCamera(long param_1,undefined8 param_2)

{
  long unaff_x29;
  
  *(undefined8 *)(param_1 + 0xc10) = param_2;
  if (*(long *)(param_1 + 0xc10) != 0) {
    (*CAPI_ovr_AbuseReportOptions_Destroy_mD7FBC30FE86F89D4174991A39189FA3E5AB5B39E::
      il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x7448);
}


