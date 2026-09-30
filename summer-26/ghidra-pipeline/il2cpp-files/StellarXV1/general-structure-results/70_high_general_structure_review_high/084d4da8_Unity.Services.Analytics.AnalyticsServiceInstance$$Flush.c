/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$Flush
ENTRY_POINT: 084d4da8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__Flush(void)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long unaff_x19;
  int unaff_w20;
  undefined4 *puVar12;
  long unaff_x22;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iStack000000000000000c;
  
  FUN_04077588(PTR_DAT_0932b1a0);
  FUN_04077588(PTR_DAT_0932ae80);
  *(undefined1 *)(unaff_x22 + 0x67b) = 1;
  iStack000000000000000c = 0;
  uVar7 = FUN_05ff34c4();
  puVar5 = PTR_DAT_0932b198;
  puVar4 = PTR_DAT_092b9d00;
  if ((uVar7 & 1) == 0) {
    return;
  }
  fVar19 = *(float *)(*(long *)(unaff_x19 + 0x30) + (long)unaff_w20 * 4);
  lVar8 = FUN_050c9620(*(undefined8 *)(unaff_x19 + 0x48),*(undefined8 *)PTR_DAT_0932b1a0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar4);
  }
  iVar6 = iStack000000000000000c;
  lVar9 = FUN_050c960c(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)puVar5);
  puVar12 = (undefined4 *)(lVar9 + (long)iStack000000000000000c * 0x60);
  if (puVar12 != (undefined4 *)0x0) {
    lVar9 = *(long *)(unaff_x19 + 0x20);
    puVar12[0x14] = fVar19;
    puVar10 = (undefined4 *)(lVar9 + (long)unaff_w20 * 0xc);
    lVar8 = lVar8 + (long)iVar6 * 0x4c;
    uVar14 = puVar10[1];
    uVar16 = puVar10[2];
    uVar13 = FUN_0838b9a0(*puVar10,0);
    *puVar12 = uVar13;
    puVar12[1] = uVar14;
    puVar12[2] = uVar16;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar8 + 4);
      if ((int)uVar2 < 1) {
        return;
      }
      cVar3 = *(char *)(unaff_x19 + 0x41);
      lVar9 = 0x54;
      lVar11 = 0;
      do {
        fVar17 = *(float *)(lVar8 + lVar11 + 0xc);
        fVar15 = fVar19 / fVar17;
        *(float *)((long)puVar12 + lVar11 + 0x10) = fVar15 * fVar15;
        fVar18 = 0.0;
        if ((cVar3 != '\0') && (*(char *)((long)puVar12 + lVar9) == '\0')) {
          if (lVar11 == 0) {
            fVar18 = 1.0;
          }
          else {
            fVar18 = *(float *)(lVar8 + lVar11 + 8);
          }
          fVar15 = fVar15 - fVar19 / (fVar17 + *(float *)(lVar8 + lVar11 + 0x2c) * (fVar18 - fVar17)
                                     );
          fVar18 = 0.0;
          if (0.0 <= fVar15) {
            fVar18 = fVar15;
          }
        }
        lVar1 = lVar11 + 4;
        lVar9 = lVar9 + 1;
        *(float *)((long)puVar12 + lVar11 + 0x30) = fVar18;
        lVar11 = lVar1;
      } while ((ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) * 4 - lVar1 != 0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


