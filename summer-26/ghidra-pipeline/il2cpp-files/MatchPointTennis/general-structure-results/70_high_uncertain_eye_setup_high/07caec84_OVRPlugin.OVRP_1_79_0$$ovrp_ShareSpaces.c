/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_ShareSpaces
ENTRY_POINT: 07caec84
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces(void)

{
  ulong uVar1;
  int in_w8;
  long unaff_x19;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_09531730();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    if (*(long *)(*(long *)(unaff_x19 + 0x60) + 0x30) != 0) {
      FUN_07caed04();
      FUN_07caed98();
    }
    FUN_07caee0c();
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      if (*(int *)(unaff_x19 + 0x58) == *(int *)(*(long *)(unaff_x19 + 0x60) + 0x3c)) {
        return;
      }
      FUN_07cae2f4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


