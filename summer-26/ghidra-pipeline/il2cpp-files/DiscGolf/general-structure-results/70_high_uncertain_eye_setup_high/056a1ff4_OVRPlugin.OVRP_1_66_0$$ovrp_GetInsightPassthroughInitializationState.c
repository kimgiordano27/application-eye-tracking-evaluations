/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_GetInsightPassthroughInitializationState
ENTRY_POINT: 056a1ff4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_GetInsightPassthroughInitializationState(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  
  FUN_02d965b8(PTR_DAT_06a0f540);
  *(undefined1 *)(unaff_x21 + 0x8af) = 1;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar3 = FUN_054a874c();
  puVar1 = PTR_DAT_06a0f1a0;
  if (lVar3 != 0) {
    if (unaff_x19 != 0) {
      uVar2 = FUN_05661968();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar1);
      }
      FUN_0564b8d8(uVar2,lVar3,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  return;
}


