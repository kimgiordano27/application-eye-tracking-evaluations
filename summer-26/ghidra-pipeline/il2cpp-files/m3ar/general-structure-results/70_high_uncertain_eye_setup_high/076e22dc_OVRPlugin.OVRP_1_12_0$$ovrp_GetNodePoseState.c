/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetNodePoseState
ENTRY_POINT: 076e22dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_12_0__ovrp_GetNodePoseState(float param_1,float param_2,long param_3)

{
  int in_w8;
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar3;
  float unaff_s11;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack000000000000000c;
  
                    /* try { // try from 076e22dc to 077e22df has its CatchHandler @ 076e22f0 */
                    /* catch() { ... } // from try @ 076e21ac with catch @ 076e22e0
                       try { // try from 076e22e0 to 077e2353 has its CatchHandler @ 076e1e9c */
                    /* catch() { ... } // from try @ 076e21d0 with catch @ 076e22e4 */
  if (in_w8 == 0) {
                    /* catch() { ... } // from try @ 076e21b0 with catch @ 076e22e8 */
                    /* catch() { ... } // from try @ 076e2178 with catch @ 076e22ec */
                    /* catch() { ... } // from try @ 076e22dc with catch @ 076e22f0 */
    thunk_FUN_0408f364();
                    /* catch() { ... } // from try @ 076e228c with catch @ 076e22f4 */
                    /* catch() { ... } // from try @ 076e2248 with catch @ 076e22f8 */
                    /* catch() { ... } // from try @ 076e2150 with catch @ 076e22fc */
    param_3 = *unaff_x21;
  }
                    /* catch() { ... } // from try @ 076e2090 with catch @ 076e2300 */
                    /* catch() { ... } // from try @ 076e2294 with catch @ 076e2304 */
  pfVar1 = *(float **)(param_3 + 0xb8);
                    /* catch() { ... } // from try @ 076e2268 with catch @ 076e2308 */
  fVar6 = *(float *)(unaff_x20 + 0x48);
                    /* catch() { ... } // from try @ 076e210c with catch @ 076e230c */
                    /* catch() { ... } // from try @ 076e224c with catch @ 076e2310 */
  fVar5 = unaff_s8 * 0.5 * unaff_s8;
                    /* catch() { ... } // from try @ 076e2214 with catch @ 076e2314 */
  fVar2 = pfVar1[1];
                    /* catch() { ... } // from try @ 076e20d4 with catch @ 076e2318 */
                    /* catch() { ... } // from try @ 076e2094 with catch @ 076e231c */
                    /* catch() { ... } // from try @ 076e2120 with catch @ 076e2320 */
                    /* catch() { ... } // from try @ 076e2110 with catch @ 076e2324 */
                    /* catch() { ... } // from try @ 076e2218 with catch @ 076e2328 */
                    /* catch() { ... } // from try @ 076e2070 with catch @ 076e232c */
  fVar3 = *pfVar1;
                    /* catch() { ... } // from try @ 076e20d8 with catch @ 076e2330 */
  if (1.0 <= unaff_s8) {
                    /* catch() { ... } // from try @ 076e204c with catch @ 076e2334 */
                    /* catch() { ... } // from try @ 076e22d4 with catch @ 076e2338 */
                    /* catch() { ... } // from try @ 076e22cc with catch @ 076e233c */
    fVar4 = *(float *)(unaff_x19 + 4);
    if (*(int *)(param_3 + 0xe4) == 0) {
      fStack000000000000000c = param_1;
      thunk_FUN_0408f364();
      param_3 = *unaff_x21;
                    /* try { // try from 076e2354 to 077e236b has its CatchHandler @ 076e2428 */
      pfVar1 = *(float **)(param_3 + 0xb8);
      param_1 = fStack000000000000000c;
    }
                    /* try { // try from 076e236c to 077e2417 has its CatchHandler @ 076e1e9c */
    if ((fVar4 - pfVar1[3] < unaff_s10 + param_2 * unaff_s8 + fVar5 * fVar2 * fVar6) &&
       (*(int *)(param_3 + 0xe4) == 0)) {
      fStack000000000000000c = param_1;
      thunk_FUN_0408f364();
      param_1 = fStack000000000000000c;
    }
  }
  return unaff_s11 + param_1 * unaff_s9 * unaff_s8 + fVar5 * fVar3 * fVar6;
}


