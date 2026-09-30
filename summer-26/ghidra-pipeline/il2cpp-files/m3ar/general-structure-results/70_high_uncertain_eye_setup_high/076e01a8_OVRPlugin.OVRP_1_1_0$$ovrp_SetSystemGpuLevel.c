/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetSystemGpuLevel
ENTRY_POINT: 076e01a8
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetSystemGpuLevel
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x20;
  long *plVar17;
  uint *puVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack000000000000002c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  
  if ((*(byte *)(unaff_x20 + 0x296) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f8e6f0);
    FUN_0403162c(PTR_DAT_08f6a1b8);
    FUN_0403162c(PTR_DAT_08f70528);
    *(undefined1 *)(unaff_x20 + 0x296) = 1;
  }
  puVar6 = PTR_DAT_08f6a1b8;
  plVar17 = *(long **)(param_4 + 0x28);
  _fStack0000000000000060 = 0;
  _fStack0000000000000068 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  if (plVar17 == (long *)0x0) goto LAB_076e0bc8;
  lVar12 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08f6a1b8) {
        puVar10 = (undefined8 *)(lVar12 + (long)(*piVar16 + 0x12) * 0x10 + 0x138);
        goto LAB_076e024c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_0406ae20(plVar17,*(long *)PTR_DAT_08f6a1b8,0x12);
LAB_076e024c:
  uVar15 = (*(code *)*puVar10)(plVar17,&stack0x00000060,puVar10[1]);
  if ((uVar15 & 1) == 0) {
LAB_076e0ae8:
    FUN_076dfc50(param_4,0);
    *(undefined1 *)(param_4 + 0xb0) = 0;
    *(undefined4 *)(param_4 + 0x74) = 0xffffffff;
  }
  else {
    plVar17 = *(long **)(param_4 + 0x28);
    if (plVar17 == (long *)0x0) {
LAB_076e0bc8:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar13 = *plVar17;
    lVar12 = *(long *)puVar6;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076e02b4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar17,lVar12,0);
LAB_076e02b4:
    iVar9 = (*(code *)*puVar10)(plVar17,puVar10[1]);
    if (DAT_09539e16 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539e16 = '\x01';
    }
    puVar3 = PTR_DAT_08f65568;
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_076e0bc8;
    fVar31 = fStack0000000000000064;
    fVar33 = fStack0000000000000068;
    fVar29 = fStack0000000000000060;
    lVar12 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar37 = *(float *)(lVar12 + 0x18);
    fVar35 = *(float *)(lVar12 + 0x1c);
    fVar20 = *(float *)(lVar12 + 0x20);
    fVar21 = (float)FUN_08598884(*(long *)(param_4 + 0x30),0);
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    puVar4 = PTR_DAT_08f65580;
    fVar29 = fVar29 - fVar21;
    fVar31 = fVar31 - param_2;
    fVar33 = fVar33 - param_3;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar21 = DAT_01a2ef28;
    fVar22 = SQRT(fVar33 * fVar33 + fVar29 * fVar29 + fVar31 * fVar31);
    if (fVar22 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar14 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar29 = *pfVar14;
      fVar31 = pfVar14[1];
      fVar33 = pfVar14[2];
    }
    else {
      fVar31 = fVar31 / fVar22;
      fVar29 = fVar29 / fVar22;
      fVar33 = fVar33 / fVar22;
    }
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    fVar22 = fVar35 * fVar33 - fVar20 * fVar31;
    fVar32 = fVar20 * fVar29 - fVar37 * fVar33;
    fVar34 = fVar37 * fVar31 - fVar35 * fVar29;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar28 = SQRT(fVar34 * fVar34 + fVar22 * fVar22 + fVar32 * fVar32);
    if (fVar28 <= fVar21) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar14 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar22 = *pfVar14;
      fVar32 = pfVar14[1];
      fVar34 = pfVar14[2];
    }
    else {
      fVar22 = fVar22 / fVar28;
      fVar32 = fVar32 / fVar28;
      fVar34 = fVar34 / fVar28;
    }
    puVar5 = PTR_DAT_08f70528;
    bVar7 = iVar9 != 1;
    if (bVar7) {
      fVar22 = -fVar22;
      fVar34 = -fVar34;
    }
    if (bVar7) {
      fVar32 = -fVar32;
    }
    if (bVar7) {
      fVar28 = fVar34;
      fVar36 = fVar32;
      if (*(int *)(*(long *)PTR_DAT_08f70528 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar23 = (float)FUN_08596ab0(&stack0x00000060,0);
      fStack0000000000000014 = fVar28;
      fStack0000000000000018 = fVar36;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fStack000000000000001c = (float)FUN_08596b20(&stack0x00000060,0);
    }
    else {
      fVar28 = fVar34;
      fVar36 = fVar32;
      if (*(int *)(*(long *)PTR_DAT_08f70528 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar23 = (float)FUN_08596ab0(&stack0x00000060,0);
      fStack0000000000000014 = fVar28;
      fStack0000000000000018 = fVar36;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar23 = -fVar23;
      fVar36 = -fVar36;
      fVar28 = -fVar28;
      fStack000000000000001c = (float)FUN_08596b20(&stack0x00000060,0);
      fStack000000000000001c = -fStack000000000000001c;
      fStack0000000000000018 = -fStack0000000000000018;
      fStack0000000000000014 = -fStack0000000000000014;
    }
    if (DAT_09539f9f == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_09539f9f = '\x01';
    }
    puVar5 = PTR_DAT_08f67c68;
    fVar24 = fVar20 * fVar20 + fVar37 * fVar37 + fVar35 * fVar35;
    fVar30 = fVar29;
    fStack000000000000002c = fVar31;
    fVar27 = fVar33;
    if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar24) {
      fVar27 = fVar20 * fVar33 + fVar37 * fVar29 + fVar35 * fVar31;
      fVar30 = fVar29 - (fVar37 * fVar27) / fVar24;
      fStack000000000000002c = fVar31 - (fVar35 * fVar27) / fVar24;
      fVar27 = fVar33 - (fVar20 * fVar27) / fVar24;
    }
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar20 = SQRT(fVar27 * fVar27 +
                  fVar30 * fVar30 + fStack000000000000002c * fStack000000000000002c);
    if (fVar20 <= fVar21) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar14 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar30 = *pfVar14;
      fStack000000000000002c = pfVar14[1];
      fVar27 = pfVar14[2];
    }
    else {
      fStack000000000000002c = fStack000000000000002c / fVar20;
      fVar30 = fVar30 / fVar20;
      fVar27 = fVar27 / fVar20;
    }
    if (DAT_09539f9f == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_09539f9f = '\x01';
    }
    fVar20 = fVar33 * fVar33 + fVar29 * fVar29 + fVar31 * fVar31;
    if (**(float **)(*(long *)puVar5 + 0xb8) <= fVar20) {
      fVar35 = fVar33 * fVar28 + fVar31 * fVar36 + fVar29 * fVar23;
      fVar23 = fVar23 - (fVar29 * fVar35) / fVar20;
      fVar36 = fVar36 - (fVar31 * fVar35) / fVar20;
      fVar28 = fVar28 - (fVar33 * fVar35) / fVar20;
    }
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar20 = SQRT(fVar28 * fVar28 + fVar23 * fVar23 + fVar36 * fVar36);
    if (fVar20 <= fVar21) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar14 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar23 = *pfVar14;
      fVar36 = pfVar14[1];
      fVar28 = pfVar14[2];
    }
    else {
      fVar23 = fVar23 / fVar20;
      fVar36 = fVar36 / fVar20;
      fVar28 = fVar28 / fVar20;
    }
    fVar20 = (float)FUN_0419f7f0(fVar23,fVar36,fVar28,fVar22,fVar32,fVar34,0);
    plVar17 = *(long **)(param_4 + 0x28);
    if (plVar17 == (long *)0x0) goto LAB_076e0bc8;
    lVar13 = *plVar17;
    lVar12 = *(long *)puVar6;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076e084c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar17,lVar12,0);
LAB_076e084c:
    iVar9 = (*(code *)*puVar10)(plVar17,puVar10[1]);
    uVar11 = 0xc28c0000;
    fVar21 = -fVar20;
    if (iVar9 != 1) {
      fVar21 = fVar20;
    }
    fVar35 = fVar21 + 360.0;
    fVar20 = fVar35;
    if (-70.0 <= fVar21) {
      fVar20 = fVar21;
    }
    *(float *)(param_4 + 0x7c) = fVar20;
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_076e0bc8;
    uVar25 = FUN_08598884(*(long *)(param_4 + 0x30),0);
    uVar26 = FUN_08575dd0(fVar29,fVar31,fVar33,0);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_08596724(uVar25,fVar35,uVar11,uVar26,fVar31,fVar33,fVar22,&stack0x00000040,0);
    plVar17 = *(long **)(param_4 + 0x48);
    *(float *)(param_4 + 0x80) = fVar23;
    *(float *)(param_4 + 0x84) = fVar36;
    *(ulong *)(param_4 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *(undefined8 *)(param_4 + 0x8c) = in_stack_00000040;
    *(ulong *)(param_4 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
    *(ulong *)(param_4 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(float *)(param_4 + 0x88) = fVar28;
    puVar6 = PTR_DAT_08f8e6f0;
    if (plVar17 == (long *)0x0) goto LAB_076e0bc8;
    lVar12 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08f8e6f0) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076e0974;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar17,*(long *)PTR_DAT_08f8e6f0,0);
LAB_076e0974:
    uVar15 = (*(code *)*puVar10)(plVar17,puVar10[1]);
    if ((uVar15 & 1) == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(byte *)(param_4 + 0x71) ^ 1;
    }
    plVar17 = *(long **)(param_4 + 0x48);
    if (plVar17 == (long *)0x0) goto LAB_076e0bc8;
    lVar13 = *plVar17;
    lVar12 = *(long *)puVar6;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076e0a18;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar17,lVar12,0);
LAB_076e0a18:
    bVar8 = (*(code *)*puVar10)(plVar17,puVar10[1]);
    puVar18 = (uint *)(param_4 + 0x74);
    *(byte *)(param_4 + 0x71) = bVar8 & 1;
    if (((fStack0000000000000014 * fVar27 +
         fStack000000000000001c * fVar30 + fStack0000000000000018 * fStack000000000000002c) * 0.5 +
         0.5 <= 0.5) || ((uVar19 & *puVar18 >> 0x1f) == 0)) {
      if ((int)*puVar18 < 0) {
        return;
      }
      plVar17 = *(long **)(param_4 + 0x58);
      if (plVar17 == (long *)0x0) goto LAB_076e0bc8;
      lVar13 = *plVar17;
      lVar12 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar12) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_076e0ad8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar17,lVar12,0);
