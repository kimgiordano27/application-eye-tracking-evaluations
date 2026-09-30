/*
FUNCTION_NAME: OVRManager$$add_SpaceSaveComplete
ENTRY_POINT: 073c20d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceSaveComplete(float param_1,float param_2)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long *unaff_x20;
  float *unaff_x21;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s9;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_s14;
  float unaff_s15;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  fVar7 = powf(param_1,param_2);
  fVar16 = *unaff_x21;
  fVar19 = unaff_x21[1];
  fVar20 = unaff_x21[2];
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  fStack0000000000000044 = fStack0000000000000044 - fVar16;
  fStack0000000000000048 = fStack0000000000000048 - fVar19;
  fVar16 = **(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8);
  fVar19 = unaff_s14 * unaff_s14 + unaff_s9 * unaff_s9 + unaff_s15 * unaff_s15;
  fStack000000000000004c = fStack000000000000004c - fVar20;
  if (fVar16 <= fVar19) {
    fVar20 = fStack000000000000004c * unaff_s14 +
             fStack0000000000000044 * unaff_s9 + fStack0000000000000048 * unaff_s15;
    fVar16 = (unaff_s9 * fVar20) / fVar19;
    fStack0000000000000044 = fStack0000000000000044 - fVar16;
    fStack0000000000000048 = fStack0000000000000048 - (unaff_s15 * fVar20) / fVar19;
    fStack000000000000004c = fStack000000000000004c - (unaff_s14 * fVar20) / fVar19;
  }
  if (DAT_094100b5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  puVar2 = PTR_DAT_08e6a6b8;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar17 = *unaff_x21;
  fVar12 = unaff_x21[1];
  fStack0000000000000024 = unaff_x21[2];
  fVar19 = fVar12;
  fStack000000000000003c = (float)FUN_085e987c();
  fVar8 = *unaff_x21;
  fVar14 = unaff_x21[1];
  fStack0000000000000034 = unaff_x21[2];
  fVar20 = fVar19;
  fStack000000000000001c = fVar16;
  fVar9 = (float)FUN_085e987c();
  fVar11 = fVar20;
  fVar21 = fVar16;
  lVar3 = FUN_085dbb5c();
  if (lVar3 != 0) {
    fVar10 = (float)FUN_085ecd7c(lVar3,0);
    lVar3 = FUN_085dbb5c();
    if (lVar3 != 0) {
      FUN_085ecd7c(lVar3,0);
      lVar3 = FUN_085dbb5c();
      if (lVar3 != 0) {
        FUN_085ecd7c(lVar3,0);
        fVar1 = DAT_018b0528;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack0000000000000040 = 0.0;
          fVar16 = fStack0000000000000034 - fVar16;
          fVar7 = fVar7 + -0.5;
          fStack0000000000000034 = 1.0 / fVar11;
          fVar13 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                        fStack0000000000000048 * fStack0000000000000048 +
                        fStack000000000000004c * fStack000000000000004c);
          fStack000000000000003c = fVar17 + fVar7 * fVar13 * fStack000000000000003c;
          uVar6 = 0;
          lVar3 = 0x38;
          fVar17 = fStack0000000000000024 + fVar7 * fVar13 * fStack000000000000001c;
          fVar11 = fVar8 - fVar9;
          fVar20 = fVar14 - fVar20;
          do {
            fVar9 = unaff_x21[1];
            fVar14 = unaff_x21[2];
            fVar8 = (float)FUN_073c2760(*unaff_x21,fVar9,fVar14,fStack000000000000003c,
                                        fVar12 + fVar7 * fVar13 * fVar19,fVar17);
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto LAB_073c25c4;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_073c25c0;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + -0x10) = (1.0 / fVar21) * fVar14;
            *(float *)(lVar4 + -0x18) = (1.0 / fVar10) * fVar8;
            *(float *)(lVar4 + -0x14) = fStack0000000000000034 * fVar9;
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto LAB_073c25c4;
            if (DAT_094100b4 == '\0') {
              FUN_03c8f898(puVar2);
              DAT_094100b4 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            fVar11 = fVar8 - fVar11;
            fVar20 = fVar9 - fVar20;
            fVar16 = fVar14 - fVar16;
            fVar18 = SQRT(fVar16 * fVar16 + fVar11 * fVar11 + fVar20 * fVar20);
            fVar15 = fVar1;
            if (fVar18 <= fVar1) {
              if (DAT_0940fff5 == '\0') {
                FUN_03c8f898(PTR_DAT_08e68e18);
                DAT_0940fff5 = '\x01';
              }
              pfVar5 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
              fVar11 = *pfVar5;
              fVar20 = pfVar5[1];
              fVar16 = pfVar5[2];
            }
            else {
              fVar11 = fVar11 / fVar18;
              fVar20 = fVar20 / fVar18;
              fVar16 = fVar16 / fVar18;
            }
            fVar11 = (float)FUN_085d297c(fVar11,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_073c25c0;
            pfVar5 = (float *)(lVar4 + lVar3);
            pfVar5[-3] = fVar11;
            pfVar5[-2] = fVar20;
            pfVar5[-1] = fVar16;
            *pfVar5 = fVar15;
            if (lVar3 != 0x38) {
              if (DAT_094100b5 == '\0') {
                FUN_03c8f898(puVar2);
                DAT_094100b5 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              fStack0000000000000040 = fStack0000000000000040 + fVar18;
            }
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + 0x20;
            fVar11 = fVar8;
            fVar20 = fVar9;
            fVar16 = fVar14;
          } while ((long)uVar6 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar4 = *unaff_x20;
            lVar3 = 0x5c;
            uVar6 = 1;
            do {
              if (lVar4 == 0) goto LAB_073c25c4;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar6)) {
LAB_073c25c0:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              lVar4 = lVar4 + lVar3;
              fVar16 = *(float *)(lVar4 + -0x38);
              fVar19 = *(float *)(lVar4 + -0x34);
              fVar7 = *(float *)(lVar4 + -0x3c);
              fVar21 = *(float *)(lVar4 + -0x1c);
              fVar11 = *(float *)(lVar4 + -0x18);
              fVar20 = *(float *)(lVar4 + -0x14);
              if (DAT_094100b5 == '\0') {
                FUN_03c8f898(puVar2);
                DAT_094100b5 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              lVar4 = *unaff_x20;
              if (lVar4 == 0) goto LAB_073c25c4;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar6)) goto LAB_073c25c0;
              fVar7 = fVar7 - fVar21;
              fVar16 = fVar16 - fVar11;
              fVar19 = fVar19 - fVar20;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar7 * fVar7 + fVar16 * fVar16 + fVar19 * fVar19) / fStack0000000000000040
                   + ((float *)(lVar4 + lVar3))[-8];
              uVar6 = uVar6 + 1;
              lVar3 = lVar3 + 0x20;
            } while ((long)uVar6 < (long)*(int *)(unaff_x19 + 0x50));
          }
        }
        return;
      }
    }
  }
LAB_073c25c4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


