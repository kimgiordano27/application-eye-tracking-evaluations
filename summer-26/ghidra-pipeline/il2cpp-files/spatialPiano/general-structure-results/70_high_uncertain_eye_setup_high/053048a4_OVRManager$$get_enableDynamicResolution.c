/*
FUNCTION_NAME: OVRManager$$get_enableDynamicResolution
ENTRY_POINT: 053048a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_enableDynamicResolution
               (float param_1,float param_2,float param_3,float param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float unaff_s9;
  float fVar18;
  float unaff_s10;
  float fVar19;
  float unaff_s12;
  float fVar20;
  float fVar21;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float in_stack_00000038;
  float in_stack_00000070;
  float in_stack_00000080;
  
  fStack0000000000000028 = (float)unaff_x20[2];
  fVar19 = param_3;
  fStack000000000000002c = param_1;
  fVar12 = param_2;
  fVar6 = (float)FUN_060fde38(param_5,0);
  fStack0000000000000024 = fVar19;
  fVar18 = fVar12;
  lVar2 = FUN_060ed7ac();
  if (lVar2 != 0) {
    fVar7 = (float)FUN_06101d4c(lVar2,0);
    lVar2 = FUN_060ed7ac();
    if (lVar2 != 0) {
      FUN_06101d4c(lVar2,0);
      lVar2 = FUN_060ed7ac();
      if (lVar2 != 0) {
        FUN_06101d4c(lVar2,0);
        fVar20 = DAT_011b06e4;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          lVar2 = 0;
          uVar5 = 0;
          uVar13 = NEON_fmov(0x3f800000,4);
          fVar8 = SQRT(unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8);
          in_stack_00000080 = in_stack_00000080 + -0.5;
          fVar21 = 0.0;
          fVar6 = param_4 - fVar6;
          fVar12 = fStack000000000000002c - fVar12;
          fVar15 = fStack0000000000000028 - fStack0000000000000024;
          do {
            fVar14 = (float)unaff_x20[2];
            fVar11 = (float)unaff_x20[1];
            fVar9 = (float)FUN_05304df8(*unaff_x20,fVar11,fVar14,
                                        in_stack_00000070 + in_stack_00000080 * fVar8 * unaff_s12,
                                        in_stack_00000038 + in_stack_00000080 * fVar8 * param_2,
                                        in_stack_00000030._4_4_ +
                                        in_stack_00000080 * fVar8 * param_3);
            lVar3 = *(long *)(unaff_x19 + 0x68);
            if (lVar3 == 0) goto LAB_05304c5c;
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_05304c58;
            *(ulong *)(lVar3 + lVar2 + 0x20) =
                 CONCAT44(((float)((ulong)uVar13 >> 0x20) / fVar18) * fVar11,
                          ((float)uVar13 / fVar7) * fVar9);
            *(float *)(lVar3 + lVar2 + 0x28) = (1.0 / fVar19) * fVar14;
            lVar3 = *(long *)(unaff_x19 + 0x68);
            if (lVar3 == 0) goto LAB_05304c5c;
            if (DAT_06bb42bf == '\0') {
              FUN_02f08768();
              DAT_06bb42bf = '\x01';
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar15 = fVar14 - fVar15;
            fVar6 = fVar9 - fVar6;
            fVar12 = fVar11 - fVar12;
            fVar16 = fVar15 * fVar15 + fVar6 * fVar6 + fVar12 * fVar12;
            fVar17 = SQRT(fVar16);
            if (fVar17 <= fVar20) {
              if (DAT_06bb42c1 == '\0') {
                FUN_02f08768();
                DAT_06bb42c1 = '\x01';
              }
              pfVar4 = *(float **)(*unaff_x22 + 0xb8);
              fVar6 = *pfVar4;
              fVar12 = pfVar4[1];
              fVar15 = pfVar4[2];
            }
            else {
              fVar6 = fVar6 / fVar17;
              fVar12 = fVar12 / fVar17;
              fVar15 = fVar15 / fVar17;
            }
            uVar10 = FUN_060df954(fVar6,0);
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_05304c58;
            lVar3 = lVar3 + lVar2;
            *(undefined4 *)(lVar3 + 0x2c) = uVar10;
            *(float *)(lVar3 + 0x30) = fVar12;
            *(float *)(lVar3 + 0x34) = fVar15;
            *(float *)(lVar3 + 0x38) = fVar16;
            if (uVar5 != 0) {
              if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
                FUN_02f08768();
                *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
              }
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              fVar21 = fVar21 + fVar17;
            }
            uVar5 = uVar5 + 1;
            lVar2 = lVar2 + 0x20;
            fVar6 = fVar9;
            fVar12 = fVar11;
            fVar15 = fVar14;
          } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar3 = *(long *)(unaff_x19 + 0x68);
            lVar2 = 0x5c;
            uVar5 = 1;
            do {
              if (lVar3 == 0) goto LAB_05304c5c;
              if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) ||
                 (*(uint *)(lVar3 + 0x18) <= uVar5)) {
LAB_05304c58:
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              lVar3 = lVar3 + lVar2;
              fVar18 = *(float *)(lVar3 + -0x38);
              fVar12 = *(float *)(lVar3 + -0x34);
              fVar19 = *(float *)(lVar3 + -0x3c);
              fVar6 = *(float *)(lVar3 + -0x1c);
              fVar7 = *(float *)(lVar3 + -0x18);
              fVar20 = *(float *)(lVar3 + -0x14);
              if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
                FUN_02f08768();
                *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
              }
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              lVar3 = *(long *)(unaff_x19 + 0x68);
              if (lVar3 == 0) goto LAB_05304c5c;
              if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) ||
                 (*(uint *)(lVar3 + 0x18) <= uVar5)) goto LAB_05304c58;
              fVar19 = fVar19 - fVar6;
              fVar18 = fVar18 - fVar7;
              pfVar4 = (float *)(lVar3 + lVar2);
              fVar12 = fVar12 - fVar20;
              iVar1 = *(int *)(unaff_x19 + 0x50);
              uVar5 = uVar5 + 1;
              lVar2 = lVar2 + 0x20;
              *pfVar4 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar12 * fVar12) / fVar21 +
                        pfVar4[-8];
            } while ((long)uVar5 < (long)iVar1);
          }
        }
        return;
      }
    }
  }
LAB_05304c5c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


