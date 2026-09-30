/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_1$$.cctor
ENTRY_POINT: 076e6730
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


void OVRPlugin_OVRP_1_55_1___cctor(undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float unaff_s8;
  float fVar14;
  float fVar15;
  float unaff_s9;
  float fVar16;
  float unaff_s10;
  float unaff_s11;
  float fVar17;
  float unaff_s12;
  float unaff_s13;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float in_stack_00000038;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000080;
  float in_stack_00000090;
  
  fVar6 = (float)unaff_x20[2];
  fVar7 = (float)FUN_08596ab0();
  fStack000000000000002c = param_3;
  fVar17 = param_2;
  lVar2 = FUN_085849e0();
  if (lVar2 != 0) {
    fVar8 = (float)FUN_0859aca0(lVar2,0);
    lVar2 = FUN_085849e0();
    if (lVar2 != 0) {
      FUN_0859aca0(lVar2,0);
      lVar2 = FUN_085849e0();
      if (lVar2 != 0) {
        FUN_0859aca0(lVar2,0);
        fVar18 = DAT_01a2ef28;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fVar16 = 0.0;
          lVar2 = 0;
          uVar5 = 0;
          uVar12 = NEON_fmov(0x3f800000,4);
          fVar9 = SQRT(unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8);
          fVar7 = in_stack_00000038 - fVar7;
          fVar11 = in_stack_00000030._4_4_ - param_2;
          fVar6 = fVar6 - fStack000000000000002c;
          do {
            uVar19 = *unaff_x20;
            fVar20 = (float)unaff_x20[1];
            fVar14 = (float)unaff_x20[2];
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar10 = (float)FUN_076e6ed8(uVar19,fVar20,fVar14,
                                         in_stack_00000080 + in_stack_00000090 * fVar9 * unaff_s12,
                                         fStack000000000000005c +
                                         in_stack_00000090 * fVar9 * unaff_s13,
                                         fStack0000000000000058 +
                                         in_stack_00000090 * fVar9 * unaff_s11);
            if (*(char *)(unaff_x24 + 0xe17) == '\0') {
              FUN_0403162c();
              *(undefined1 *)(unaff_x24 + 0xe17) = 1;
            }
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            lVar3 = *(long *)(unaff_x19 + 0x68);
            if (lVar3 == 0) goto LAB_076e6afc;
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_076e6af8;
            *(ulong *)(lVar3 + lVar2 + 0x20) =
                 CONCAT44(((float)((ulong)uVar12 >> 0x20) / fVar17) * fVar20,
                          ((float)uVar12 / fVar8) * fVar10);
            *(float *)(lVar3 + lVar2 + 0x28) = (1.0 / param_3) * fVar14;
            lVar3 = *(long *)(unaff_x19 + 0x68);
            if (lVar3 == 0) goto LAB_076e6afc;
            if (DAT_09539e18 == '\0') {
              FUN_0403162c();
              DAT_09539e18 = '\x01';
            }
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar6 = fVar14 - fVar6;
            fVar7 = fVar10 - fVar7;
            fVar11 = fVar20 - fVar11;
            fVar13 = fVar6 * fVar6 + fVar7 * fVar7 + fVar11 * fVar11;
            fVar15 = SQRT(fVar13);
            if (fVar15 <= fVar18) {
              if (DAT_09539c10 == '\0') {
                FUN_0403162c(PTR_DAT_08f65568);
                DAT_09539c10 = '\x01';
              }
              pfVar4 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
              fVar7 = *pfVar4;
              fVar11 = pfVar4[1];
              fVar6 = pfVar4[2];
            }
            else {
              fVar7 = fVar7 / fVar15;
              fVar11 = fVar11 / fVar15;
              fVar6 = fVar6 / fVar15;
            }
            uVar19 = FUN_08575dd0(fVar7,0);
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_076e6af8;
            lVar3 = lVar3 + lVar2;
            fVar16 = fVar16 + fVar15;
            *(undefined4 *)(lVar3 + 0x2c) = uVar19;
            *(float *)(lVar3 + 0x30) = fVar11;
            uVar5 = uVar5 + 1;
            *(float *)(lVar3 + 0x34) = fVar6;
            *(float *)(lVar3 + 0x38) = fVar13;
            lVar2 = lVar2 + 0x20;
            fVar7 = fVar10;
            fVar11 = fVar20;
            fVar6 = fVar14;
          } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar3 = *(long *)(unaff_x19 + 0x68);
            lVar2 = 0x5c;
            uVar5 = 1;
            do {
              if (lVar3 == 0) goto LAB_076e6afc;
              if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) ||
                 (*(uint *)(lVar3 + 0x18) <= uVar5)) {
LAB_076e6af8:
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              lVar3 = lVar3 + lVar2;
              fVar6 = *(float *)(lVar3 + -0x38);
              fVar7 = *(float *)(lVar3 + -0x34);
              fVar17 = *(float *)(lVar3 + -0x3c);
              fVar8 = *(float *)(lVar3 + -0x1c);
              fVar18 = *(float *)(lVar3 + -0x18);
              fVar11 = *(float *)(lVar3 + -0x14);
              if (*(char *)(unaff_x24 + 0xe17) == '\0') {
                FUN_0403162c();
                *(undefined1 *)(unaff_x24 + 0xe17) = 1;
              }
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              lVar3 = *(long *)(unaff_x19 + 0x68);
              if (lVar3 == 0) goto LAB_076e6afc;
              if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) ||
                 (*(uint *)(lVar3 + 0x18) <= uVar5)) goto LAB_076e6af8;
              fVar17 = fVar17 - fVar8;
              fVar6 = fVar6 - fVar18;
              pfVar4 = (float *)(lVar3 + lVar2);
              fVar7 = fVar7 - fVar11;
              iVar1 = *(int *)(unaff_x19 + 0x50);
              uVar5 = uVar5 + 1;
              lVar2 = lVar2 + 0x20;
              *pfVar4 = SQRT(fVar17 * fVar17 + fVar6 * fVar6 + fVar7 * fVar7) / fVar16 + pfVar4[-8];
            } while ((long)uVar5 < (long)iVar1);
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


