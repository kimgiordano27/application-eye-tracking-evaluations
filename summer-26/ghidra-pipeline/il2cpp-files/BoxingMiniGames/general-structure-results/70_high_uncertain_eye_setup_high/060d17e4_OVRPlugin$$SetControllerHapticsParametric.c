/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsParametric
ENTRY_POINT: 060d17e4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerHapticsParametric(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 unaff_w19;
  undefined4 *unaff_x20;
  long unaff_x21;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  FUN_060d187c();
  _uStack0000000000000000 = FUN_060d1978();
  uVar3 = FUN_074e9f40();
  if ((uVar3 & 1) != 0) {
    lVar1 = *(long *)(unaff_x21 + 0x18);
    lVar2 = *(long *)(unaff_x21 + 0x20);
    uVar4 = FUN_060d1b00(*unaff_x20,unaff_x20[1],unaff_x20[2]);
    if ((lVar1 == 0) || (uVar4 = FUN_071c3148(lVar1,uVar4,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_055fb2a4(lVar2,unaff_w19,uVar4,*(undefined8 *)PTR_DAT_07a24470);
  }
  return;
}


