/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsContainer$$get_AutoFlushPeriod
ENTRY_POINT: 08199e7c
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod(void)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int in_w9;
  float *pfVar6;
  long in_x10;
  long in_x11;
  float *pfVar7;
  long in_x13;
  long unaff_x19;
  int iVar8;
  ulong unaff_x20;
  int unaff_w21;
  undefined1 *puVar9;
  int unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  int unaff_w25;
  undefined4 *puVar10;
  undefined8 *unaff_x26;
  undefined4 unaff_w28;
  long *unaff_x29;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 uVar16;
  float fVar17;
  int iStack000000000000000c;
  
  uVar16 = *(undefined4 *)(in_x10 + 8);
  fVar17 = *(float *)(in_x11 + (long)unaff_w21 * 4);
  uVar2 = *(undefined1 *)(in_x13 + unaff_w21);
  iStack000000000000000c = in_w9;
  lVar4 = FUN_04c1499c();
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_0408f364(*unaff_x29);
  }
  puVar9 = (undefined1 *)(lVar4 + (long)unaff_w25 * 0x4c);
  lVar4 = FUN_04c14998(*(undefined8 *)(unaff_x19 + 0xf8),*(undefined8 *)(unaff_x19 + 0x100),
                       *unaff_x26);
  if (puVar9 != (undefined1 *)0x0) {
    puVar10 = (undefined4 *)(lVar4 + (long)unaff_w25 * 0x60);
    *puVar9 = 1;
    uVar11 = 0;
    if (unaff_w23 == 0) {
      uVar11 = unaff_w28;
    }
    iVar8 = (int)unaff_x20;
    *(int *)(puVar9 + 4) = iVar8;
    *(undefined4 *)(puVar9 + 8) = uVar11;
    if (puVar10 != (undefined4 *)0x0) {
      puVar10[0x14] = fVar17;
      uVar11 = FUN_0804e5b0(unaff_s8,0);
      *puVar10 = uVar11;
      puVar10[1] = unaff_s9;
      puVar10[2] = uVar16;
      uVar16 = *(undefined4 *)(puVar9 + 8);
      *(undefined1 *)(puVar10 + 0x17) = uVar2;
      puVar10[3] = iVar8;
      FUN_07ee0c08(unaff_x19 + 0x108,uVar16,0);
      if (unaff_w22 == 2) {
        iVar3 = iVar8 + -1;
        if (iVar8 < 1) {
          return;
        }
        if ((iStack000000000000000c != 0) &&
           (*(short *)(*(long *)(unaff_x19 + 0xb0) + (long)(iVar3 + unaff_w24) * 2) == 1)) {
          if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          iVar3 = FUN_074e599c(unaff_x20 & 0xffffffff,2,0);
          iVar3 = iVar3 + -2;
        }
      }
      else {
        if (iVar8 < 1) {
          return;
        }
        iVar3 = 0;
      }
      uVar5 = 0;
      pfVar6 = (float *)(puVar9 + 0x2c);
      pfVar7 = (float *)(puVar10 + 0xc);
      do {
        iVar8 = unaff_w24 + (int)uVar5;
        fVar13 = *(float *)(*(long *)(unaff_x19 + 0xc0) + (long)iVar8 * 4);
        *pfVar6 = 0.0;
        fVar12 = fVar17 / fVar13;
        pfVar6[-8] = fVar13;
        pfVar7[-8] = fVar12 * fVar12;
        *(undefined1 *)((long)puVar10 + uVar5 + 0x54) = 0;
        *pfVar7 = 0.0;
        if ((unaff_w22 == 2) && ((long)uVar5 < (long)iVar3)) {
          *(undefined1 *)((long)puVar10 + uVar5 + 0x54) = 1;
        }
        else {
          uVar1 = unaff_w23;
          if ((long)uVar5 < (long)iVar3) {
            uVar1 = 1;
          }
          if ((uVar1 & 1) == 0) {
            if (uVar5 == 0) {
              fVar14 = 1.0;
            }
            else {
              fVar14 = *(float *)(*(long *)(unaff_x19 + 0xc0) +
                                 (long)(unaff_w24 + -1 + (int)uVar5) * 4);
            }
            fVar15 = *(float *)(*(long *)(unaff_x19 + 0xd0) + (long)iVar8 * 4);
            *pfVar6 = fVar15;
            fVar12 = fVar12 - fVar17 / (fVar13 + fVar15 * (fVar14 - fVar13));
            fVar13 = 0.0;
            if (0.0 <= fVar12) {
              fVar13 = fVar12;
            }
            *pfVar7 = fVar13;
          }
        }
        uVar5 = uVar5 + 1;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      } while (unaff_x20 != uVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


