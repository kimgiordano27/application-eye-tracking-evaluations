/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig$$remove_GetCameraHandler
ENTRY_POINT: 0636c12c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig__remove_GetCameraHandler
               (undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
               undefined1 param_6 [16],float param_7,undefined1 param_8 [16],undefined1 param_9 [16]
               )

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 unaff_d8;
  float unaff_s9;
  float in_s16;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar6 = param_6._4_4_;
  fVar8 = param_6._0_4_;
                    /* catch() { ... } // from try @ 0636c120 with catch @ 0636c12c */
                    /* catch() { ... } // from try @ 0636c118 with catch @ 0636c130 */
                    /* catch() { ... } // from try @ 0636c110 with catch @ 0636c134 */
                    /* catch() { ... } // from try @ 0636c020 with catch @ 0636c138 */
  *param_1 = CONCAT44(fVar6 + param_9._4_4_,fVar8 + param_9._0_4_);
                    /* catch() { ... } // from try @ 0636c108 with catch @ 0636c13c */
  *(float *)(param_1 + 1) = param_7 + in_s16;
                    /* catch() { ... } // from try @ 0636bf90 with catch @ 0636c140 */
                    /* catch() { ... } // from try @ 0636c100 with catch @ 0636c144 */
  pfVar4 = (float *)(*(long *)(unaff_x19 + 0x130) + unaff_x20 * 0x10);
                    /* catch() { ... } // from try @ 0636c0f8 with catch @ 0636c148 */
  fVar9 = *pfVar4;
  fVar10 = pfVar4[1];
                    /* catch() { ... } // from try @ 0636c004 with catch @ 0636c14c */
  fVar12 = pfVar4[2];
  fVar14 = pfVar4[3];
                    /* catch() { ... } // from try @ 0636bf80 with catch @ 0636c150 */
                    /* catch() { ... } // from try @ 0636bfe4 with catch @ 0636c154 */
                    /* try { // try from 0636c164 to 0646c167 has its CatchHandler @ 0636c198 */
                    /* try { // try from 0636c16c to 0646c173 has its CatchHandler @ 0636c194 */
                    /* try { // try from 0636c174 to 0646c177 has its CatchHandler @ 0636c1b4 */
                    /* try { // try from 0636c178 to 0646c17b has its CatchHandler @ 0636c1ac */
                    /* try { // try from 0636c17c to 0646c17f has its CatchHandler @ 0636c1a8 */
                    /* try { // try from 0636c180 to 0646c18b has its CatchHandler @ 0636bae0 */
                    /* catch() { ... } // from try @ 0636bde8 with catch @ 0636c188 */
                    /* try { // try from 0636c18c to 0646c1a3 has its CatchHandler @ 0636c354 */
                    /* catch() { ... } // from try @ 0636c16c with catch @ 0636c194 */
                    /* catch() { ... } // from try @ 0636c164 with catch @ 0636c198 */
                    /* catch() { ... } // from try @ 0636bebc with catch @ 0636c1a4
                       try { // try from 0636c1a4 to 0646c1c7 has its CatchHandler @ 0636bae0 */
                    /* catch() { ... } // from try @ 0636c17c with catch @ 0636c1a8 */
                    /* catch() { ... } // from try @ 0636c178 with catch @ 0636c1ac */
                    /* catch() { ... } // from try @ 0636bf64 with catch @ 0636c1b0 */
                    /* catch() { ... } // from try @ 0636c174 with catch @ 0636c1b4 */
                    /* catch() { ... } // from try @ 0636be80 with catch @ 0636c1b8 */
  *pfVar4 = (param_5 * fVar9 + param_3 * fVar12 + param_2 * fVar14) - param_4 * fVar10;
  pfVar4[1] = (param_5 * fVar10 + param_4 * fVar9 + param_3 * fVar14) - param_2 * fVar12;
  pfVar4[2] = (param_5 * fVar12 + param_2 * fVar10 + param_4 * fVar14) - param_3 * fVar9;
  pfVar4[3] = (param_5 * fVar14 - (param_2 * fVar9 + param_3 * fVar10)) - param_4 * fVar12;
                    /* try { // try from 0636c1c8 to 0646c1cb has its CatchHandler @ 0636c344 */
                    /* try { // try from 0636c1cc to 0646c34b has its CatchHandler @ 0636bae0 */
  fVar9 = (float)unaff_d8 + fVar8;
  fVar10 = (float)((ulong)unaff_d8 >> 0x20) + fVar6;
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0xc0) + unaff_x22 * 4);
  *puVar2 = CONCAT44(fVar10,fVar9);
  *(float *)(puVar2 + 1) = unaff_s9 + param_7;
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0xe0) + unaff_x22 * 4);
  *puVar2 = CONCAT44(fVar6 + (float)((ulong)*puVar2 >> 0x20),fVar8 + (float)*puVar2);
  *(float *)(puVar2 + 1) = param_7 + *(float *)(puVar2 + 1);
  if ((unaff_w21 & 6) != 0) {
    puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0x140) + unaff_x20 * 0xc);
    *puVar2 = CONCAT44(fVar10,fVar9);
    *(float *)(puVar2 + 1) = unaff_s9 + param_7;
  }
  if (((unaff_w21 & 0x7000) != 0) &&
     (uVar1 = *(uint *)(*(long *)(unaff_x19 + 0x40) + unaff_x20 * 4), uVar3 = (ulong)uVar1,
     -1 < (int)uVar1)) {
    pfVar5 = (float *)(*(long *)(unaff_x19 + 0x80) + uVar3 * 0xc);
    pfVar4 = (float *)(*(long *)(unaff_x19 + 0x90) + uVar3 * 0x10);
    fVar9 = *pfVar5;
    fVar10 = pfVar5[1];
    fVar8 = pfVar5[2];
    fVar7 = *pfVar4;
    fVar14 = pfVar4[1];
    fVar6 = pfVar4[2];
    fVar12 = pfVar4[3];
    if ((unaff_w21 >> 0xf & 1) != 0) {
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0xa0) + uVar3 * 0xc);
      pfVar5 = (float *)(*(long *)(unaff_x19 + 0x50) + unaff_x20 * 0xc);
      fVar11 = *pfVar4 * *pfVar5;
      fVar13 = pfVar4[1] * pfVar5[1];
      fVar15 = pfVar4[2] * pfVar5[2];
      fVar16 = fVar7 * fVar13 - fVar14 * fVar11;
      fVar17 = fVar14 * fVar15 - fVar6 * fVar13;
      fVar18 = fVar6 * fVar11 - fVar7 * fVar15;
      fVar17 = fVar17 + fVar17;
      fVar18 = fVar18 + fVar18;
      fVar16 = fVar16 + fVar16;
      fVar9 = fVar9 + fVar11 + fVar12 * fVar17 + (fVar14 * fVar16 - fVar6 * fVar18);
      fVar10 = fVar10 + fVar13 + fVar12 * fVar18 + (fVar6 * fVar17 - fVar7 * fVar16);
      fVar8 = fVar8 + fVar15 + fVar12 * fVar16 + (fVar7 * fVar18 - fVar14 * fVar17);
    }
                    /* catch() { ... } // from try @ 0636c1c8 with catch @ 0636c344 */
    if ((unaff_w21 >> 0xe & 1) != 0) {
                    /* try { // try from 0636c34c to 0646c353 has its CatchHandler @ 0636c354 */
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0x100) + unaff_x20 * 0xc);
                    /* catch() { ... } // from try @ 0636c18c with catch @ 0636c354
                       catch() { ... } // from try @ 0636c34c with catch @ 0636c354 */
      *pfVar4 = fVar9;
      pfVar4[1] = fVar10;
                    /* try { // try from 0636c358 to 0646c603 has its CatchHandler @ 0636c358
                       catch() { ... } // from try @ 0636c358 with catch @ 0636c358
                       catch() { ... } // from try @ 0636c7f8 with catch @ 0636c358
                       catch() { ... } // from try @ 0636c85c with catch @ 0636c358
                       catch() { ... } // from try @ 0636c880 with catch @ 0636c358 */
      pfVar4[2] = fVar8;
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0x110) + unaff_x20 * 0x10);
      *pfVar4 = fVar7;
      pfVar4[1] = fVar14;
      pfVar4[2] = fVar6;
      pfVar4[3] = fVar12;
    }
    if ((unaff_w21 >> 0xc & 1) != 0) {
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0xb0) + unaff_x20 * 0xc);
      *pfVar4 = fVar9;
      pfVar4[1] = fVar10;
      pfVar4[2] = fVar8;
    }
    if ((unaff_w21 >> 0xd & 1) != 0) {
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0xf0) + unaff_x20 * 0x10);
      *pfVar4 = fVar7;
      pfVar4[1] = fVar14;
      pfVar4[2] = fVar6;
      pfVar4[3] = fVar12;
    }
  }
  return;
}


