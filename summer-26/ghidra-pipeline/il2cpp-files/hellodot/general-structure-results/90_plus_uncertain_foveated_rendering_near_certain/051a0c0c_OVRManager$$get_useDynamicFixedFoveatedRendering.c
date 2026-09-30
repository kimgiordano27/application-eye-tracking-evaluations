/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 051a0c0c
PROGRAM: hellodot-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFixedFoveatedRendering
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float fVar12;
  float fVar13;
  float unaff_s10;
  float unaff_s11;
  float fVar14;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000004;
  float fStack0000000000000010;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  undefined4 in_stack_00000048;
  
  fVar14 = DAT_013ddfb8;
  fVar12 = in_stack_00000040 - unaff_s15;
  in_stack_00000040 = 0.0;
  fStack0000000000000030 = fStack0000000000000030 + -0.5;
  fVar6 = SQRT(unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s13 * unaff_s13);
  uVar3 = 0;
  lVar4 = 0x38;
  fVar8 = fStack0000000000000038 - unaff_s11;
  fVar10 = fStack0000000000000034 - unaff_s14;
  do {
    fStack0000000000000010 = (float)(int)uVar3 / ((float)(int)param_1 + -1.0);
    fVar7 = (float)unaff_x20[1];
    fVar9 = (float)unaff_x20[2];
    uStack0000000000000004 = in_stack_00000048;
    fVar5 = (float)FUN_051a10fc(*unaff_x20,fVar7,fVar9,
                                unaff_s9 + fStack0000000000000030 * fVar6 * fStack000000000000003c,
                                fStack0000000000000028 +
                                fStack0000000000000030 * fVar6 * fStack0000000000000020,
                                fStack0000000000000024 +
                                fStack0000000000000030 * fVar6 * in_stack_00000018._4_4_);
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (lVar1 == 0) goto LAB_051a0f60;
    if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_051a0f5c;
    lVar1 = lVar1 + lVar4;
    *(float *)(lVar1 + -0x10) = (1.0 / param_4) * fVar9;
    *(float *)(lVar1 + -0x18) = (1.0 / fStack000000000000002c) * fVar5;
    *(float *)(lVar1 + -0x14) = (1.0 / unaff_s12) * fVar7;
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (lVar1 == 0) goto LAB_051a0f60;
    if (DAT_06a6722e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      DAT_06a6722e = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar12 = fVar5 - fVar12;
    fVar8 = fVar7 - fVar8;
    fVar10 = fVar9 - fVar10;
    fVar13 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar8 * fVar8);
    fVar11 = fVar14;
    if (fVar13 <= fVar14) {
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        DAT_06a67148 = '\x01';
      }
      pfVar2 = *(float **)(*unaff_x22 + 0xb8);
      fVar12 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar10 = pfVar2[2];
    }
    else {
      fVar12 = fVar12 / fVar13;
      fVar8 = fVar8 / fVar13;
      fVar10 = fVar10 / fVar13;
    }
    fVar12 = (float)FUN_05eea074(fVar12,0);
    if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_051a0f5c;
    pfVar2 = (float *)(lVar1 + lVar4);
    pfVar2[-3] = fVar12;
    pfVar2[-2] = fVar8;
    pfVar2[-1] = fVar10;
    *pfVar2 = fVar11;
    if (lVar4 != 0x38) {
      if (*(char *)(unaff_x23 + 0x230) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x23 + 0x230) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      in_stack_00000040 = in_stack_00000040 + fVar13;
    }
    param_1 = (long)*(int *)(unaff_x19 + 0x50);
    uVar3 = uVar3 + 1;
    lVar4 = lVar4 + 0x20;
    fVar12 = fVar5;
    fVar8 = fVar7;
    fVar10 = fVar9;
  } while ((long)uVar3 < param_1);
  if (1 < *(int *)(unaff_x19 + 0x50)) {
    lVar1 = *(long *)(unaff_x19 + 0x68);
    lVar4 = 0x5c;
    uVar3 = 1;
    do {
      if (lVar1 == 0) {
LAB_051a0f60:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (((ulong)*(uint *)(lVar1 + 0x18) <= uVar3 - 1) || (*(uint *)(lVar1 + 0x18) <= uVar3)) {
LAB_051a0f5c:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      lVar1 = lVar1 + lVar4;
      fVar12 = *(float *)(lVar1 + -0x38);
      fVar8 = *(float *)(lVar1 + -0x34);
      fVar14 = *(float *)(lVar1 + -0x3c);
      fVar5 = *(float *)(lVar1 + -0x1c);
      fVar6 = *(float *)(lVar1 + -0x18);
      fVar10 = *(float *)(lVar1 + -0x14);
      if (*(char *)(unaff_x23 + 0x230) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x23 + 0x230) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar1 = *(long *)(unaff_x19 + 0x68);
      if (lVar1 == 0) goto LAB_051a0f60;
      if (((ulong)*(uint *)(lVar1 + 0x18) <= uVar3 - 1) || (*(uint *)(lVar1 + 0x18) <= uVar3))
      goto LAB_051a0f5c;
      fVar14 = fVar14 - fVar5;
      fVar12 = fVar12 - fVar6;
      fVar8 = fVar8 - fVar10;
      *(float *)(lVar1 + lVar4) =
           SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar8 * fVar8) / in_stack_00000040 +
           ((float *)(lVar1 + lVar4))[-8];
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x50));
  }
  return;
}


