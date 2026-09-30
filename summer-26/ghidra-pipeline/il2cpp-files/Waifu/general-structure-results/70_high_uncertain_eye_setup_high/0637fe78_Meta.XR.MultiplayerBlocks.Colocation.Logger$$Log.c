/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$Log
ENTRY_POINT: 0637fe78
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_Logger__Log
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  float *in_x10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_s16;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_s20;
  float fVar19;
  float in_s21;
  float fVar20;
  float fVar21;
  float in_s22;
  float fVar22;
  float in_s27;
  float in_s28;
  float in_s29;
  float in_s30;
  float in_s31;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000078;
  
  while( true ) {
                    /* try { // try from 0637fe78 to 0647fe7b has its CatchHandler @ 0637ffb0 */
    fVar22 = in_s22 + in_s22;
                    /* try { // try from 0637fe7c to 0647fe7f has its CatchHandler @ 0637ffac */
    fVar19 = in_s20 + in_s20;
                    /* try { // try from 0637fe80 to 0647fe83 has its CatchHandler @ 0637ffa8 */
    fVar14 = *in_x10;
    fVar16 = in_x10[1];
    fVar17 = in_x10[2];
                    /* try { // try from 0637fe8c to 0647fe8f has its CatchHandler @ 0637ff7c */
                    /* try { // try from 0637fe90 to 0647fe93 has its CatchHandler @ 0637ffa4 */
                    /* try { // try from 0637fe94 to 0647fe97 has its CatchHandler @ 0637ffa0 */
                    /* try { // try from 0637fe98 to 0647fe9b has its CatchHandler @ 0637ff94 */
                    /* try { // try from 0637fea8 to 0647fee3 has its CatchHandler @ 0637ff8c */
                    /* try { // try from 0637fee4 to 0647fee7 has its CatchHandler @ 0637ffcc */
                    /* try { // try from 0637fee8 to 0647feeb has its CatchHandler @ 0637ffe8 */
                    /* try { // try from 0637feec to 0647feef has its CatchHandler @ 0637ffe4 */
                    /* try { // try from 0637fef0 to 0647fef3 has its CatchHandler @ 0637ffe0 */
                    /* try { // try from 0637fefc to 0647feff has its CatchHandler @ 0637ff6c */
    if (((unaff_s15 < 0.0) || (in_s27 < 0.0)) || (unaff_s12 < 0.0)) {
      fVar6 = (float)FUN_03794fcc(0);
      fVar11 = 1.0;
      fVar8 = 1.0;
      fVar10 = fVar8;
      if (unaff_s15 == 0.0 || 0.0 > unaff_s15) {
        fVar10 = 0.0;
      }
      fVar15 = fVar11;
      if (0.0 <= unaff_s15) {
        fVar15 = 0.0;
      }
      if (in_s27 == 0.0 || 0.0 > in_s27) {
        fVar11 = 0.0;
      }
      fVar13 = fVar8;
      if (0.0 <= in_s27) {
        fVar13 = 0.0;
      }
      fVar9 = fVar8;
      if (unaff_s12 == 0.0 || 0.0 > unaff_s12) {
        fVar9 = 0.0;
      }
      if (0.0 <= unaff_s12) {
        fVar8 = 0.0;
      }
      fVar6 = fVar6 * -(fVar10 - fVar15);
      param_2 = param_2 * -(fVar11 - fVar13);
      param_3 = param_3 * -(fVar9 - fVar8);
      fVar10 = param_2 * 0.0;
      fVar11 = param_3 * 0.0;
      fVar9 = fVar6 * 0.0 - fVar10;
      fVar9 = fVar9 + fVar9;
      fVar15 = fVar11 - fVar6 * 0.0;
      fVar8 = (fVar10 - param_3) + (fVar10 - param_3);
      fVar13 = (fVar6 - fVar10) + (fVar6 - fVar10);
      fVar12 = (param_2 - fVar11) + (param_2 - fVar11);
      fVar11 = (fVar11 - fVar6) + (fVar11 - fVar6);
      fVar15 = fVar15 + fVar15;
      fVar20 = param_4 * fVar13;
      fVar10 = param_4 * fVar15;
      fVar18 = param_4 * fVar12 + 0.0 + (param_2 * fVar9 - param_3 * fVar11);
      fVar21 = param_4 * fVar11 + 0.0 + (param_3 * fVar12 - fVar6 * fVar9);
      fVar11 = param_4 * fVar9 + 1.0 + (fVar6 * fVar11 - param_2 * fVar12);
      param_4 = param_4 * fVar8 + 0.0 + (param_2 * fVar13 - param_3 * fVar15);
      param_5 = fVar10 + 1.0 + (param_3 * fVar8 - fVar6 * fVar13);
      param_6 = fVar20 + 0.0 + (fVar6 * fVar15 - param_2 * fVar8);
      fVar15 = unaff_s11 * fVar11 - unaff_s14 * fVar21;
      fVar10 = unaff_s10 * fVar21 - unaff_s11 * fVar18;
      fVar13 = unaff_s14 * fVar18 - unaff_s10 * fVar11;
      fVar15 = fVar15 + fVar15;
      fVar13 = fVar13 + fVar13;
      fVar10 = fVar10 + fVar10;
      fVar6 = fVar18 + unaff_s13 * fVar15 + (unaff_s11 * fVar10 - unaff_s14 * fVar13);
      fVar8 = fVar21 + unaff_s13 * fVar13 + (unaff_s14 * fVar15 - unaff_s10 * fVar10);
      fVar10 = fVar11 + unaff_s13 * fVar10 + (unaff_s10 * fVar13 - unaff_s11 * fVar15);
    }
    else {
      fVar10 = param_3 * unaff_s11 - param_2 * unaff_s14;
      fVar15 = param_2 * unaff_s10 - param_1 * unaff_s11;
      fVar11 = param_1 * unaff_s14 - param_3 * unaff_s10;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      fVar15 = fVar15 + fVar15;
                    /* try { // try from 0637ff30 to 0647ff6b has its CatchHandler @ 0637ff70 */
      fVar6 = param_1 + unaff_s13 * fVar10 + (unaff_s11 * fVar15 - unaff_s14 * fVar11);
      fVar8 = param_2 + unaff_s13 * fVar11 + (unaff_s14 * fVar10 - unaff_s10 * fVar15);
      fVar10 = param_3 + unaff_s13 * fVar15 + (unaff_s10 * fVar11 - unaff_s11 * fVar10);
    }
    fVar11 = param_5 * unaff_s10 - param_4 * unaff_s11;
    fVar15 = param_6 * unaff_s11 - param_5 * unaff_s14;
    fVar13 = param_4 * unaff_s14 - param_6 * unaff_s10;
    in_s30 = in_s30 + unaff_s9 * fVar8;
    in_s29 = in_s29 + unaff_s9 * fVar6;
    in_s28 = in_s28 + unaff_s9 * fVar10;
    in_stack_00000028._4_4_ =
         in_stack_00000028._4_4_ +
         unaff_s9 *
         (fVar14 + param_7 + unaff_s13 * in_s21 + (unaff_s11 * fVar19 - unaff_s14 * fVar22));
    unaff_s8 = unaff_s8 +
               unaff_s9 *
               (fVar16 + param_8 + unaff_s13 * fVar22 + (unaff_s14 * in_s21 - unaff_s10 * fVar19));
    in_s31 = in_s31 + unaff_s9 *
                      (fVar17 + in_s16 + unaff_s13 * fVar19 +
                                (unaff_s10 * fVar22 - unaff_s11 * in_s21));
    unaff_x22 = unaff_x22 + -1;
    in_stack_00000078._4_4_ =
         in_stack_00000078._4_4_ +
         unaff_s9 *
         (param_4 + unaff_s13 * (fVar15 + fVar15) +
         (unaff_s11 * (fVar11 + fVar11) - unaff_s14 * (fVar13 + fVar13)));
    unaff_w24 = unaff_w24 + 1;
    if (unaff_x22 == 0) break;
    pfVar3 = (float *)(*(long *)(unaff_x19 + 0x60) + (long)unaff_w24 * (long)unaff_w23);
    param_1 = pfVar3[3];
    param_2 = pfVar3[4];
    param_3 = pfVar3[5];
    lVar5 = (long)*(int *)(*(long *)(unaff_x19 + 0x40) + (long)((int)pfVar3[9] + unaff_w21) * 4);
    param_4 = pfVar3[6];
    param_5 = pfVar3[7];
    param_6 = pfVar3[8];
    unaff_s9 = pfVar3[10];
    pfVar4 = (float *)(*(long *)(unaff_x19 + 0x80) + lVar5 * 0x10);
    unaff_s10 = *pfVar4;
    unaff_s11 = pfVar4[1];
    pfVar1 = (float *)(*(long *)(unaff_x19 + 0x90) + lVar5 * 0xc);
    unaff_s15 = *pfVar1;
    in_s27 = pfVar1[1];
    unaff_s12 = pfVar1[2];
    unaff_s14 = pfVar4[2];
    unaff_s13 = pfVar4[3];
    param_7 = *pfVar3 * unaff_s15;
    param_8 = pfVar3[1] * in_s27;
    in_s16 = pfVar3[2] * unaff_s12;
    in_s20 = unaff_s10 * param_8 - unaff_s11 * param_7;
    fVar14 = unaff_s11 * in_s16 - unaff_s14 * param_8;
    in_s22 = unaff_s14 * param_7 - unaff_s10 * in_s16;
    in_x10 = (float *)(*(long *)(unaff_x19 + 0x70) + lVar5 * 0xc);
    in_s21 = fVar14 + fVar14;
  }
  pfVar4 = (float *)(*(long *)(unaff_x19 + 0xa0) + unaff_x20 * 0xc);
  *pfVar4 = in_stack_00000028._4_4_;
  pfVar4[1] = unaff_s8;
  pfVar4[2] = in_s31;
  uVar7 = FUN_03794fcc(in_s29,0);
  puVar2 = (undefined4 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x20 * 0x10);
  *puVar2 = uVar7;
  puVar2[1] = in_s30;
  puVar2[2] = in_s28;
  puVar2[3] = in_stack_00000078._4_4_;
  return;
}


