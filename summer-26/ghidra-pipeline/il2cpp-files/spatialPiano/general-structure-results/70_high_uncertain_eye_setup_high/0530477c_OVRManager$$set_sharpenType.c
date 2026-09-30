/*
FUNCTION_NAME: OVRManager$$set_sharpenType
ENTRY_POINT: 0530477c
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


void OVRManager__set_sharpenType(float param_1,float param_2)

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
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_s11;
  float fVar25;
  float unaff_s13;
  float fVar26;
  float fVar27;
  float unaff_s14;
  float unaff_s15;
  float fVar28;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  fVar8 = unaff_s13 * unaff_s11 + param_1 + param_2;
  fVar8 = powf(1.0 - fVar8 * fVar8,-0.25);
  fVar22 = *unaff_x20;
  fVar24 = unaff_x20[1];
  fVar25 = unaff_x20[2];
  if (DAT_06bb8c34 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8c34 = '\x01';
  }
  fStack0000000000000068 = fStack0000000000000068 - fVar24;
  in_stack_00000060._4_4_ = in_stack_00000060._4_4_ - fVar22;
  fStack000000000000006c = fStack000000000000006c - fVar25;
  fVar22 = unaff_s11 * unaff_s11 + unaff_s15 * unaff_s15 + unaff_s14 * unaff_s14;
  if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar22) {
    fVar24 = fStack000000000000006c * unaff_s11 +
             in_stack_00000060._4_4_ * unaff_s15 + fStack0000000000000068 * unaff_s14;
    in_stack_00000060._4_4_ = in_stack_00000060._4_4_ - (unaff_s15 * fVar24) / fVar22;
    fStack0000000000000068 = fStack0000000000000068 - (unaff_s14 * fVar24) / fVar22;
    fStack000000000000006c = fStack000000000000006c - (unaff_s11 * fVar24) / fVar22;
  }
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  puVar3 = PTR_DAT_067c8f80;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar15 = *unaff_x20;
  fVar18 = unaff_x20[1];
  fStack0000000000000034 = unaff_x20[2];
  fVar22 = fVar18;
  fVar27 = fVar15;
  fVar9 = (float)FUN_060fde38();
  fVar20 = *unaff_x20;
  fStack000000000000002c = unaff_x20[1];
  fVar10 = unaff_x20[2];
  fVar24 = fVar22;
  fVar16 = fVar27;
  fVar11 = (float)FUN_060fde38();
  fStack0000000000000024 = fVar24;
  fVar25 = fVar16;
  lVar4 = FUN_060ed7ac();
  if (lVar4 != 0) {
    fVar12 = (float)FUN_06101d4c(lVar4,0);
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
          fVar13 = SQRT(in_stack_00000060._4_4_ * in_stack_00000060._4_4_ +
                        fStack0000000000000068 * fStack0000000000000068 +
                        fStack000000000000006c * fStack000000000000006c);
          fVar8 = fVar8 + -0.5;
          fVar26 = fStack0000000000000034 + fVar8 * fVar13 * fVar22;
          fVar28 = 0.0;
          fVar22 = fVar20 - fVar11;
          fVar16 = fStack000000000000002c - fVar16;
          fVar10 = fVar10 - fStack0000000000000024;
          do {
            fVar19 = unaff_x20[2];
            fVar20 = unaff_x20[1];
            fVar11 = (float)FUN_05304df8(*unaff_x20,fVar20,fVar19,fVar15 + fVar8 * fVar13 * fVar9,
                                         fVar18 + fVar8 * fVar13 * fVar27,fVar26);
            lVar5 = *(long *)(unaff_x19 + 0x68);
            if (lVar5 == 0) goto LAB_05304c5c;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_05304c58;
            *(ulong *)(lVar5 + lVar4 + 0x20) =
                 CONCAT44(((float)((ulong)uVar17 >> 0x20) / fVar25) * fVar20,
                          ((float)uVar17 / fVar12) * fVar11);
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
            fVar10 = fVar19 - fVar10;
            fVar22 = fVar11 - fVar22;
            fVar16 = fVar20 - fVar16;
            fVar21 = fVar10 * fVar10 + fVar22 * fVar22 + fVar16 * fVar16;
            fVar23 = SQRT(fVar21);
            if (fVar23 <= fVar2) {
              if (DAT_06bb42c1 == '\0') {
                FUN_02f08768();
                DAT_06bb42c1 = '\x01';
              }
              pfVar6 = *(float **)(*unaff_x22 + 0xb8);
              fVar22 = *pfVar6;
              fVar16 = pfVar6[1];
              fVar10 = pfVar6[2];
            }
            else {
              fVar22 = fVar22 / fVar23;
              fVar16 = fVar16 / fVar23;
              fVar10 = fVar10 / fVar23;
            }
            uVar14 = FUN_060df954(fVar22,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_05304c58;
            lVar5 = lVar5 + lVar4;
            *(undefined4 *)(lVar5 + 0x2c) = uVar14;
            *(float *)(lVar5 + 0x30) = fVar16;
            *(float *)(lVar5 + 0x34) = fVar10;
            *(float *)(lVar5 + 0x38) = fVar21;
            if (uVar7 != 0) {
              if (DAT_06bb42c7 == '\0') {
                FUN_02f08768(puVar3);
                DAT_06bb42c7 = '\x01';
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              fVar28 = fVar28 + fVar23;
            }
            uVar7 = uVar7 + 1;
            lVar4 = lVar4 + 0x20;
            fVar22 = fVar11;
            fVar16 = fVar20;
            fVar10 = fVar19;
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
              fVar22 = *(float *)(lVar5 + -0x38);
              fVar24 = *(float *)(lVar5 + -0x34);
              fVar8 = *(float *)(lVar5 + -0x3c);
              fVar25 = *(float *)(lVar5 + -0x1c);
              fVar16 = *(float *)(lVar5 + -0x18);
              fVar27 = *(float *)(lVar5 + -0x14);
              if (DAT_06bb42c7 == '\0') {
                FUN_02f08768(puVar3);
                DAT_06bb42c7 = '\x01';
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              lVar5 = *(long *)(unaff_x19 + 0x68);
              if (lVar5 == 0) goto LAB_05304c5c;
              if (((ulong)*(uint *)(lVar5 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar5 + 0x18) <= uVar7)) goto LAB_05304c58;
              fVar8 = fVar8 - fVar25;
              fVar22 = fVar22 - fVar16;
              pfVar6 = (float *)(lVar5 + lVar4);
              fVar24 = fVar24 - fVar27;
              iVar1 = *(int *)(unaff_x19 + 0x50);
              uVar7 = uVar7 + 1;
              lVar4 = lVar4 + 0x20;
              *pfVar6 = SQRT(fVar8 * fVar8 + fVar22 * fVar22 + fVar24 * fVar24) / fVar28 +
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


