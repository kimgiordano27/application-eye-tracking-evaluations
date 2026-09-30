/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 051a0c5c
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


void OVRManager__set_useDynamicFixedFoveatedRendering
               (long param_1,float param_2,float param_3,float param_4,float param_5,
               undefined1 param_6 [16],float param_7,float param_8,float param_9)

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
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar13;
  float unaff_s13;
  undefined4 uStack0000000000000004;
  float fStack0000000000000010;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  float in_stack_00000040;
  undefined4 in_stack_00000048;
  
  param_8 = param_8 + param_2;
  fStack0000000000000034 = param_7 / unaff_s12;
  fVar7 = SQRT(param_3 + unaff_s13 * unaff_s13);
  uVar3 = 0;
  lVar4 = 0x38;
  fStack000000000000002c = param_4;
  do {
    fStack0000000000000010 = (float)(int)uVar3 / ((float)(int)param_1 + -1.0);
    fVar8 = (float)unaff_x20[1];
    fVar10 = (float)unaff_x20[2];
    uStack0000000000000004 = in_stack_00000048;
    fVar5 = (float)FUN_051a10fc(*unaff_x20,fVar8,fVar10,
                                param_9 + param_8 * fVar7 * in_stack_00000038._4_4_,
                                in_stack_00000028 + param_8 * fVar7 * fStack0000000000000020,
                                fStack0000000000000024 + param_8 * fVar7 * in_stack_00000018._4_4_);
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (lVar1 == 0) goto LAB_051a0f60;
    if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_051a0f5c;
    lVar1 = lVar1 + lVar4;
    *(float *)(lVar1 + -0x10) = in_stack_00000030 * fVar10;
    *(float *)(lVar1 + -0x18) = (param_7 / param_5) * fVar5;
    *(float *)(lVar1 + -0x14) = fStack0000000000000034 * fVar8;
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (lVar1 == 0) goto LAB_051a0f60;
    if (DAT_06a6722e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      DAT_06a6722e = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar6 = fVar5 - unaff_s9;
    fVar9 = fVar8 - unaff_s10;
    fVar11 = fVar10 - unaff_s11;
    fVar12 = SQRT(fVar11 * fVar11 + fVar6 * fVar6 + fVar9 * fVar9);
    fVar13 = fStack000000000000002c;
    if (fVar12 <= fStack000000000000002c) {
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        DAT_06a67148 = '\x01';
      }
      pfVar2 = *(float **)(*unaff_x22 + 0xb8);
      fVar6 = *pfVar2;
      fVar9 = pfVar2[1];
      fVar11 = pfVar2[2];
    }
    else {
      fVar6 = fVar6 / fVar12;
      fVar9 = fVar9 / fVar12;
      fVar11 = fVar11 / fVar12;
    }
    fVar6 = (float)FUN_05eea074(fVar6,0);
    if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_051a0f5c;
    pfVar2 = (float *)(lVar1 + lVar4);
    pfVar2[-3] = fVar6;
    pfVar2[-2] = fVar9;
    pfVar2[-1] = fVar11;
    *pfVar2 = fVar13;
    if (lVar4 != 0x38) {
      if (*(char *)(unaff_x23 + 0x230) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x23 + 0x230) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      in_stack_00000040 = in_stack_00000040 + fVar12;
    }
    param_1 = (long)*(int *)(unaff_x19 + 0x50);
    uVar3 = uVar3 + 1;
    lVar4 = lVar4 + 0x20;
    unaff_s9 = fVar5;
    unaff_s10 = fVar8;
    unaff_s11 = fVar10;
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
      fVar5 = *(float *)(lVar1 + -0x38);
      fVar8 = *(float *)(lVar1 + -0x34);
      fVar7 = *(float *)(lVar1 + -0x3c);
      fVar6 = *(float *)(lVar1 + -0x1c);
      fVar13 = *(float *)(lVar1 + -0x18);
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
      fVar7 = fVar7 - fVar6;
      fVar5 = fVar5 - fVar13;
      fVar8 = fVar8 - fVar10;
      *(float *)(lVar1 + lVar4) =
           SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar8 * fVar8) / in_stack_00000040 +
           ((float *)(lVar1 + lVar4))[-8];
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x50));
  }
  return;
}


