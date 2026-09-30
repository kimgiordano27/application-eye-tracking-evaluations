/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 07c5c174
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__SetColorScaleAndOffset(undefined1 param_1 [16],float param_2,undefined4 param_3)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar5;
  float unaff_s11;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = param_3;
  fVar3 = (float)FUN_09538070();
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar1 = *unaff_x21;
  }
  pfVar2 = *(float **)(lVar1 + 0xb8);
  fVar8 = *(float *)(unaff_x20 + 0x48);
  fVar5 = *pfVar2;
  fVar4 = pfVar2[1];
  fVar7 = unaff_s8 * 0.5 * unaff_s8;
  if (1.0 <= unaff_s8) {
    fVar6 = *(float *)(unaff_x19 + 4);
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar1 = *unaff_x21;
      pfVar2 = *(float **)(lVar1 + 0xb8);
    }
    if ((fVar6 - pfVar2[3] < unaff_s10 + param_2 * unaff_s9 * unaff_s8 + fVar7 * fVar4 * fVar8) &&
       (*(int *)(lVar1 + 0xe4) == 0)) {
      thunk_FUN_044a54b4();
    }
  }
  return unaff_s11 + fVar3 * unaff_s9 * unaff_s8 + fVar7 * fVar5 * fVar8;
}


