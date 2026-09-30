/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemDisplayFrequency
ENTRY_POINT: 076e0288
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemDisplayFrequency
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  long in_x9;
  ulong uVar14;
  int *in_x10;
  int *piVar15;
  long unaff_x19;
  long *plVar16;
  uint *puVar17;
  uint uVar18;
  long *unaff_x21;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
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
  float in_stack_00000068;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar9 = (undefined8 *)FUN_0406ae20();
      goto LAB_076e02b4;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_6;
    in_x10 = in_x10 + 4;
  }
  puVar9 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_076e02b4:
  iVar8 = (*(code *)*puVar9)();
  if (DAT_09539e16 == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    DAT_09539e16 = '\x01';
  }
  fVar31 = in_stack_00000068;
  fVar28 = fStack0000000000000060;
  puVar3 = PTR_DAT_08f65568;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar11 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar35 = *(float *)(lVar11 + 0x18);
    fVar33 = *(float *)(lVar11 + 0x1c);
    fVar19 = *(float *)(lVar11 + 0x20);
    fVar20 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x30),0);
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    puVar4 = PTR_DAT_08f65580;
    fVar28 = fVar28 - fVar20;
    param_3 = fStack0000000000000064 - param_3;
    fVar31 = fVar31 - param_4;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar20 = DAT_01a2ef28;
    fVar21 = SQRT(fVar31 * fVar31 + fVar28 * fVar28 + param_3 * param_3);
    if (fVar21 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar28 = *pfVar12;
      param_3 = pfVar12[1];
      fVar31 = pfVar12[2];
    }
    else {
      param_3 = param_3 / fVar21;
      fVar28 = fVar28 / fVar21;
      fVar31 = fVar31 / fVar21;
    }
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    fVar21 = fVar33 * fVar31 - fVar19 * param_3;
    fVar30 = fVar19 * fVar28 - fVar35 * fVar31;
    fVar32 = fVar35 * param_3 - fVar33 * fVar28;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar27 = SQRT(fVar32 * fVar32 + fVar21 * fVar21 + fVar30 * fVar30);
    if (fVar27 <= fVar20) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar21 = *pfVar12;
      fVar30 = pfVar12[1];
      fVar32 = pfVar12[2];
    }
    else {
      fVar21 = fVar21 / fVar27;
      fVar30 = fVar30 / fVar27;
      fVar32 = fVar32 / fVar27;
    }
    puVar5 = PTR_DAT_08f70528;
    bVar6 = iVar8 != 1;
    if (bVar6) {
      fVar21 = -fVar21;
      fVar32 = -fVar32;
    }
    if (bVar6) {
      fVar30 = -fVar30;
    }
    if (bVar6) {
      fVar27 = fVar32;
      fVar34 = fVar30;
      if (*(int *)(*(long *)PTR_DAT_08f70528 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar22 = (float)FUN_08596ab0(&stack0x00000060,0);
      fStack0000000000000014 = fVar27;
      fStack0000000000000018 = fVar34;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fStack000000000000001c = (float)FUN_08596b20(&stack0x00000060,0);
    }
    else {
      fVar27 = fVar32;
      fVar34 = fVar30;
      if (*(int *)(*(long *)PTR_DAT_08f70528 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar22 = (float)FUN_08596ab0(&stack0x00000060,0);
      fStack0000000000000014 = fVar27;
      fStack0000000000000018 = fVar34;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar22 = -fVar22;
      fVar34 = -fVar34;
      fVar27 = -fVar27;
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
    fVar23 = fVar19 * fVar19 + fVar35 * fVar35 + fVar33 * fVar33;
    fVar29 = fVar28;
    fStack000000000000002c = param_3;
    fVar26 = fVar31;
    if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar23) {
      fVar26 = fVar19 * fVar31 + fVar35 * fVar28 + fVar33 * param_3;
      fVar29 = fVar28 - (fVar35 * fVar26) / fVar23;
      fStack000000000000002c = param_3 - (fVar33 * fVar26) / fVar23;
      fVar26 = fVar31 - (fVar19 * fVar26) / fVar23;
    }
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar19 = SQRT(fVar26 * fVar26 +
                  fVar29 * fVar29 + fStack000000000000002c * fStack000000000000002c);
    if (fVar19 <= fVar20) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar29 = *pfVar12;
      fStack000000000000002c = pfVar12[1];
      fVar26 = pfVar12[2];
    }
    else {
      fStack000000000000002c = fStack000000000000002c / fVar19;
      fVar29 = fVar29 / fVar19;
      fVar26 = fVar26 / fVar19;
    }
    if (DAT_09539f9f == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_09539f9f = '\x01';
    }
    fVar19 = fVar31 * fVar31 + fVar28 * fVar28 + param_3 * param_3;
    if (**(float **)(*(long *)puVar5 + 0xb8) <= fVar19) {
      fVar33 = fVar31 * fVar27 + param_3 * fVar34 + fVar28 * fVar22;
      fVar22 = fVar22 - (fVar28 * fVar33) / fVar19;
      fVar34 = fVar34 - (param_3 * fVar33) / fVar19;
      fVar27 = fVar27 - (fVar31 * fVar33) / fVar19;
    }
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar19 = SQRT(fVar27 * fVar27 + fVar22 * fVar22 + fVar34 * fVar34);
    if (fVar19 <= fVar20) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar12 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar22 = *pfVar12;
      fVar34 = pfVar12[1];
      fVar27 = pfVar12[2];
    }
    else {
      fVar22 = fVar22 / fVar19;
      fVar34 = fVar34 / fVar19;
      fVar27 = fVar27 / fVar19;
    }
    fVar19 = (float)FUN_0419f7f0(fVar22,fVar34,fVar27,fVar21,fVar30,fVar32,0);
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
      fVar20 = -fVar19;
      if (iVar8 != 1) {
        fVar20 = fVar19;
      }
      fVar33 = fVar20 + 360.0;
      fVar19 = fVar33;
      if (-70.0 <= fVar20) {
        fVar19 = fVar20;
      }
      *(float *)(unaff_x19 + 0x7c) = fVar19;
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        uVar24 = FUN_08598884(*(long *)(unaff_x19 + 0x30),0);
        uVar25 = FUN_08575dd0(fVar28,param_3,fVar31,0);
        in_stack_00000040 = 0;
        uStack0000000000000048 = 0;
        uStack000000000000004c = 0;
        in_stack_00000058 = 0;
        uStack0000000000000050 = 0;
        uStack0000000000000054 = 0;
        FUN_08596724(uVar24,fVar33,uVar10,uVar25,param_3,fVar31,fVar21,&stack0x00000040,0);
        plVar16 = *(long **)(unaff_x19 + 0x48);
        *(float *)(unaff_x19 + 0x80) = fVar22;
        *(float *)(unaff_x19 + 0x84) = fVar34;
        *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
        *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
        *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        *(float *)(unaff_x19 + 0x88) = fVar27;
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
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
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
            if (((fStack0000000000000014 * fVar26 +
                 fStack000000000000001c * fVar29 + fStack0000000000000018 * fStack000000000000002c)
                 * 0.5 + 0.5 <= 0.5) || ((uVar18 & *puVar17 >> 0x1f) == 0)) {
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


