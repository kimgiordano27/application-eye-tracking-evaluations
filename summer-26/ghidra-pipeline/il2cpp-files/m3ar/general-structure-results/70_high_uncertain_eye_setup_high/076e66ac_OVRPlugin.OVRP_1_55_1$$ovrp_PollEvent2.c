/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_1$$ovrp_PollEvent2
ENTRY_POINT: 076e66ac
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


void OVRPlugin_OVRP_1_55_1__ovrp_PollEvent2(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x23;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s8;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_s9;
  float fVar23;
  float unaff_s10;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack000000000000005c;
  float in_stack_00000090;
  
  fVar24 = unaff_s10 - param_4 / param_1;
  fVar20 = unaff_s8 - param_2 / param_1;
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  puVar3 = PTR_DAT_08f65580;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar15 = *unaff_x20;
  fVar17 = unaff_x20[1];
  fVar8 = unaff_x20[2];
  fStack000000000000005c = fVar17;
  fVar26 = fVar15;
  fVar9 = (float)FUN_08596ab0();
  fVar19 = *unaff_x20;
  fStack0000000000000034 = unaff_x20[1];
  fVar10 = unaff_x20[2];
  fVar22 = fVar17;
  fVar18 = fVar26;
  fVar11 = (float)FUN_08596ab0();
  fStack000000000000002c = fVar22;
  fVar25 = fVar18;
  lVar4 = FUN_085849e0();
  if (lVar4 != 0) {
    fVar12 = (float)FUN_0859aca0(lVar4,0);
    lVar4 = FUN_085849e0();
    if (lVar4 != 0) {
      FUN_0859aca0(lVar4,0);
      lVar4 = FUN_085849e0();
      if (lVar4 != 0) {
        FUN_0859aca0(lVar4,0);
        fVar2 = DAT_01a2ef28;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fVar23 = 0.0;
          lVar4 = 0;
          uVar7 = 0;
          uVar16 = NEON_fmov(0x3f800000,4);
          fVar13 = SQRT((unaff_s9 - param_3) * (unaff_s9 - param_3) + fVar24 * fVar24 +
                        fVar20 * fVar20);
          fStack000000000000005c = fStack000000000000005c + in_stack_00000090 * fVar13 * fVar26;
          fVar20 = fVar19 - fVar11;
          fVar24 = fStack0000000000000034 - fVar18;
          fVar18 = fVar10 - fStack000000000000002c;
          do {
            fVar11 = *unaff_x20;
            fVar26 = unaff_x20[1];
            fVar10 = unaff_x20[2];
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar11 = (float)FUN_076e6ed8(fVar11,fVar26,fVar10,
                                         fVar15 + in_stack_00000090 * fVar13 * fVar9,
                                         fStack000000000000005c,
                                         fVar8 + in_stack_00000090 * fVar13 * fVar17);
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
                 CONCAT44(((float)((ulong)uVar16 >> 0x20) / fVar25) * fVar26,
                          ((float)uVar16 / fVar12) * fVar11);
            *(float *)(lVar5 + lVar4 + 0x28) = (1.0 / fVar22) * fVar10;
            lVar5 = *(long *)(unaff_x19 + 0x68);
            if (lVar5 == 0) goto LAB_076e6afc;
            if (DAT_09539e18 == '\0') {
              FUN_0403162c(puVar3);
              DAT_09539e18 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar18 = fVar10 - fVar18;
            fVar20 = fVar11 - fVar20;
            fVar24 = fVar26 - fVar24;
            fVar19 = fVar18 * fVar18 + fVar20 * fVar20 + fVar24 * fVar24;
            fVar21 = SQRT(fVar19);
            if (fVar21 <= fVar2) {
              if (DAT_09539c10 == '\0') {
                FUN_0403162c(PTR_DAT_08f65568);
                DAT_09539c10 = '\x01';
              }
              pfVar6 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
              fVar20 = *pfVar6;
              fVar24 = pfVar6[1];
              fVar18 = pfVar6[2];
            }
            else {
              fVar20 = fVar20 / fVar21;
              fVar24 = fVar24 / fVar21;
              fVar18 = fVar18 / fVar21;
            }
            uVar14 = FUN_08575dd0(fVar20,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_076e6af8;
            lVar5 = lVar5 + lVar4;
            fVar23 = fVar23 + fVar21;
            *(undefined4 *)(lVar5 + 0x2c) = uVar14;
            *(float *)(lVar5 + 0x30) = fVar24;
            uVar7 = uVar7 + 1;
            *(float *)(lVar5 + 0x34) = fVar18;
            *(float *)(lVar5 + 0x38) = fVar19;
            lVar4 = lVar4 + 0x20;
            fVar20 = fVar11;
            fVar24 = fVar26;
            fVar18 = fVar10;
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
              fVar24 = *(float *)(lVar5 + -0x38);
              fVar22 = *(float *)(lVar5 + -0x34);
              fVar20 = *(float *)(lVar5 + -0x3c);
              fVar25 = *(float *)(lVar5 + -0x1c);
              fVar18 = *(float *)(lVar5 + -0x18);
              fVar26 = *(float *)(lVar5 + -0x14);
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
              fVar20 = fVar20 - fVar25;
              fVar24 = fVar24 - fVar18;
              pfVar6 = (float *)(lVar5 + lVar4);
              fVar22 = fVar22 - fVar26;
              iVar1 = *(int *)(unaff_x19 + 0x50);
              uVar7 = uVar7 + 1;
              lVar4 = lVar4 + 0x20;
              *pfVar6 = SQRT(fVar20 * fVar20 + fVar24 * fVar24 + fVar22 * fVar22) / fVar23 +
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


