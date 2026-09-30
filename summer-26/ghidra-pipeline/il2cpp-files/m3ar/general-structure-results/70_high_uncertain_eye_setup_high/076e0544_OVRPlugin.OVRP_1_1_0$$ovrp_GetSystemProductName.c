/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemProductName
ENTRY_POINT: 076e0544
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemProductName(float param_1,float param_2,float param_3)

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
  long *unaff_x20;
  long *plVar13;
  uint *puVar14;
  uint uVar15;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float unaff_s15;
  float fVar23;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  fVar20 = param_3;
  fVar19 = param_2;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fStack000000000000001c = (float)FUN_08596b20(&stack0x00000060,0);
  fStack0000000000000014 = fVar20;
  if (DAT_09539f9f == '\0') {
                    /* try { // try from 076e058c to 077e074f has its CatchHandler @ 076e058c
                       catch() { ... } // from try @ 076e058c with catch @ 076e058c
                       catch() { ... } // from try @ 076e0770 with catch @ 076e058c
                       catch() { ... } // from try @ 076e083c with catch @ 076e058c
                       catch() { ... } // from try @ 076e0848 with catch @ 076e058c
                       catch() { ... } // from try @ 076e0950 with catch @ 076e058c */
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  puVar3 = PTR_DAT_08f67c68;
  fVar16 = fStack000000000000002c * fStack000000000000002c +
           unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11;
  fVar20 = fStack000000000000003c;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar16) {
    fVar20 = fStack000000000000002c * fStack000000000000003c +
             unaff_s15 * fStack0000000000000034 + unaff_s11 * fStack0000000000000030;
    unaff_s8 = fStack0000000000000034 - (unaff_s15 * fVar20) / fVar16;
    unaff_s9 = fStack0000000000000030 - (unaff_s11 * fVar20) / fVar16;
    fVar20 = fStack000000000000003c - (fStack000000000000002c * fVar20) / fVar16;
  }
  if (*(char *)(unaff_x23 + 0xe18) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x23 + 0xe18) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar16 = SQRT(fVar20 * fVar20 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar16 <= fStack0000000000000038) {
    if (*(char *)(unaff_x24 + 0xc10) == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      *(undefined1 *)(unaff_x24 + 0xc10) = 1;
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    fVar23 = *pfVar8;
    fStack000000000000002c = pfVar8[1];
    fVar20 = pfVar8[2];
  }
  else {
    fStack000000000000002c = unaff_s9 / fVar16;
    fVar23 = unaff_s8 / fVar16;
    fVar20 = fVar20 / fVar16;
  }
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  fVar16 = fStack000000000000003c * fStack000000000000003c +
           fStack0000000000000034 * fStack0000000000000034 +
           fStack0000000000000030 * fStack0000000000000030;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar16) {
    fVar21 = fStack000000000000003c * param_3 +
             fStack0000000000000030 * param_2 + fStack0000000000000034 * param_1;
    param_1 = param_1 - (fStack0000000000000034 * fVar21) / fVar16;
    param_2 = param_2 - (fStack0000000000000030 * fVar21) / fVar16;
    param_3 = param_3 - (fStack000000000000003c * fVar21) / fVar16;
  }
  if (*(char *)(unaff_x23 + 0xe18) == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    *(undefined1 *)(unaff_x23 + 0xe18) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar16 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  if (fVar16 <= fStack0000000000000038) {
    if (*(char *)(unaff_x24 + 0xc10) == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      *(undefined1 *)(unaff_x24 + 0xc10) = 1;
    }
    pfVar8 = *(float **)(*unaff_x22 + 0xb8);
    param_1 = *pfVar8;
    param_2 = pfVar8[1];
    param_3 = pfVar8[2];
  }
  else {
    param_1 = param_1 / fVar16;
    param_2 = param_2 / fVar16;
    param_3 = param_3 / fVar16;
  }
  fStack0000000000000004 = fStack0000000000000030;
  fVar16 = (float)FUN_0419f7f0(param_1,param_2,param_3,uStack0000000000000020,uStack0000000000000024
                               ,uStack0000000000000028,0);
  plVar13 = *(long **)(unaff_x19 + 0x28);
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076e084c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar13,*unaff_x21,0);
LAB_076e084c:
    iVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    uVar7 = 0xc28c0000;
    fVar21 = -fVar16;
    if (iVar5 != 1) {
      fVar21 = fVar16;
    }
    fVar22 = fVar21 + 360.0;
    fVar16 = fVar22;
    if (-70.0 <= fVar21) {
      fVar16 = fVar21;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar16;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar17 = FUN_08598884(*(long *)(unaff_x19 + 0x30),0);
      uVar18 = FUN_08575dd0(fStack0000000000000034,fStack0000000000000030,fStack000000000000003c,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_08596724(uVar17,fVar22,uVar7,uVar18,fStack0000000000000030,fStack000000000000003c,
                   uStack0000000000000020,&stack0x00000040,0);
      plVar13 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x80) = param_1;
      *(float *)(unaff_x19 + 0x84) = param_2;
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(float *)(unaff_x19 + 0x88) = param_3;
      puVar3 = PTR_DAT_08f8e6f0;
      if (plVar13 != (long *)0x0) {
        lVar9 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f8e6f0) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_076e0974;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08f8e6f0,0);
LAB_076e0974:
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
          fVar23 = fStack000000000000001c * fVar23;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          fVar20 = fStack0000000000000014 * fVar20;
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_076e0a18;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar13,lVar9,0);
LAB_076e0a18:
          bVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          puVar14 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
          if (((fVar20 + fVar23 + fVar19 * fStack000000000000002c) * 0.5 + 0.5 <= 0.5) ||
             ((uVar15 & *puVar14 >> 0x1f) == 0)) {
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
                    goto LAB_076e0ad8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_0406ae20(plVar13,lVar9,0);
LAB_076e0ad8:
              uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
              if ((uVar11 & 1) != 0) {
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
              lVar9 = *(long *)(unaff_x19 + 0x38);
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 <= uVar15) goto LAB_076e0bcc;
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
                    if (uVar1 <= uVar2) goto LAB_076e0bcc;
                    uVar11 = (ulong)(int)uVar2;
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
                    uVar11 = (ulong)uVar15;
                  }
                  if (*(long *)(lVar9 + uVar11 * 8 + 0x20) != 0) goto LAB_076e0a68;
                }
              }
            }
          }
          else {
            lVar9 = FUN_076e0bd0(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar9 != 0) {
              if (*(char *)(lVar9 + 0x18) == '\0') {
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


