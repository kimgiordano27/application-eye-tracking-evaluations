/*
FUNCTION_NAME: OVRPlugin$$GetLayerRecommendedResolution
ENTRY_POINT: 06955144
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


void OVRPlugin__GetLayerRecommendedResolution(float param_1)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  long unaff_x19;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s9;
  
                    /* try { // try from 06955144 to 06a55147 has its CatchHandler @ 06955158 */
  if (!in_ZR && in_NG == in_OV) {
                    /* catch() { ... } // from try @ 06955014 with catch @ 06955148
                       try { // try from 06955148 to 06a551bb has its CatchHandler @ 06954d04 */
    param_1 = 1.0;
  }
                    /* catch() { ... } // from try @ 06955038 with catch @ 0695514c */
                    /* catch() { ... } // from try @ 06955018 with catch @ 06955150 */
                    /* catch() { ... } // from try @ 06954fe0 with catch @ 06955154 */
  fVar2 = unaff_s9 * 5.0;
                    /* catch() { ... } // from try @ 06955144 with catch @ 06955158 */
                    /* catch() { ... } // from try @ 069550f4 with catch @ 0695515c */
                    /* catch() { ... } // from try @ 069550b0 with catch @ 06955160 */
  fVar1 = 1.0;
  if (fVar2 <= 1.0) {
    fVar1 = fVar2;
  }
                    /* catch() { ... } // from try @ 06954fb8 with catch @ 06955164 */
                    /* catch() { ... } // from try @ 06954ef8 with catch @ 06955168 */
                    /* catch() { ... } // from try @ 069550fc with catch @ 0695516c */
                    /* catch() { ... } // from try @ 069550d0 with catch @ 06955170 */
  fVar3 = 0.0;
                    /* catch() { ... } // from try @ 06954f74 with catch @ 06955174 */
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
                    /* catch() { ... } // from try @ 069550b4 with catch @ 06955178 */
                    /* catch() { ... } // from try @ 0695507c with catch @ 0695517c */
  fVar1 = *(float *)(unaff_x19 + 0x48) + fVar3 * (param_1 - *(float *)(unaff_x19 + 0x48));
                    /* catch() { ... } // from try @ 06954f3c with catch @ 06955180 */
  *(float *)(unaff_x19 + 0x48) = fVar1;
                    /* catch() { ... } // from try @ 06954efc with catch @ 06955184 */
  if (*(char *)(unaff_x19 + 0x32) == '\0') {
                    /* catch() { ... } // from try @ 06954f88 with catch @ 06955188 */
    fVar2 = 0.0;
                    /* catch() { ... } // from try @ 06954f78 with catch @ 0695518c */
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
                    /* catch() { ... } // from try @ 06955080 with catch @ 06955190 */
    *(float *)(unaff_x19 + 0x48) = fVar2;
  }
                    /* catch() { ... } // from try @ 06954ed8 with catch @ 06955194 */
                    /* catch() { ... } // from try @ 06954f40 with catch @ 06955198 */
                    /* catch() { ... } // from try @ 06954eb4 with catch @ 0695519c */
                    /* catch() { ... } // from try @ 0695513c with catch @ 069551a0 */
                    /* catch() { ... } // from try @ 06955134 with catch @ 069551a4 */
  return;
}


