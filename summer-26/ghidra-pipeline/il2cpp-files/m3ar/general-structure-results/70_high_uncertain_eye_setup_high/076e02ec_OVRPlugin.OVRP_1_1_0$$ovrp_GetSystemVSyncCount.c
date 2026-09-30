/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemVSyncCount
ENTRY_POINT: 076e02ec
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVSyncCount
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  int unaff_w20;
  long *plVar16;
  uint *puVar17;
  uint uVar18;
  long *unaff_x21;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  
  fVar28 = in_stack_00000068;
  puVar3 = PTR_DAT_08f65568;
  fVar25 = fStack0000000000000060;
  lVar11 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar32 = *(float *)(lVar11 + 0x18);
  fVar29 = *(float *)(lVar11 + 0x1c);
  fStack000000000000002c = *(float *)(lVar11 + 0x20);
  fVar19 = (float)FUN_08598884(param_4,0);
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  puVar4 = PTR_DAT_08f65580;
  fVar25 = fVar25 - fVar19;
  param_2 = fStack0000000000000064 - param_2;
  fVar28 = fVar28 - param_3;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar19 = DAT_01a2ef28;
  fStack000000000000003c = SQRT(fVar28 * fVar28 + fVar25 * fVar25 + param_2 * param_2);
  if (fStack000000000000003c <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
    fStack0000000000000034 = *pfVar12;
    param_2 = pfVar12[1];
    fStack000000000000003c = pfVar12[2];
  }
  else {
    param_2 = param_2 / fStack000000000000003c;
    fStack0000000000000034 = fVar25 / fStack000000000000003c;
    fStack000000000000003c = fVar28 / fStack000000000000003c;
  }
  fVar25 = fVar29 * fStack000000000000003c;
  fVar30 = fVar32 * fStack000000000000003c;
  fVar31 = fVar29 * fStack0000000000000034;
  fVar26 = fStack000000000000002c * param_2;
  fVar28 = fStack000000000000002c * fStack0000000000000034;
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  fVar25 = fVar25 - fVar26;
  fVar28 = fVar28 - fVar30;
  fVar31 = fVar32 * param_2 - fVar31;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar26 = SQRT(fVar31 * fVar31 + fVar25 * fVar25 + fVar28 * fVar28);
  if (fVar26 <= fVar19) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar25 = *pfVar12;
    fVar28 = pfVar12[1];
    fVar31 = pfVar12[2];
  }
  else {
    fVar25 = fVar25 / fVar26;
    fVar28 = fVar28 / fVar26;
    fVar31 = fVar31 / fVar26;
  }
  fVar26 = fStack0000000000000034;
  puVar5 = PTR_DAT_08f70528;
  bVar6 = unaff_w20 != 1;
  if (bVar6) {
    fVar25 = -fVar25;
    fVar31 = -fVar31;
  }
  if (bVar6) {
    fVar28 = -fVar28;
  }
  fStack0000000000000024 = fVar28;
  if (bVar6) {
    fVar30 = fVar31;
    if (*(int *)(*(long *)PTR_DAT_08f70528 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar20 = (float)FUN_08596ab0(&stack0x00000060,0);
    fVar27 = fVar30;
    fStack0000000000000018 = fVar28;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fStack000000000000001c = (float)FUN_08596b20(&stack0x00000060,0);
    fStack0000000000000014 = fVar27;
  }
  else {
    fVar30 = fVar31;
    if (*(int *)(*(long *)PTR_DAT_08f70528 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar20 = (float)FUN_08596ab0(&stack0x00000060,0);
    fVar27 = fVar30;
    fStack0000000000000018 = fVar28;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar20 = -fVar20;
    fVar28 = -fVar28;
    fVar30 = -fVar30;
    fStack000000000000001c = (float)FUN_08596b20(&stack0x00000060,0);
    fStack000000000000001c = -fStack000000000000001c;
    fStack0000000000000018 = -fStack0000000000000018;
    fStack0000000000000014 = -fVar27;
  }
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  puVar5 = PTR_DAT_08f67c68;
  fVar21 = fStack000000000000002c * fStack000000000000002c + fVar32 * fVar32 + fVar29 * fVar29;
  fVar27 = param_2;
  fVar24 = fStack000000000000003c;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar21) {
    fVar24 = fStack000000000000002c * fStack000000000000003c +
             fVar32 * fStack0000000000000034 + fVar29 * param_2;
    fVar26 = fStack0000000000000034 - (fVar32 * fVar24) / fVar21;
    fVar27 = param_2 - (fVar29 * fVar24) / fVar21;
    fVar24 = fStack000000000000003c - (fStack000000000000002c * fVar24) / fVar21;
  }
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar29 = SQRT(fVar24 * fVar24 + fVar26 * fVar26 + fVar27 * fVar27);
  if (fVar29 <= fVar19) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar26 = *pfVar12;
    fStack000000000000002c = pfVar12[1];
    fVar24 = pfVar12[2];
  }
  else {
    fStack000000000000002c = fVar27 / fVar29;
    fVar26 = fVar26 / fVar29;
    fVar24 = fVar24 / fVar29;
  }
  fVar32 = fStack000000000000003c;
  fVar29 = fStack0000000000000034;
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  fVar27 = fVar32 * fVar32 + fVar29 * fVar29 + param_2 * param_2;
  if (**(float **)(*(long *)puVar5 + 0xb8) <= fVar27) {
    fVar21 = fVar32 * fVar30 + param_2 * fVar28 + fVar29 * fVar20;
    fVar20 = fVar20 - (fVar29 * fVar21) / fVar27;
    fVar28 = fVar28 - (param_2 * fVar21) / fVar27;
    fVar30 = fVar30 - (fVar32 * fVar21) / fVar27;
  }
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar32 = SQRT(fVar30 * fVar30 + fVar20 * fVar20 + fVar28 * fVar28);
  if (fVar32 <= fVar19) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar20 = *pfVar12;
    fVar28 = pfVar12[1];
    fVar30 = pfVar12[2];
  }
  else {
    fVar20 = fVar20 / fVar32;
    fVar28 = fVar28 / fVar32;
    fVar30 = fVar30 / fVar32;
  }
  fStack0000000000000004 = param_2;
  fVar19 = (float)FUN_0419f7f0(fVar20,fVar28,fVar30,fVar25,fStack0000000000000024,fVar31,0);
  plVar16 = *(long **)(unaff_x19 + 0x28);
  if (plVar16 != (long *)0x0) {
    lVar11 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x21) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_076e084c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar16,*unaff_x21,0);
