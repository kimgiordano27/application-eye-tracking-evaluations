/*
FUNCTION_NAME: OVRManager$$InitializeBoundary
ENTRY_POINT: 09088020
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__InitializeBoundary(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 in_w8;
  undefined4 uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  int *piVar16;
  long unaff_x19;
  int unaff_w20;
  long *plVar17;
  uint *puVar18;
  uint uVar19;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s8;
  float unaff_s9;
  float fVar30;
  float unaff_s10;
  float fVar31;
  float unaff_s11;
  float fVar32;
  float fVar33;
  float unaff_s12;
  float fVar34;
  float unaff_s13;
  float fVar35;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float in_stack_00000038;
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
  
  *(undefined1 *)(unaff_x23 + 0x3e6) = in_w8;
  puVar3 = PTR_DAT_0ac0a830;
  fVar35 = unaff_s13 - unaff_s8;
  fVar30 = unaff_s12 - unaff_s9;
  fVar31 = unaff_s11 - unaff_s10;
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fStack000000000000003c = DAT_01df50c4;
  fVar20 = SQRT(fVar31 * fVar31 + fVar35 * fVar35 + fVar30 * fVar30);
  if (fVar20 <= DAT_01df50c4) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar11 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000034 = *pfVar11;
    fVar30 = pfVar11[1];
    fVar31 = pfVar11[2];
  }
  else {
    fStack0000000000000034 = fVar35 / fVar20;
    fVar30 = fVar30 / fVar20;
    fVar31 = fVar31 / fVar20;
  }
  fVar20 = unaff_s14 * fStack0000000000000034;
  fVar35 = unaff_s15 * fStack0000000000000034;
  fStack0000000000000024 = unaff_s14;
  if (*(char *)(unaff_x23 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x23 + 0x3e6) = 1;
  }
  fVar32 = unaff_s15 * fVar31 - unaff_s14 * fVar30;
  fVar20 = fVar20 - in_stack_00000038 * fVar31;
  fVar35 = in_stack_00000038 * fVar30 - fVar35;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar29 = fStack0000000000000034;
  fVar27 = SQRT(fVar35 * fVar35 + fVar32 * fVar32 + fVar20 * fVar20);
  if (fVar27 <= fStack000000000000003c) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar11 = *(float **)(*unaff_x22 + 0xb8);
    fVar32 = *pfVar11;
    fStack000000000000002c = pfVar11[1];
    fVar35 = pfVar11[2];
  }
  else {
    fVar32 = fVar32 / fVar27;
    fStack000000000000002c = fVar20 / fVar27;
    fVar35 = fVar35 / fVar27;
  }
  uVar23 = in_stack_00000078;
  fVar27 = fStack0000000000000074;
  fVar20 = fStack0000000000000070;
  uVar9 = in_stack_00000068._4_4_;
  puVar4 = PTR_DAT_0ac758b0;
  lVar7 = *(long *)PTR_DAT_0ac758b0;
  if (unaff_w20 != 1) {
    fStack000000000000002c = -fStack000000000000002c;
    fVar32 = -fVar32;
    fVar35 = -fVar35;
  }
  if (unaff_w20 != 1) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar7 = *(long *)puVar4;
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    puVar10 = (undefined4 *)(lVar7 + 0x6c);
    puVar13 = (undefined4 *)(lVar7 + 0x70);
    puVar15 = (undefined4 *)(lVar7 + 0x74);
  }
  else {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar7 = *(long *)puVar4;
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    puVar10 = (undefined4 *)(lVar7 + 0x24);
    puVar13 = (undefined4 *)(lVar7 + 0x28);
    puVar15 = (undefined4 *)(lVar7 + 0x2c);
  }
  fStack000000000000001c =
       (float)FUN_0a16adac(uVar9,fVar20,fVar27,uVar23,*puVar10,*puVar13,*puVar15,0);
  uVar9 = in_stack_00000078;
  fVar21 = fStack0000000000000070;
  lVar7 = *(long *)puVar4;
  if (unaff_w20 == 1) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar7 = *(long *)puVar4;
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    puVar10 = (undefined4 *)(lVar7 + 0xc);
    puVar13 = (undefined4 *)(lVar7 + 0x10);
    puVar15 = (undefined4 *)(lVar7 + 0x14);
  }
  else {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar7 = *(long *)puVar4;
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    puVar10 = (undefined4 *)(lVar7 + 0x54);
    puVar13 = (undefined4 *)(lVar7 + 0x58);
    puVar15 = (undefined4 *)(lVar7 + 0x5c);
  }
  fVar28 = fStack0000000000000074;
  fStack0000000000000014 = fVar21;
  fVar21 = (float)FUN_0a16adac(in_stack_00000068._4_4_,fVar21,fStack0000000000000074,uVar9,*puVar10,
                               *puVar13,*puVar15,0);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  puVar4 = PTR_DAT_0ac0df00;
  fVar22 = fStack0000000000000024 * fStack0000000000000024 +
           in_stack_00000038 * in_stack_00000038 + unaff_s15 * unaff_s15;
  fVar33 = fVar29;
  fVar34 = fVar30;
  fVar25 = fVar31;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar22) {
    fVar25 = fStack0000000000000024 * fVar31 + in_stack_00000038 * fVar29 + unaff_s15 * fVar30;
    fVar33 = fVar29 - (in_stack_00000038 * fVar25) / fVar22;
    fVar34 = fVar30 - (unaff_s15 * fVar25) / fVar22;
    fVar25 = fVar31 - (fStack0000000000000024 * fVar25) / fVar22;
  }
  if (*(char *)(unaff_x23 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x23 + 0x3e6) = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar22 = SQRT(fVar25 * fVar25 + fVar33 * fVar33 + fVar34 * fVar34);
  if (fVar22 <= fStack000000000000003c) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar11 = *(float **)(*unaff_x22 + 0xb8);
    in_stack_00000038 = *pfVar11;
    fVar34 = pfVar11[1];
    fVar25 = pfVar11[2];
  }
  else {
    in_stack_00000038 = fVar33 / fVar22;
    fVar34 = fVar34 / fVar22;
    fVar25 = fVar25 / fVar22;
  }
  fVar33 = fStack000000000000001c;
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fVar22 = fVar31 * fVar31 + fVar29 * fVar29 + fVar30 * fVar30;
  if (**(float **)(*(long *)puVar4 + 0xb8) <= fVar22) {
    fVar26 = fVar31 * fVar27 + fVar29 * fVar33 + fVar30 * fVar20;
    fVar33 = fVar33 - (fVar29 * fVar26) / fVar22;
    fVar20 = fVar20 - (fVar30 * fVar26) / fVar22;
    fVar27 = fVar27 - (fVar31 * fVar26) / fVar22;
  }
  if (*(char *)(unaff_x23 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x23 + 0x3e6) = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar29 = SQRT(fVar27 * fVar27 + fVar33 * fVar33 + fVar20 * fVar20);
  if (fVar29 <= fStack000000000000003c) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar11 = *(float **)(*unaff_x22 + 0xb8);
    fStack000000000000003c = *pfVar11;
    fVar20 = pfVar11[1];
    fVar27 = pfVar11[2];
  }
  else {
    fStack000000000000003c = fVar33 / fVar29;
    fVar20 = fVar20 / fVar29;
    fVar27 = fVar27 / fVar29;
  }
  fStack0000000000000004 = fVar30;
  fVar35 = (float)FUN_0901abf4(fStack000000000000003c,fVar20,fVar27,fVar32,fStack000000000000002c,
                               fVar35,0);
  plVar17 = *(long **)(unaff_x19 + 0x28);
  if (plVar17 != (long *)0x0) {
    lVar7 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    fStack0000000000000024 = fVar34;
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x21) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_09088564;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_04980e68(plVar17,*unaff_x21,0);
LAB_09088564:
    iVar6 = (*(code *)*puVar8)(plVar17,puVar8[1]);
    uVar9 = 0xc28c0000;
    fVar29 = -fVar35;
    if (iVar6 != 1) {
      fVar29 = fVar35;
    }
    fVar34 = fVar29 + 360.0;
    fVar35 = fVar34;
    if (-70.0 <= fVar29) {
      fVar35 = fVar29;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar35;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar23 = FUN_0a18a1a0(*(long *)(unaff_x19 + 0x30),0);
      uVar24 = FUN_0a16abe8(fStack0000000000000034,fVar30,fVar31,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_0a188128(uVar23,fVar34,uVar9,uVar24,fVar30,fVar31,fVar32,&stack0x00000040,0);
      fVar30 = fStack0000000000000024;
      plVar17 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x88) = fVar27;
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(float *)(unaff_x19 + 0x80) = fStack000000000000003c;
      *(float *)(unaff_x19 + 0x84) = fVar20;
      puVar3 = PTR_DAT_0ac43fe0;
      if (plVar17 != (long *)0x0) {
        lVar7 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0ac43fe0) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_09088690;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_04980e68(plVar17,*(long *)PTR_DAT_0ac43fe0,0);
LAB_09088690:
        uVar14 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar17 = *(long **)(unaff_x19 + 0x48);
        if (plVar17 != (long *)0x0) {
          lVar12 = *plVar17;
          lVar7 = *(long *)puVar3;
          fVar30 = fStack0000000000000014 * fVar30;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar7) {
                puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_09088738;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_04980e68(plVar17,lVar7,0);
LAB_09088738:
          bVar5 = (*(code *)*puVar8)(plVar17,puVar8[1]);
          puVar18 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar5 & 1;
          if (((fVar28 * fVar25 + fVar21 * in_stack_00000038 + fVar30) * 0.5 + 0.5 <= 0.5) ||
             ((uVar19 & *puVar18 >> 0x1f) == 0)) {
            if ((int)*puVar18 < 0) {
              return;
            }
            plVar17 = *(long **)(unaff_x19 + 0x58);
            if (plVar17 != (long *)0x0) {
              lVar12 = *plVar17;
              lVar7 = *(long *)puVar3;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar7) {
                    puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_090887f8;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar8 = (undefined8 *)FUN_04980e68(plVar17,lVar7,0);
LAB_090887f8:
              uVar14 = (*(code *)*puVar8)(plVar17,puVar8[1]);
              if ((uVar14 & 1) != 0) {
                FUN_090878fc();
                *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                return;
              }
              uVar19 = *puVar18;
              if ((int)uVar19 < 0) {
                return;
              }
              if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                return;
              }
              lVar7 = *(long *)(unaff_x19 + 0x38);
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 <= uVar19) goto LAB_090888ec;
                lVar12 = *(long *)(lVar7 + (ulong)uVar19 * 8 + 0x20);
                if (lVar12 != 0) {
                  if (*(float *)(lVar12 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar12 + 0x14)) {
                      return;
                    }
                    uVar2 = uVar1 - 1;
                    if ((int)(uVar19 + 1) <= (int)uVar2) {
                      uVar2 = uVar19 + 1;
                    }
                    *puVar18 = uVar2;
                    if (uVar1 <= uVar2) goto LAB_090888ec;
                    uVar14 = (ulong)(int)uVar2;
                  }
                  else {
                    if ((int)uVar19 < 2) {
                      uVar19 = 1;
                    }
                    uVar19 = uVar19 - 1;
                    *puVar18 = uVar19;
                    if (uVar1 <= uVar19) {
LAB_090888ec:
                    /* WARNING: Subroutine does not return */
                      FUN_04948194();
                    }
                    uVar14 = (ulong)uVar19;
                  }
                  if (*(long *)(lVar7 + uVar14 * 8 + 0x20) != 0) goto LAB_09088788;
                }
              }
            }
          }
          else {
            lVar7 = FUN_090888f0(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar7 != 0) {
              if (*(char *)(lVar7 + 0x18) == '\0') {
                *puVar18 = 0xffffffff;
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


