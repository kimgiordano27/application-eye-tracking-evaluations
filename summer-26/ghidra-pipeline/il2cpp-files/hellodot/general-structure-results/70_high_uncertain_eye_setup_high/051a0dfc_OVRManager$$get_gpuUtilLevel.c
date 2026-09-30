/*
FUNCTION_NAME: OVRManager$$get_gpuUtilLevel
ENTRY_POINT: 051a0dfc
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_gpuUtilLevel
               (float *param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               float param_5)

{
  undefined1 in_ZR;
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar3;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar4;
  long unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  
  while( true ) {
    param_1[-1] = param_4;
    *param_1 = param_5;
    if (!(bool)in_ZR) {
      if (*(char *)(unaff_x23 + 0x230) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x23 + 0x230) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      in_stack_00000040 = in_stack_00000040 + unaff_s9;
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x25 = unaff_x25 + 0x20;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x24) {
      if (*(int *)(unaff_x19 + 0x50) < 2) {
        return;
      }
      lVar2 = *(long *)(unaff_x19 + 0x68);
      lVar3 = 0x5c;
      uVar4 = 1;
      goto LAB_051a0e70;
    }
    fVar6 = (float)unaff_x20[1];
    fVar5 = (float)unaff_x20[2];
    fVar8 = (float)FUN_051a10fc(*unaff_x20,fVar6,fVar5,uStack000000000000003c);
    lVar3 = *(long *)(unaff_x19 + 0x68);
    if (lVar3 == 0) goto LAB_051a0f60;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) break;
    lVar3 = lVar3 + unaff_x25;
    *(float *)(lVar3 + -0x10) = fStack0000000000000030 * fVar5;
    *(float *)(lVar3 + -0x18) = fStack0000000000000038 * fVar8;
    *(float *)(lVar3 + -0x14) = fStack0000000000000034 * fVar6;
    lVar3 = *(long *)(unaff_x19 + 0x68);
    if (lVar3 == 0) goto LAB_051a0f60;
    if (*(char *)(unaff_x26 + 0x22e) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x26 + 0x22e) = unaff_w27;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar7 = fVar8 - unaff_s14;
    fVar9 = fVar6 - unaff_s15;
    param_4 = fVar5 - unaff_s8;
    unaff_s9 = SQRT(param_4 * param_4 + fVar7 * fVar7 + fVar9 * fVar9);
    param_5 = in_stack_00000028._4_4_;
    if (unaff_s9 <= in_stack_00000028._4_4_) {
      if (*(char *)(unaff_x28 + 0x148) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x28 + 0x148) = unaff_w27;
      }
      pfVar1 = *(float **)(*unaff_x22 + 0xb8);
      fVar7 = *pfVar1;
      fVar9 = pfVar1[1];
      param_4 = pfVar1[2];
    }
    else {
      fVar7 = fVar7 / unaff_s9;
      fVar9 = fVar9 / unaff_s9;
      param_4 = param_4 / unaff_s9;
    }
    fVar7 = (float)FUN_05eea074(fVar7,0);
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) break;
    param_1 = (float *)(lVar3 + unaff_x25);
    in_ZR = unaff_x25 == 0x38;
    param_1[-3] = fVar7;
    param_1[-2] = fVar9;
    unaff_s14 = fVar8;
    unaff_s15 = fVar6;
    unaff_s8 = fVar5;
  }
LAB_051a0f5c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
LAB_051a0e70:
  if (lVar2 == 0) {
LAB_051a0f60:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4))
  goto LAB_051a0f5c;
  lVar2 = lVar2 + lVar3;
  fVar6 = *(float *)(lVar2 + -0x38);
  fVar5 = *(float *)(lVar2 + -0x34);
  fVar8 = *(float *)(lVar2 + -0x3c);
  fVar10 = *(float *)(lVar2 + -0x1c);
  fVar9 = *(float *)(lVar2 + -0x18);
  fVar7 = *(float *)(lVar2 + -0x14);
  if (*(char *)(unaff_x23 + 0x230) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum();
    *(undefined1 *)(unaff_x23 + 0x230) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar2 = *(long *)(unaff_x19 + 0x68);
  if (lVar2 == 0) goto LAB_051a0f60;
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4))
  goto LAB_051a0f5c;
  fVar8 = fVar8 - fVar10;
  fVar6 = fVar6 - fVar9;
  fVar5 = fVar5 - fVar7;
  *(float *)(lVar2 + lVar3) =
       SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5) / in_stack_00000040 +
       ((float *)(lVar2 + lVar3))[-8];
  uVar4 = uVar4 + 1;
  lVar3 = lVar3 + 0x20;
  if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar4) {
    return;
  }
  goto LAB_051a0e70;
}


