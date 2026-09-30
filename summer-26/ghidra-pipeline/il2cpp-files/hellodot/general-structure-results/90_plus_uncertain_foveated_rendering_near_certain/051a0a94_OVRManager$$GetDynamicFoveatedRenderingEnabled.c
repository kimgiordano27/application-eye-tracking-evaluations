/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 051a0a94
PROGRAM: hellodot-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled(void)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
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
  float fVar17;
  float fVar18;
  float unaff_s8;
  float unaff_s9;
  float fVar19;
  float fVar20;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
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
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
  *(undefined1 *)(unaff_x21 + 0x533) = 1;
  fStack0000000000000044 = fStack0000000000000044 - unaff_s8;
  fStack0000000000000048 = fStack0000000000000048 - unaff_s10;
  fVar16 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8);
  fVar7 = unaff_s14 * unaff_s14 + unaff_s9 * unaff_s9 + unaff_s15 * unaff_s15;
  fStack000000000000004c = fStack000000000000004c - unaff_s11;
  if (fVar16 <= fVar7) {
    fVar13 = fStack000000000000004c * unaff_s14 +
             fStack0000000000000044 * unaff_s9 + fStack0000000000000048 * unaff_s15;
    fVar16 = (unaff_s9 * fVar13) / fVar7;
    fStack0000000000000044 = fStack0000000000000044 - fVar16;
    fStack0000000000000048 = fStack0000000000000048 - (unaff_s15 * fVar13) / fVar7;
    fStack000000000000004c = fStack000000000000004c - (unaff_s14 * fVar13) / fVar7;
  }
  if (DAT_06a67230 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a67230 = '\x01';
  }
  puVar2 = PTR_DAT_065c8d28;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar19 = *unaff_x20;
  fVar14 = unaff_x20[1];
  fStack0000000000000024 = unaff_x20[2];
  fVar7 = fVar14;
  fStack000000000000003c = (float)FUN_05f0015c();
  fVar8 = *unaff_x20;
  fVar17 = unaff_x20[1];
  fStack0000000000000034 = unaff_x20[2];
  fVar13 = fVar7;
  fStack000000000000001c = fVar16;
  fVar9 = (float)FUN_05f0015c();
  fVar12 = fVar13;
  fVar21 = fVar16;
  lVar3 = FUN_05ef2cb4();
  if (lVar3 != 0) {
    fVar10 = (float)FUN_05f04738(lVar3,0);
    lVar3 = FUN_05ef2cb4();
    if (lVar3 != 0) {
      FUN_05f04738(lVar3,0);
      lVar3 = FUN_05ef2cb4();
      if (lVar3 != 0) {
        FUN_05f04738(lVar3,0);
        fVar1 = DAT_013ddfb8;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack0000000000000040 = 0.0;
          fVar16 = fStack0000000000000034 - fVar16;
          fVar11 = unaff_s12 + -0.5;
          fStack0000000000000034 = 1.0 / fVar12;
          fVar15 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                        fStack0000000000000048 * fStack0000000000000048 +
                        fStack000000000000004c * fStack000000000000004c);
          fStack000000000000003c = fVar19 + fVar11 * fVar15 * fStack000000000000003c;
          uVar6 = 0;
          lVar3 = 0x38;
          fVar19 = fStack0000000000000024 + fVar11 * fVar15 * fStack000000000000001c;
          fVar12 = fVar8 - fVar9;
          fVar13 = fVar17 - fVar13;
          do {
            fVar9 = unaff_x20[1];
            fVar17 = unaff_x20[2];
            fVar8 = (float)FUN_051a10fc(*unaff_x20,fVar9,fVar17,fStack000000000000003c,
                                        fVar14 + fVar11 * fVar15 * fVar7,fVar19);
            lVar4 = *(long *)(unaff_x19 + 0x68);
            if (lVar4 == 0) goto LAB_051a0f60;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_051a0f5c;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + -0x10) = (1.0 / fVar21) * fVar17;
            *(float *)(lVar4 + -0x18) = (1.0 / fVar10) * fVar8;
            *(float *)(lVar4 + -0x14) = fStack0000000000000034 * fVar9;
            lVar4 = *(long *)(unaff_x19 + 0x68);
            if (lVar4 == 0) goto LAB_051a0f60;
            if (DAT_06a6722e == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
              DAT_06a6722e = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            fVar12 = fVar8 - fVar12;
            fVar13 = fVar9 - fVar13;
            fVar16 = fVar17 - fVar16;
            fVar20 = SQRT(fVar16 * fVar16 + fVar12 * fVar12 + fVar13 * fVar13);
            fVar18 = fVar1;
            if (fVar20 <= fVar1) {
              if (DAT_06a67148 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum();
                DAT_06a67148 = '\x01';
              }
              pfVar5 = *(float **)(*unaff_x22 + 0xb8);
              fVar12 = *pfVar5;
              fVar13 = pfVar5[1];
              fVar16 = pfVar5[2];
            }
            else {
              fVar12 = fVar12 / fVar20;
              fVar13 = fVar13 / fVar20;
              fVar16 = fVar16 / fVar20;
            }
            fVar12 = (float)FUN_05eea074(fVar12,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_051a0f5c;
            pfVar5 = (float *)(lVar4 + lVar3);
            pfVar5[-3] = fVar12;
            pfVar5[-2] = fVar13;
            pfVar5[-1] = fVar16;
            *pfVar5 = fVar18;
            if (lVar3 != 0x38) {
              if (DAT_06a67230 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
                DAT_06a67230 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              fStack0000000000000040 = fStack0000000000000040 + fVar20;
            }
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + 0x20;
            fVar12 = fVar8;
            fVar13 = fVar9;
            fVar16 = fVar17;
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
              fVar7 = *(float *)(lVar4 + -0x38);
              fVar13 = *(float *)(lVar4 + -0x34);
              fVar16 = *(float *)(lVar4 + -0x3c);
              fVar8 = *(float *)(lVar4 + -0x1c);
              fVar21 = *(float *)(lVar4 + -0x18);
              fVar12 = *(float *)(lVar4 + -0x14);
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
              fVar16 = fVar16 - fVar8;
              fVar7 = fVar7 - fVar21;
              fVar13 = fVar13 - fVar12;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar16 * fVar16 + fVar7 * fVar7 + fVar13 * fVar13) / fStack0000000000000040
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


