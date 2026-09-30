/*
FUNCTION_NAME: OVRManager$$Awake
ENTRY_POINT: 090880fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Awake(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
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
  float unaff_s11;
  float fVar27;
  float fVar28;
  float unaff_s12;
  float fVar29;
  float fVar30;
  float unaff_s13;
  float fVar31;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
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
  
  fVar27 = unaff_s11 - unaff_s12;
  fVar29 = unaff_s13 - unaff_s14;
  fVar31 = unaff_s15 - unaff_s8;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar25 = SQRT(fVar31 * fVar31 + fVar27 * fVar27 + fVar29 * fVar29);
  if (fVar25 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x24 + 999) = 1;
    }
    pfVar10 = *(float **)(*unaff_x22 + 0xb8);
    fVar27 = *pfVar10;
    fStack000000000000002c = pfVar10[1];
    fVar31 = pfVar10[2];
  }
  else {
    fVar27 = fVar27 / fVar25;
    fStack000000000000002c = fVar29 / fVar25;
    fVar31 = fVar31 / fVar25;
  }
  uVar21 = in_stack_00000078;
  fVar25 = fStack0000000000000074;
  fVar29 = fStack0000000000000070;
  uVar8 = in_stack_00000068._4_4_;
  puVar3 = PTR_DAT_0ac758b0;
  lVar6 = *(long *)PTR_DAT_0ac758b0;
  if (unaff_w20 != 1) {
    fStack000000000000002c = -fStack000000000000002c;
    fVar27 = -fVar27;
    fVar31 = -fVar31;
  }
  if (unaff_w20 != 1) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar6 = *(long *)puVar3;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    puVar9 = (undefined4 *)(lVar6 + 0x6c);
    puVar12 = (undefined4 *)(lVar6 + 0x70);
    puVar14 = (undefined4 *)(lVar6 + 0x74);
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar6 = *(long *)puVar3;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    puVar9 = (undefined4 *)(lVar6 + 0x24);
    puVar12 = (undefined4 *)(lVar6 + 0x28);
    puVar14 = (undefined4 *)(lVar6 + 0x2c);
  }
  fStack000000000000001c =
       (float)FUN_0a16adac(uVar8,fVar29,fVar25,uVar21,*puVar9,*puVar12,*puVar14,0);
  uVar8 = in_stack_00000078;
  fVar19 = fStack0000000000000070;
  lVar6 = *(long *)puVar3;
  if (unaff_w20 == 1) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar6 = *(long *)puVar3;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    puVar9 = (undefined4 *)(lVar6 + 0xc);
    puVar12 = (undefined4 *)(lVar6 + 0x10);
    puVar14 = (undefined4 *)(lVar6 + 0x14);
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar6 = *(long *)puVar3;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    puVar9 = (undefined4 *)(lVar6 + 0x54);
    puVar12 = (undefined4 *)(lVar6 + 0x58);
    puVar14 = (undefined4 *)(lVar6 + 0x5c);
  }
  fVar26 = fStack0000000000000074;
  fStack0000000000000014 = fVar19;
  fVar19 = (float)FUN_0a16adac(in_stack_00000068._4_4_,fVar19,fStack0000000000000074,uVar8,*puVar9,
                               *puVar12,*puVar14,0);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  puVar3 = PTR_DAT_0ac0df00;
  fVar20 = fStack0000000000000024 * fStack0000000000000024 +
           fStack0000000000000038 * fStack0000000000000038 +
           fStack0000000000000020 * fStack0000000000000020;
  fVar28 = in_stack_00000030._4_4_;
  fVar30 = unaff_s9;
  fVar23 = unaff_s10;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar20) {
    fVar23 = fStack0000000000000024 * unaff_s10 +
             fStack0000000000000038 * in_stack_00000030._4_4_ + fStack0000000000000020 * unaff_s9;
    fVar28 = in_stack_00000030._4_4_ - (fStack0000000000000038 * fVar23) / fVar20;
    fVar30 = unaff_s9 - (fStack0000000000000020 * fVar23) / fVar20;
    fVar23 = unaff_s10 - (fStack0000000000000024 * fVar23) / fVar20;
  }
  if (*(char *)(unaff_x23 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x23 + 0x3e6) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar20 = SQRT(fVar23 * fVar23 + fVar28 * fVar28 + fVar30 * fVar30);
  if (fVar20 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x24 + 999) = 1;
    }
    pfVar10 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000038 = *pfVar10;
    fVar30 = pfVar10[1];
    fVar23 = pfVar10[2];
  }
  else {
    fStack0000000000000038 = fVar28 / fVar20;
    fVar30 = fVar30 / fVar20;
    fVar23 = fVar23 / fVar20;
  }
  fVar28 = fStack000000000000001c;
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fVar20 = unaff_s10 * unaff_s10 +
           in_stack_00000030._4_4_ * in_stack_00000030._4_4_ + unaff_s9 * unaff_s9;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar20) {
    fVar24 = unaff_s10 * fVar25 + in_stack_00000030._4_4_ * fVar28 + unaff_s9 * fVar29;
    fVar28 = fVar28 - (in_stack_00000030._4_4_ * fVar24) / fVar20;
    fVar29 = fVar29 - (unaff_s9 * fVar24) / fVar20;
    fVar25 = fVar25 - (unaff_s10 * fVar24) / fVar20;
  }
  if (*(char *)(unaff_x23 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x23 + 0x3e6) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar20 = SQRT(fVar25 * fVar25 + fVar28 * fVar28 + fVar29 * fVar29);
  if (fVar20 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x24 + 999) = 1;
    }
    pfVar10 = *(float **)(*unaff_x22 + 0xb8);
    fVar28 = *pfVar10;
    fVar29 = pfVar10[1];
    fVar25 = pfVar10[2];
  }
  else {
    fVar28 = fVar28 / fVar20;
    fVar29 = fVar29 / fVar20;
    fVar25 = fVar25 / fVar20;
  }
  fVar31 = (float)FUN_0901abf4(fVar28,fVar29,fVar25,fVar27,fStack000000000000002c,fVar31,0);
  plVar16 = *(long **)(unaff_x19 + 0x28);
  if (plVar16 != (long *)0x0) {
    lVar6 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_09088564;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar16,*unaff_x21,0);
LAB_09088564:
    iVar5 = (*(code *)*puVar7)(plVar16,puVar7[1]);
    uVar8 = 0xc28c0000;
    fVar20 = -fVar31;
    if (iVar5 != 1) {
      fVar20 = fVar31;
    }
    fVar24 = fVar20 + 360.0;
    fVar31 = fVar24;
    if (-70.0 <= fVar20) {
      fVar31 = fVar20;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar31;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar21 = FUN_0a18a1a0(*(long *)(unaff_x19 + 0x30),0);
      uVar22 = FUN_0a16abe8(in_stack_00000030._4_4_,unaff_s9,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_0a188128(uVar21,fVar24,uVar8,uVar22,unaff_s9,unaff_s10,fVar27,&stack0x00000040,0);
      plVar16 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x88) = fVar25;
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(float *)(unaff_x19 + 0x80) = fVar28;
      *(float *)(unaff_x19 + 0x84) = fVar29;
      puVar3 = PTR_DAT_0ac43fe0;
      if (plVar16 != (long *)0x0) {
        lVar6 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac43fe0) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_09088690;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_04980e68(plVar16,*(long *)PTR_DAT_0ac43fe0,0);
LAB_09088690:
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
          fVar30 = fStack0000000000000014 * fVar30;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar6) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_09088738;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_04980e68(plVar16,lVar6,0);
LAB_09088738:
          bVar4 = (*(code *)*puVar7)(plVar16,puVar7[1]);
          puVar17 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
          if (((fVar26 * fVar23 + fVar19 * fStack0000000000000038 + fVar30) * 0.5 + 0.5 <= 0.5) ||
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
                    goto LAB_090887f8;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_04980e68(plVar16,lVar6,0);
LAB_090887f8:
              uVar13 = (*(code *)*puVar7)(plVar16,puVar7[1]);
              if ((uVar13 & 1) != 0) {
                FUN_090878fc();
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
                if (uVar1 <= uVar18) goto LAB_090888ec;
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
                    if (uVar1 <= uVar2) goto LAB_090888ec;
                    uVar13 = (ulong)(int)uVar2;
                  }
                  else {
                    if ((int)uVar18 < 2) {
                      uVar18 = 1;
                    }
                    uVar18 = uVar18 - 1;
                    *puVar17 = uVar18;
                    if (uVar1 <= uVar18) {
LAB_090888ec:
                    /* WARNING: Subroutine does not return */
                      FUN_04948194();
                    }
                    uVar13 = (ulong)uVar18;
                  }
                  if (*(long *)(lVar6 + uVar13 * 8 + 0x20) != 0) goto LAB_09088788;
                }
              }
            }
          }
          else {
            lVar6 = FUN_090888f0(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar6 != 0) {
              if (*(char *)(lVar6 + 0x18) == '\0') {
                *puVar17 = 0xffffffff;
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


