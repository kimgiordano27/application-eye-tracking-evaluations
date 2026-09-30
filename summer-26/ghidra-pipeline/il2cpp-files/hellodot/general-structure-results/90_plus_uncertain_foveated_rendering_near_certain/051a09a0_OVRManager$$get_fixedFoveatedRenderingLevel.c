/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 051a09a0
PROGRAM: hellodot-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel
               (undefined1 param_1 [16],float param_2,float param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  ulong uVar8;
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
  float fVar23;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d62a0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06604bc0);
  *(undefined1 *)(unaff_x21 + 0x231) = 1;
  puVar3 = PTR_DAT_065d62a0;
  if ((*(long *)(unaff_x19 + 0x68) == 0) ||
     (*(int *)(unaff_x19 + 0x50) != *(int *)(*(long *)(unaff_x19 + 0x68) + 0x18))) {
    uVar4 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_06604bc0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar9 = (float)FUN_05f0015c();
  if (DAT_06a67312 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67312 = '\x01';
  }
  puVar3 = PTR_DAT_065c9850;
  lVar5 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  fVar17 = *(float *)(lVar5 + 0x18);
  fVar23 = *(float *)(lVar5 + 0x1c);
  fVar22 = *(float *)(lVar5 + 0x20);
  fVar9 = param_3 * fVar22 + fVar9 * fVar17 + param_2 * fVar23;
  fVar9 = powf(1.0 - fVar9 * fVar9,-0.25);
  fVar16 = *unaff_x20;
  fVar20 = unaff_x20[1];
  fVar21 = unaff_x20[2];
  if (DAT_06a68533 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a68533 = '\x01';
  }
  fStack0000000000000044 = fStack0000000000000044 - fVar16;
  fStack0000000000000048 = fStack0000000000000048 - fVar20;
  fVar16 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8);
  fVar20 = fVar22 * fVar22 + fVar17 * fVar17 + fVar23 * fVar23;
  fStack000000000000004c = fStack000000000000004c - fVar21;
  if (fVar16 <= fVar20) {
    fVar21 = fStack000000000000004c * fVar22 +
             fStack0000000000000044 * fVar17 + fStack0000000000000048 * fVar23;
    fVar16 = (fVar17 * fVar21) / fVar20;
    fStack0000000000000044 = fStack0000000000000044 - fVar16;
    fStack0000000000000048 = fStack0000000000000048 - (fVar23 * fVar21) / fVar20;
    fStack000000000000004c = fStack000000000000004c - (fVar22 * fVar21) / fVar20;
  }
  if (DAT_06a67230 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a67230 = '\x01';
  }
  puVar2 = PTR_DAT_065c8d28;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar18 = *unaff_x20;
  fVar12 = unaff_x20[1];
  fStack0000000000000024 = unaff_x20[2];
  fVar17 = fVar12;
  fStack000000000000003c = (float)FUN_05f0015c();
  fVar23 = *unaff_x20;
  fVar14 = unaff_x20[1];
  fStack0000000000000034 = unaff_x20[2];
  fVar20 = fVar17;
  fStack000000000000001c = fVar16;
  fVar10 = (float)FUN_05f0015c();
  fVar21 = fVar20;
  fVar22 = fVar16;
  lVar5 = FUN_05ef2cb4();
  if (lVar5 != 0) {
    fVar11 = (float)FUN_05f04738(lVar5,0);
    lVar5 = FUN_05ef2cb4();
    if (lVar5 != 0) {
      FUN_05f04738(lVar5,0);
      lVar5 = FUN_05ef2cb4();
      if (lVar5 != 0) {
        FUN_05f04738(lVar5,0);
        fVar1 = DAT_013ddfb8;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack0000000000000040 = 0.0;
          fVar16 = fStack0000000000000034 - fVar16;
          fVar9 = fVar9 + -0.5;
          fStack0000000000000034 = 1.0 / fVar21;
          fVar13 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                        fStack0000000000000048 * fStack0000000000000048 +
                        fStack000000000000004c * fStack000000000000004c);
          fStack000000000000003c = fVar18 + fVar9 * fVar13 * fStack000000000000003c;
          uVar8 = 0;
          lVar5 = 0x38;
          fVar18 = fStack0000000000000024 + fVar9 * fVar13 * fStack000000000000001c;
          fVar21 = fVar23 - fVar10;
          fVar20 = fVar14 - fVar20;
          do {
            fVar10 = unaff_x20[1];
            fVar14 = unaff_x20[2];
            fVar23 = (float)FUN_051a10fc(*unaff_x20,fVar10,fVar14,fStack000000000000003c,
                                         fVar12 + fVar9 * fVar13 * fVar17,fVar18);
            lVar6 = *(long *)(unaff_x19 + 0x68);
            if (lVar6 == 0) goto LAB_051a0f60;
            if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_051a0f5c;
            lVar6 = lVar6 + lVar5;
            *(float *)(lVar6 + -0x10) = (1.0 / fVar22) * fVar14;
            *(float *)(lVar6 + -0x18) = (1.0 / fVar11) * fVar23;
            *(float *)(lVar6 + -0x14) = fStack0000000000000034 * fVar10;
            lVar6 = *(long *)(unaff_x19 + 0x68);
            if (lVar6 == 0) goto LAB_051a0f60;
            if (DAT_06a6722e == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
              DAT_06a6722e = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            fVar21 = fVar23 - fVar21;
            fVar20 = fVar10 - fVar20;
            fVar16 = fVar14 - fVar16;
            fVar19 = SQRT(fVar16 * fVar16 + fVar21 * fVar21 + fVar20 * fVar20);
            fVar15 = fVar1;
            if (fVar19 <= fVar1) {
              if (DAT_06a67148 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar3);
                DAT_06a67148 = '\x01';
              }
              pfVar7 = *(float **)(*(long *)puVar3 + 0xb8);
              fVar21 = *pfVar7;
              fVar20 = pfVar7[1];
              fVar16 = pfVar7[2];
            }
            else {
              fVar21 = fVar21 / fVar19;
              fVar20 = fVar20 / fVar19;
              fVar16 = fVar16 / fVar19;
            }
            fVar21 = (float)FUN_05eea074(fVar21,0);
            if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_051a0f5c;
            pfVar7 = (float *)(lVar6 + lVar5);
            pfVar7[-3] = fVar21;
            pfVar7[-2] = fVar20;
            pfVar7[-1] = fVar16;
            *pfVar7 = fVar15;
            if (lVar5 != 0x38) {
              if (DAT_06a67230 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
                DAT_06a67230 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              fStack0000000000000040 = fStack0000000000000040 + fVar19;
            }
            uVar8 = uVar8 + 1;
            lVar5 = lVar5 + 0x20;
            fVar21 = fVar23;
            fVar20 = fVar10;
            fVar16 = fVar14;
          } while ((long)uVar8 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar6 = *(long *)(unaff_x19 + 0x68);
            lVar5 = 0x5c;
            uVar8 = 1;
            do {
              if (lVar6 == 0) goto LAB_051a0f60;
              if (((ulong)*(uint *)(lVar6 + 0x18) <= uVar8 - 1) ||
                 (*(uint *)(lVar6 + 0x18) <= uVar8)) {
LAB_051a0f5c:
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              lVar6 = lVar6 + lVar5;
              fVar16 = *(float *)(lVar6 + -0x38);
              fVar17 = *(float *)(lVar6 + -0x34);
              fVar9 = *(float *)(lVar6 + -0x3c);
              fVar22 = *(float *)(lVar6 + -0x1c);
              fVar21 = *(float *)(lVar6 + -0x18);
              fVar20 = *(float *)(lVar6 + -0x14);
              if (DAT_06a67230 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
                DAT_06a67230 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              lVar6 = *(long *)(unaff_x19 + 0x68);
              if (lVar6 == 0) goto LAB_051a0f60;
              if (((ulong)*(uint *)(lVar6 + 0x18) <= uVar8 - 1) ||
                 (*(uint *)(lVar6 + 0x18) <= uVar8)) goto LAB_051a0f5c;
              fVar9 = fVar9 - fVar22;
              fVar16 = fVar16 - fVar21;
              fVar17 = fVar17 - fVar20;
              *(float *)(lVar6 + lVar5) =
                   SQRT(fVar9 * fVar9 + fVar16 * fVar16 + fVar17 * fVar17) / fStack0000000000000040
                   + ((float *)(lVar6 + lVar5))[-8];
              uVar8 = uVar8 + 1;
              lVar5 = lVar5 + 0x20;
            } while ((long)uVar8 < (long)*(int *)(unaff_x19 + 0x50));
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


