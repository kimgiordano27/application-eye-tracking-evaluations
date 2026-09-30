/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_GetDominantHand
ENTRY_POINT: 0339aad4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_28_0__ovrp_GetDominantHand(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  
  lVar1 = thunk_FUN_01c495e4();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,0);
  }
  if (1 < *(uint *)(unaff_x23 + 0x18)) {
    *(undefined8 *)(unaff_x23 + 0x28) = unaff_x24;
    uVar2 = (**(code **)(unaff_x25 + 0x18))(*(undefined8 *)(unaff_x25 + 0x40));
    if (unaff_x22 != 0) {
      FUN_0339c944();
    }
    FUN_0339cd08();
    FUN_0339cf34();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


