/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameSize
ENTRY_POINT: 04f83958
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_Media__GetMrcFrameSize(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = System_Func<FocusExitEventArgs>_TypeInfo;
  if ((DAT_066c9cf9 & 1) == 0) {
    FUN_02b3c81c(System_Func<FocusExitEventArgs>_TypeInfo);
    DAT_066c9cf9 = 1;
  }
  lVar2 = FUN_04332268(param_1,*(undefined8 *)puVar1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x78) != 0)) {
    return *(undefined4 *)(*(long *)(lVar2 + 0x78) + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


