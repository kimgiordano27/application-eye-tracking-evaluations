/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemVolume
ENTRY_POINT: 076e0350
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  int unaff_w20;
  uint *puVar14;
  uint uVar15;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_s8;
  float unaff_s9;
  float fVar26;
  float unaff_s10;
  float fVar27;
  float fVar28;
  float unaff_s11;
  float unaff_s12;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  float fStack0000000000000034;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  plVar16 = *(long **)(unaff_x25 + 0x580);
  fVar27 = unaff_s12 - unaff_s10;
  if (*(int *)(*plVar16 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar20 = DAT_01a2ef28;
  fStack000000000000003c = SQRT(fVar27 * fVar27 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fStack000000000000003c <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000034 = *pfVar9;
    fVar25 = pfVar9[1];
    fStack000000000000003c = pfVar9[2];
  }
  else {
    fVar25 = unaff_s9 / fStack000000000000003c;
    fStack0000000000000034 = unaff_s8 / fStack000000000000003c;
    fStack000000000000003c = fVar27 / fStack000000000000003c;
  }
  fVar27 = unaff_s11 * fStack000000000000003c;
  fVar29 = unaff_s15 * fStack000000000000003c;
  fVar30 = unaff_s11 * fStack0000000000000034;
  fVar28 = in_stack_00000028._4_4_ * fStack0000000000000034;
  if (*(char *)(unaff_x23 + 0xe18) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x23 + 0xe18) = 1;
  }
  fVar27 = fVar27 - in_stack_00000028._4_4_ * fVar25;
  fVar28 = fVar28 - fVar29;
  fVar30 = unaff_s15 * fVar25 - fVar30;
  if (*(int *)(*plVar16 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar29 = SQRT(fVar30 * fVar30 + fVar27 * fVar27 + fVar28 * fVar28);
  if (fVar29 <= fVar20) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar27 = *pfVar9;
    fVar28 = pfVar9[1];
    fVar30 = pfVar9[2];
  }
  else {
    fVar27 = fVar27 / fVar29;
    fVar28 = fVar28 / fVar29;
    fVar30 = fVar30 / fVar29;
  }
  fVar29 = fStack0000000000000034;
  puVar3 = PTR_DAT_08f70528;
  bVar4 = unaff_w20 != 1;
  if (bVar4) {
    fVar27 = -fVar27;
    fVar30 = -fVar30;
  }
  if (bVar4) {
    fVar28 = -fVar28;
  }
  fStack0000000000000024 = fVar28;
  if (bVar4) {
    fVar31 = fVar30;
    if (*(int *)(*(long *)PTR_DAT_08f70528 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar17 = (float)FUN_08596ab0(&stack0x00000060,0);
    fVar26 = fVar31;
    fStack0000000000000018 = fVar28;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fStack000000000000001c = (float)FUN_08596b20(&stack0x00000060,0);
    fStack0000000000000014 = fVar26;
  }
  else {
    fVar31 = fVar30;
    if (*(int *)(*(long *)PTR_DAT_08f70528 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar17 = (float)FUN_08596ab0(&stack0x00000060,0);
    fVar26 = fVar31;
    fStack0000000000000018 = fVar28;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar17 = -fVar17;
    fVar28 = -fVar28;
    fVar31 = -fVar31;
    fStack000000000000001c = (float)FUN_08596b20(&stack0x00000060,0);
    fStack000000000000001c = -fStack000000000000001c;
    fStack0000000000000018 = -fStack0000000000000018;
    fStack0000000000000014 = -fVar26;
  }
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  puVar3 = PTR_DAT_08f67c68;
  fVar18 = in_stack_00000028._4_4_ * in_stack_00000028._4_4_ +
           unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11;
  fVar26 = fVar25;
  fVar23 = fStack000000000000003c;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar18) {
    fVar23 = in_stack_00000028._4_4_ * fStack000000000000003c +
             unaff_s15 * fStack0000000000000034 + unaff_s11 * fVar25;
    fVar29 = fStack0000000000000034 - (unaff_s15 * fVar23) / fVar18;
    fVar26 = fVar25 - (unaff_s11 * fVar23) / fVar18;
    fVar23 = fStack000000000000003c - (in_stack_00000028._4_4_ * fVar23) / fVar18;
  }
  if (*(char *)(unaff_x23 + 0xe18) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x23 + 0xe18) = 1;
  }
  if (*(int *)(*plVar16 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar18 = SQRT(fVar23 * fVar23 + fVar29 * fVar29 + fVar26 * fVar26);
  if (fVar18 <= fVar20) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar29 = *pfVar9;
    in_stack_00000028._4_4_ = pfVar9[1];
    fVar23 = pfVar9[2];
  }
  else {
    in_stack_00000028._4_4_ = fVar26 / fVar18;
    fVar29 = fVar29 / fVar18;
    fVar23 = fVar23 / fVar18;
  }
  fVar18 = fStack000000000000003c;
  fVar26 = fStack0000000000000034;
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  fVar19 = fVar18 * fVar18 + fVar26 * fVar26 + fVar25 * fVar25;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar19) {
    fVar24 = fVar18 * fVar31 + fVar25 * fVar28 + fVar26 * fVar17;
    fVar17 = fVar17 - (fVar26 * fVar24) / fVar19;
    fVar28 = fVar28 - (fVar25 * fVar24) / fVar19;
    fVar31 = fVar31 - (fVar18 * fVar24) / fVar19;
  }
  if (*(char *)(unaff_x23 + 0xe18) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x23 + 0xe18) = 1;
  }
  if (*(int *)(*plVar16 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar18 = SQRT(fVar31 * fVar31 + fVar17 * fVar17 + fVar28 * fVar28);
  if (fVar18 <= fVar20) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar9 = *(float **)(*unaff_x22 + 0xb8);
    fVar17 = *pfVar9;
    fVar28 = pfVar9[1];
    fVar31 = pfVar9[2];
  }
  else {
    fVar17 = fVar17 / fVar18;
    fVar28 = fVar28 / fVar18;
    fVar31 = fVar31 / fVar18;
  }
  fStack0000000000000004 = fVar25;
  fVar20 = (float)FUN_0419f7f0(fVar17,fVar28,fVar31,fVar27,fStack0000000000000024,fVar30,0);
  plVar16 = *(long **)(unaff_x19 + 0x28);
  if (plVar16 != (long *)0x0) {
    lVar10 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_076e084c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar16,*unaff_x21,0);
LAB_076e084c:
    iVar6 = (*(code *)*puVar7)(plVar16,puVar7[1]);
    uVar8 = 0xc28c0000;
    fVar30 = -fVar20;
    if (iVar6 != 1) {
      fVar30 = fVar20;
    }
    fVar18 = fVar30 + 360.0;
    fVar20 = fVar18;
    if (-70.0 <= fVar30) {
      fVar20 = fVar30;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar20;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar21 = FUN_08598884(*(long *)(unaff_x19 + 0x30),0);
      fVar20 = fStack000000000000003c;
      uVar22 = FUN_08575dd0(fVar26,fVar25,fStack000000000000003c,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_08596724(uVar21,fVar18,uVar8,uVar22,fVar25,fVar20,fVar27,&stack0x00000040,0);
      plVar16 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x80) = fVar17;
      *(float *)(unaff_x19 + 0x84) = fVar28;
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(float *)(unaff_x19 + 0x88) = fVar31;
      puVar3 = PTR_DAT_08f8e6f0;
      if (plVar16 != (long *)0x0) {
        lVar10 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f8e6f0) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_076e0974;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_0406ae20(plVar16,*(long *)PTR_DAT_08f8e6f0,0);
LAB_076e0974:
        uVar12 = (*(code *)*puVar7)(plVar16,puVar7[1]);
        if ((uVar12 & 1) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar16 = *(long **)(unaff_x19 + 0x48);
        if (plVar16 != (long *)0x0) {
          lVar11 = *plVar16;
          lVar10 = *(long *)puVar3;
          fVar29 = fStack000000000000001c * fVar29;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          fVar23 = fStack0000000000000014 * fVar23;
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_076e0a18;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_0406ae20(plVar16,lVar10,0);
LAB_076e0a18:
          bVar5 = (*(code *)*puVar7)(plVar16,puVar7[1]);
          puVar14 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar5 & 1;
          if (((fVar23 + fVar29 + fStack0000000000000018 * in_stack_00000028._4_4_) * 0.5 + 0.5 <=
               0.5) || ((uVar15 & *puVar14 >> 0x1f) == 0)) {
            if ((int)*puVar14 < 0) {
              return;
            }
            plVar16 = *(long **)(unaff_x19 + 0x58);
            if (plVar16 != (long *)0x0) {
              lVar11 = *plVar16;
              lVar10 = *(long *)puVar3;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar10) {
                    puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_076e0ad8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_0406ae20(plVar16,lVar10,0);
LAB_076e0ad8:
              uVar12 = (*(code *)*puVar7)(plVar16,puVar7[1]);
              if ((uVar12 & 1) != 0) {
                FUN_076dfc50();
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
              lVar10 = *(long *)(unaff_x19 + 0x38);
              if (lVar10 != 0) {
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 <= uVar15) goto LAB_076e0bcc;
                lVar11 = *(long *)(lVar10 + (ulong)uVar15 * 8 + 0x20);
                if (lVar11 != 0) {
                  if (*(float *)(lVar11 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar11 + 0x14)) {
                      return;
                    }
                    uVar2 = uVar1 - 1;
                    if ((int)(uVar15 + 1) <= (int)uVar2) {
                      uVar2 = uVar15 + 1;
                    }
                    *puVar14 = uVar2;
                    if (uVar1 <= uVar2) goto LAB_076e0bcc;
                    uVar12 = (ulong)(int)uVar2;
                  }
                  else {
                    if ((int)uVar15 < 2) {
                      uVar15 = 1;
                    }
                    uVar15 = uVar15 - 1;
                    *puVar14 = uVar15;
                    if (uVar1 <= uVar15) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
                      FUN_04031894();
                    }
                    uVar12 = (ulong)uVar15;
                  }
                  if (*(long *)(lVar10 + uVar12 * 8 + 0x20) != 0) goto LAB_076e0a68;
                }
              }
            }
          }
          else {
            lVar10 = FUN_076e0bd0(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar10 != 0) {
              if (*(char *)(lVar10 + 0x18) == '\0') {
                *puVar14 = 0xffffffff;
                return;
              }
LAB_076e0a68:
              FUN_076dfc50();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


