/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 051a09f0
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


void OVRManager__set_fixedFoveatedRenderingLevel
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x21;
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
  
  *(undefined8 *)(unaff_x19 + 0x68) = param_4;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar8 = (float)FUN_05f0015c();
  if (DAT_06a67312 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67312 = '\x01';
  }
  puVar3 = PTR_DAT_065c9850;
  lVar4 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  fVar16 = *(float *)(lVar4 + 0x18);
  fVar22 = *(float *)(lVar4 + 0x1c);
  fVar21 = *(float *)(lVar4 + 0x20);
  fVar8 = param_3 * fVar21 + fVar8 * fVar16 + param_2 * fVar22;
  fVar8 = powf(1.0 - fVar8 * fVar8,-0.25);
  fVar15 = *unaff_x20;
  fVar19 = unaff_x20[1];
  fVar20 = unaff_x20[2];
  if (DAT_06a68533 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a68533 = '\x01';
  }
  fStack0000000000000044 = fStack0000000000000044 - fVar15;
  fStack0000000000000048 = fStack0000000000000048 - fVar19;
  fVar15 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8);
  fVar19 = fVar21 * fVar21 + fVar16 * fVar16 + fVar22 * fVar22;
  fStack000000000000004c = fStack000000000000004c - fVar20;
  if (fVar15 <= fVar19) {
    fVar20 = fStack000000000000004c * fVar21 +
             fStack0000000000000044 * fVar16 + fStack0000000000000048 * fVar22;
    fVar15 = (fVar16 * fVar20) / fVar19;
    fStack0000000000000044 = fStack0000000000000044 - fVar15;
    fStack0000000000000048 = fStack0000000000000048 - (fVar22 * fVar20) / fVar19;
    fStack000000000000004c = fStack000000000000004c - (fVar21 * fVar20) / fVar19;
  }
  if (DAT_06a67230 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a67230 = '\x01';
  }
  puVar2 = PTR_DAT_065c8d28;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar17 = *unaff_x20;
  fVar11 = unaff_x20[1];
  fStack0000000000000024 = unaff_x20[2];
  fVar16 = fVar11;
  fStack000000000000003c = (float)FUN_05f0015c();
  fVar22 = *unaff_x20;
  fVar13 = unaff_x20[1];
  fStack0000000000000034 = unaff_x20[2];
  fVar19 = fVar16;
  fStack000000000000001c = fVar15;
  fVar9 = (float)FUN_05f0015c();
  fVar20 = fVar19;
  fVar21 = fVar15;
  lVar4 = FUN_05ef2cb4();
  if (lVar4 != 0) {
    fVar10 = (float)FUN_05f04738(lVar4,0);
    lVar4 = FUN_05ef2cb4();
    if (lVar4 != 0) {
      FUN_05f04738(lVar4,0);
      lVar4 = FUN_05ef2cb4();
      if (lVar4 != 0) {
        FUN_05f04738(lVar4,0);
        fVar1 = DAT_013ddfb8;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack0000000000000040 = 0.0;
          fVar15 = fStack0000000000000034 - fVar15;
          fVar8 = fVar8 + -0.5;
          fStack0000000000000034 = 1.0 / fVar20;
          fVar12 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                        fStack0000000000000048 * fStack0000000000000048 +
                        fStack000000000000004c * fStack000000000000004c);
          fStack000000000000003c = fVar17 + fVar8 * fVar12 * fStack000000000000003c;
          uVar7 = 0;
          lVar4 = 0x38;
          fVar17 = fStack0000000000000024 + fVar8 * fVar12 * fStack000000000000001c;
          fVar20 = fVar22 - fVar9;
          fVar19 = fVar13 - fVar19;
          do {
            fVar9 = unaff_x20[1];
            fVar13 = unaff_x20[2];
            fVar22 = (float)FUN_051a10fc(*unaff_x20,fVar9,fVar13,fStack000000000000003c,
                                         fVar11 + fVar8 * fVar12 * fVar16,fVar17);
            lVar5 = *(long *)(unaff_x19 + 0x68);
            if (lVar5 == 0) goto LAB_051a0f60;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_051a0f5c;
            lVar5 = lVar5 + lVar4;
            *(float *)(lVar5 + -0x10) = (1.0 / fVar21) * fVar13;
            *(float *)(lVar5 + -0x18) = (1.0 / fVar10) * fVar22;
            *(float *)(lVar5 + -0x14) = fStack0000000000000034 * fVar9;
            lVar5 = *(long *)(unaff_x19 + 0x68);
            if (lVar5 == 0) goto LAB_051a0f60;
            if (DAT_06a6722e == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
              DAT_06a6722e = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            fVar20 = fVar22 - fVar20;
            fVar19 = fVar9 - fVar19;
            fVar15 = fVar13 - fVar15;
            fVar18 = SQRT(fVar15 * fVar15 + fVar20 * fVar20 + fVar19 * fVar19);
            fVar14 = fVar1;
            if (fVar18 <= fVar1) {
              if (DAT_06a67148 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar3);
                DAT_06a67148 = '\x01';
              }
              pfVar6 = *(float **)(*(long *)puVar3 + 0xb8);
              fVar20 = *pfVar6;
              fVar19 = pfVar6[1];
              fVar15 = pfVar6[2];
            }
            else {
              fVar20 = fVar20 / fVar18;
              fVar19 = fVar19 / fVar18;
              fVar15 = fVar15 / fVar18;
            }
            fVar20 = (float)FUN_05eea074(fVar20,0);
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_051a0f5c;
            pfVar6 = (float *)(lVar5 + lVar4);
            pfVar6[-3] = fVar20;
            pfVar6[-2] = fVar19;
            pfVar6[-1] = fVar15;
            *pfVar6 = fVar14;
            if (lVar4 != 0x38) {
              if (DAT_06a67230 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
                DAT_06a67230 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              fStack0000000000000040 = fStack0000000000000040 + fVar18;
            }
            uVar7 = uVar7 + 1;
            lVar4 = lVar4 + 0x20;
            fVar20 = fVar22;
            fVar19 = fVar9;
            fVar15 = fVar13;
          } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar5 = *(long *)(unaff_x19 + 0x68);
            lVar4 = 0x5c;
            uVar7 = 1;
            do {
              if (lVar5 == 0) goto LAB_051a0f60;
              if (((ulong)*(uint *)(lVar5 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar5 + 0x18) <= uVar7)) {
LAB_051a0f5c:
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              lVar5 = lVar5 + lVar4;
              fVar15 = *(float *)(lVar5 + -0x38);
              fVar16 = *(float *)(lVar5 + -0x34);
              fVar8 = *(float *)(lVar5 + -0x3c);
              fVar21 = *(float *)(lVar5 + -0x1c);
              fVar20 = *(float *)(lVar5 + -0x18);
              fVar19 = *(float *)(lVar5 + -0x14);
              if (DAT_06a67230 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
                DAT_06a67230 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              lVar5 = *(long *)(unaff_x19 + 0x68);
              if (lVar5 == 0) goto LAB_051a0f60;
              if (((ulong)*(uint *)(lVar5 + 0x18) <= uVar7 - 1) ||
                 (*(uint *)(lVar5 + 0x18) <= uVar7)) goto LAB_051a0f5c;
              fVar8 = fVar8 - fVar21;
              fVar15 = fVar15 - fVar20;
              fVar16 = fVar16 - fVar19;
              *(float *)(lVar5 + lVar4) =
                   SQRT(fVar8 * fVar8 + fVar15 * fVar15 + fVar16 * fVar16) / fStack0000000000000040
                   + ((float *)(lVar5 + lVar4))[-8];
              uVar7 = uVar7 + 1;
              lVar4 = lVar4 + 0x20;
            } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x50));
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


