/*
FUNCTION_NAME: OVRPlugin$$GetInsightPassthroughInitializationState
ENTRY_POINT: 073dfd8c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetInsightPassthroughInitializationState(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  fVar1 = unaff_s14 * unaff_s14 + unaff_s11 * unaff_s11 + unaff_s15 * unaff_s15;
  fVar2 = **(float **)(**(long **)(param_1 + 0x2b0) + 0xb8);
  if (fVar2 <= fVar1) {
    fVar3 = unaff_s14 * (float)unaff_d10 + unaff_s11 * (float)unaff_d8 + unaff_s15 * (float)unaff_d9
    ;
    unaff_d8 = (ulong)(uint)((float)unaff_d8 - (unaff_s11 * fVar3) / fVar1);
    unaff_d9 = (ulong)(uint)((float)unaff_d9 - (unaff_s15 * fVar3) / fVar1);
    unaff_d10 = (ulong)(uint)((float)unaff_d10 - (unaff_s14 * fVar3) / fVar1);
  }
  fStack0000000000000058 = fStack0000000000000058 - unaff_s13;
  fStack000000000000000c = fStack000000000000000c - fStack0000000000000008;
  fStack000000000000005c = fStack000000000000005c - unaff_s12;
  if (fVar2 <= fVar1) {
    fVar2 = fStack000000000000005c * unaff_s14 +
            fStack000000000000000c * unaff_s11 + fStack0000000000000058 * unaff_s15;
    fStack000000000000000c = fStack000000000000000c - (unaff_s11 * fVar2) / fVar1;
    fStack0000000000000058 = fStack0000000000000058 - (unaff_s15 * fVar2) / fVar1;
    fStack000000000000005c = fStack000000000000005c - (unaff_s14 * fVar2) / fVar1;
  }
  FUN_085d2264(unaff_d8,unaff_d9,unaff_d10,fStack000000000000000c,fStack0000000000000058,
               fStack000000000000005c,0);
  return;
}


