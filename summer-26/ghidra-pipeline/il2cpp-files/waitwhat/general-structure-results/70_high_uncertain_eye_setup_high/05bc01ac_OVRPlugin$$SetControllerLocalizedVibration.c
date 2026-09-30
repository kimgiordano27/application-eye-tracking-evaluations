/*
FUNCTION_NAME: OVRPlugin$$SetControllerLocalizedVibration
ENTRY_POINT: 05bc01ac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetControllerLocalizedVibration(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_071163e8);
    FUN_03188a78(PTR_DAT_071163f0);
    FUN_03188a78(PTR_DAT_070c1b68);
    *(undefined1 *)(unaff_x23 + 0xab2) = 1;
  }
  if (unaff_x22 == 0) goto LAB_05bc03b0;
  if (*(int *)(unaff_x22 + 0x18) == 1) {
    *unaff_x19 = 0.0;
    lVar2 = FUN_042e47a4();
    *unaff_x21 = lVar2;
    *unaff_x20 = lVar2;
    return 1;
  }
  if (*(int *)(unaff_x22 + 0x18) == 0) {
    *unaff_x21 = 0;
    *unaff_x20 = 0;
LAB_05bc01fc:
    uVar4 = 0;
    *unaff_x19 = 0.0;
  }
  else {
    lVar2 = FUN_05bc0730();
    *unaff_x20 = lVar2;
    lVar2 = FUN_05bc08b0();
    puVar1 = PTR_DAT_070c1b68;
    *unaff_x21 = lVar2;
    lVar2 = *unaff_x20;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar3 = FUN_069d8404(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      lVar2 = *unaff_x21;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar3 = FUN_069d8404(lVar2,0,0);
      if ((uVar3 & 1) != 0) goto LAB_05bc01fc;
    }
    lVar2 = *unaff_x21;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar3 = FUN_069d8404(lVar2,0,0);
    lVar2 = *unaff_x20;
    if ((uVar3 & 1) != 0) {
      *unaff_x21 = lVar2;
      if (lVar2 == 0) goto LAB_05bc03b0;
      FUN_05bc0a30(lVar2);
      lVar2 = FUN_05bc0730();
      *unaff_x20 = lVar2;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar3 = FUN_069d8404(lVar2,0,0);
    lVar2 = *unaff_x21;
    if ((uVar3 & 1) != 0) {
      *unaff_x20 = lVar2;
      if (lVar2 == 0) goto LAB_05bc03b0;
      FUN_05bc0a30();
      lVar2 = FUN_05bc08b0();
      *unaff_x21 = lVar2;
    }
    if ((lVar2 == 0) || (fVar5 = (float)FUN_05bc0a30(), *unaff_x20 == 0)) {
LAB_05bc03b0:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    fVar6 = (float)FUN_05bc0a30();
    fVar7 = 0.0;
    if (fVar5 - fVar6 != 0.0) {
      if (*unaff_x20 == 0) goto LAB_05bc03b0;
      fVar7 = (float)FUN_05bc0a30();
      fVar7 = (unaff_s8 - fVar7) / (fVar5 - fVar6);
    }
    uVar4 = 1;
    *unaff_x19 = fVar7;
  }
  return uVar4;
}


