/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 051a0a48
PROGRAM: hellodot-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFoveatedRendering(long param_1)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s11;
  float fVar19;
  float unaff_s12;
  float fVar20;
  float fVar21;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  lVar3 = *(long *)(param_1 + 0xb8);
  fVar15 = *(float *)(lVar3 + 0x18);
  fVar21 = *(float *)(lVar3 + 0x1c);
  fVar20 = *(float *)(lVar3 + 0x20);
  fVar7 = unaff_s12 * fVar20 + unaff_s8 * fVar15 + unaff_s11 * fVar21;
  fVar7 = powf(1.0 - fVar7 * fVar7,-0.25);
  fVar14 = *unaff_x20;
  fVar18 = unaff_x20[1];
  fVar19 = unaff_x20[2];
  if (DAT_06a68533 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a68533 = '\x01';
  }
  fStack0000000000000044 = fStack0000000000000044 - fVar14;
  fStack0000000000000048 = fStack0000000000000048 - fVar18;
  fVar14 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8);
  fVar18 = fVar20 * fVar20 + fVar15 * fVar15 + fVar21 * fVar21;
  fStack000000000000004c = fStack000000000000004c - fVar19;
  if (fVar14 <= fVar18) {
    fVar19 = fStack000000000000004c * fVar20 +
             fStack0000000000000044 * fVar15 + fStack0000000000000048 * fVar21;
    fVar14 = (fVar15 * fVar19) / fVar18;
    fStack0000000000000044 = fStack0000000000000044 - fVar14;
    fStack0000000000000048 = fStack0000000000000048 - (fVar21 * fVar19) / fVar18;
    fStack000000000000004c = fStack000000000000004c - (fVar20 * fVar19) / fVar18;
  }
  if (DAT_06a67230 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a67230 = '\x01';
  }
  puVar2 = PTR_DAT_065c8d28;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar16 = *unaff_x20;
  fVar10 = unaff_x20[1];
  fStack0000000000000024 = unaff_x20[2];
  fVar15 = fVar10;
  fStack000000000000003c = (float)FUN_05f0015c();
  fVar21 = *unaff_x20;
  fVar12 = unaff_x20[1];
  fStack0000000000000034 = unaff_x20[2];
  fVar18 = fVar15;
  fStack000000000000001c = fVar14;
  fVar8 = (float)FUN_05f0015c();
  fVar19 = fVar18;
  fVar20 = fVar14;
  lVar3 = FUN_05ef2cb4();
  if (lVar3 != 0) {
    fVar9 = (float)FUN_05f04738(lVar3,0);
    lVar3 = FUN_05ef2cb4();
    if (lVar3 != 0) {
      FUN_05f04738(lVar3,0);
      lVar3 = FUN_05ef2cb4();
      if (lVar3 != 0) {
        FUN_05f04738(lVar3,0);
        fVar1 = DAT_013ddfb8;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack0000000000000040 = 0.0;
          fVar14 = fStack0000000000000034 - fVar14;
          fVar7 = fVar7 + -0.5;
          fStack0000000000000034 = 1.0 / fVar19;
          fVar11 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                        fStack0000000000000048 * fStack0000000000000048 +
                        fStack000000000000004c * fStack000000000000004c);
          fStack000000000000003c = fVar16 + fVar7 * fVar11 * fStack000000000000003c;
          uVar6 = 0;
          lVar3 = 0x38;
          fVar16 = fStack0000000000000024 + fVar7 * fVar11 * fStack000000000000001c;
          fVar19 = fVar21 - fVar8;
          fVar18 = fVar12 - fVar18;
          do {
            fVar8 = unaff_x20[1];
            fVar12 = unaff_x20[2];
            fVar21 = (float)FUN_051a10fc(*unaff_x20,fVar8,fVar12,fStack000000000000003c,
                                         fVar10 + fVar7 * fVar11 * fVar15,fVar16);
            lVar4 = *(long *)(unaff_x19 + 0x68);
            if (lVar4 == 0) goto LAB_051a0f60;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_051a0f5c;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + -0x10) = (1.0 / fVar20) * fVar12;
            *(float *)(lVar4 + -0x18) = (1.0 / fVar9) * fVar21;
            *(float *)(lVar4 + -0x14) = fStack0000000000000034 * fVar8;
            lVar4 = *(long *)(unaff_x19 + 0x68);
            if (lVar4 == 0) goto LAB_051a0f60;
            if (DAT_06a6722e == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
              DAT_06a6722e = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            fVar19 = fVar21 - fVar19;
            fVar18 = fVar8 - fVar18;
            fVar14 = fVar12 - fVar14;
            fVar17 = SQRT(fVar14 * fVar14 + fVar19 * fVar19 + fVar18 * fVar18);
            fVar13 = fVar1;
            if (fVar17 <= fVar1) {
              if (DAT_06a67148 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum();
                DAT_06a67148 = '\x01';
              }
              pfVar5 = *(float **)(*unaff_x22 + 0xb8);
              fVar19 = *pfVar5;
              fVar18 = pfVar5[1];
              fVar14 = pfVar5[2];
            }
            else {
              fVar19 = fVar19 / fVar17;
              fVar18 = fVar18 / fVar17;
              fVar14 = fVar14 / fVar17;
            }
            fVar19 = (float)FUN_05eea074(fVar19,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_051a0f5c;
            pfVar5 = (float *)(lVar4 + lVar3);
            pfVar5[-3] = fVar19;
            pfVar5[-2] = fVar18;
            pfVar5[-1] = fVar14;
            *pfVar5 = fVar13;
            if (lVar3 != 0x38) {
              if (DAT_06a67230 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
                DAT_06a67230 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              fStack0000000000000040 = fStack0000000000000040 + fVar17;
            }
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + 0x20;
            fVar19 = fVar21;
            fVar18 = fVar8;
            fVar14 = fVar12;
          } while ((long)uVar6 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar4 = *(long *)(unaff_x19 + 0x68);
            lVar3 = 0x5c;
            uVar6 = 1;
            do {
              if (lVar4 == 0) goto LAB_051a0f60;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar6)) {
LAB_051a0f5c:
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              lVar4 = lVar4 + lVar3;
              fVar14 = *(float *)(lVar4 + -0x38);
              fVar15 = *(float *)(lVar4 + -0x34);
              fVar7 = *(float *)(lVar4 + -0x3c);
              fVar20 = *(float *)(lVar4 + -0x1c);
              fVar19 = *(float *)(lVar4 + -0x18);
              fVar18 = *(float *)(lVar4 + -0x14);
              if (DAT_06a67230 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
                DAT_06a67230 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              lVar4 = *(long *)(unaff_x19 + 0x68);
              if (lVar4 == 0) goto LAB_051a0f60;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar6)) goto LAB_051a0f5c;
              fVar7 = fVar7 - fVar20;
              fVar14 = fVar14 - fVar19;
              fVar15 = fVar15 - fVar18;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar7 * fVar7 + fVar14 * fVar14 + fVar15 * fVar15) / fStack0000000000000040
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
LAB_051a0f60:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


