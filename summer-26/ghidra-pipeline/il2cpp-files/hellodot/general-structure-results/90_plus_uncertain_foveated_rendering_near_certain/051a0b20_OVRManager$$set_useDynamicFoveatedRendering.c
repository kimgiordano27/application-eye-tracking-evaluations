/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 051a0b20
PROGRAM: hellodot-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFoveatedRendering
               (float param_1,undefined1 param_2 [16],float param_3,float param_4)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float fVar18;
  float unaff_s10;
  float fVar19;
  float fVar20;
  float unaff_s12;
  float unaff_s13;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  
  if (DAT_06a67230 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a67230 = '\x01';
  }
  puVar2 = PTR_DAT_065c8d28;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar17 = *unaff_x20;
  fVar12 = unaff_x20[1];
  fStack0000000000000024 = unaff_x20[2];
  fVar20 = fVar12;
  fStack000000000000003c = (float)FUN_05f0015c();
  fVar7 = *unaff_x20;
  fVar15 = unaff_x20[1];
  fStack0000000000000034 = unaff_x20[2];
  fVar14 = fVar20;
  fStack000000000000001c = param_3;
  fVar8 = (float)FUN_05f0015c();
  fVar11 = fVar14;
  fVar19 = param_3;
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
          param_3 = fStack0000000000000034 - param_3;
          fVar10 = unaff_s12 + -0.5;
          fStack0000000000000034 = 1.0 / fVar11;
          fVar13 = SQRT(unaff_s8 * unaff_s8 + (unaff_s10 - param_4) * (unaff_s10 - param_4) +
                        (unaff_s13 - param_1) * (unaff_s13 - param_1));
          fStack000000000000003c = fVar17 + fVar10 * fVar13 * fStack000000000000003c;
          uVar6 = 0;
          lVar3 = 0x38;
          fVar17 = fStack0000000000000024 + fVar10 * fVar13 * fStack000000000000001c;
          fVar11 = fVar7 - fVar8;
          fVar14 = fVar15 - fVar14;
          do {
            fVar8 = unaff_x20[1];
            fVar15 = unaff_x20[2];
            fVar7 = (float)FUN_051a10fc(*unaff_x20,fVar8,fVar15,fStack000000000000003c,
                                        fVar12 + fVar10 * fVar13 * fVar20,fVar17);
            lVar4 = *(long *)(unaff_x19 + 0x68);
            if (lVar4 == 0) goto LAB_051a0f60;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_051a0f5c;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + -0x10) = (1.0 / fVar19) * fVar15;
            *(float *)(lVar4 + -0x18) = (1.0 / fVar9) * fVar7;
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
            fVar11 = fVar7 - fVar11;
            fVar14 = fVar8 - fVar14;
            param_3 = fVar15 - param_3;
            fVar18 = SQRT(param_3 * param_3 + fVar11 * fVar11 + fVar14 * fVar14);
            fVar16 = fVar1;
            if (fVar18 <= fVar1) {
              if (DAT_06a67148 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum();
                DAT_06a67148 = '\x01';
              }
              pfVar5 = *(float **)(*unaff_x22 + 0xb8);
              fVar11 = *pfVar5;
              fVar14 = pfVar5[1];
              param_3 = pfVar5[2];
            }
            else {
              fVar11 = fVar11 / fVar18;
              fVar14 = fVar14 / fVar18;
              param_3 = param_3 / fVar18;
            }
            fVar11 = (float)FUN_05eea074(fVar11,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_051a0f5c;
            pfVar5 = (float *)(lVar4 + lVar3);
            pfVar5[-3] = fVar11;
            pfVar5[-2] = fVar14;
            pfVar5[-1] = param_3;
            *pfVar5 = fVar16;
            if (lVar3 != 0x38) {
              if (DAT_06a67230 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
                DAT_06a67230 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              fStack0000000000000040 = fStack0000000000000040 + fVar18;
            }
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + 0x20;
            fVar11 = fVar7;
            fVar14 = fVar8;
            param_3 = fVar15;
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
              fVar11 = *(float *)(lVar4 + -0x34);
              fVar20 = *(float *)(lVar4 + -0x3c);
              fVar8 = *(float *)(lVar4 + -0x1c);
              fVar7 = *(float *)(lVar4 + -0x18);
              fVar19 = *(float *)(lVar4 + -0x14);
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
              fVar20 = fVar20 - fVar8;
              fVar14 = fVar14 - fVar7;
              fVar11 = fVar11 - fVar19;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar20 * fVar20 + fVar14 * fVar14 + fVar11 * fVar11) /
                   fStack0000000000000040 + ((float *)(lVar4 + lVar3))[-8];
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


