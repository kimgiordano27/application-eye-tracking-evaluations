/*
FUNCTION_NAME: OVRPlugin$$IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 060d2a3c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsControllerDrivenHandPosesEnabled(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x580));
  FUN_03642964(PTR_DAT_07a24578);
  FUN_03642964(PTR_DAT_07a24588);
  *(undefined1 *)(unaff_x21 + 0xa8b) = 1;
  if (unaff_x19 == 0) {
    return;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    uVar1 = FUN_054a8364();
    if ((uVar1 & 1) != 0) {
      return;
    }
    lVar2 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a24588);
    FUN_060d2eb0();
    if ((lVar2 != 0) && (FUN_060d2ef4(lVar2,0), *(long *)(unaff_x20 + 0x30) != 0)) {
      FUN_054a7dc8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