LAB_076e0ad8:
      uVar15 = (*(code *)*puVar10)(plVar17,puVar10[1]);
      if ((uVar15 & 1) != 0) goto LAB_076e0ae8;
      uVar19 = *puVar18;
      if ((int)uVar19 < 0) {
        return;
      }
      if (*(char *)(param_4 + 0xb0) != '\0') {
        return;
      }
      lVar12 = *(long *)(param_4 + 0x38);
      if (lVar12 == 0) goto LAB_076e0bc8;
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 <= uVar19) goto LAB_076e0bcc;
      lVar13 = *(long *)(lVar12 + (ulong)uVar19 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_076e0bc8;
      if (*(float *)(lVar13 + 0x10) <= *(float *)(param_4 + 0x7c)) {
        if (*(float *)(param_4 + 0x7c) <= *(float *)(lVar13 + 0x14)) {
          return;
        }
        uVar2 = uVar1 - 1;
        if ((int)(uVar19 + 1) <= (int)uVar2) {
          uVar2 = uVar19 + 1;
        }
        *puVar18 = uVar2;
        if (uVar1 <= uVar2) goto LAB_076e0bcc;
        uVar15 = (ulong)(int)uVar2;
      }
      else {
        if ((int)uVar19 < 2) {
          uVar19 = 1;
        }
        uVar19 = uVar19 - 1;
        *puVar18 = uVar19;
        if (uVar1 <= uVar19) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        uVar15 = (ulong)uVar19;
      }
      lVar12 = *(long *)(lVar12 + uVar15 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_076e0bc8;
      uVar11 = *(undefined4 *)(lVar12 + 0x1c);
    }
    else {
      lVar12 = FUN_076e0bd0(*(undefined4 *)(param_4 + 0x7c),param_4,puVar18);
      if (lVar12 == 0) goto LAB_076e0bc8;
      if (*(char *)(lVar12 + 0x18) == '\0') {
        *puVar18 = 0xffffffff;
        return;
      }
      uVar11 = *(undefined4 *)(lVar12 + 0x1c);
    }
    FUN_076dfc50(param_4,uVar11);
  }
  return;
}


