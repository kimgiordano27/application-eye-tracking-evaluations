/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeEnum
ENTRY_POINT: 06307000
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeEnum(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar9;
  float *pfVar10;
  long *unaff_x19;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
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
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  if (in_ZR || in_NG != in_OV) {
    if (in_stack_00000028 <= 0.0) {
      if (fStack0000000000000024 <= 0.0) {
        if (fStack0000000000000020 <= 0.0) {
          bVar8 = false;
          lVar9 = 0;
        }
        else {
          bVar8 = true;
          lVar9 = 1;
        }
      }
      else {
        bVar8 = true;
        lVar9 = 2;
      }
    }
    else {
      bVar8 = true;
      lVar9 = 3;
    }
  }
  else {
    bVar8 = true;
    lVar9 = 4;
  }
  fStack0000000000000018 = 0.0;
  fStack0000000000000010 = 0.0;
  fStack0000000000000014 = 0.0;
  fStack0000000000000000 = 0.0;
  fStack0000000000000004 = 0.0;
  fStack0000000000000008 = 0.0;
  if (bVar8) {
    pfVar1 = (float *)(*unaff_x19 + param_1 * 0xc);
    pfVar2 = (float *)(unaff_x19[2] + param_1 * 0xc);
    pfVar3 = (float *)(unaff_x19[4] + param_1 * 0xc);
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    pfVar10 = &stack0x00000020;
    do {
      fVar19 = *pfVar1;
      fVar21 = pfVar1[1];
      fVar23 = *pfVar2;
      puVar4 = (undefined8 *)(unaff_x19[10] + (long)(int)pfVar10[4] * 0x40);
      fVar17 = pfVar2[1];
      fVar27 = *pfVar3;
      lVar11 = (long)*(int *)(unaff_x19[8] + (long)(int)pfVar10[4] * 4);
      fVar29 = *(float *)(puVar4 + 1);
      fVar32 = *(float *)(puVar4 + 3);
      fVar16 = pfVar2[2];
      fVar28 = pfVar3[1];
      fVar37 = *(float *)(puVar4 + 5);
      fVar22 = pfVar1[2];
      fVar26 = pfVar3[2];
      pfVar5 = (float *)(unaff_x19[0xe] + lVar11 * 0x10);
      fVar31 = (float)*puVar4;
      fVar33 = (float)((ulong)*puVar4 >> 0x20);
      fVar34 = (float)puVar4[2];
      fVar36 = (float)((ulong)puVar4[2] >> 0x20);
      fVar42 = (float)puVar4[4];
      fVar35 = (float)((ulong)puVar4[4] >> 0x20);
      fVar20 = *pfVar5;
      fVar18 = pfVar5[3];
      puVar6 = (undefined8 *)(unaff_x19[0x10] + lVar11 * 0xc);
      uVar30 = *puVar6;
      fVar40 = (float)puVar4[6];
      fVar38 = fVar40 * 0.0;
      fVar41 = (float)((ulong)puVar4[6] >> 0x20);
      fVar39 = fVar41 * 0.0;
      fVar43 = *(float *)(puVar4 + 7) * 0.0;
      fVar24 = fVar38 + fVar31 * fVar23 + fVar34 * fVar17 + fVar42 * fVar16;
      fVar25 = fVar39 + fVar33 * fVar23 + fVar36 * fVar17 + fVar35 * fVar16;
      fVar23 = fVar43 + fVar29 * fVar23 + fVar32 * fVar17 + fVar37 * fVar16;
      fVar38 = fVar38 + fVar31 * fVar27 + fVar34 * fVar28 + fVar42 * fVar26;
      fVar39 = fVar39 + fVar33 * fVar27 + fVar36 * fVar28 + fVar35 * fVar26;
      fVar17 = (float)((ulong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
      fVar43 = fVar43 + fVar29 * fVar27 + fVar32 * fVar28 + fVar37 * fVar26;
      fVar16 = (float)*(undefined8 *)(pfVar5 + 1);
      fVar26 = (fVar40 + fVar31 * fVar19 + fVar34 * fVar21 + fVar42 * fVar22) * (float)uVar30;
      fVar27 = (fVar41 + fVar33 * fVar19 + fVar36 * fVar21 + fVar35 * fVar22) *
               (float)((ulong)uVar30 >> 0x20);
      fVar22 = (*(float *)(puVar4 + 7) + fVar29 * fVar19 + fVar32 * fVar21 + fVar37 * fVar22) *
               *(float *)(puVar6 + 1);
      fVar32 = fVar20 * fVar25 - fVar24 * fVar16;
      fVar42 = fVar20 * fVar39 - fVar38 * fVar16;
      fVar33 = fVar17 * fVar26 - fVar20 * fVar22;
      fVar42 = fVar42 + fVar42;
      fVar28 = fVar23 * fVar16 - fVar25 * fVar17;
      fVar31 = fVar24 * fVar17 - fVar23 * fVar20;
      fVar34 = fVar43 * fVar16 - fVar39 * fVar17;
      fVar36 = fVar38 * fVar17 - fVar43 * fVar20;
      fVar33 = fVar33 + fVar33;
      fVar28 = fVar28 + fVar28;
      fVar31 = fVar31 + fVar31;
      fVar32 = fVar32 + fVar32;
      fVar34 = fVar34 + fVar34;
      fVar36 = fVar36 + fVar36;
      fVar19 = fVar20 * fVar27 - fVar16 * fVar26;
      fVar21 = fVar16 * fVar22 - fVar17 * fVar27;
      fVar19 = fVar19 + fVar19;
      fVar21 = fVar21 + fVar21;
      fVar29 = *pfVar10;
      puVar4 = (undefined8 *)(unaff_x19[0xc] + lVar11 * 0xc);
      uVar30 = *puVar4;
      fStack0000000000000008 =
           fVar29 * (fVar43 + fVar18 * fVar42 + (fVar20 * fVar36 - fVar16 * fVar34)) +
           fStack0000000000000008;
      lVar9 = lVar9 + -1;
      fStack0000000000000018 =
           fVar29 * (fVar23 + fVar18 * fVar32 + (fVar20 * fVar31 - fVar16 * fVar28)) +
           fStack0000000000000018;
      fStack0000000000000010 =
           fStack0000000000000010 +
           (fVar24 + fVar28 * fVar18 + (fVar16 * fVar32 - fVar17 * fVar31)) * fVar29;
      fStack0000000000000014 =
           fStack0000000000000014 +
           (fVar25 + fVar31 * fVar18 + (fVar17 * fVar28 - fVar20 * fVar32)) * fVar29;
      fStack0000000000000000 =
           (fVar38 + fVar34 * fVar18 + (fVar16 * fVar42 - fVar17 * fVar36)) * fVar29 +
           fStack0000000000000000;
      fStack0000000000000004 =
           (fVar39 + fVar36 * fVar18 + (fVar17 * fVar34 - fVar20 * fVar42)) * fVar29 +
           fStack0000000000000004;
      fVar13 = fVar13 + fVar29 * (*(float *)(puVar4 + 1) +
                                 fVar22 + fVar18 * fVar19 + (fVar20 * fVar33 - fVar16 * fVar21));
      fVar14 = fVar14 + ((float)uVar30 +
                        fVar26 + fVar18 * fVar21 + (fVar16 * fVar19 - fVar17 * fVar33)) * fVar29;
      fVar15 = fVar15 + ((float)((ulong)uVar30 >> 0x20) +
                        fVar18 * fVar33 + fVar27 + (fVar17 * fVar21 - fVar20 * fVar19)) * fVar29;
      pfVar10 = pfVar10 + 1;
    } while (lVar9 != 0);
  }
  else {
    fVar13 = 0.0;
    fVar15 = 0.0;
    fVar14 = 0.0;
  }
  lVar9 = unaff_x19[0x12];
  fVar18 = *(float *)(unaff_x19 + 0x13);
  fVar19 = *(float *)(unaff_x19 + 0x15);
  fVar20 = *(float *)(unaff_x19 + 0x17);
  fVar21 = *(float *)(unaff_x19 + 0x19);
  fVar17 = (float)lVar9 * fVar14 + (float)unaff_x19[0x14] * fVar15 + (float)unaff_x19[0x16] * fVar13
  ;
  puVar4 = (undefined8 *)(*unaff_x19 + param_1 * 0xc);
  fVar16 = fVar17 + (float)unaff_x19[0x18];
  *puVar4 = CONCAT44((float)((ulong)lVar9 >> 0x20) * fVar14 +
                     (float)((ulong)unaff_x19[0x14] >> 0x20) * fVar15 +
                     (float)((ulong)unaff_x19[0x16] >> 0x20) * fVar13 +
                     (float)((ulong)unaff_x19[0x18] >> 0x20),fVar16);
  *(float *)(puVar4 + 1) = fVar14 * fVar18 + fVar15 * fVar19 + fVar13 * fVar20 + fVar21;
  uVar12 = FUN_06312938(&stack0x00000010,unaff_x19 + 0x12,0);
  puVar7 = (undefined4 *)(unaff_x19[2] + param_1 * 0xc);
  *puVar7 = uVar12;
  puVar7[1] = fVar16;
  puVar7[2] = fVar17;
  uVar12 = FUN_06312938();
  puVar7 = (undefined4 *)(unaff_x19[4] + param_1 * 0xc);
  *puVar7 = uVar12;
  puVar7[1] = fVar16;
  puVar7[2] = fVar17;
  return;
}


