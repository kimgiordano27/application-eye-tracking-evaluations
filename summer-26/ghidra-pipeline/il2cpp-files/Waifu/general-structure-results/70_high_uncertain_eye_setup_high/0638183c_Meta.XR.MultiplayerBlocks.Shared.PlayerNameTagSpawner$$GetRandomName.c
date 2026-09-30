/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner$$GetRandomName
ENTRY_POINT: 0638183c
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


void Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner__GetRandomName
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,
               undefined1 param_5 [16],undefined1 param_6 [16],float param_7,undefined1 param_8 [16]
               )

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
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_s8;
  float unaff_s9;
  undefined8 uVar28;
  float unaff_s11;
  undefined8 unaff_d12;
  float unaff_s13;
  undefined8 unaff_d14;
  float in_s16;
  float in_s17;
  float in_s18;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  fVar27 = param_8._4_4_;
  fVar22 = param_8._0_4_;
  do {
    param_4 = param_4 - param_3;
    param_3 = in_s17 - param_3;
    fVar20 = in_s18 * param_3 - param_4 * (in_s16 - param_2);
    fVar24 = (float)unaff_d14 - (float)unaff_d12;
    fVar26 = (float)((ulong)unaff_d14 >> 0x20) - (float)((ulong)unaff_d12 >> 0x20);
    if (fVar20 == 0.0) {
      fVar18 = 1.0;
      fVar21 = 1.0;
      fVar20 = 1.0;
    }
    else {
      fVar20 = 1.0 / fVar20;
      fVar18 = -(fVar22 * param_3 - fVar24 * param_4) * fVar20;
      fVar21 = -(fVar27 * param_3 - fVar26 * param_4) * fVar20;
      fVar20 = fVar20 * -(param_7 * param_3 - (unaff_s13 - unaff_s11) * param_4);
    }
    fVar24 = fVar24 * 1000.0;
    fVar26 = fVar26 * 1000.0;
    fVar23 = (unaff_s13 - unaff_s11) * 1000.0;
    fVar25 = fVar27 * 1000.0 * fVar23 - param_7 * 1000.0 * fVar26;
    fVar23 = param_7 * 1000.0 * fVar24 - fVar22 * 1000.0 * fVar23;
    fVar27 = fVar22 * 1000.0 * fVar26 - fVar27 * 1000.0 * fVar24;
    fVar22 = 1.0 / SQRT(fVar27 * fVar27 + fVar25 * fVar25 + fVar23 * fVar23);
    fVar25 = fVar25 * fVar22;
    fVar23 = fVar23 * fVar22;
    fVar27 = fVar27 * fVar22;
    if (0.0 <= unaff_s9) {
      if (unaff_s8 < 0.0) {
        fVar25 = -fVar25;
        fVar23 = -fVar23;
        fVar27 = -fVar27;
        fVar18 = -fVar18;
        fVar21 = -fVar21;
        fVar20 = -fVar20;
      }
    }
    else {
      fVar25 = -fVar25;
      fVar23 = -fVar23;
      fVar27 = -fVar27;
    }
    pfVar10 = (float *)(*(long *)(unaff_x19 + 0xa0) + (long)unaff_w22 * (long)(int)unaff_x20);
    *pfVar10 = fVar25;
    pfVar10[1] = fVar23;
    pfVar10[2] = fVar27;
    pfVar10 = (float *)(*(long *)(unaff_x19 + 0xb0) + (long)unaff_w22 * (long)(int)unaff_x20);
    *pfVar10 = fVar18;
    pfVar10[1] = fVar21;
    pfVar10[2] = fVar20;
    fVar22 = DAT_012edc5c;
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
                fVar26 = 0.0;
                fVar18 = 0.0;
                fVar24 = 0.0;
                iVar15 = in_stack_00000000._4_4_ + (uVar8 & 0xffffff);
                fVar20 = 0.0;
                fVar27 = 0.0;
                fVar21 = 0.0;
                do {
                  lVar14 = (long)iVar15;
                  uVar11 = uVar11 - 1;
                  iVar15 = iVar15 + 1;
                  iVar3 = *(int *)(*(long *)(unaff_x19 + 0x80) + lVar14 * 4) + unaff_w26;
                  pfVar16 = (float *)(*(long *)(unaff_x19 + 0xa0) + (long)iVar3 * 0xc);
                  pfVar10 = (float *)(*(long *)(unaff_x19 + 0xb0) + (long)iVar3 * 0xc);
                  fVar21 = fVar21 + *pfVar16;
                  fVar27 = fVar27 + pfVar16[1];
                  fVar20 = fVar20 + pfVar16[2];
                  fVar24 = fVar24 + *pfVar10;
                  fVar18 = fVar18 + pfVar10[1];
                  fVar26 = fVar26 + pfVar10[2];
                } while (uVar11 != 0);
                fVar23 = fVar20 * fVar20 + fVar21 * fVar21 + fVar27 * fVar27;
                if (fVar22 < fVar23) {
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
                  fVar23 = 1.0 / SQRT(fVar23);
                  fVar27 = fVar27 * fVar23;
                  fVar20 = fVar20 * fVar23;
                  fVar24 = fVar24 * (1.0 / SQRT(fVar26 * fVar26 + fVar24 * fVar24 + fVar18 * fVar18)
                                    );
                  uVar19 = FUN_03794fcc(fVar21 * fVar23,0);
                  puVar4 = (undefined4 *)(*(long *)(unaff_x19 + 0xc0) + (long)unaff_w27 * 0x10);
                  *puVar4 = uVar19;
                  puVar4[1] = fVar27;
                  puVar4[2] = fVar20;
                  puVar4[3] = fVar24;
                }
              }
              lVar17 = lVar17 + 1;
              unaff_w27 = unaff_w27 + 1;
            } while (lVar17 != in_stack_00000008);
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
    unaff_d12 = *puVar9;
    unaff_s11 = *(float *)(puVar9 + 1);
    uVar28 = *puVar12;
    param_7 = *(float *)(puVar12 + 1);
    unaff_d14 = *puVar13;
    unaff_s13 = *(float *)(puVar13 + 1);
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
    param_2 = *pfVar10;
    param_3 = pfVar10[1];
    param_4 = pfVar16[1];
    in_s16 = *pfVar1;
    in_s17 = pfVar1[1];
    fVar22 = (float)uVar28 - (float)unaff_d12;
    fVar27 = (float)((ulong)uVar28 >> 0x20) - (float)((ulong)unaff_d12 >> 0x20);
    param_7 = param_7 - unaff_s11;
    in_s18 = *pfVar16 - param_2;
  } while( true );
}


