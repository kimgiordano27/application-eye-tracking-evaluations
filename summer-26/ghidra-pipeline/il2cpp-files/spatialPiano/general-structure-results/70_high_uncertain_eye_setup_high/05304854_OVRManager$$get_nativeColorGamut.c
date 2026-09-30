/*
FUNCTION_NAME: OVRManager$$get_nativeColorGamut
ENTRY_POINT: 05304854
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_nativeColorGamut(long param_1)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_s8;
  float fVar22;
  float fVar23;
  float unaff_s9;
  float fVar24;
  float unaff_s10;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float in_stack_00000080;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xf80));
  *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
  puVar3 = PTR_DAT_067c8f80;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar15 = *unaff_x20;
  fVar18 = unaff_x20[1];
  fStack0000000000000034 = unaff_x20[2];
  fVar13 = fVar18;
  fVar25 = fVar15;
  fVar8 = (float)FUN_060fde38();
  fVar20 = *unaff_x20;
  fStack000000000000002c = unaff_x20[1];
  fVar9 = unaff_x20[2];
  fVar24 = fVar13;
  fVar16 = fVar25;
  fVar10 = (float)FUN_060fde38();
  fStack0000000000000024 = fVar24;
  fVar23 = fVar16;
  lVar4 = FUN_060ed7ac();
  if (lVar4 != 0) {
    fVar11 = (float)FUN_06101d4c(lVar4,0);
    lVar4 = FUN_060ed7ac();
    if (lVar4 != 0) {
      FUN_06101d4c(lVar4,0);
      lVar4 = FUN_060ed7ac();
      if (lVar4 != 0) {
        FUN_06101d4c(lVar4,0);
        fVar2 = DAT_011b06e4;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          lVar4 = 0;
          uVar7 = 0;
          uVar17 = NEON_fmov(0x3f800000,4);
          fVar12 = SQRT(unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8);
          in_stack_00000080 = in_stack_00000080 + -0.5;
          fVar26 = fStack0000000000000034 + in_stack_00000080 * fVar12 * fVar13;
          fVar27 = 0.0;
          fVar13 = fVar20 - fVar10;
          fVar16 = fStack000000000000002c - fVar16;
          fVar9 = fVar9 - fStack0000000000000024;
          do {
            fVar19 = unaff_x20[2];
            fVar20 = unaff_x20[1];
            fVar10 = (float)FUN_05304df8(*unaff_x20,fVar20,fVar19,
                                         fVar15 + in_stack_00000080 * fVar12 * fVar8,
                                         fVar18 + in_stack_00000080 * fVar12 * fVar25,fVar26);
            lVar5 = *(long *)(unaff_x19 + 0x68);
            if (lVar5 == 0) goto LAB_05304c5c;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_05304c58;
            *(ulong *)(lVar5 + lVar4 + 0x20) =
                 CONCAT44(((float)((ulong)uVar17 >> 0x20) / fVar23) * fVar20,
                          ((float)uVar17 / fVar11) * fVar10);
            *(float *)(lVar5 + lVar4 + 0x28) = (1.0 / fVar24) * fVar19;
            lVar5 = *(long *)(unaff_x19 + 0x68);
            if (lVar5 == 0) goto LAB_05304c5c;
            if (DAT_06bb42bf == '\0') {
              FUN_02f08768(puVar3);
              DAT_06bb42bf = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar9 = fVar19 - fVar9;
            fVar13 = fVar10 - fVar13;
            fVar16 = fVar20 - fVar16;
            fVar21 = fVar9 * fVar9 + fVar13 * fVar13 + fVar16 * fVar16;
            fVar22 = SQRT(fVar21);
            if (fVar22 <= fVar2) {
              if (DAT_06bb42c1 == '\0') {
                FUN_02f08768();
                DAT_06bb42c1 = '\x01';
              }
              pfVar6 = *(float **)(*unaff_x22 + 0xb8);
              fVar13 = *pfVar6;
              fVar16 = pfVar6[1];
              fVar9 = pfVar6[2];
            }
            else {
              fVar13 = fVar13 / fVar22;
              fVar16 = fVar16 / fVar22;
              fVar9 = fVar9 / fVar22;
            }
            uVar14 = FUN_060df954(fVar13,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_05304c58;
            lVar5 = lVar5 + lVar4;
            *(undefined4 *)(lVar5 + 0x2c) = uVar14;
            *(float *)(lVar5 + 0x30) = fVar16;
            *(float *)(lVar5 + 0x34) = fVar9;
            *(float *)(lVar5 + 0x38) = fVar21;
            if (uVar7 != 0) {
              if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
                FUN_02f08768(puVar3);
                *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              fVar27 = fVar27 + fVar22;
            }
            uVar7 = uVar7 + 1;
            lVar4 = lVar4 + 0x20;
            fVar13 = fVar10;
            fVar16 = fVar20;
            fVar9 = fVar19;
          } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar5 = *(long *)(unaff_x19 + 0x68);
            lVar4 = 0x5c;
            uVar7 = 1;
            do {
              if (lVar5 == 0) goto LAB_05304c5c;
              if (((ulong)*(uint *)(lVar5 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar5 + 0x18) <= uVar7)) {
LAB_05304c58:
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              lVar5 = lVar5 + lVar4;
              fVar24 = *(float *)(lVar5 + -0x38);
              fVar23 = *(float *)(lVar5 + -0x34);
              fVar13 = *(float *)(lVar5 + -0x3c);
              fVar16 = *(float *)(lVar5 + -0x1c);
              fVar25 = *(float *)(lVar5 + -0x18);
              fVar8 = *(float *)(lVar5 + -0x14);
              if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
                FUN_02f08768(puVar3);
                *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              lVar5 = *(long *)(unaff_x19 + 0x68);
              if (lVar5 == 0) goto LAB_05304c5c;
              if (((ulong)*(uint *)(lVar5 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar5 + 0x18) <= uVar7)) goto LAB_05304c58;
              fVar13 = fVar13 - fVar16;
              fVar24 = fVar24 - fVar25;
              pfVar6 = (float *)(lVar5 + lVar4);
              fVar23 = fVar23 - fVar8;
              iVar1 = *(int *)(unaff_x19 + 0x50);
              uVar7 = uVar7 + 1;
              lVar4 = lVar4 + 0x20;
              *pfVar6 = SQRT(fVar13 * fVar13 + fVar24 * fVar24 + fVar23 * fVar23) / fVar27 +
                        pfVar6[-8];
            } while ((long)uVar7 < (long)iVar1);
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


