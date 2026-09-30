/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 051a0b74
PROGRAM: hellodot-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetDynamicFoveatedRenderingEnabled
               (undefined1 param_1 [16],float param_2,float param_3)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float fVar16;
  float unaff_s9;
  float fVar17;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  
  fStack000000000000003c = (float)FUN_05f0015c();
  fVar6 = *unaff_x20;
  fVar14 = unaff_x20[1];
  fStack0000000000000034 = unaff_x20[2];
  fVar13 = param_2;
  fStack000000000000001c = param_3;
  fVar7 = (float)FUN_05f0015c();
  fVar10 = fVar13;
  fVar16 = param_3;
  lVar2 = FUN_05ef2cb4();
  if (lVar2 != 0) {
    fVar8 = (float)FUN_05f04738(lVar2,0);
    lVar2 = FUN_05ef2cb4();
    if (lVar2 != 0) {
      FUN_05f04738(lVar2,0);
      lVar2 = FUN_05ef2cb4();
      if (lVar2 != 0) {
        FUN_05f04738(lVar2,0);
        fVar1 = DAT_013ddfb8;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack0000000000000040 = 0.0;
          param_3 = fStack0000000000000034 - param_3;
          fVar9 = unaff_s12 + -0.5;
          fStack0000000000000034 = 1.0 / fVar10;
          fVar11 = SQRT(unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s13 * unaff_s13);
          fVar12 = fVar11 * fStack000000000000001c;
          fStack000000000000003c = unaff_s9 + fVar9 * fVar11 * fStack000000000000003c;
          uVar5 = 0;
          lVar2 = 0x38;
          fVar10 = fVar6 - fVar7;
          fVar13 = fVar14 - fVar13;
          do {
            fVar7 = unaff_x20[1];
            fVar14 = unaff_x20[2];
            fVar6 = (float)FUN_051a10fc(*unaff_x20,fVar7,fVar14,fStack000000000000003c,
                                        in_stack_00000028 + fVar9 * fVar11 * param_2,
                                        in_stack_00000020._4_4_ + fVar9 * fVar12);
            lVar3 = *(long *)(unaff_x19 + 0x68);
            if (lVar3 == 0) goto LAB_051a0f60;
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_051a0f5c;
            lVar3 = lVar3 + lVar2;
            *(float *)(lVar3 + -0x10) = (1.0 / fVar16) * fVar14;
            *(float *)(lVar3 + -0x18) = (1.0 / fVar8) * fVar6;
            *(float *)(lVar3 + -0x14) = fStack0000000000000034 * fVar7;
            lVar3 = *(long *)(unaff_x19 + 0x68);
            if (lVar3 == 0) goto LAB_051a0f60;
            if (DAT_06a6722e == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum();
              DAT_06a6722e = '\x01';
            }
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            fVar10 = fVar6 - fVar10;
            fVar13 = fVar7 - fVar13;
            param_3 = fVar14 - param_3;
            fVar17 = SQRT(param_3 * param_3 + fVar10 * fVar10 + fVar13 * fVar13);
            fVar15 = fVar1;
            if (fVar17 <= fVar1) {
              if (DAT_06a67148 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum();
                DAT_06a67148 = '\x01';
              }
              pfVar4 = *(float **)(*unaff_x22 + 0xb8);
              fVar10 = *pfVar4;
              fVar13 = pfVar4[1];
              param_3 = pfVar4[2];
            }
            else {
              fVar10 = fVar10 / fVar17;
              fVar13 = fVar13 / fVar17;
              param_3 = param_3 / fVar17;
            }
            fVar10 = (float)FUN_05eea074(fVar10,0);
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_051a0f5c;
            pfVar4 = (float *)(lVar3 + lVar2);
            pfVar4[-3] = fVar10;
            pfVar4[-2] = fVar13;
            pfVar4[-1] = param_3;
            *pfVar4 = fVar15;
            if (lVar2 != 0x38) {
              if (*(char *)(unaff_x23 + 0x230) == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum();
                *(undefined1 *)(unaff_x23 + 0x230) = 1;
              }
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              fStack0000000000000040 = fStack0000000000000040 + fVar17;
            }
            uVar5 = uVar5 + 1;
            lVar2 = lVar2 + 0x20;
            fVar10 = fVar6;
            fVar13 = fVar7;
            param_3 = fVar14;
          } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar3 = *(long *)(unaff_x19 + 0x68);
            lVar2 = 0x5c;
            uVar5 = 1;
            do {
              if (lVar3 == 0) goto LAB_051a0f60;
              if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) ||
                 (*(uint *)(lVar3 + 0x18) <= uVar5)) {
LAB_051a0f5c:
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              lVar3 = lVar3 + lVar2;
              fVar10 = *(float *)(lVar3 + -0x38);
              fVar16 = *(float *)(lVar3 + -0x34);
              fVar13 = *(float *)(lVar3 + -0x3c);
              fVar14 = *(float *)(lVar3 + -0x1c);
              fVar7 = *(float *)(lVar3 + -0x18);
              fVar6 = *(float *)(lVar3 + -0x14);
              if (*(char *)(unaff_x23 + 0x230) == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum();
                *(undefined1 *)(unaff_x23 + 0x230) = 1;
              }
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              lVar3 = *(long *)(unaff_x19 + 0x68);
              if (lVar3 == 0) goto LAB_051a0f60;
              if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) ||
                 (*(uint *)(lVar3 + 0x18) <= uVar5)) goto LAB_051a0f5c;
              fVar13 = fVar13 - fVar14;
              fVar10 = fVar10 - fVar7;
              fVar16 = fVar16 - fVar6;
              *(float *)(lVar3 + lVar2) =
                   SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar16 * fVar16) /
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
LAB_051a0f60:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


