/*
FUNCTION_NAME: OVRManager$$MixedRealityEnabledFromCmd
ENTRY_POINT: 03138d8c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__MixedRealityEnabledFromCmd(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(**(long **)(param_1 + 0xcf8) + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_0391f968(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *(long *)(unaff_x19 + 0x30);
    uVar3 = FUN_03900d8c(*(long *)(unaff_x19 + 0x28),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178(uVar3,uVar3);
    }
    FUN_0395bdc0(lVar2,uVar3,0);
  }
  return;
}


