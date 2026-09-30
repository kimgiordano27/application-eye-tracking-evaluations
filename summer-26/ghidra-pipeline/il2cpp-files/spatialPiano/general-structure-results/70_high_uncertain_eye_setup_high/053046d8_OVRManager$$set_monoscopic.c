/*
FUNCTION_NAME: OVRManager$$set_monoscopic
ENTRY_POINT: 053046d8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_monoscopic(undefined1 param_1 [16],float param_2,float param_3)

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
  long unaff_x21;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
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
  float fVar29;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  *(undefined1 *)(unaff_x21 + 0x127) = 1;
  puVar3 = PTR_DAT_067c9790;
  if ((*(long *)(unaff_x19 + 0x68) == 0) ||
     (*(int *)(unaff_x19 + 0x50) != *(int *)(*(long *)(unaff_x19 + 0x68) + 0x18))) {
    uVar5 = FUN_02f0880c(*(undefined8 *)System_Predicate<int>_TypeInfo);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar5;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar10 = (float)FUN_060fde38();
  if (DAT_06bb42c4 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c4 = '\x01';
  }
  puVar3 = PTR_DAT_067c8f78;
  lVar6 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
  fVar28 = *(float *)(lVar6 + 0x18);
  fVar27 = *(float *)(lVar6 + 0x1c);
  fVar24 = *(float *)(lVar6 + 0x20);
  fVar10 = param_3 * fVar24 + fVar10 * fVar28 + param_2 * fVar27;
  fVar10 = powf(1.0 - fVar10 * fVar10,-0.25);
  fVar21 = *unaff_x20;
  fVar23 = unaff_x20[1];
  fVar25 = unaff_x20[2];
  if (DAT_06bb8c34 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8c34 = '\x01';
  }
  fStack0000000000000068 = fStack0000000000000068 - fVar23;
  in_stack_00000060._4_4_ = in_stack_00000060._4_4_ - fVar21;
  fStack000000000000006c = fStack000000000000006c - fVar25;
  fVar21 = fVar24 * fVar24 + fVar28 * fVar28 + fVar27 * fVar27;
  if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar21) {
    fVar23 = fStack000000000000006c * fVar24 +
             in_stack_00000060._4_4_ * fVar28 + fStack0000000000000068 * fVar27;
    in_stack_00000060._4_4_ = in_stack_00000060._4_4_ - (fVar28 * fVar23) / fVar21;
    fStack0000000000000068 = fStack0000000000000068 - (fVar27 * fVar23) / fVar21;
    fStack000000000000006c = fStack000000000000006c - (fVar24 * fVar23) / fVar21;
  }
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  puVar4 = PTR_DAT_067c8f80;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar16 = *unaff_x20;
  fVar17 = unaff_x20[1];
  fStack0000000000000034 = unaff_x20[2];
  fVar21 = fVar17;
  fVar27 = fVar16;
  fVar28 = (float)FUN_060fde38();
  fVar19 = *unaff_x20;
  fStack000000000000002c = unaff_x20[1];
  fVar11 = unaff_x20[2];
  fVar23 = fVar21;
  fVar25 = fVar27;
  fVar12 = (float)FUN_060fde38();
  fStack0000000000000024 = fVar23;
  fVar24 = fVar25;
  lVar6 = FUN_060ed7ac();
  if (lVar6 != 0) {
    fVar13 = (float)FUN_06101d4c(lVar6,0);
    lVar6 = FUN_060ed7ac();
    if (lVar6 != 0) {
      FUN_06101d4c(lVar6,0);
      lVar6 = FUN_060ed7ac();
      if (lVar6 != 0) {
        FUN_06101d4c(lVar6,0);
        fVar2 = DAT_011b06e4;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          lVar6 = 0;
          uVar9 = 0;
          uVar5 = NEON_fmov(0x3f800000,4);
          fVar14 = SQRT(in_stack_00000060._4_4_ * in_stack_00000060._4_4_ +
                        fStack0000000000000068 * fStack0000000000000068 +
                        fStack000000000000006c * fStack000000000000006c);
          fVar10 = fVar10 + -0.5;
          fVar26 = fStack0000000000000034 + fVar10 * fVar14 * fVar21;
          fVar29 = 0.0;
          fVar21 = fVar19 - fVar12;
          fVar25 = fStack000000000000002c - fVar25;
          fVar11 = fVar11 - fStack0000000000000024;
          do {
            fVar18 = unaff_x20[2];
            fVar19 = unaff_x20[1];
            fVar12 = (float)FUN_05304df8(*unaff_x20,fVar19,fVar18,fVar16 + fVar10 * fVar14 * fVar28,
                                         fVar17 + fVar10 * fVar14 * fVar27,fVar26);
            lVar7 = *(long *)(unaff_x19 + 0x68);
            if (lVar7 == 0) goto LAB_05304c5c;
            if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_05304c58;
            *(ulong *)(lVar7 + lVar6 + 0x20) =
                 CONCAT44(((float)((ulong)uVar5 >> 0x20) / fVar24) * fVar19,
                          ((float)uVar5 / fVar13) * fVar12);
            *(float *)(lVar7 + lVar6 + 0x28) = (1.0 / fVar23) * fVar18;
            lVar7 = *(long *)(unaff_x19 + 0x68);
            if (lVar7 == 0) goto LAB_05304c5c;
            if (DAT_06bb42bf == '\0') {
              FUN_02f08768(puVar4);
              DAT_06bb42bf = '\x01';
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar11 = fVar18 - fVar11;
            fVar21 = fVar12 - fVar21;
            fVar25 = fVar19 - fVar25;
            fVar20 = fVar11 * fVar11 + fVar21 * fVar21 + fVar25 * fVar25;
            fVar22 = SQRT(fVar20);
            if (fVar22 <= fVar2) {
              if (DAT_06bb42c1 == '\0') {
                FUN_02f08768(puVar3);
                DAT_06bb42c1 = '\x01';
              }
              pfVar8 = *(float **)(*(long *)puVar3 + 0xb8);
              fVar21 = *pfVar8;
              fVar25 = pfVar8[1];
              fVar11 = pfVar8[2];
            }
            else {
              fVar21 = fVar21 / fVar22;
              fVar25 = fVar25 / fVar22;
              fVar11 = fVar11 / fVar22;
            }
            uVar15 = FUN_060df954(fVar21,0);
            if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_05304c58;
            lVar7 = lVar7 + lVar6;
            *(undefined4 *)(lVar7 + 0x2c) = uVar15;
            *(float *)(lVar7 + 0x30) = fVar25;
            *(float *)(lVar7 + 0x34) = fVar11;
            *(float *)(lVar7 + 0x38) = fVar20;
            if (uVar9 != 0) {
              if (DAT_06bb42c7 == '\0') {
                FUN_02f08768(puVar4);
                DAT_06bb42c7 = '\x01';
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              fVar29 = fVar29 + fVar22;
            }
            uVar9 = uVar9 + 1;
            lVar6 = lVar6 + 0x20;
            fVar21 = fVar12;
            fVar25 = fVar19;
            fVar11 = fVar18;
          } while ((long)uVar9 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar7 = *(long *)(unaff_x19 + 0x68);
            lVar6 = 0x5c;
            uVar9 = 1;
            do {
              if (lVar7 == 0) goto LAB_05304c5c;
              if (((ulong)*(uint *)(lVar7 + 0x18) <= uVar9 - 1) ||
                 (*(uint *)(lVar7 + 0x18) <= uVar9)) {
LAB_05304c58:
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              lVar7 = lVar7 + lVar6;
              fVar21 = *(float *)(lVar7 + -0x38);
              fVar23 = *(float *)(lVar7 + -0x34);
              fVar10 = *(float *)(lVar7 + -0x3c);
              fVar24 = *(float *)(lVar7 + -0x1c);
              fVar25 = *(float *)(lVar7 + -0x18);
              fVar27 = *(float *)(lVar7 + -0x14);
              if (DAT_06bb42c7 == '\0') {
                FUN_02f08768(puVar4);
                DAT_06bb42c7 = '\x01';
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              lVar7 = *(long *)(unaff_x19 + 0x68);
              if (lVar7 == 0) goto LAB_05304c5c;
              if (((ulong)*(uint *)(lVar7 + 0x18) <= uVar9 - 1) ||
                 (*(uint *)(lVar7 + 0x18) <= uVar9)) goto LAB_05304c58;
              fVar10 = fVar10 - fVar24;
              fVar21 = fVar21 - fVar25;
              pfVar8 = (float *)(lVar7 + lVar6);
              fVar23 = fVar23 - fVar27;
              iVar1 = *(int *)(unaff_x19 + 0x50);
              uVar9 = uVar9 + 1;
              lVar6 = lVar6 + 0x20;
              *pfVar8 = SQRT(fVar10 * fVar10 + fVar21 * fVar21 + fVar23 * fVar23) / fVar29 +
                        pfVar8[-8];
            } while ((long)uVar9 < (long)iVar1);
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


