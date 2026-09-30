/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 07a67bbc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  FUN_0768c8ac();
  uVar1 = FUN_074d875c();
  if (*(char *)(unaff_x19 + 4) != '\0') {
    FUN_07a64d34();
    FUN_07a64d4c(uVar1);
    lVar2 = FUN_07a648f0();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined4 *)(lVar2 + 0x3c) = 0x3fc00000;
    *(undefined1 *)(lVar2 + 0x38) = 1;
  }
  return;
}


