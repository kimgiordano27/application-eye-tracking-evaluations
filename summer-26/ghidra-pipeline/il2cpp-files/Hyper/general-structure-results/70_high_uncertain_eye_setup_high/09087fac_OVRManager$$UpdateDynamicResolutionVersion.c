/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 09087fac
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateDynamicResolutionVersion(undefined1 param_1 [16],float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  int in_w8;
  undefined4 uVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  int *piVar17;
  long unaff_x19;
  int unaff_w20;
  long *plVar18;
  uint *puVar19;
  uint uVar20;
  long *unaff_x21;
  long unaff_x22;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
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
  float fStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  
  if (in_w8 == 0) {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    *(undefined1 *)(unaff_x22 + 0x3e4) = 1;
  }
  fVar33 = fStack0000000000000068;
  fVar36 = fStack0000000000000060;
  puVar4 = PTR_DAT_0ac0def8;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar10 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
    fVar21 = *(float *)(lVar10 + 0x18);
    fVar40 = *(float *)(lVar10 + 0x1c);
    fVar38 = *(float *)(lVar10 + 0x20);
    fVar22 = (float)FUN_0a18a1a0(*(long *)(unaff_x19 + 0x30),0);
    if (DAT_0b31f3e6 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b31f3e6 = '\x01';
    }
    puVar3 = PTR_DAT_0ac0a830;
    fVar36 = fVar36 - fVar22;
    param_2 = fStack0000000000000064 - param_2;
    fVar33 = fVar33 - param_3;
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    fVar22 = DAT_01df50c4;
    fVar23 = SQRT(fVar33 * fVar33 + fVar36 * fVar36 + param_2 * param_2);
    if (fVar23 <= DAT_01df50c4) {
      if (DAT_0b31f3e7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e7 = '\x01';
      }
      pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
      fVar36 = *pfVar12;
      param_2 = pfVar12[1];
      fVar33 = pfVar12[2];
    }
    else {
      fVar36 = fVar36 / fVar23;
      param_2 = param_2 / fVar23;
      fVar33 = fVar33 / fVar23;
    }
    if (DAT_0b31f3e6 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b31f3e6 = '\x01';
    }
    fVar34 = fVar40 * fVar33 - fVar38 * param_2;
    fVar23 = fVar38 * fVar36 - fVar21 * fVar33;
    fVar37 = fVar21 * param_2 - fVar40 * fVar36;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    fVar31 = SQRT(fVar37 * fVar37 + fVar34 * fVar34 + fVar23 * fVar23);
    if (fVar31 <= fVar22) {
      if (DAT_0b31f3e7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e7 = '\x01';
      }
      pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
      fVar34 = *pfVar12;
      fVar23 = pfVar12[1];
      fVar37 = pfVar12[2];
    }
    else {
      fVar34 = fVar34 / fVar31;
      fVar23 = fVar23 / fVar31;
      fVar37 = fVar37 / fVar31;
    }
    uVar27 = in_stack_00000078;
    fVar39 = fStack0000000000000074;
    fVar31 = fStack0000000000000070;
    uVar9 = uStack000000000000006c;
    puVar5 = PTR_DAT_0ac758b0;
    lVar10 = *(long *)PTR_DAT_0ac758b0;
    if (unaff_w20 != 1) {
      fVar23 = -fVar23;
      fVar34 = -fVar34;
      fVar37 = -fVar37;
    }
    if (unaff_w20 != 1) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar10 = *(long *)puVar5;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
      puVar11 = (undefined4 *)(lVar10 + 0x6c);
      puVar14 = (undefined4 *)(lVar10 + 0x70);
      puVar16 = (undefined4 *)(lVar10 + 0x74);
    }
    else {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar10 = *(long *)puVar5;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
      puVar11 = (undefined4 *)(lVar10 + 0x24);
      puVar14 = (undefined4 *)(lVar10 + 0x28);
      puVar16 = (undefined4 *)(lVar10 + 0x2c);
    }
    fVar24 = (float)FUN_0a16adac(uVar9,fVar31,fVar39,uVar27,*puVar11,*puVar14,*puVar16,0);
    uVar9 = in_stack_00000078;
    fVar29 = fStack0000000000000070;
    lVar10 = *(long *)puVar5;
    if (unaff_w20 == 1) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar10 = *(long *)puVar5;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
      puVar11 = (undefined4 *)(lVar10 + 0xc);
      puVar14 = (undefined4 *)(lVar10 + 0x10);
      puVar16 = (undefined4 *)(lVar10 + 0x14);
    }
    else {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar10 = *(long *)puVar5;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
      puVar11 = (undefined4 *)(lVar10 + 0x54);
      puVar14 = (undefined4 *)(lVar10 + 0x58);
      puVar16 = (undefined4 *)(lVar10 + 0x5c);
    }
    fVar32 = fStack0000000000000074;
    fVar25 = (float)FUN_0a16adac(uStack000000000000006c,fVar29,fStack0000000000000074,uVar9,*puVar11
                                 ,*puVar14,*puVar16,0);
    if (DAT_0b31f3e5 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f3e5 = '\x01';
    }
    puVar5 = PTR_DAT_0ac0df00;
    fVar26 = fVar38 * fVar38 + fVar21 * fVar21 + fVar40 * fVar40;
    fStack0000000000000038 = fVar36;
    fVar35 = param_2;
    fVar30 = fVar33;
    if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar26) {
      fVar30 = fVar38 * fVar33 + fVar21 * fVar36 + fVar40 * param_2;
      fStack0000000000000038 = fVar36 - (fVar21 * fVar30) / fVar26;
      fVar35 = param_2 - (fVar40 * fVar30) / fVar26;
      fVar30 = fVar33 - (fVar38 * fVar30) / fVar26;
    }
    if (DAT_0b31f3e6 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b31f3e6 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    fVar21 = SQRT(fVar30 * fVar30 +
                  fStack0000000000000038 * fStack0000000000000038 + fVar35 * fVar35);
    if (fVar21 <= fVar22) {
      if (DAT_0b31f3e7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e7 = '\x01';
      }
      pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
      fStack0000000000000038 = *pfVar12;
      fVar35 = pfVar12[1];
      fVar30 = pfVar12[2];
    }
    else {
      fStack0000000000000038 = fStack0000000000000038 / fVar21;
      fVar35 = fVar35 / fVar21;
      fVar30 = fVar30 / fVar21;
    }
    if (DAT_0b31f3e5 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f3e5 = '\x01';
    }
    fVar21 = fVar33 * fVar33 + fVar36 * fVar36 + param_2 * param_2;
    if (**(float **)(*(long *)puVar5 + 0xb8) <= fVar21) {
      fVar38 = fVar33 * fVar39 + fVar36 * fVar24 + param_2 * fVar31;
      fVar24 = fVar24 - (fVar36 * fVar38) / fVar21;
      fVar31 = fVar31 - (param_2 * fVar38) / fVar21;
      fVar39 = fVar39 - (fVar33 * fVar38) / fVar21;
    }
    if (DAT_0b31f3e6 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b31f3e6 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    fVar21 = SQRT(fVar39 * fVar39 + fVar24 * fVar24 + fVar31 * fVar31);
    if (fVar21 <= fVar22) {
      if (DAT_0b31f3e7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e7 = '\x01';
      }
      pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
      fVar24 = *pfVar12;
      fVar31 = pfVar12[1];
      fVar39 = pfVar12[2];
    }
    else {
      fVar24 = fVar24 / fVar21;
      fVar31 = fVar31 / fVar21;
      fVar39 = fVar39 / fVar21;
    }
    fVar21 = (float)FUN_0901abf4(fVar24,fVar31,fVar39,fVar34,fVar23,fVar37,0);
    plVar18 = *(long **)(unaff_x19 + 0x28);
    if (plVar18 != (long *)0x0) {
      lVar10 = *plVar18;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x21) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_09088564;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_04980e68(plVar18,*unaff_x21,0);
LAB_09088564:
      iVar7 = (*(code *)*puVar8)(plVar18,puVar8[1]);
      uVar9 = 0xc28c0000;
      fVar22 = -fVar21;
      if (iVar7 != 1) {
        fVar22 = fVar21;
      }
      fVar38 = fVar22 + 360.0;
      fVar21 = fVar38;
      if (-70.0 <= fVar22) {
        fVar21 = fVar22;
      }
      *(float *)(unaff_x19 + 0x7c) = fVar21;
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        uVar27 = FUN_0a18a1a0(*(long *)(unaff_x19 + 0x30),0);
        uVar28 = FUN_0a16abe8(fVar36,param_2,fVar33,0);
        in_stack_00000040 = 0;
        uStack0000000000000048 = 0;
        uStack000000000000004c = 0;
        in_stack_00000058 = 0;
        uStack0000000000000050 = 0;
        uStack0000000000000054 = 0;
        FUN_0a188128(uVar27,fVar38,uVar9,uVar28,param_2,fVar33,fVar34,&stack0x00000040,0);
        plVar18 = *(long **)(unaff_x19 + 0x48);
        *(float *)(unaff_x19 + 0x88) = fVar39;
        *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
        *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
        *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        *(float *)(unaff_x19 + 0x80) = fVar24;
        *(float *)(unaff_x19 + 0x84) = fVar31;
        puVar4 = PTR_DAT_0ac43fe0;
        if (plVar18 != (long *)0x0) {
          lVar10 = *plVar18;
          uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0ac43fe0) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_09088690;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_04980e68(plVar18,*(long *)PTR_DAT_0ac43fe0,0);
LAB_09088690:
          uVar15 = (*(code *)*puVar8)(plVar18,puVar8[1]);
          if ((uVar15 & 1) == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(byte *)(unaff_x19 + 0x71) ^ 1;
          }
          plVar18 = *(long **)(unaff_x19 + 0x48);
          if (plVar18 != (long *)0x0) {
            lVar13 = *plVar18;
            lVar10 = *(long *)puVar4;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar10) {
                  puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_09088738;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar8 = (undefined8 *)FUN_04980e68(plVar18,lVar10,0);
LAB_09088738:
            bVar6 = (*(code *)*puVar8)(plVar18,puVar8[1]);
            puVar19 = (uint *)(unaff_x19 + 0x74);
            *(byte *)(unaff_x19 + 0x71) = bVar6 & 1;
            if (((fVar32 * fVar30 + fVar25 * fStack0000000000000038 + fVar29 * fVar35) * 0.5 + 0.5
                 <= 0.5) || ((uVar20 & *puVar19 >> 0x1f) == 0)) {
              if ((int)*puVar19 < 0) {
                return;
              }
              plVar18 = *(long **)(unaff_x19 + 0x58);
              if (plVar18 != (long *)0x0) {
                lVar13 = *plVar18;
                lVar10 = *(long *)puVar4;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar10) {
                      puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_090887f8;
                    }
                    uVar15 = uVar15 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)FUN_04980e68(plVar18,lVar10,0);
LAB_090887f8:
                uVar15 = (*(code *)*puVar8)(plVar18,puVar8[1]);
                if ((uVar15 & 1) != 0) {
                  FUN_090878fc();
                  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                  *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                  return;
                }
                uVar20 = *puVar19;
                if ((int)uVar20 < 0) {
                  return;
                }
                if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                  return;
                }
                lVar10 = *(long *)(unaff_x19 + 0x38);
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 <= uVar20) goto LAB_090888ec;
                  lVar13 = *(long *)(lVar10 + (ulong)uVar20 * 8 + 0x20);
                  if (lVar13 != 0) {
                    if (*(float *)(lVar13 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                      if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar13 + 0x14)) {
                        return;
                      }
                      uVar2 = uVar1 - 1;
                      if ((int)(uVar20 + 1) <= (int)uVar2) {
                        uVar2 = uVar20 + 1;
                      }
                      *puVar19 = uVar2;
                      if (uVar1 <= uVar2) goto LAB_090888ec;
                      uVar15 = (ulong)(int)uVar2;
                    }
                    else {
                      if ((int)uVar20 < 2) {
                        uVar20 = 1;
                      }
                      uVar20 = uVar20 - 1;
                      *puVar19 = uVar20;
                      if (uVar1 <= uVar20) {
LAB_090888ec:
                    /* WARNING: Subroutine does not return */
                        FUN_04948194();
                      }
                      uVar15 = (ulong)uVar20;
                    }
                    if (*(long *)(lVar10 + uVar15 * 8 + 0x20) != 0) goto LAB_09088788;
                  }
                }
              }
            }
            else {
              lVar10 = FUN_090888f0(*(undefined4 *)(unaff_x19 + 0x7c));
              if (lVar10 != 0) {
                if (*(char *)(lVar10 + 0x18) == '\0') {
                  *puVar19 = 0xffffffff;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


