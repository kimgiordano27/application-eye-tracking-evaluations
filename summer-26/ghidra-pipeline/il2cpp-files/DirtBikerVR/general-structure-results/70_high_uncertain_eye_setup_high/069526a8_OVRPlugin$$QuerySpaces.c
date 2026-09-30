/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 069526a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__QuerySpaces(float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_3 + 0x10);
  if (lVar1 != 0) {
    fVar2 = tanf(param_2 * DAT_015c5d20);
                    /* try { // try from 069526e4 to 06a52717 has its CatchHandler @ 069526e4
                       catch() { ... } // from try @ 069526e4 with catch @ 069526e4
                       catch() { ... } // from try @ 06952834 with catch @ 069526e4
                       catch() { ... } // from try @ 06952914 with catch @ 069526e4
                       catch() { ... } // from try @ 06952974 with catch @ 069526e4
                       catch() { ... } // from try @ 06952a14 with catch @ 069526e4 */
    if ((DAT_015c5ce0 <= fVar2) || (fVar2 <= DAT_015c5abc)) {
      fVar2 = *(float *)(lVar1 + 0x134) / fVar2;
                    /* try { // try from 06952718 to 06a5272f has its CatchHandler @ 06952938 */
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = *(float *)(&DAT_015c3900 + (ulong)(param_2 < 0.0) * 4);
    }
    *(float *)(param_3 + 0x68) = fVar2;
    fVar3 = atan2f(param_1 * param_1,ABS(fVar2) * *(float *)(param_3 + 0x98));
    fVar4 = -1.0;
    if (0.0 <= fVar2) {
      fVar4 = 1.0;
    }
    return -(fVar4 * ABS(fVar3 * DAT_015c595c));
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


