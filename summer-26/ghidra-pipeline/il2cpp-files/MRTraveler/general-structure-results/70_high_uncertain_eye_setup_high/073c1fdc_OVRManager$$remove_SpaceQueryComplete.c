/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 073c1fdc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceQueryComplete(ulong param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  float *unaff_x21;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  fStack0000000000000044 = param_2;
  fStack0000000000000048 = param_3;
  fStack000000000000004c = param_4;
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e78410);
    FUN_03c8f898(PTR_DAT_08eb1ba8);
    *(undefined1 *)(unaff_x20 + 0x618) = 1;
  }
  puVar2 = PTR_DAT_08e78410;
  plVar6 = (long *)(unaff_x19 + 0x68);
  if ((*plVar6 == 0) || (*(int *)(unaff_x19 + 0x50) != *(int *)(*plVar6 + 0x18))) {
    lVar3 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08eb1ba8);
    *plVar6 = lVar3;
    thunk_FUN_03d233cc(plVar6,lVar3);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar8 = (float)FUN_085e987c();
  if (DAT_0940fefb == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fefb = '\x01';
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  fVar17 = *(float *)(lVar3 + 0x18);
  fVar22 = *(float *)(lVar3 + 0x1c);
  fVar21 = *(float *)(lVar3 + 0x20);
  fVar8 = param_4 * fVar21 + fVar8 * fVar17 + param_3 * fVar22;
  fVar8 = powf(1.0 - fVar8 * fVar8,-0.25);
  fVar16 = *unaff_x21;
  fVar19 = unaff_x21[1];
  fVar20 = unaff_x21[2];
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  fVar16 = fStack0000000000000044 - fVar16;
  fVar19 = fStack0000000000000048 - fVar19;
  fVar14 = **(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8);
  fVar9 = fVar21 * fVar21 + fVar17 * fVar17 + fVar22 * fVar22;
  fVar20 = fStack000000000000004c - fVar20;
  if (fVar14 <= fVar9) {
    fVar12 = fVar20 * fVar21 + fVar16 * fVar17 + fVar19 * fVar22;
    fVar14 = (fVar17 * fVar12) / fVar9;
    fVar16 = fVar16 - fVar14;
    fVar19 = fVar19 - (fVar22 * fVar12) / fVar9;
    fVar20 = fVar20 - (fVar21 * fVar12) / fVar9;
  }
  if (DAT_094100b5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  puVar2 = PTR_DAT_08e6a6b8;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar18 = *unaff_x21;
  fVar13 = unaff_x21[1];
  fStack0000000000000024 = unaff_x21[2];
  fVar17 = fVar13;
  fStack000000000000003c = (float)FUN_085e987c();
  fVar12 = *unaff_x21;
  fVar15 = unaff_x21[1];
  fStack0000000000000034 = unaff_x21[2];
  fVar21 = fVar17;
  fStack000000000000001c = fVar14;
  fVar10 = (float)FUN_085e987c();
  fVar22 = fVar21;
  fVar9 = fVar14;
  lVar3 = FUN_085dbb5c();
  if (lVar3 != 0) {
    fVar11 = (float)FUN_085ecd7c(lVar3,0);
    lVar3 = FUN_085dbb5c();
    if (lVar3 != 0) {
      FUN_085ecd7c(lVar3,0);
      lVar3 = FUN_085dbb5c();
      if (lVar3 != 0) {
        FUN_085ecd7c(lVar3,0);
        fVar1 = DAT_018b0528;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack0000000000000040 = 0.0;
          fVar14 = fStack0000000000000034 - fVar14;
          fVar8 = fVar8 + -0.5;
          fStack0000000000000034 = 1.0 / fVar22;
          fVar20 = SQRT(fVar16 * fVar16 + fVar19 * fVar19 + fVar20 * fVar20);
          fStack000000000000003c = fVar18 + fVar8 * fVar20 * fStack000000000000003c;
          uVar7 = 0;
          lVar3 = 0x38;
          fVar22 = fStack0000000000000024 + fVar8 * fVar20 * fStack000000000000001c;
          fVar16 = fVar12 - fVar10;
          fVar19 = fVar15 - fVar21;
          do {
            fVar12 = unaff_x21[1];
            fVar10 = unaff_x21[2];
            fVar21 = (float)FUN_073c2760(*unaff_x21,fVar12,fVar10,fStack000000000000003c,
                                         fVar13 + fVar8 * fVar20 * fVar17,fVar22);
            lVar4 = *plVar6;
            if (lVar4 == 0) goto LAB_073c25c4;
            if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_073c25c0;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + -0x10) = (1.0 / fVar9) * fVar10;
            *(float *)(lVar4 + -0x18) = (1.0 / fVar11) * fVar21;
            *(float *)(lVar4 + -0x14) = fStack0000000000000034 * fVar12;
            lVar4 = *plVar6;
            if (lVar4 == 0) goto LAB_073c25c4;
            if (DAT_094100b4 == '\0') {
              FUN_03c8f898(puVar2);
              DAT_094100b4 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            fVar16 = fVar21 - fVar16;
            fVar19 = fVar12 - fVar19;
            fVar14 = fVar10 - fVar14;
            fVar18 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar19 * fVar19);
            fVar15 = fVar1;
            if (fVar18 <= fVar1) {
              if (DAT_0940fff5 == '\0') {
                FUN_03c8f898(PTR_DAT_08e68e18);
                DAT_0940fff5 = '\x01';
              }
              pfVar5 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
              fVar16 = *pfVar5;
              fVar19 = pfVar5[1];
              fVar14 = pfVar5[2];
            }
            else {
              fVar16 = fVar16 / fVar18;
              fVar19 = fVar19 / fVar18;
              fVar14 = fVar14 / fVar18;
            }
            fVar16 = (float)FUN_085d297c(fVar16,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_073c25c0;
            pfVar5 = (float *)(lVar4 + lVar3);
            pfVar5[-3] = fVar16;
            pfVar5[-2] = fVar19;
            pfVar5[-1] = fVar14;
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
            uVar7 = uVar7 + 1;
            lVar3 = lVar3 + 0x20;
            fVar16 = fVar21;
            fVar19 = fVar12;
            fVar14 = fVar10;
          } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar4 = *plVar6;
            lVar3 = 0x5c;
            uVar7 = 1;
            do {
              if (lVar4 == 0) goto LAB_073c25c4;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar7)) {
LAB_073c25c0:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              lVar4 = lVar4 + lVar3;
              fVar16 = *(float *)(lVar4 + -0x38);
              fVar17 = *(float *)(lVar4 + -0x34);
              fVar8 = *(float *)(lVar4 + -0x3c);
              fVar21 = *(float *)(lVar4 + -0x1c);
              fVar20 = *(float *)(lVar4 + -0x18);
              fVar19 = *(float *)(lVar4 + -0x14);
              if (DAT_094100b5 == '\0') {
                FUN_03c8f898(puVar2);
                DAT_094100b5 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              lVar4 = *plVar6;
              if (lVar4 == 0) goto LAB_073c25c4;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar7)) goto LAB_073c25c0;
              fVar8 = fVar8 - fVar21;
              fVar16 = fVar16 - fVar20;
              fVar17 = fVar17 - fVar19;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar8 * fVar8 + fVar16 * fVar16 + fVar17 * fVar17) / fStack0000000000000040
                   + ((float *)(lVar4 + lVar3))[-8];
              uVar7 = uVar7 + 1;
              lVar3 = lVar3 + 0x20;
            } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x50));
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


