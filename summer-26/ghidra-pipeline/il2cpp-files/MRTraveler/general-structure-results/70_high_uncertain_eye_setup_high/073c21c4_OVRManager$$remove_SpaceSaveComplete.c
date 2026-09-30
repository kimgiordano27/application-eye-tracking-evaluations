/*
FUNCTION_NAME: OVRManager$$remove_SpaceSaveComplete
ENTRY_POINT: 073c21c4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceSaveComplete
               (float param_1,float param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  long *unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float fVar14;
  float unaff_s9;
  float fVar15;
  float unaff_s10;
  float unaff_s12;
  float fVar16;
  float unaff_s13;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  
  fStack0000000000000024 = param_1;
  fStack0000000000000028 = param_2;
  fStack000000000000003c = (float)FUN_085e987c(param_4,0);
  fVar6 = *unaff_x21;
  fVar12 = unaff_x21[1];
  fStack0000000000000034 = unaff_x21[2];
  fVar11 = param_2;
  fStack000000000000001c = param_3;
  fVar7 = (float)FUN_085e987c();
  fVar10 = fVar11;
  fVar14 = param_3;
  lVar2 = FUN_085dbb5c();
  if (lVar2 != 0) {
    fVar8 = (float)FUN_085ecd7c(lVar2,0);
    lVar2 = FUN_085dbb5c();
    if (lVar2 != 0) {
      FUN_085ecd7c(lVar2,0);
      lVar2 = FUN_085dbb5c();
      if (lVar2 != 0) {
        FUN_085ecd7c(lVar2,0);
        fVar1 = DAT_018b0528;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack0000000000000040 = 0.0;
          param_3 = fStack0000000000000034 - param_3;
          fVar9 = unaff_s12 + -0.5;
          fStack0000000000000034 = 1.0 / fVar10;
          fVar10 = SQRT(unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s13 * unaff_s13);
          fStack000000000000003c = unaff_s9 + fVar9 * fVar10 * fStack000000000000003c;
          uVar5 = 0;
          lVar2 = 0x38;
          fVar16 = fStack0000000000000028 + fVar9 * fVar10 * param_2;
          fVar9 = fStack0000000000000024 + fVar9 * fVar10 * fStack000000000000001c;
          fVar10 = fVar6 - fVar7;
          fVar11 = fVar12 - fVar11;
          do {
            fVar7 = unaff_x21[1];
            fVar12 = unaff_x21[2];
            fVar6 = (float)FUN_073c2760(*unaff_x21,fVar7,fVar12,fStack000000000000003c,fVar16,fVar9)
            ;
            lVar3 = *unaff_x20;
            if (lVar3 == 0) goto LAB_073c25c4;
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_073c25c0;
            lVar3 = lVar3 + lVar2;
            *(float *)(lVar3 + -0x10) = (1.0 / fVar14) * fVar12;
            *(float *)(lVar3 + -0x18) = (1.0 / fVar8) * fVar6;
            *(float *)(lVar3 + -0x14) = fStack0000000000000034 * fVar7;
            lVar3 = *unaff_x20;
            if (lVar3 == 0) goto LAB_073c25c4;
            if (DAT_094100b4 == '\0') {
              FUN_03c8f898();
              DAT_094100b4 = '\x01';
            }
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            fVar10 = fVar6 - fVar10;
            fVar11 = fVar7 - fVar11;
            param_3 = fVar12 - param_3;
            fVar15 = SQRT(param_3 * param_3 + fVar10 * fVar10 + fVar11 * fVar11);
            fVar13 = fVar1;
            if (fVar15 <= fVar1) {
              if (DAT_0940fff5 == '\0') {
                FUN_03c8f898(PTR_DAT_08e68e18);
                DAT_0940fff5 = '\x01';
              }
              pfVar4 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
              fVar10 = *pfVar4;
              fVar11 = pfVar4[1];
              param_3 = pfVar4[2];
            }
            else {
              fVar10 = fVar10 / fVar15;
              fVar11 = fVar11 / fVar15;
              param_3 = param_3 / fVar15;
            }
            fVar10 = (float)FUN_085d297c(fVar10,0);
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_073c25c0;
            pfVar4 = (float *)(lVar3 + lVar2);
            pfVar4[-3] = fVar10;
            pfVar4[-2] = fVar11;
            pfVar4[-1] = param_3;
            *pfVar4 = fVar13;
            if (lVar2 != 0x38) {
              if (*(char *)(unaff_x24 + 0xb5) == '\0') {
                FUN_03c8f898();
                *(undefined1 *)(unaff_x24 + 0xb5) = 1;
              }
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              fStack0000000000000040 = fStack0000000000000040 + fVar15;
            }
            uVar5 = uVar5 + 1;
            lVar2 = lVar2 + 0x20;
            fVar10 = fVar6;
            fVar11 = fVar7;
            param_3 = fVar12;
          } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar3 = *unaff_x20;
            lVar2 = 0x5c;
            uVar5 = 1;
            do {
              if (lVar3 == 0) goto LAB_073c25c4;
              if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) ||
                 (*(uint *)(lVar3 + 0x18) <= uVar5)) {
LAB_073c25c0:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              lVar3 = lVar3 + lVar2;
              fVar10 = *(float *)(lVar3 + -0x38);
              fVar14 = *(float *)(lVar3 + -0x34);
              fVar11 = *(float *)(lVar3 + -0x3c);
              fVar12 = *(float *)(lVar3 + -0x1c);
              fVar7 = *(float *)(lVar3 + -0x18);
              fVar6 = *(float *)(lVar3 + -0x14);
              if (*(char *)(unaff_x24 + 0xb5) == '\0') {
                FUN_03c8f898();
                *(undefined1 *)(unaff_x24 + 0xb5) = 1;
              }
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              lVar3 = *unaff_x20;
              if (lVar3 == 0) goto LAB_073c25c4;
              if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) ||
                 (*(uint *)(lVar3 + 0x18) <= uVar5)) goto LAB_073c25c0;
              fVar11 = fVar11 - fVar12;
              fVar10 = fVar10 - fVar7;
              fVar14 = fVar14 - fVar6;
              *(float *)(lVar3 + lVar2) =
                   SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar14 * fVar14) /
                   fStack0000000000000040 + ((float *)(lVar3 + lVar2))[-8];
              uVar5 = uVar5 + 1;
              lVar2 = lVar2 + 0x20;
            } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x50));
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


