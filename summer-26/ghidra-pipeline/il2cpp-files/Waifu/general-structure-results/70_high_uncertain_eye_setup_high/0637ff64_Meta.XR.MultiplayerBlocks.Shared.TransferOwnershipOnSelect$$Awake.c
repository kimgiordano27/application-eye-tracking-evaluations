/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$Awake
ENTRY_POINT: 0637ff64
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__Awake
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined1 param_7 [16],float param_8)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float unaff_s14;
  float fVar9;
  float in_s16;
  float fVar10;
  float in_s17;
  float fVar11;
  float in_s18;
  float in_s19;
  float fVar12;
  float fVar13;
  float in_s21;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_s22;
  float in_s23;
  float fVar17;
  float in_s28;
  float in_s29;
  float in_s30;
  float in_s31;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000078;
  
  do {
                    /* catch() { ... } // from try @ 0637fefc with catch @ 0637ff6c
                       try { // try from 0637ff6c to 0648006f has its CatchHandler @ 0637f48c */
    fVar7 = param_5 * unaff_s10;
                    /* catch() { ... } // from try @ 0637ff30 with catch @ 0637ff70 */
    fVar8 = param_6 * unaff_s11;
    fVar10 = param_4 * unaff_s14;
    param_1 = param_1 + (in_s17 - param_8);
                    /* catch() { ... } // from try @ 0637fe8c with catch @ 0637ff7c */
    fVar11 = param_4 * unaff_s11;
                    /* catch() { ... } // from try @ 0637fd50 with catch @ 0637ff80 */
    param_2 = param_2 + (in_s18 - in_s16);
                    /* catch() { ... } // from try @ 0637fd68 with catch @ 0637ff84 */
    param_5 = param_5 * unaff_s14;
                    /* catch() { ... } // from try @ 0637fafc with catch @ 0637ff88 */
    param_3 = param_3 + in_s19;
                    /* catch() { ... } // from try @ 0637fea8 with catch @ 0637ff8c */
    param_6 = param_6 * unaff_s10;
                    /* catch() { ... } // from try @ 0637fad8 with catch @ 0637ff90 */
    while( true ) {
                    /* try { // try from 063801b4 to 064801b7 has its CatchHandler @ 063802d4 */
      in_s30 = in_s30 + unaff_s9 * param_2;
      in_s29 = in_s29 + unaff_s9 * param_1;
                    /* try { // try from 063801c8 to 064801ef has its CatchHandler @ 063802d0 */
      in_s28 = in_s28 + unaff_s9 * param_3;
                    /* try { // try from 063801f0 to 06480243 has its CatchHandler @ 0637f48c */
      in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + in_s23;
      unaff_s8 = unaff_s8 + in_s22;
      in_s31 = in_s31 + in_s21;
      unaff_x22 = unaff_x22 + -1;
                    /* try { // try from 06380244 to 0648025f has its CatchHandler @ 063802f0 */
      in_stack_00000078._4_4_ =
           in_stack_00000078._4_4_ +
           unaff_s9 *
           (param_4 + unaff_s13 * ((fVar8 - param_5) + (fVar8 - param_5)) +
           (unaff_s11 * ((fVar7 - fVar11) + (fVar7 - fVar11)) -
           unaff_s14 * ((fVar10 - param_6) + (fVar10 - param_6))));
      unaff_w24 = unaff_w24 + 1;
      if (unaff_x22 == 0) {
        pfVar4 = (float *)(*(long *)(unaff_x19 + 0xa0) + unaff_x20 * 0xc);
        *pfVar4 = in_stack_00000028._4_4_;
        pfVar4[1] = unaff_s8;
        pfVar4[2] = in_s31;
        uVar6 = FUN_03794fcc(in_s29,0);
        puVar2 = (undefined4 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x20 * 0x10);
        *puVar2 = uVar6;
        puVar2[1] = in_s30;
        puVar2[2] = in_s28;
        puVar2[3] = in_stack_00000078._4_4_;
        return;
      }
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
      fVar11 = *pfVar1;
      fVar17 = pfVar1[1];
      fVar10 = pfVar1[2];
      unaff_s14 = pfVar4[2];
      unaff_s13 = pfVar4[3];
      fVar7 = *pfVar3 * fVar11;
      fVar8 = pfVar3[1] * fVar17;
      fVar9 = pfVar3[2] * fVar10;
      fVar12 = unaff_s10 * fVar8 - unaff_s11 * fVar7;
      fVar13 = unaff_s11 * fVar9 - unaff_s14 * fVar8;
      fVar16 = unaff_s14 * fVar7 - unaff_s10 * fVar9;
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0x70) + lVar5 * 0xc);
      fVar13 = fVar13 + fVar13;
      fVar16 = fVar16 + fVar16;
      fVar12 = fVar12 + fVar12;
      in_s23 = unaff_s9 *
               (*pfVar4 + fVar7 + unaff_s13 * fVar13 + (unaff_s11 * fVar12 - unaff_s14 * fVar16));
      in_s22 = unaff_s9 *
               (pfVar4[1] + fVar8 + unaff_s13 * fVar16 + (unaff_s14 * fVar13 - unaff_s10 * fVar12));
      in_s21 = unaff_s9 *
               (pfVar4[2] + fVar9 + unaff_s13 * fVar12 + (unaff_s10 * fVar16 - unaff_s11 * fVar13));
      if (((0.0 <= fVar11) && (0.0 <= fVar17)) && (0.0 <= fVar10)) break;
      fVar8 = (float)FUN_03794fcc(0);
      fVar9 = 1.0;
      fVar12 = 1.0;
      fVar7 = fVar12;
      if (fVar11 == 0.0 || 0.0 > fVar11) {
        fVar7 = 0.0;
      }
      fVar13 = fVar9;
      if (0.0 <= fVar11) {
        fVar13 = 0.0;
      }
      if (fVar17 == 0.0 || 0.0 > fVar17) {
        fVar9 = 0.0;
      }
      fVar11 = fVar12;
      if (0.0 <= fVar17) {
        fVar11 = 0.0;
      }
      fVar16 = fVar12;
      if (fVar10 == 0.0 || 0.0 > fVar10) {
        fVar16 = 0.0;
      }
      if (0.0 <= fVar10) {
        fVar12 = 0.0;
      }
      fVar8 = fVar8 * -(fVar7 - fVar13);
      param_2 = param_2 * -(fVar9 - fVar11);
      param_3 = param_3 * -(fVar16 - fVar12);
      fVar7 = param_2 * 0.0;
      fVar10 = param_3 * 0.0;
      fVar13 = fVar8 * 0.0 - fVar7;
      fVar13 = fVar13 + fVar13;
      fVar9 = fVar10 - fVar8 * 0.0;
      fVar11 = (fVar7 - param_3) + (fVar7 - param_3);
      fVar12 = (fVar8 - fVar7) + (fVar8 - fVar7);
      fVar16 = (param_2 - fVar10) + (param_2 - fVar10);
      fVar10 = (fVar10 - fVar8) + (fVar10 - fVar8);
      fVar9 = fVar9 + fVar9;
      fVar14 = param_4 * fVar12;
      fVar7 = param_4 * fVar9;
      fVar17 = param_4 * fVar16 + 0.0 + (param_2 * fVar13 - param_3 * fVar10);
      fVar15 = param_4 * fVar10 + 0.0 + (param_3 * fVar16 - fVar8 * fVar13);
      fVar10 = param_4 * fVar13 + 1.0 + (fVar8 * fVar10 - param_2 * fVar16);
      param_4 = param_4 * fVar11 + 0.0 + (param_2 * fVar12 - param_3 * fVar9);
      param_5 = fVar7 + 1.0 + (param_3 * fVar11 - fVar8 * fVar12);
      param_6 = fVar14 + 0.0 + (fVar8 * fVar9 - param_2 * fVar11);
      fVar8 = unaff_s11 * fVar10 - unaff_s14 * fVar15;
      fVar7 = unaff_s10 * fVar15 - unaff_s11 * fVar17;
      fVar11 = unaff_s14 * fVar17 - unaff_s10 * fVar10;
      fVar8 = fVar8 + fVar8;
      fVar11 = fVar11 + fVar11;
      fVar7 = fVar7 + fVar7;
      param_1 = fVar17 + unaff_s13 * fVar8 + (unaff_s11 * fVar7 - unaff_s14 * fVar11);
      param_2 = fVar15 + unaff_s13 * fVar11 + (unaff_s14 * fVar8 - unaff_s10 * fVar7);
      param_3 = fVar10 + unaff_s13 * fVar7 + (unaff_s10 * fVar11 - unaff_s11 * fVar8);
      fVar7 = unaff_s10 * param_5;
      fVar8 = unaff_s11 * param_6;
      fVar10 = unaff_s14 * param_4;
      fVar11 = unaff_s11 * param_4;
      param_5 = unaff_s14 * param_5;
      param_6 = unaff_s10 * param_6;
    }
    fVar7 = param_3 * unaff_s11 - param_2 * unaff_s14;
    fVar8 = param_2 * unaff_s10 - param_1 * unaff_s11;
    param_8 = param_1 * unaff_s14 - param_3 * unaff_s10;
    fVar7 = fVar7 + fVar7;
    param_8 = param_8 + param_8;
    fVar8 = fVar8 + fVar8;
    param_1 = param_1 + unaff_s13 * fVar7;
    param_2 = param_2 + unaff_s13 * param_8;
    param_3 = param_3 + unaff_s13 * fVar8;
    in_s19 = unaff_s10 * param_8 - unaff_s11 * fVar7;
    in_s17 = unaff_s11 * fVar8;
    param_8 = unaff_s14 * param_8;
    in_s18 = unaff_s14 * fVar7;
    in_s16 = unaff_s10 * fVar8;
  } while( true );
}


