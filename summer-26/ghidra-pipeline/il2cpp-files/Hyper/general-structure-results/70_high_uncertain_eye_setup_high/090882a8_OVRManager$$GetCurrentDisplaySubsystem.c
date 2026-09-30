/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystem
ENTRY_POINT: 090882a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystem(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long *plVar13;
  uint *puVar14;
  uint uVar15;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar22;
  float fVar23;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
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
  
  if (*(char *)(unaff_x20 + 0x3e5) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    *(undefined1 *)(unaff_x20 + 0x3e5) = 1;
  }
  puVar3 = PTR_DAT_0ac0df00;
  fVar16 = fStack0000000000000024 * fStack0000000000000024 +
           fStack0000000000000038 * fStack0000000000000038 +
           fStack0000000000000020 * fStack0000000000000020;
  fVar22 = unaff_s8;
  fVar23 = unaff_s9;
  fVar20 = unaff_s10;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar16) {
    fVar20 = fStack0000000000000024 * unaff_s10 +
             fStack0000000000000038 * unaff_s8 + fStack0000000000000020 * unaff_s9;
    fVar22 = unaff_s8 - (fStack0000000000000038 * fVar20) / fVar16;
    fVar23 = unaff_s9 - (fStack0000000000000020 * fVar20) / fVar16;
    fVar20 = unaff_s10 - (fStack0000000000000024 * fVar20) / fVar16;
  }
  if (*(char *)(unaff_x23 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x23 + 0x3e6) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar16 = SQRT(fVar20 * fVar20 + fVar22 * fVar22 + fVar23 * fVar23);
  if (fVar16 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x24 + 999) = 1;
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000038 = *pfVar8;
    fVar23 = pfVar8[1];
    fVar20 = pfVar8[2];
  }
  else {
    fStack0000000000000038 = fVar22 / fVar16;
    fVar23 = fVar23 / fVar16;
    fVar20 = fVar20 / fVar16;
  }
  if (*(char *)(unaff_x20 + 0x3e5) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    *(undefined1 *)(unaff_x20 + 0x3e5) = 1;
  }
  fVar22 = unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar22) {
    fVar16 = unaff_s10 * unaff_s14 +
             unaff_s8 * fStack000000000000001c + unaff_s9 * fStack0000000000000018;
    fStack000000000000001c = fStack000000000000001c - (unaff_s8 * fVar16) / fVar22;
    fStack0000000000000018 = fStack0000000000000018 - (unaff_s9 * fVar16) / fVar22;
    unaff_s14 = unaff_s14 - (unaff_s10 * fVar16) / fVar22;
  }
  if (*(char *)(unaff_x23 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x23 + 0x3e6) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar22 = SQRT(unaff_s14 * unaff_s14 +
                fStack000000000000001c * fStack000000000000001c +
                fStack0000000000000018 * fStack0000000000000018);
  if (fVar22 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x24 + 999) = 1;
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    fStack000000000000001c = *pfVar8;
    fStack0000000000000018 = pfVar8[1];
    fVar22 = pfVar8[2];
  }
  else {
    fStack000000000000001c = fStack000000000000001c / fVar22;
    fStack0000000000000018 = fStack0000000000000018 / fVar22;
    fVar22 = unaff_s14 / fVar22;
  }
  fVar16 = (float)FUN_0901abf4(fStack000000000000001c,fStack0000000000000018,fVar22,
                               uStack0000000000000028,uStack000000000000002c,uStack0000000000000030,
                               0);
  plVar13 = *(long **)(unaff_x19 + 0x28);
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_09088564;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar13,*unaff_x21,0);
LAB_09088564:
    iVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    uVar7 = 0xc28c0000;
    fVar17 = -fVar16;
    if (iVar5 != 1) {
      fVar17 = fVar16;
    }
    fVar21 = fVar17 + 360.0;
    fVar16 = fVar21;
    if (-70.0 <= fVar17) {
      fVar16 = fVar17;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar16;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar18 = FUN_0a18a1a0(*(long *)(unaff_x19 + 0x30),0);
      uVar19 = FUN_0a16abe8(uStack0000000000000034,unaff_s9,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_0a188128(uVar18,fVar21,uVar7,uVar19,unaff_s9,unaff_s10,uStack0000000000000028,
                   &stack0x00000040,0);
      plVar13 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x88) = fVar22;
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(float *)(unaff_x19 + 0x80) = fStack000000000000001c;
      *(float *)(unaff_x19 + 0x84) = fStack0000000000000018;
      puVar3 = PTR_DAT_0ac43fe0;
      if (plVar13 != (long *)0x0) {
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac43fe0) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_09088690;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac43fe0,0);
LAB_09088690:
        uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar13 = *(long **)(unaff_x19 + 0x48);
        if (plVar13 != (long *)0x0) {
          lVar10 = *plVar13;
          lVar9 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_09088738;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_04980e68(plVar13,lVar9,0);
LAB_09088738:
          bVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          puVar14 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
          if (((fStack0000000000000010 * fVar20 +
               unaff_s15 * fStack0000000000000038 + fStack0000000000000014 * fVar23) * 0.5 + 0.5 <=
               0.5) || ((uVar15 & *puVar14 >> 0x1f) == 0)) {
            if ((int)*puVar14 < 0) {
              return;
            }
            plVar13 = *(long **)(unaff_x19 + 0x58);
            if (plVar13 != (long *)0x0) {
              lVar10 = *plVar13;
              lVar9 = *(long *)puVar3;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar9) {
                    puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_090887f8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_04980e68(plVar13,lVar9,0);
LAB_090887f8:
              uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
              if ((uVar11 & 1) != 0) {
                FUN_090878fc();
                *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                return;
              }
              uVar15 = *puVar14;
              if ((int)uVar15 < 0) {
                return;
              }
              if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                return;
              }
              lVar9 = *(long *)(unaff_x19 + 0x38);
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 <= uVar15) goto LAB_090888ec;
                lVar10 = *(long *)(lVar9 + (ulong)uVar15 * 8 + 0x20);
                if (lVar10 != 0) {
                  if (*(float *)(lVar10 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar10 + 0x14)) {
                      return;
                    }
                    uVar2 = uVar1 - 1;
                    if ((int)(uVar15 + 1) <= (int)uVar2) {
                      uVar2 = uVar15 + 1;
                    }
                    *puVar14 = uVar2;
                    if (uVar1 <= uVar2) goto LAB_090888ec;
                    uVar11 = (ulong)(int)uVar2;
                  }
                  else {
                    if ((int)uVar15 < 2) {
                      uVar15 = 1;
                    }
                    uVar15 = uVar15 - 1;
                    *puVar14 = uVar15;
                    if (uVar1 <= uVar15) {
LAB_090888ec:
                    /* WARNING: Subroutine does not return */
                      FUN_04948194();
                    }
                    uVar11 = (ulong)uVar15;
                  }
                  if (*(long *)(lVar9 + uVar11 * 8 + 0x20) != 0) goto LAB_09088788;
                }
              }
            }
          }
          else {
            lVar9 = FUN_090888f0(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar9 != 0) {
              if (*(char *)(lVar9 + 0x18) == '\0') {
                *puVar14 = 0xffffffff;
                return;
              }
LAB_09088788:
              FUN_090878fc();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


