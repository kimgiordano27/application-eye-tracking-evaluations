/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeDepth
ENTRY_POINT: 03397a10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x23;
  
  if (*(char *)(unaff_x23 + 0x100) == '\0') {
    lVar1 = thunk_FUN_01c495e4();
    if (lVar1 != 0) {
      lVar1 = thunk_FUN_01c495e4();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
      goto LAB_033975fc;
    }
  }
  OVRPlugin_Sizei___cctor();
LAB_033975fc:
  uVar2 = FUN_03394994();
  return uVar2;
}


