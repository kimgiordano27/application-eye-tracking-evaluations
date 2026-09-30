/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 05ba28d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_InputFocusLost(void)

{
  undefined *puVar1;
  long unaff_x19;
  float fVar2;
  double dVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  puVar1 = PTR_DAT_070c22f8;
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar4 = 0.0;
  fVar2 = SQRT((unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9) *
               (unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13));
  if (DAT_012e33d4 <= fVar2) {
    fVar2 = (unaff_s8 * unaff_s11 + unaff_s10 * unaff_s12 + unaff_s9 * unaff_s13) / fVar2;
    fVar4 = 1.0;
    if (fVar2 <= 1.0) {
      fVar4 = fVar2;
    }
    fVar5 = -1.0;
    if (-1.0 <= fVar2) {
      fVar5 = fVar4;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    dVar3 = acos((double)fVar5);
    fVar4 = (float)dVar3 * DAT_012e3848;
  }
  return fVar4 <= *(float *)(unaff_x19 + 0x4c);
}