LAB_076e084c:
    iVar8 = (*(code *)*puVar9)(plVar16,puVar9[1]);
    uVar10 = 0xc28c0000;
    fVar32 = -fVar19;
    if (iVar8 != 1) {
      fVar32 = fVar19;
    }
    fVar31 = fVar32 + 360.0;
    fVar19 = fVar31;
    if (-70.0 <= fVar32) {
      fVar19 = fVar32;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar19;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar22 = FUN_08598884(*(long *)(unaff_x19 + 0x30),0);
      fVar19 = fStack000000000000003c;
      uVar23 = FUN_08575dd0(fVar29,param_2,fStack000000000000003c,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_08596724(uVar22,fVar31,uVar10,uVar23,param_2,fVar19,fVar25,&stack0x00000040,0);
      plVar16 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x80) = fVar20;
      *(float *)(unaff_x19 + 0x84) = fVar28;
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(float *)(unaff_x19 + 0x88) = fVar30;
      puVar3 = PTR_DAT_08f8e6f0;
      if (plVar16 != (long *)0x0) {
        lVar11 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f8e6f0) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_076e0974;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_0406ae20(plVar16,*(long *)PTR_DAT_08f8e6f0,0);
LAB_076e0974:
        uVar14 = (*(code *)*puVar9)(plVar16,puVar9[1]);
        if ((uVar14 & 1) == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar16 = *(long **)(unaff_x19 + 0x48);
        if (plVar16 != (long *)0x0) {
          lVar13 = *plVar16;
          lVar11 = *(long *)puVar3;
          fVar26 = fStack000000000000001c * fVar26;
          fStack0000000000000018 = fStack0000000000000018 * fStack000000000000002c;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          fVar24 = fStack0000000000000014 * fVar24;
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar11) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_076e0a18;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_0406ae20(plVar16,lVar11,0);
LAB_076e0a18:
          bVar7 = (*(code *)*puVar9)(plVar16,puVar9[1]);
          puVar17 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar7 & 1;
          if (((fVar24 + fVar26 + fStack0000000000000018) * 0.5 + 0.5 <= 0.5) ||
             ((uVar18 & *puVar17 >> 0x1f) == 0)) {
            if ((int)*puVar17 < 0) {
              return;
            }
            plVar16 = *(long **)(unaff_x19 + 0x58);
            if (plVar16 != (long *)0x0) {
              lVar13 = *plVar16;
              lVar11 = *(long *)puVar3;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar11) {
                    puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_076e0ad8;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar9 = (undefined8 *)FUN_0406ae20(plVar16,lVar11,0);
LAB_076e0ad8:
              uVar14 = (*(code *)*puVar9)(plVar16,puVar9[1]);
              if ((uVar14 & 1) != 0) {
                FUN_076dfc50();
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
              lVar11 = *(long *)(unaff_x19 + 0x38);
              if (lVar11 != 0) {
                uVar1 = *(uint *)(lVar11 + 0x18);
                if (uVar1 <= uVar18) goto LAB_076e0bcc;
                lVar13 = *(long *)(lVar11 + (ulong)uVar18 * 8 + 0x20);
                if (lVar13 != 0) {
                  if (*(float *)(lVar13 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar13 + 0x14)) {
                      return;
                    }
                    uVar2 = uVar1 - 1;
                    if ((int)(uVar18 + 1) <= (int)uVar2) {
                      uVar2 = uVar18 + 1;
                    }
                    *puVar17 = uVar2;
                    if (uVar1 <= uVar2) goto LAB_076e0bcc;
                    uVar14 = (ulong)(int)uVar2;
                  }
                  else {
                    if ((int)uVar18 < 2) {
                      uVar18 = 1;
                    }
                    uVar18 = uVar18 - 1;
                    *puVar17 = uVar18;
                    if (uVar1 <= uVar18) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
                      FUN_04031894();
                    }
                    uVar14 = (ulong)uVar18;
                  }
                  if (*(long *)(lVar11 + uVar14 * 8 + 0x20) != 0) goto LAB_076e0a68;
                }
              }
            }
          }
          else {
            lVar11 = FUN_076e0bd0(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar11 != 0) {
              if (*(char *)(lVar11 + 0x18) == '\0') {
                *puVar17 = 0xffffffff;
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


