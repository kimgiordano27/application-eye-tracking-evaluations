/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$OnDestroy
ENTRY_POINT: 0638024c
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__OnDestroy
               (undefined1 param_1 [16],float param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined1 in_ZR;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float in_s20;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float in_s28;
  ulong in_d29;
  float in_s30;
  float in_s31;
  float fStack000000000000007c;
  
  while (fStack000000000000007c = param_2, !(bool)in_ZR) {
    pfVar3 = (float *)(*(long *)(unaff_x19 + 0x60) + (long)unaff_w24 * (long)unaff_w23);
    fVar6 = pfVar3[3];
    fVar8 = pfVar3[4];
    fVar9 = pfVar3[5];
    lVar5 = (long)*(int *)(*(long *)(unaff_x19 + 0x40) + (long)((int)pfVar3[9] + unaff_w21) * 4);
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[7];
    fVar12 = pfVar3[8];
    fVar15 = pfVar3[10];
    pfVar4 = (float *)(*(long *)(unaff_x19 + 0x80) + lVar5 * 0x10);
    fVar16 = *pfVar4;
    fVar17 = pfVar4[1];
    pfVar1 = (float *)(*(long *)(unaff_x19 + 0x90) + lVar5 * 0xc);
    fVar21 = *pfVar1;
    fVar34 = pfVar1[1];
    fVar18 = pfVar1[2];
    fVar20 = pfVar4[2];
    fVar19 = pfVar4[3];
    fVar13 = *pfVar3 * fVar21;
    fVar14 = pfVar3[1] * fVar34;
    fVar22 = pfVar3[2] * fVar18;
    fVar29 = fVar16 * fVar14 - fVar17 * fVar13;
    fVar30 = fVar17 * fVar22 - fVar20 * fVar14;
    fVar33 = fVar20 * fVar13 - fVar16 * fVar22;
    pfVar4 = (float *)(*(long *)(unaff_x19 + 0x70) + lVar5 * 0xc);
    fVar30 = fVar30 + fVar30;
    fVar33 = fVar33 + fVar33;
    fVar29 = fVar29 + fVar29;
    fVar24 = *pfVar4;
    fVar26 = pfVar4[1];
    fVar27 = pfVar4[2];
    if (((fVar21 < 0.0) || (fVar34 < 0.0)) || (fVar18 < 0.0)) {
      fVar12 = (float)FUN_03794fcc(0);
      fVar11 = 1.0;
      fVar25 = 1.0;
      fVar6 = fVar25;
      if (fVar21 == 0.0 || 0.0 > fVar21) {
        fVar6 = 0.0;
      }
      fVar23 = fVar11;
      if (0.0 <= fVar21) {
        fVar23 = 0.0;
      }
      if (fVar34 == 0.0 || 0.0 > fVar34) {
        fVar11 = 0.0;
      }
      fVar21 = fVar25;
      if (0.0 <= fVar34) {
        fVar21 = 0.0;
      }
      fVar34 = fVar25;
      if (fVar18 == 0.0 || 0.0 > fVar18) {
        fVar34 = 0.0;
      }
      if (0.0 <= fVar18) {
        fVar25 = 0.0;
      }
      fVar12 = fVar12 * -(fVar6 - fVar23);
      fVar8 = fVar8 * -(fVar11 - fVar21);
      fVar9 = fVar9 * -(fVar34 - fVar25);
      fVar6 = fVar8 * 0.0;
      fVar11 = fVar9 * 0.0;
      fVar21 = fVar12 * 0.0 - fVar6;
      fVar21 = fVar21 + fVar21;
      fVar34 = fVar11 - fVar12 * 0.0;
      fVar18 = (fVar6 - fVar9) + (fVar6 - fVar9);
      fVar25 = (fVar12 - fVar6) + (fVar12 - fVar6);
      fVar23 = (fVar8 - fVar11) + (fVar8 - fVar11);
      fVar11 = (fVar11 - fVar12) + (fVar11 - fVar12);
      fVar34 = fVar34 + fVar34;
      fVar31 = fVar10 * fVar25;
      fVar6 = fVar10 * fVar34;
      fVar28 = fVar10 * fVar23 + 0.0 + (fVar8 * fVar21 - fVar9 * fVar11);
      fVar32 = fVar10 * fVar11 + 0.0 + (fVar9 * fVar23 - fVar12 * fVar21);
      fVar21 = fVar10 * fVar21 + 1.0 + (fVar12 * fVar11 - fVar8 * fVar23);
      fVar10 = fVar10 * fVar18 + 0.0 + (fVar8 * fVar25 - fVar9 * fVar34);
      fVar11 = fVar6 + 1.0 + (fVar9 * fVar18 - fVar12 * fVar25);
      fVar12 = fVar31 + 0.0 + (fVar12 * fVar34 - fVar8 * fVar18);
      fVar9 = fVar17 * fVar21 - fVar20 * fVar32;
      fVar6 = fVar16 * fVar32 - fVar17 * fVar28;
      fVar34 = fVar20 * fVar28 - fVar16 * fVar21;
      fVar9 = fVar9 + fVar9;
      fVar34 = fVar34 + fVar34;
      fVar6 = fVar6 + fVar6;
      fVar18 = fVar28 + fVar19 * fVar9 + (fVar17 * fVar6 - fVar20 * fVar34);
      fVar8 = fVar32 + fVar19 * fVar34 + (fVar20 * fVar9 - fVar16 * fVar6);
      fVar6 = fVar21 + fVar19 * fVar6 + (fVar16 * fVar34 - fVar17 * fVar9);
    }
    else {
      fVar21 = fVar9 * fVar17 - fVar8 * fVar20;
      fVar25 = fVar8 * fVar16 - fVar6 * fVar17;
      fVar34 = fVar6 * fVar20 - fVar9 * fVar16;
      fVar21 = fVar21 + fVar21;
      fVar34 = fVar34 + fVar34;
      fVar25 = fVar25 + fVar25;
      fVar18 = fVar6 + fVar19 * fVar21 + (fVar17 * fVar25 - fVar20 * fVar34);
      fVar8 = fVar8 + fVar19 * fVar34 + (fVar20 * fVar21 - fVar16 * fVar25);
      fVar6 = fVar9 + fVar19 * fVar25 + (fVar16 * fVar34 - fVar17 * fVar21);
    }
    fVar9 = fVar11 * fVar16 - fVar10 * fVar17;
    fVar11 = fVar12 * fVar17 - fVar11 * fVar20;
    fVar12 = fVar10 * fVar20 - fVar12 * fVar16;
    in_s30 = in_s30 + fVar15 * fVar8;
    in_d29 = (ulong)(uint)((float)in_d29 + fVar15 * fVar18);
    in_s28 = in_s28 + fVar15 * fVar6;
    in_s20 = in_s20 + fVar15 * (fVar24 + fVar13 + fVar19 * fVar30 +
                                         (fVar17 * fVar29 - fVar20 * fVar33));
    unaff_s8 = unaff_s8 +
               fVar15 * (fVar26 + fVar14 + fVar19 * fVar33 + (fVar20 * fVar30 - fVar16 * fVar29));
    in_s31 = in_s31 + fVar15 * (fVar27 + fVar22 + fVar19 * fVar29 +
                                         (fVar16 * fVar33 - fVar17 * fVar30));
    unaff_x22 = unaff_x22 + -1;
    param_2 = fStack000000000000007c +
              fVar15 * (fVar10 + fVar19 * (fVar11 + fVar11) +
                       (fVar17 * (fVar9 + fVar9) - fVar20 * (fVar12 + fVar12)));
    unaff_w24 = unaff_w24 + 1;
    in_ZR = unaff_x22 == 0;
  }
                    /* try { // try from 0638028c to 0648029b has its CatchHandler @ 06380304 */
  pfVar4 = (float *)(*(long *)(unaff_x19 + 0xa0) + unaff_x20 * 0xc);
                    /* try { // try from 0638029c to 064802af has its CatchHandler @ 0637f48c */
  *pfVar4 = in_s20;
  pfVar4[1] = unaff_s8;
  pfVar4[2] = in_s31;
  uVar7 = FUN_03794fcc(in_d29,0);
                    /* try { // try from 063802b0 to 064802bf has its CatchHandler @ 063802f0 */
  puVar2 = (undefined4 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x20 * 0x10);
  *puVar2 = uVar7;
  puVar2[1] = in_s30;
  puVar2[2] = in_s28;
  puVar2[3] = param_2;
                    /* catch() { ... } // from try @ 0638026c with catch @ 063802c0 */
                    /* catch() { ... } // from try @ 06380268 with catch @ 063802c4 */
                    /* catch() { ... } // from try @ 063801c8 with catch @ 063802d0 */
                    /* catch() { ... } // from try @ 063801b4 with catch @ 063802d4 */
                    /* catch() { ... } // from try @ 06380274 with catch @ 063802e0 */
                    /* catch() { ... } // from try @ 06380140 with catch @ 063802e4 */
  return;
}


