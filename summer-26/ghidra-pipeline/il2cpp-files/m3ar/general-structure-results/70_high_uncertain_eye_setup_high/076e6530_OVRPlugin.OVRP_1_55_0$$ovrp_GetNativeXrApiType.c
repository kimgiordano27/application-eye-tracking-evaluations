/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_GetNativeXrApiType
ENTRY_POINT: 076e6530
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


void OVRPlugin_OVRP_1_55_0__ovrp_GetNativeXrApiType
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               int param_6)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x21;
  ulong uVar9;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack000000000000005c;
  undefined8 in_stack_00000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  if (param_6 != *(int *)(param_1 + 0x18)) {
    uVar5 = FUN_040316d0(*(undefined8 *)PTR_DAT_08fac2b8);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar5;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  puVar4 = PTR_DAT_08fae458;
  fVar10 = (float)FUN_08596ab0();
  if (DAT_09539e16 == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    DAT_09539e16 = '\x01';
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar11 = *(float *)(lVar6 + 0x18);
  fVar17 = *(float *)(lVar6 + 0x1c);
  fVar19 = *(float *)(lVar6 + 0x20);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar10 = (float)FUN_076e6ca8(param_4 * fVar19 + fVar10 * fVar11 + param_3 * fVar17);
  fVar11 = *unaff_x20;
  fVar17 = unaff_x20[1];
  fVar19 = unaff_x20[2];
  if (DAT_09539e16 == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    DAT_09539e16 = '\x01';
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar27 = *(float *)(lVar6 + 0x18);
  fVar26 = *(float *)(lVar6 + 0x1c);
  fVar25 = *(float *)(lVar6 + 0x20);
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  fStack0000000000000078 = fStack0000000000000078 - fVar17;
  in_stack_00000070._4_4_ = in_stack_00000070._4_4_ - fVar11;
  fStack000000000000007c = fStack000000000000007c - fVar19;
  fVar11 = fVar25 * fVar25 + fVar27 * fVar27 + fVar26 * fVar26;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar11) {
    fVar17 = fStack000000000000007c * fVar25 +
             in_stack_00000070._4_4_ * fVar27 + fStack0000000000000078 * fVar26;
    in_stack_00000070._4_4_ = in_stack_00000070._4_4_ - (fVar27 * fVar17) / fVar11;
    fStack0000000000000078 = fStack0000000000000078 - (fVar26 * fVar17) / fVar11;
    fStack000000000000007c = fStack000000000000007c - (fVar25 * fVar17) / fVar11;
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
  fVar20 = unaff_x20[1];
  fVar26 = unaff_x20[2];
  fStack000000000000005c = fVar20;
  fVar25 = fVar18;
  fVar27 = (float)FUN_08596ab0();
  fVar21 = *unaff_x20;
  fStack0000000000000034 = unaff_x20[1];
  fVar12 = unaff_x20[2];
  fVar11 = fVar20;
  fVar19 = fVar25;
  fVar13 = (float)FUN_08596ab0();
  fStack000000000000002c = fVar11;
  fVar17 = fVar19;
  lVar6 = FUN_085849e0();
  if (lVar6 != 0) {
    fVar14 = (float)FUN_0859aca0(lVar6,0);
    lVar6 = FUN_085849e0();
    if (lVar6 != 0) {
      FUN_0859aca0(lVar6,0);
      lVar6 = FUN_085849e0();
      if (lVar6 != 0) {
        FUN_0859aca0(lVar6,0);
        fVar2 = DAT_01a2ef28;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fVar24 = 0.0;
          lVar6 = 0;
          uVar9 = 0;
          uVar5 = NEON_fmov(0x3f800000,4);
          fVar15 = SQRT(in_stack_00000070._4_4_ * in_stack_00000070._4_4_ +
                        fStack0000000000000078 * fStack0000000000000078 +
                        fStack000000000000007c * fStack000000000000007c);
          fStack000000000000005c = fStack000000000000005c + fVar10 * fVar15 * fVar25;
          fVar25 = fVar21 - fVar13;
          fVar19 = fStack0000000000000034 - fVar19;
          fVar12 = fVar12 - fStack000000000000002c;
          do {
            fVar28 = *unaff_x20;
            fVar13 = unaff_x20[1];
            fVar21 = unaff_x20[2];
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar28 = (float)FUN_076e6ed8(fVar28,fVar13,fVar21,fVar18 + fVar10 * fVar15 * fVar27,
                                         fStack000000000000005c,fVar26 + fVar10 * fVar15 * fVar20);
            if (DAT_09539e17 == '\0') {
              FUN_0403162c(puVar3);
              DAT_09539e17 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            lVar7 = *(long *)(unaff_x19 + 0x68);
            if (lVar7 == 0) goto LAB_076e6afc;
            if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_076e6af8;
            *(ulong *)(lVar7 + lVar6 + 0x20) =
                 CONCAT44(((float)((ulong)uVar5 >> 0x20) / fVar17) * fVar13,
                          ((float)uVar5 / fVar14) * fVar28);
            *(float *)(lVar7 + lVar6 + 0x28) = (1.0 / fVar11) * fVar21;
            lVar7 = *(long *)(unaff_x19 + 0x68);
            if (lVar7 == 0) goto LAB_076e6afc;
            if (DAT_09539e18 == '\0') {
              FUN_0403162c(puVar3);
              DAT_09539e18 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            fVar12 = fVar21 - fVar12;
            fVar25 = fVar28 - fVar25;
            fVar19 = fVar13 - fVar19;
            fVar22 = fVar12 * fVar12 + fVar25 * fVar25 + fVar19 * fVar19;
            fVar23 = SQRT(fVar22);
            if (fVar23 <= fVar2) {
              if (DAT_09539c10 == '\0') {
                FUN_0403162c(PTR_DAT_08f65568);
                DAT_09539c10 = '\x01';
              }
              pfVar8 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
              fVar25 = *pfVar8;
              fVar19 = pfVar8[1];
              fVar12 = pfVar8[2];
            }
            else {
              fVar25 = fVar25 / fVar23;
              fVar19 = fVar19 / fVar23;
              fVar12 = fVar12 / fVar23;
            }
            uVar16 = FUN_08575dd0(fVar25,0);
            if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_076e6af8;
            lVar7 = lVar7 + lVar6;
            fVar24 = fVar24 + fVar23;
            *(undefined4 *)(lVar7 + 0x2c) = uVar16;
            *(float *)(lVar7 + 0x30) = fVar19;
            uVar9 = uVar9 + 1;
            *(float *)(lVar7 + 0x34) = fVar12;
            *(float *)(lVar7 + 0x38) = fVar22;
            lVar6 = lVar6 + 0x20;
            fVar25 = fVar28;
            fVar19 = fVar13;
            fVar12 = fVar21;
          } while ((long)uVar9 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar7 = *(long *)(unaff_x19 + 0x68);
            lVar6 = 0x5c;
            uVar9 = 1;
            do {
              if (lVar7 == 0) goto LAB_076e6afc;
              if (((ulong)*(uint *)(lVar7 + 0x18) <= uVar9 - 1) ||
                 (*(uint *)(lVar7 + 0x18) <= uVar9)) {
LAB_076e6af8:
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              lVar7 = lVar7 + lVar6;
              fVar11 = *(float *)(lVar7 + -0x38);
              fVar17 = *(float *)(lVar7 + -0x34);
              fVar10 = *(float *)(lVar7 + -0x3c);
              fVar19 = *(float *)(lVar7 + -0x1c);
              fVar25 = *(float *)(lVar7 + -0x18);
              fVar26 = *(float *)(lVar7 + -0x14);
              if (DAT_09539e17 == '\0') {
                FUN_0403162c(puVar3);
                DAT_09539e17 = '\x01';
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              lVar7 = *(long *)(unaff_x19 + 0x68);
              if (lVar7 == 0) goto LAB_076e6afc;
              if (((ulong)*(uint *)(lVar7 + 0x18) <= uVar9 - 1) ||
                 (*(uint *)(lVar7 + 0x18) <= uVar9)) goto LAB_076e6af8;
              fVar10 = fVar10 - fVar19;
              fVar11 = fVar11 - fVar25;
              pfVar8 = (float *)(lVar7 + lVar6);
              fVar17 = fVar17 - fVar26;
              iVar1 = *(int *)(unaff_x19 + 0x50);
              uVar9 = uVar9 + 1;
              lVar6 = lVar6 + 0x20;
              *pfVar8 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar17 * fVar17) / fVar24 +
                        pfVar8[-8];
            } while ((long)uVar9 < (long)iVar1);
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


