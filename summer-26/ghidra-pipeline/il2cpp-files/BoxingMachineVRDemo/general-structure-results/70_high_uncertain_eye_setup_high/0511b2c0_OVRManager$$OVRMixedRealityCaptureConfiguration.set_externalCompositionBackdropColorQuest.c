/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest
ENTRY_POINT: 0511b2c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined1
OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(void)

{
  undefined *puVar1;
  long unaff_x21;
  
  puVar1 = PTR_DAT_0677eae0;
  if (unaff_x21 != 0) {
    *(undefined1 *)(unaff_x21 + 0x10) = 1;
    thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    OVRManager__OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames();
    FUN_0511b430();
    return *(undefined1 *)(unaff_x21 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


