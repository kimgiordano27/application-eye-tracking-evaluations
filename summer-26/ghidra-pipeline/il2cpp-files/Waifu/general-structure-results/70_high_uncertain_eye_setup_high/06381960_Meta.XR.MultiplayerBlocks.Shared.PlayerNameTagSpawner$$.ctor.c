/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner$$.ctor
ENTRY_POINT: 06381960
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner___ctor
               (float param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  float *pfVar16;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long lVar17;
  int unaff_w23;
  int unaff_w26;
  int unaff_w27;
  long unaff_x28;
  int unaff_w29;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float unaff_s8;
  float unaff_s9;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  do {
    pfVar10 = (float *)(*(long *)(unaff_x19 + 0xb0) + (long)unaff_w22 * (long)(int)unaff_x20);
    *pfVar10 = param_1;
    pfVar10[1] = param_3;
    pfVar10[2] = param_2;
    fVar27 = DAT_012edc5c;
    do {
      do {
        do {
          iVar15 = unaff_w29;
          unaff_w22 = unaff_w22 + 1;
          unaff_x28 = unaff_x28 + -1;
          unaff_w29 = iVar15 + 3;
          if (unaff_x28 == 0) {
            if ((int)in_stack_00000008 < 1) {
              return;
            }
            lVar17 = 0;
            do {
              if ((*(char *)(*(long *)(unaff_x19 + 0x30) + (long)unaff_w27) != '\0') &&
                 (*(char *)(*(long *)(unaff_x19 + 0x20) + (long)unaff_w27) != '\0')) {
                uVar8 = *(uint *)(*(long *)(unaff_x19 + 0x70) + (long)(unaff_w23 + (int)lVar17) * 4)
                ;
                uVar11 = (ulong)(uVar8 >> 0x18) & 0xf;
                if ((int)uVar11 == 0) {
                  return;
                }
                fVar22 = 0.0;
                fVar24 = 0.0;
                fVar25 = 0.0;
                iVar15 = in_stack_00000000._4_4_ + (uVar8 & 0xffffff);
                fVar28 = 0.0;
                fVar29 = 0.0;
                fVar31 = 0.0;
                do {
                  lVar14 = (long)iVar15;
                  uVar11 = uVar11 - 1;
                  iVar15 = iVar15 + 1;
                  iVar3 = *(int *)(*(long *)(unaff_x19 + 0x80) + lVar14 * 4) + unaff_w26;
                  pfVar16 = (float *)(*(long *)(unaff_x19 + 0xa0) + (long)iVar3 * 0xc);
                  pfVar10 = (float *)(*(long *)(unaff_x19 + 0xb0) + (long)iVar3 * 0xc);
                  fVar31 = fVar31 + *pfVar16;
                  fVar29 = fVar29 + pfVar16[1];
                  fVar28 = fVar28 + pfVar16[2];
                  fVar25 = fVar25 + *pfVar10;
                  fVar24 = fVar24 + pfVar10[1];
                  fVar22 = fVar22 + pfVar10[2];
                } while (uVar11 != 0);
                fVar21 = fVar28 * fVar28 + fVar31 * fVar31 + fVar29 * fVar29;
                if (fVar27 < fVar21) {
                  if (DAT_086d90cb == '\0') {
                    FUN_0335b6c8(&DAT_083ce8b0,1);
                    DataMemoryBarrier(2,3);
                    DAT_086d90cb = '\x01';
                  }
                  if ((*(int *)(DAT_083ce8b0 + 0xe0) == 0) && (FUN_033b9870(), DAT_086d90cb == '\0')
                     ) {
                    FUN_0335b6c8(&DAT_083ce8b0,1);
                    DataMemoryBarrier(2,3);
                    DAT_086d90cb = '\x01';
                  }
                  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  fVar21 = 1.0 / SQRT(fVar21);
                  fVar29 = fVar29 * fVar21;
                  fVar28 = fVar28 * fVar21;
                  fVar25 = fVar25 * (1.0 / SQRT(fVar22 * fVar22 + fVar25 * fVar25 + fVar24 * fVar24)
                                    );
                    /* catch() { ... } // from try @ 06381b34 with catch @ 06381b08
                       catch() { ... } // from try @ 06381bac with catch @ 06381b08 */
                  uVar18 = FUN_03794fcc(fVar31 * fVar21,0);
                  puVar4 = (undefined4 *)(*(long *)(unaff_x19 + 0xc0) + (long)unaff_w27 * 0x10);
                  *puVar4 = uVar18;
                  puVar4[1] = fVar29;
                    /* try { // try from 06381b24 to 06481b33 has its CatchHandler @ 06381b6c */
                  puVar4[2] = fVar28;
                  puVar4[3] = fVar25;
                }
              }
              lVar17 = lVar17 + 1;
              unaff_w27 = unaff_w27 + 1;
                    /* try { // try from 06381b34 to 06481b83 has its CatchHandler @ 06381b08 */
            } while (lVar17 != in_stack_00000008);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06381b24 with catch @ 06381b6c
                        */
            return;
          }
          lVar14 = *(long *)(unaff_x19 + 0x50);
          lVar17 = *(long *)(unaff_x19 + 0x20);
          iVar5 = *(int *)(lVar14 + (long)unaff_w29 * 4);
          iVar3 = iVar5 + unaff_w27;
        } while (*(char *)(lVar17 + iVar3) == '\0');
        iVar6 = *(int *)(lVar14 + (long)(iVar15 + 4) * 4);
        iVar2 = iVar6 + unaff_w27;
      } while (*(char *)(lVar17 + iVar2) == '\0');
      iVar7 = *(int *)(lVar14 + (long)(iVar15 + 5) * 4);
      iVar15 = iVar7 + unaff_w27;
    } while (*(char *)(lVar17 + iVar15) == '\0');
    lVar17 = *(long *)(unaff_x19 + 0x40);
    puVar9 = (undefined8 *)(lVar17 + iVar3 * unaff_x20);
    puVar12 = (undefined8 *)(lVar17 + iVar2 * unaff_x20);
    puVar13 = (undefined8 *)(lVar17 + iVar15 * unaff_x20);
    uVar26 = *puVar9;
    fVar28 = *(float *)(puVar9 + 1);
    uVar23 = *puVar12;
    fVar29 = *(float *)(puVar12 + 1);
    uVar30 = *puVar13;
    fVar27 = *(float *)(puVar13 + 1);
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar17 = *(long *)(unaff_x19 + 0x60);
    pfVar10 = (float *)(lVar17 + (long)(iVar5 + unaff_w23) * 8);
    pfVar16 = (float *)(lVar17 + (long)(iVar6 + unaff_w23) * 8);
    pfVar1 = (float *)(lVar17 + (long)(iVar7 + unaff_w23) * 8);
    fVar22 = *pfVar10;
    fVar24 = pfVar10[1];
    fVar31 = (float)uVar26;
    fVar19 = (float)uVar23 - fVar31;
    fVar21 = (float)((ulong)uVar26 >> 0x20);
    fVar20 = (float)((ulong)uVar23 >> 0x20) - fVar21;
    fVar29 = fVar29 - fVar28;
    fVar25 = pfVar16[1] - fVar24;
    fVar24 = pfVar1[1] - fVar24;
    param_2 = (*pfVar16 - fVar22) * fVar24 - fVar25 * (*pfVar1 - fVar22);
    fVar31 = (float)uVar30 - fVar31;
    fVar21 = (float)((ulong)uVar30 >> 0x20) - fVar21;
    fVar27 = fVar27 - fVar28;
    if (param_2 == 0.0) {
      param_1 = 1.0;
      param_3 = 1.0;
      param_2 = 1.0;
    }
    else {
      param_2 = 1.0 / param_2;
      param_1 = -(fVar19 * fVar24 - fVar31 * fVar25) * param_2;
      param_3 = -(fVar20 * fVar24 - fVar21 * fVar25) * param_2;
      param_2 = param_2 * -(fVar29 * fVar24 - fVar27 * fVar25);
    }
    fVar19 = fVar19 * 1000.0;
    fVar20 = fVar20 * 1000.0;
    fVar29 = fVar29 * 1000.0;
    fVar31 = fVar31 * 1000.0;
    fVar21 = fVar21 * 1000.0;
    fVar27 = fVar27 * 1000.0;
    fVar25 = fVar20 * fVar27 - fVar29 * fVar21;
    fVar28 = fVar29 * fVar31 - fVar19 * fVar27;
    fVar29 = fVar19 * fVar21 - fVar20 * fVar31;
    fVar27 = 1.0 / SQRT(fVar29 * fVar29 + fVar25 * fVar25 + fVar28 * fVar28);
    fVar25 = fVar25 * fVar27;
    fVar28 = fVar28 * fVar27;
    fVar29 = fVar29 * fVar27;
    if (0.0 <= unaff_s9) {
      if (unaff_s8 < 0.0) {
        fVar25 = -fVar25;
        fVar28 = -fVar28;
        fVar29 = -fVar29;
        param_1 = -param_1;
        param_3 = -param_3;
        param_2 = -param_2;
      }
    }
    else {
      fVar25 = -fVar25;
      fVar28 = -fVar28;
      fVar29 = -fVar29;
    }
    pfVar10 = (float *)(*(long *)(unaff_x19 + 0xa0) + (long)unaff_w22 * (long)(int)unaff_x20);
    *pfVar10 = fVar25;
    pfVar10[1] = fVar28;
    pfVar10[2] = fVar29;
  } while( true );
}


