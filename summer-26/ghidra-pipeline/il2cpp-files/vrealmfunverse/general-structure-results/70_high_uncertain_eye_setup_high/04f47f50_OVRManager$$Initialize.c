/*
FUNCTION_NAME: OVRManager$$Initialize
ENTRY_POINT: 04f47f50
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Initialize(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  int in_w8;
  undefined4 uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int *piVar15;
  long unaff_x19;
  int unaff_w20;
  long *plVar16;
  uint *puVar17;
  uint uVar18;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 unaff_s11;
  float fVar27;
  float unaff_s12;
  float fVar28;
  float unaff_s13;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  
  if (in_w8 == 0) {
    thunk_FUN_02b9ad44();
  }
  fStack000000000000001c = (float)FUN_05c7bd38(unaff_s11,0);
  uVar8 = in_stack_00000078;
  fVar19 = fStack0000000000000070;
  lVar6 = *unaff_x26;
  if (unaff_w20 == 1) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *unaff_x26;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    puVar9 = (undefined4 *)(lVar6 + 0xc);
    puVar12 = (undefined4 *)(lVar6 + 0x10);
    puVar14 = (undefined4 *)(lVar6 + 0x14);
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *unaff_x26;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    puVar9 = (undefined4 *)(lVar6 + 0x54);
    puVar12 = (undefined4 *)(lVar6 + 0x58);
    puVar14 = (undefined4 *)(lVar6 + 0x5c);
  }
  fVar26 = fStack0000000000000074;
  fStack0000000000000014 = fVar19;
  fVar19 = (float)FUN_05c7bd38(in_stack_00000068._4_4_,fVar19,fStack0000000000000074,uVar8,*puVar9,
                               *puVar12,*puVar14,0);
  if (DAT_066c298e == '\0') {
    FUN_02b3c81c(PTR_DAT_06315600);
    DAT_066c298e = '\x01';
  }
  puVar3 = PTR_DAT_06315600;
  fVar20 = fStack0000000000000024 * fStack0000000000000024 +
           fStack0000000000000038 * fStack0000000000000038 +
           fStack0000000000000020 * fStack0000000000000020;
  fVar27 = unaff_s8;
  fVar28 = unaff_s9;
  fVar23 = unaff_s10;
  if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar20) {
    fVar23 = fStack0000000000000024 * unaff_s10 +
             fStack0000000000000038 * unaff_s8 + fStack0000000000000020 * unaff_s9;
    fVar27 = unaff_s8 - (fStack0000000000000038 * fVar23) / fVar20;
    fVar28 = unaff_s9 - (fStack0000000000000020 * fVar23) / fVar20;
    fVar23 = unaff_s10 - (fStack0000000000000024 * fVar23) / fVar20;
  }
  if (*(char *)(unaff_x23 + 0xd9d) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    *(undefined1 *)(unaff_x23 + 0xd9d) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar20 = SQRT(fVar23 * fVar23 + fVar27 * fVar27 + fVar28 * fVar28);
  if (fVar20 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xd97) == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      *(undefined1 *)(unaff_x24 + 0xd97) = 1;
    }
    pfVar10 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000038 = *pfVar10;
    fVar28 = pfVar10[1];
    fVar23 = pfVar10[2];
  }
  else {
    fStack0000000000000038 = fVar27 / fVar20;
    fVar28 = fVar28 / fVar20;
    fVar23 = fVar23 / fVar20;
  }
  fVar27 = fStack000000000000001c;
  if (DAT_066c298e == '\0') {
    FUN_02b3c81c(PTR_DAT_06315600);
    DAT_066c298e = '\x01';
  }
  fVar20 = unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar20) {
    fVar24 = unaff_s10 * unaff_s13 + unaff_s8 * fVar27 + unaff_s9 * unaff_s12;
    fVar27 = fVar27 - (unaff_s8 * fVar24) / fVar20;
    unaff_s12 = unaff_s12 - (unaff_s9 * fVar24) / fVar20;
    unaff_s13 = unaff_s13 - (unaff_s10 * fVar24) / fVar20;
  }
  if (*(char *)(unaff_x23 + 0xd9d) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    *(undefined1 *)(unaff_x23 + 0xd9d) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar20 = SQRT(unaff_s13 * unaff_s13 + fVar27 * fVar27 + unaff_s12 * unaff_s12);
  if (fVar20 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xd97) == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      *(undefined1 *)(unaff_x24 + 0xd97) = 1;
    }
    pfVar10 = *(float **)(*unaff_x22 + 0xb8);
    fVar27 = *pfVar10;
    unaff_s12 = pfVar10[1];
    unaff_s13 = pfVar10[2];
  }
  else {
    fVar27 = fVar27 / fVar20;
    unaff_s12 = unaff_s12 / fVar20;
    unaff_s13 = unaff_s13 / fVar20;
  }
  fVar20 = (float)FUN_02cdfa10(fVar27,unaff_s12,unaff_s13,uStack0000000000000028,
                               uStack000000000000002c,uStack0000000000000030,0);
  plVar16 = *(long **)(unaff_x19 + 0x28);
  if (plVar16 != (long *)0x0) {
    lVar6 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_04f482f8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02b7654c(plVar16,*unaff_x21,0);
LAB_04f482f8:
    iVar5 = (*(code *)*puVar7)(plVar16,puVar7[1]);
    uVar8 = 0xc28c0000;
    fVar24 = -fVar20;
    if (iVar5 != 1) {
      fVar24 = fVar20;
    }
    fVar25 = fVar24 + 360.0;
    fVar20 = fVar25;
    if (-70.0 <= fVar24) {
      fVar20 = fVar24;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar20;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar21 = FUN_05c9bf94(*(long *)(unaff_x19 + 0x30),0);
      uVar22 = FUN_05c7bb74(uStack0000000000000034,unaff_s9,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_05c99d80(uVar21,fVar25,uVar8,uVar22,unaff_s9,unaff_s10,uStack0000000000000028,
                   &stack0x00000040,0);
      plVar16 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x88) = unaff_s13;
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(float *)(unaff_x19 + 0x80) = fVar27;
      *(float *)(unaff_x19 + 0x84) = unaff_s12;
      puVar3 = PTR_DAT_06322e08;
      if (plVar16 != (long *)0x0) {
        lVar6 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06322e08) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_04f48424;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_02b7654c(plVar16,*(long *)PTR_DAT_06322e08,0);
LAB_04f48424:
        uVar13 = (*(code *)*puVar7)(plVar16,puVar7[1]);
        if ((uVar13 & 1) == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar16 = *(long **)(unaff_x19 + 0x48);
        if (plVar16 != (long *)0x0) {
          lVar11 = *plVar16;
          lVar6 = *(long *)puVar3;
          fVar28 = fStack0000000000000014 * fVar28;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar6) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_04f484cc;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02b7654c(plVar16,lVar6,0);
LAB_04f484cc:
          bVar4 = (*(code *)*puVar7)(plVar16,puVar7[1]);
          puVar17 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
          if (((fVar26 * fVar23 + fVar19 * fStack0000000000000038 + fVar28) * 0.5 + 0.5 <= 0.5) ||
             ((uVar18 & *puVar17 >> 0x1f) == 0)) {
            if ((int)*puVar17 < 0) {
              return;
            }
            plVar16 = *(long **)(unaff_x19 + 0x58);
            if (plVar16 != (long *)0x0) {
              lVar11 = *plVar16;
              lVar6 = *(long *)puVar3;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar6) {
                    puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_04f4858c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_02b7654c(plVar16,lVar6,0);
LAB_04f4858c:
              uVar13 = (*(code *)*puVar7)(plVar16,puVar7[1]);
              if ((uVar13 & 1) != 0) {
                FUN_04f47690();
                *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                return;
              }
              uVar18 = *puVar17;
              if ((int)uVar18 < 0) {
                return;
              }
              if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                return;
              }
              lVar6 = *(long *)(unaff_x19 + 0x38);
              if (lVar6 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 <= uVar18) goto LAB_04f48680;
                lVar11 = *(long *)(lVar6 + (ulong)uVar18 * 8 + 0x20);
                if (lVar11 != 0) {
                  if (*(float *)(lVar11 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar11 + 0x14)) {
                      return;
                    }
                    uVar2 = uVar1 - 1;
                    if ((int)(uVar18 + 1) <= (int)uVar2) {
                      uVar2 = uVar18 + 1;
                    }
                    *puVar17 = uVar2;
                    if (uVar1 <= uVar2) goto LAB_04f48680;
                    uVar13 = (ulong)(int)uVar2;
                  }
                  else {
                    if ((int)uVar18 < 2) {
                      uVar18 = 1;
                    }
                    uVar18 = uVar18 - 1;
                    *puVar17 = uVar18;
                    if (uVar1 <= uVar18) {
LAB_04f48680:
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cacc();
                    }
                    uVar13 = (ulong)uVar18;
                  }
                  if (*(long *)(lVar6 + uVar13 * 8 + 0x20) != 0) goto LAB_04f4851c;
                }
              }
            }
          }
          else {
            lVar6 = FUN_04f48684(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar6 != 0) {
              if (*(char *)(lVar6 + 0x18) == '\0') {
                *puVar17 = 0xffffffff;
                return;
              }
LAB_04f4851c:
              FUN_04f47690();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


