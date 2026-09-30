/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 073d8e40
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073d8e98) */

float OVRPlugin__get_hasVrFocus(float param_1,float *param_2)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_08eb58a8;
  if ((DAT_0941e720 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb58a8);
    DAT_0941e720 = 1;
  }
  fVar3 = *param_2;
  fVar4 = param_2[1];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar2 = param_2[2];
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  return fVar3 + (fVar4 * param_1 - fVar3) * fVar2;
}


