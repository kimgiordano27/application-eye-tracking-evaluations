/*
FUNCTION_NAME: FUN_03567630
ENTRY_POINT: 03567630
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03567630(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = OVRPlugin_OVRP_1_32_0_TypeInfo;
  if ((DAT_0412dfa1 & 1) == 0) {
    FUN_01ab69ac(OVRTrackedKeyboard_<Start>d__85_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_32_0_TypeInfo);
    DAT_0412dfa1 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x58);
  if (lVar2 != 0) {
    FUN_021c837c(lVar2,param_1,*(undefined8 *)OVRTrackedKeyboard_<Start>d__85_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


