/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_GetNativeOpenXRHandles
ENTRY_POINT: 076e65ac
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0__ovrp_GetNativeOpenXRHandles(long *param_1,long param_2)

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
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_s8;
  float fVar21;
  float fVar22;
  float unaff_s11;
  float fVar23;
  float unaff_s12;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack000000000000005c;
  undefined8 in_stack_00000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  lVar4 = *(long *)(*param_1 + 0xb8);
  fVar8 = *(float *)(lVar4 + 0x18);
  fVar14 = *(float *)(lVar4 + 0x1c);
  fVar17 = *(float *)(lVar4 + 0x20);
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar8 = (float)FUN_076e6ca8(unaff_s12 * fVar17 + unaff_s8 * fVar8 + unaff_s11 * fVar14);
  fVar14 = *unaff_x20;
  fVar17 = unaff_x20[1];
  fVar23 = unaff_x20[2];
  if (*(char *)(unaff_x21 + 0xe16) == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    *(undefined1 *)(unaff_x21 + 0xe16) = 1;
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar26 = *(float *)(lVar4 + 0x18);
  fVar25 = *(float *)(lVar4 + 0x1c);
  fVar24 = *(float *)(lVar4 + 0x20);
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  fStack0000000000000078 = fStack0000000000000078 - fVar17;
  in_stack_00000070._4_4_ = in_stack_00000070._4_4_ - fVar14;
  fStack000000000000007c = fStack000000000000007c - fVar23;
  fVar14 = fVar24 * fVar24 + fVar26 * fVar26 + fVar25 * fVar25;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar14) {
    fVar17 = fStack000000000000007c * fVar24 +
             in_stack_00000070._4_4_ * fVar26 + fStack0000000000000078 * fVar25;
    in_stack_00000070._4_4_ = in_stack_00000070._4_4_ - (fVar26 * fVar17) / fVar14;
    fStack0000000000000078 = fStack0000000000000078 - (fVar25 * fVar17) / fVar14;
    fStack000000000000007c = fStack000000000000007c - (fVar24 * fVar17) / fVar14;
  }
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  puVar3 = PTR_DAT_08f65580;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar15 = *unaff_x20;
  fVar18 = unaff_x20[1];
  fVar25 = unaff_x20[2];
  fStack000000000000005c = fVar18;
  fVar24 = fVar15;
  fVar26 = (float)FUN_08596ab0();
  fVar19 = *unaff_x20;
  fStack0000000000000034 = unaff_x20[1];
  fVar9 = unaff_x20[2];
  fVar14 = fVar18;
  fVar23 = fVar24;
  fVar10 = (float)FUN_08596ab0();
  fStack000000000000002c = fVar14;
  fVar17 = fVar23;
  lVar4 = FUN_085849e0();
  if (lVar4 != 0) {
    fVar11 = (float)FUN_0859aca0(lVar4,0);
    lVar4 = FUN_085849e0();
    if (lVar4 != 0) {
      FUN_0859aca0(lVar4,0);
      lVar4 = FUN_085849e0();
      if (lVar4 != 0) {
        FUN_0859aca0(lVar4,0);
        fVar2 = DAT_01a2ef28;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fVar22 = 0.0;
          lVar4 = 0;
          uVar7 = 0;
          uVar16 = NEON_fmov(0x3f800000,4);
          fVar12 = SQRT(in_stack_00000070._4_4_ * in_stack_00000070._4_4_ +
                        fStack0000000000000078 * fStack0000000000000078 +
                        fStack000000000000007c * fStack000000000000007c);
          fStack000000000000005c = fStack000000000000005c + fVar8 * fVar12 * fVar24;
          fVar24 = fVar19 - fVar10;
          fVar23 = fStack0000000000000034 - fVar23;
          fVar9 = fVar9 - fStack000000000000002c;
          do {
            fVar27 = *unaff_x20;
            fVar10 = unaff_x20[1];
            fVar19 = unaff_x20[2];
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar27 = (float)FUN_076e6ed8(fVar27,fVar10,fVar19,fVar15 + fVar8 * fVar12 * fVar26,
                                         fStack000000000000005c,fVar25 + fVar8 * fVar12 * fVar18);
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
                 CONCAT44(((float)((ulong)uVar16 >> 0x20) / fVar17) * fVar10,
                          ((float)uVar16 / fVar11) * fVar27);
            *(float *)(lVar5 + lVar4 + 0x28) = (1.0 / fVar14) * fVar19;
            lVar5 = *(long *)(unaff_x19 + 0x68);
            if (lVar5 == 0) goto LAB_076e6afc;
            if (DAT_09539e18 == '\0') {
              FUN_0403162c(puVar3);
              DAT_09539e18 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar9 = fVar19 - fVar9;
            fVar24 = fVar27 - fVar24;
            fVar23 = fVar10 - fVar23;
            fVar20 = fVar9 * fVar9 + fVar24 * fVar24 + fVar23 * fVar23;
            fVar21 = SQRT(fVar20);
            if (fVar21 <= fVar2) {
              if (DAT_09539c10 == '\0') {
                FUN_0403162c(PTR_DAT_08f65568);
                DAT_09539c10 = '\x01';
              }
              pfVar6 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
              fVar24 = *pfVar6;
              fVar23 = pfVar6[1];
              fVar9 = pfVar6[2];
            }
            else {
              fVar24 = fVar24 / fVar21;
              fVar23 = fVar23 / fVar21;
              fVar9 = fVar9 / fVar21;
            }
            uVar13 = FUN_08575dd0(fVar24,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_076e6af8;
            lVar5 = lVar5 + lVar4;
            fVar22 = fVar22 + fVar21;
            *(undefined4 *)(lVar5 + 0x2c) = uVar13;
            *(float *)(lVar5 + 0x30) = fVar23;
            uVar7 = uVar7 + 1;
            *(float *)(lVar5 + 0x34) = fVar9;
            *(float *)(lVar5 + 0x38) = fVar20;
            lVar4 = lVar4 + 0x20;
            fVar24 = fVar27;
            fVar23 = fVar10;
            fVar9 = fVar19;
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
              fVar14 = *(float *)(lVar5 + -0x38);
              fVar17 = *(float *)(lVar5 + -0x34);
              fVar8 = *(float *)(lVar5 + -0x3c);
              fVar23 = *(float *)(lVar5 + -0x1c);
              fVar24 = *(float *)(lVar5 + -0x18);
              fVar25 = *(float *)(lVar5 + -0x14);
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
              fVar8 = fVar8 - fVar23;
              fVar14 = fVar14 - fVar24;
              pfVar6 = (float *)(lVar5 + lVar4);
              fVar17 = fVar17 - fVar25;
              iVar1 = *(int *)(unaff_x19 + 0x50);
              uVar7 = uVar7 + 1;
              lVar4 = lVar4 + 0x20;
              *pfVar6 = SQRT(fVar8 * fVar8 + fVar14 * fVar14 + fVar17 * fVar17) / fVar22 +
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


