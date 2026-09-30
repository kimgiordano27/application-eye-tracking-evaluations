/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 03f3023c
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
               (ulong param_1)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s9;
  float unaff_s10;
  
                    /* try { // try from 03f3023c to 0403024b has its CatchHandler @ 03f30284 */
  plVar3 = *(long **)(unaff_x19 + 0x8d0);
  if ((param_1 & 1) == 0) {
                    /* try { // try from 03f3024c to 04030273 has its CatchHandler @ 03f2ff74 */
    FUN_020612a4(PTR_DAT_046bf8d0);
    *(undefined1 *)(unaff_x20 + 0xbac) = 1;
  }
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_020b5864();
  }
                    /* try { // try from 03f30274 to 04030277 has its CatchHandler @ 03f302e0 */
                    /* catch() { ... } // from try @ 03f3013c with catch @ 03f30278
                       try { // try from 03f30278 to 040302fb has its CatchHandler @ 03f2ff74 */
                    /* catch() { ... } // from try @ 03f300ec with catch @ 03f3027c */
                    /* catch() { ... } // from try @ 03f300ac with catch @ 03f30280 */
                    /* catch() { ... } // from try @ 03f3023c with catch @ 03f30284 */
                    /* catch() { ... } // from try @ 03f30234 with catch @ 03f30288 */
                    /* catch() { ... } // from try @ 03f3022c with catch @ 03f3028c */
  fVar4 = (float)FUN_040bbb70(0);
                    /* catch() { ... } // from try @ 03f30210 with catch @ 03f30290 */
                    /* catch() { ... } // from try @ 03f30208 with catch @ 03f30294 */
                    /* catch() { ... } // from try @ 03f30200 with catch @ 03f30298 */
                    /* catch() { ... } // from try @ 03f301e4 with catch @ 03f3029c */
                    /* catch() { ... } // from try @ 03f301dc with catch @ 03f302a0 */
                    /* catch() { ... } // from try @ 03f301d4 with catch @ 03f302a4 */
  if (DAT_0491c4a8 == '\0') {
                    /* catch() { ... } // from try @ 03f301b8 with catch @ 03f302a8 */
                    /* catch() { ... } // from try @ 03f301b0 with catch @ 03f302ac */
                    /* catch() { ... } // from try @ 03f301a8 with catch @ 03f302b0 */
    FUN_020612a4(StringLiteral_8895);
                    /* catch() { ... } // from try @ 03f3018c with catch @ 03f302b4 */
                    /* catch() { ... } // from try @ 03f30184 with catch @ 03f302b8 */
    DAT_0491c4a8 = '\x01';
  }
                    /* catch() { ... } // from try @ 03f30164 with catch @ 03f302bc */
                    /* catch() { ... } // from try @ 03f30148 with catch @ 03f302c0 */
                    /* catch() { ... } // from try @ 03f30140 with catch @ 03f302c4 */
                    /* catch() { ... } // from try @ 03f300bc with catch @ 03f302c8 */
                    /* catch() { ... } // from try @ 03f30088 with catch @ 03f302cc */
  if (*(int *)(*(long *)StringLiteral_8895 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 03f30070 with catch @ 03f302d0 */
    thunk_FUN_020b5864();
  }
                    /* catch() { ... } // from try @ 03f30058 with catch @ 03f302d4 */
                    /* catch() { ... } // from try @ 03f30044 with catch @ 03f302d8 */
                    /* catch() { ... } // from try @ 03f30028 with catch @ 03f302dc */
                    /* catch() { ... } // from try @ 03f30100 with catch @ 03f302e0
                       catch() { ... } // from try @ 03f30274 with catch @ 03f302e0 */
  fVar5 = SQRT(unaff_s9 * unaff_s9 + fVar4 * fVar4 + unaff_s10 * unaff_s10);
  if (fVar5 <= DAT_00c58a64) {
    if (DAT_0491c4ab == '\0') {
                    /* catch() { ... } // from try @ 03f302fc with catch @ 03f30318 */
                    /* try { // try from 03f3031c to 04030323 has its CatchHandler @ 03f3032c */
      FUN_020612a4(StringLiteral_8775);
                    /* try { // try from 03f30324 to 0403032f has its CatchHandler @ 03f2ff74 */
      DAT_0491c4ab = '\x01';
    }
                    /* catch() { ... } // from try @ 03f3031c with catch @ 03f3032c */
    pfVar2 = *(float **)(*(long *)StringLiteral_8775 + 0xb8);
    fVar4 = *pfVar2;
    unaff_s10 = pfVar2[1];
    unaff_s9 = pfVar2[2];
  }
  else {
                    /* try { // try from 03f302fc to 040302ff has its CatchHandler @ 03f30318 */
    fVar4 = fVar4 / fVar5;
                    /* try { // try from 03f30300 to 0403031b has its CatchHandler @ 03f2ff74 */
    unaff_s10 = unaff_s10 / fVar5;
    unaff_s9 = unaff_s9 / fVar5;
  }
  lVar1 = *plVar3;
  if (ABS(unaff_s10) <= DAT_00c5886c) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar1 = *plVar3;
    }
    pfVar2 = *(float **)(lVar1 + 0xb8);
    fVar8 = unaff_s9 * *pfVar2 - fVar4 * pfVar2[2];
    fVar7 = fVar4 * pfVar2[1] - unaff_s10 * *pfVar2;
    fVar5 = unaff_s10 * pfVar2[2] - unaff_s9 * pfVar2[1];
    fVar6 = unaff_s10 * fVar7 - unaff_s9 * fVar8;
    fVar7 = unaff_s9 * fVar5 - fVar4 * fVar7;
    fVar5 = fVar4 * fVar8 - unaff_s10 * fVar5;
  }
  else {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar1 = *plVar3;
    }
    lVar1 = *(long *)(lVar1 + 0xb8);
    fVar6 = unaff_s9 * *(float *)(lVar1 + 0x10) - unaff_s10 * *(float *)(lVar1 + 0x14);
    fVar7 = fVar4 * *(float *)(lVar1 + 0x14) - unaff_s9 * *(float *)(lVar1 + 0xc);
    fVar5 = unaff_s10 * *(float *)(lVar1 + 0xc) - fVar4 * *(float *)(lVar1 + 0x10);
  }
  FUN_040bb984(fVar6,fVar7,fVar5,fVar4,unaff_s10,unaff_s9,0);
  return;
}


