/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 05bc029c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetControllerHapticsAmplitudeEnvelope(void)

{
  ulong uVar1;
  undefined8 uVar2;
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar3;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  
  thunk_FUN_031e5338();
  uVar1 = FUN_069d8404();
  if ((uVar1 & 1) == 0) {
    lVar3 = *unaff_x21;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar1 = FUN_069d8404(lVar3,0,0);
    lVar3 = *unaff_x20;
    if ((uVar1 & 1) != 0) {
      *unaff_x21 = lVar3;
      if (lVar3 == 0) goto LAB_05bc03b0;
      FUN_05bc0a30(lVar3);
      lVar3 = FUN_05bc0730();
      *unaff_x20 = lVar3;
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar1 = FUN_069d8404(lVar3,0,0);
    lVar3 = *unaff_x21;
    if ((uVar1 & 1) != 0) {
      *unaff_x20 = lVar3;
      if (lVar3 == 0) goto LAB_05bc03b0;
      FUN_05bc0a30();
      lVar3 = FUN_05bc08b0();
      *unaff_x21 = lVar3;
    }
    if ((lVar3 == 0) || (fVar4 = (float)FUN_05bc0a30(), *unaff_x20 == 0)) {
LAB_05bc03b0:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    fVar5 = (float)FUN_05bc0a30();
    fVar6 = 0.0;
    if (fVar4 - fVar5 != 0.0) {
      if (*unaff_x20 == 0) goto LAB_05bc03b0;
      fVar6 = (float)FUN_05bc0a30();
      fVar6 = (unaff_s8 - fVar6) / (fVar4 - fVar5);
    }
    uVar2 = 1;
    *unaff_x19 = fVar6;
  }
  else {
    uVar2 = 0;
    *unaff_x19 = 0.0;
  }
  return uVar2;
}


