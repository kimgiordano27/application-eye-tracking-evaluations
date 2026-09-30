/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$.cctor
ENTRY_POINT: 076e6630
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0___cctor(void)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_s8;
  float fVar24;
  float fVar25;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar26;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack000000000000005c;
  undefined8 in_stack_00000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float in_stack_00000090;
  
  FUN_0403162c(PTR_DAT_08f67c68);
  *(undefined1 *)(unaff_x21 + 3999) = 1;
  fStack0000000000000078 = fStack0000000000000078 - unaff_s10;
  in_stack_00000070._4_4_ = in_stack_00000070._4_4_ - unaff_s8;
  fStack000000000000007c = fStack000000000000007c - unaff_s11;
  fVar8 = unaff_s12 * unaff_s12 + unaff_s14 * unaff_s14 + unaff_s13 * unaff_s13;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar8) {
    fVar17 = fStack000000000000007c * unaff_s12 +
             in_stack_00000070._4_4_ * unaff_s14 + fStack0000000000000078 * unaff_s13;
    in_stack_00000070._4_4_ = in_stack_00000070._4_4_ - (unaff_s14 * fVar17) / fVar8;
    fStack0000000000000078 = fStack0000000000000078 - (unaff_s13 * fVar17) / fVar8;
    fStack000000000000007c = fStack000000000000007c - (unaff_s12 * fVar17) / fVar8;
  }
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  puVar3 = PTR_DAT_08f65580;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar18 = *unaff_x20;
  fVar21 = unaff_x20[1];
  fVar9 = unaff_x20[2];
  fStack000000000000005c = fVar21;
  fVar15 = fVar18;
  fVar10 = (float)FUN_08596ab0();
  fVar22 = *unaff_x20;
  fStack0000000000000034 = unaff_x20[1];
  fVar11 = unaff_x20[2];
  fVar8 = fVar21;
  fVar19 = fVar15;
  fVar12 = (float)FUN_08596ab0();
  fStack000000000000002c = fVar8;
  fVar17 = fVar19;
  lVar4 = FUN_085849e0();
  if (lVar4 != 0) {
    fVar13 = (float)FUN_0859aca0(lVar4,0);
    lVar4 = FUN_085849e0();
    if (lVar4 != 0) {
      FUN_0859aca0(lVar4,0);
      lVar4 = FUN_085849e0();
      if (lVar4 != 0) {
        FUN_0859aca0(lVar4,0);
        fVar2 = DAT_01a2ef28;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fVar25 = 0.0;
          lVar4 = 0;
          uVar7 = 0;
          uVar20 = NEON_fmov(0x3f800000,4);
          fVar14 = SQRT(in_stack_00000070._4_4_ * in_stack_00000070._4_4_ +
                        fStack0000000000000078 * fStack0000000000000078 +
                        fStack000000000000007c * fStack000000000000007c);
          fStack000000000000005c = fStack000000000000005c + in_stack_00000090 * fVar14 * fVar15;
          fVar15 = fVar22 - fVar12;
          fVar19 = fStack0000000000000034 - fVar19;
          fVar11 = fVar11 - fStack000000000000002c;
          do {
            fVar26 = *unaff_x20;
            fVar12 = unaff_x20[1];
            fVar22 = unaff_x20[2];
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar26 = (float)FUN_076e6ed8(fVar26,fVar12,fVar22,
                                         fVar18 + in_stack_00000090 * fVar14 * fVar10,
                                         fStack000000000000005c,
                                         fVar9 + in_stack_00000090 * fVar14 * fVar21);
            if (DAT_09539e17 == '\0') {
              FUN_0403162c(puVar3);
              DAT_09539e17 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            lVar5 = *(long *)(unaff_x19 + 0x68);
            if (lVar5 == 0) goto LAB_076e6afc;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_076e6af8;
            *(ulong *)(lVar5 + lVar4 + 0x20) =
                 CONCAT44(((float)((ulong)uVar20 >> 0x20) / fVar17) * fVar12,
                          ((float)uVar20 / fVar13) * fVar26);
            *(float *)(lVar5 + lVar4 + 0x28) = (1.0 / fVar8) * fVar22;
            lVar5 = *(long *)(unaff_x19 + 0x68);
            if (lVar5 == 0) goto LAB_076e6afc;
            if (DAT_09539e18 == '\0') {
              FUN_0403162c(puVar3);
              DAT_09539e18 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar11 = fVar22 - fVar11;
            fVar15 = fVar26 - fVar15;
            fVar19 = fVar12 - fVar19;
            fVar23 = fVar11 * fVar11 + fVar15 * fVar15 + fVar19 * fVar19;
            fVar24 = SQRT(fVar23);
            if (fVar24 <= fVar2) {
              if (DAT_09539c10 == '\0') {
                FUN_0403162c(PTR_DAT_08f65568);
                DAT_09539c10 = '\x01';
              }
              pfVar6 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
              fVar15 = *pfVar6;
              fVar19 = pfVar6[1];
              fVar11 = pfVar6[2];
            }
            else {
              fVar15 = fVar15 / fVar24;
              fVar19 = fVar19 / fVar24;
              fVar11 = fVar11 / fVar24;
            }
            uVar16 = FUN_08575dd0(fVar15,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_076e6af8;
            lVar5 = lVar5 + lVar4;
            fVar25 = fVar25 + fVar24;
            *(undefined4 *)(lVar5 + 0x2c) = uVar16;
            *(float *)(lVar5 + 0x30) = fVar19;
            uVar7 = uVar7 + 1;
            *(float *)(lVar5 + 0x34) = fVar11;
            *(float *)(lVar5 + 0x38) = fVar23;
            lVar4 = lVar4 + 0x20;
            fVar15 = fVar26;
            fVar19 = fVar12;
            fVar11 = fVar22;
          } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar5 = *(long *)(unaff_x19 + 0x68);
            lVar4 = 0x5c;
            uVar7 = 1;
            do {
              if (lVar5 == 0) goto LAB_076e6afc;
              if (((ulong)*(uint *)(lVar5 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar5 + 0x18) <= uVar7)) {
LAB_076e6af8:
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              lVar5 = lVar5 + lVar4;
              fVar17 = *(float *)(lVar5 + -0x38);
              fVar19 = *(float *)(lVar5 + -0x34);
              fVar8 = *(float *)(lVar5 + -0x3c);
              fVar15 = *(float *)(lVar5 + -0x1c);
              fVar9 = *(float *)(lVar5 + -0x18);
              fVar10 = *(float *)(lVar5 + -0x14);
              if (DAT_09539e17 == '\0') {
                FUN_0403162c(puVar3);
                DAT_09539e17 = '\x01';
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              lVar5 = *(long *)(unaff_x19 + 0x68);
              if (lVar5 == 0) goto LAB_076e6afc;
              if (((ulong)*(uint *)(lVar5 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar5 + 0x18) <= uVar7)) goto LAB_076e6af8;
              fVar8 = fVar8 - fVar15;
              fVar17 = fVar17 - fVar9;
              pfVar6 = (float *)(lVar5 + lVar4);
              fVar19 = fVar19 - fVar10;
              iVar1 = *(int *)(unaff_x19 + 0x50);
              uVar7 = uVar7 + 1;
              lVar4 = lVar4 + 0x20;
              *pfVar6 = SQRT(fVar8 * fVar8 + fVar17 * fVar17 + fVar19 * fVar19) / fVar25 +
                        pfVar6[-8];
            } while ((long)uVar7 < (long)iVar1);
          }
        }
        return;
      }
    }
  }
LAB_076e6afc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


