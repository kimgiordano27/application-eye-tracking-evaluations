/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 060d7438
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_localDimming(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float fVar6;
  
  fVar6 = *(float *)(unaff_x19 + 0xa0);
  fVar4 = (float)FUN_071cc8d8(0);
  fVar5 = fVar6 * fVar4;
  fVar4 = -(fVar6 * fVar4);
  if (0.0 <= unaff_s8 - unaff_s9) {
    fVar4 = fVar5;
  }
  fVar4 = unaff_s9 + fVar4;
  if (ABS(unaff_s8 - unaff_s9) <= fVar5) {
    fVar4 = unaff_s8;
  }
  *(float *)(unaff_x19 + 0xac) = fVar4;
  puVar1 = PTR_DAT_07a24690;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar2 = thunk_FUN_0718a308(*(long *)(unaff_x19 + 0x40),0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar3);
    }
    if (lVar2 != 0) {
      thunk_FUN_0718f4b8(*(undefined4 *)(unaff_x19 + 0xac),lVar2,
                         **(undefined4 **)(*(long *)puVar1 + 0xb8),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


