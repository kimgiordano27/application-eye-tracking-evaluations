/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$ColocateAutomatically
ENTRY_POINT: 0637fdc8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomatically(void)

{
  float *pfVar1;
  undefined4 *puVar2;
  int in_w8;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_s4;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float in_s31;
  float fStack000000000000002c;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
                    /* try { // try from 0637fdc8 to 0647fdcb has its CatchHandler @ 06380028 */
  fVar36 = 0.0;
  fVar38 = 0.0;
  iVar6 = in_w8 + in_w10;
  fVar37 = 0.0;
  fStack000000000000007c = 0.0;
  do {
    pfVar3 = (float *)(*(long *)(unaff_x19 + 0x60) + (long)iVar6 * (long)unaff_w23);
    fVar7 = pfVar3[3];
    fVar9 = pfVar3[4];
    fVar10 = pfVar3[5];
    lVar5 = (long)*(int *)(*(long *)(unaff_x19 + 0x40) + (long)((int)pfVar3[9] + unaff_w21) * 4);
    fVar11 = pfVar3[6];
    fVar12 = pfVar3[7];
    fVar13 = pfVar3[8];
    fVar16 = pfVar3[10];
    pfVar4 = (float *)(*(long *)(unaff_x19 + 0x80) + lVar5 * 0x10);
    fVar17 = *pfVar4;
    fVar18 = pfVar4[1];
    pfVar1 = (float *)(*(long *)(unaff_x19 + 0x90) + lVar5 * 0xc);
    fVar22 = *pfVar1;
    fVar35 = pfVar1[1];
    fVar19 = pfVar1[2];
    fVar21 = pfVar4[2];
    fVar20 = pfVar4[3];
    fVar14 = *pfVar3 * fVar22;
    fVar15 = pfVar3[1] * fVar35;
    fVar23 = pfVar3[2] * fVar19;
    fVar30 = fVar17 * fVar15 - fVar18 * fVar14;
    fVar31 = fVar18 * fVar23 - fVar21 * fVar15;
    fVar34 = fVar21 * fVar14 - fVar17 * fVar23;
    pfVar4 = (float *)(*(long *)(unaff_x19 + 0x70) + lVar5 * 0xc);
    fVar31 = fVar31 + fVar31;
    fVar34 = fVar34 + fVar34;
    fVar30 = fVar30 + fVar30;
    fVar25 = *pfVar4;
    fVar27 = pfVar4[1];
    fVar28 = pfVar4[2];
    fStack000000000000002c = in_s20;
    fStack0000000000000078 = in_s4;
    if (((fVar22 < 0.0) || (fVar35 < 0.0)) || (fVar19 < 0.0)) {
      fVar13 = (float)FUN_03794fcc(0);
      fVar12 = 1.0;
      fVar26 = 1.0;
      fVar7 = fVar26;
      if (fVar22 == 0.0 || 0.0 > fVar22) {
        fVar7 = 0.0;
      }
      fVar24 = fVar12;
      if (0.0 <= fVar22) {
        fVar24 = 0.0;
      }
      if (fVar35 == 0.0 || 0.0 > fVar35) {
        fVar12 = 0.0;
      }
      fVar22 = fVar26;
      if (0.0 <= fVar35) {
        fVar22 = 0.0;
      }
      fVar35 = fVar26;
      if (fVar19 == 0.0 || 0.0 > fVar19) {
        fVar35 = 0.0;
      }
      if (0.0 <= fVar19) {
        fVar26 = 0.0;
      }
      fVar13 = fVar13 * -(fVar7 - fVar24);
      fVar9 = fVar9 * -(fVar12 - fVar22);
      fVar10 = fVar10 * -(fVar35 - fVar26);
      fVar7 = fVar9 * 0.0;
      fVar12 = fVar10 * 0.0;
      fVar22 = fVar13 * 0.0 - fVar7;
      fVar22 = fVar22 + fVar22;
      fVar35 = fVar12 - fVar13 * 0.0;
      fVar19 = (fVar7 - fVar10) + (fVar7 - fVar10);
      fVar26 = (fVar13 - fVar7) + (fVar13 - fVar7);
      fVar24 = (fVar9 - fVar12) + (fVar9 - fVar12);
      fVar12 = (fVar12 - fVar13) + (fVar12 - fVar13);
      fVar35 = fVar35 + fVar35;
      fVar32 = fVar11 * fVar26;
      fVar7 = fVar11 * fVar35;
      fVar29 = fVar11 * fVar24 + 0.0 + (fVar9 * fVar22 - fVar10 * fVar12);
      fVar33 = fVar11 * fVar12 + 0.0 + (fVar10 * fVar24 - fVar13 * fVar22);
      fVar22 = fVar11 * fVar22 + 1.0 + (fVar13 * fVar12 - fVar9 * fVar24);
      fVar11 = fVar11 * fVar19 + 0.0 + (fVar9 * fVar26 - fVar10 * fVar35);
      fVar12 = fVar7 + 1.0 + (fVar10 * fVar19 - fVar13 * fVar26);
      fVar13 = fVar32 + 0.0 + (fVar13 * fVar35 - fVar9 * fVar19);
      fVar10 = fVar18 * fVar22 - fVar21 * fVar33;
      fVar7 = fVar17 * fVar33 - fVar18 * fVar29;
      fVar35 = fVar21 * fVar29 - fVar17 * fVar22;
      fVar10 = fVar10 + fVar10;
      fVar35 = fVar35 + fVar35;
      fVar7 = fVar7 + fVar7;
      fVar19 = fVar29 + fVar20 * fVar10 + (fVar18 * fVar7 - fVar21 * fVar35);
      fVar9 = fVar33 + fVar20 * fVar35 + (fVar21 * fVar10 - fVar17 * fVar7);
      fVar7 = fVar22 + fVar20 * fVar7 + (fVar17 * fVar35 - fVar18 * fVar10);
    }
    else {
      fVar22 = fVar10 * fVar18 - fVar9 * fVar21;
      fVar26 = fVar9 * fVar17 - fVar7 * fVar18;
      fVar35 = fVar7 * fVar21 - fVar10 * fVar17;
      fVar22 = fVar22 + fVar22;
      fVar35 = fVar35 + fVar35;
      fVar26 = fVar26 + fVar26;
      fVar19 = fVar7 + fVar20 * fVar22 + (fVar18 * fVar26 - fVar21 * fVar35);
      fVar9 = fVar9 + fVar20 * fVar35 + (fVar21 * fVar22 - fVar17 * fVar26);
      fVar7 = fVar10 + fVar20 * fVar26 + (fVar17 * fVar35 - fVar18 * fVar22);
    }
    fVar10 = fVar12 * fVar17 - fVar11 * fVar18;
    fVar22 = fVar13 * fVar18 - fVar12 * fVar21;
    fVar13 = fVar11 * fVar21 - fVar13 * fVar17;
    fVar22 = fVar22 + fVar22;
    fVar13 = fVar13 + fVar13;
    fVar10 = fVar10 + fVar10;
    fVar38 = fVar38 + fVar16 * fVar9;
    fVar37 = fVar37 + fVar16 * fVar19;
    fVar36 = fVar36 + fVar16 * fVar7;
    in_s4 = fStack0000000000000078 +
            fVar16 * (fVar12 + fVar20 * fVar13 + (fVar21 * fVar22 - fVar17 * fVar10));
    in_s20 = fStack000000000000002c +
             fVar16 * (fVar25 + fVar14 + fVar20 * fVar31 + (fVar18 * fVar30 - fVar21 * fVar34));
    unaff_s8 = unaff_s8 +
               fVar16 * (fVar27 + fVar15 + fVar20 * fVar34 + (fVar21 * fVar31 - fVar17 * fVar30));
    in_s31 = in_s31 + fVar16 * (fVar28 + fVar23 + fVar20 * fVar30 +
                                         (fVar17 * fVar34 - fVar18 * fVar31));
    unaff_x22 = unaff_x22 + -1;
    fVar7 = fStack000000000000007c +
            fVar16 * (fVar11 + fVar20 * fVar22 + (fVar18 * fVar10 - fVar21 * fVar13));
    iVar6 = iVar6 + 1;
    fStack000000000000007c = fVar7;
  } while (unaff_x22 != 0);
  pfVar4 = (float *)(*(long *)(unaff_x19 + 0xa0) + unaff_x20 * 0xc);
  *pfVar4 = in_s20;
  pfVar4[1] = unaff_s8;
  pfVar4[2] = in_s31;
  uVar8 = FUN_03794fcc(fVar37,0);
  puVar2 = (undefined4 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x20 * 0x10);
  *puVar2 = uVar8;
  puVar2[1] = fVar38;
  puVar2[2] = fVar36;
  puVar2[3] = fVar7;
  return;
}


