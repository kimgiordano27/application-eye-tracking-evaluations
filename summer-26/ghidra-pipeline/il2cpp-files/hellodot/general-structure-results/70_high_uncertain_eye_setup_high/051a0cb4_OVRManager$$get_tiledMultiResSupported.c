/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResSupported
ENTRY_POINT: 051a0cb4
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_tiledMultiResSupported
               (long param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar4;
  long unaff_x25;
  long unaff_x26;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  undefined4 uStack0000000000000004;
  float fStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    fStack0000000000000010 = (float)(int)unaff_x24 / ((float)(int)param_1 + -1.0);
    fVar7 = (float)unaff_x20[1];
    fVar9 = (float)unaff_x20[2];
    uStack0000000000000004 = in_stack_00000048;
    fVar5 = (float)FUN_051a10fc(*unaff_x20,fVar7,fVar9,uStack000000000000003c,param_3 + param_5,
                                in_stack_00000020._4_4_ + param_2);
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (lVar1 == 0) goto LAB_051a0f60;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x24) goto LAB_051a0f5c;
    lVar1 = lVar1 + unaff_x25;
    *(float *)(lVar1 + -0x10) = fStack0000000000000030 * fVar9;
    *(float *)(lVar1 + -0x18) = fStack0000000000000038 * fVar5;
    *(float *)(lVar1 + -0x14) = fStack0000000000000034 * fVar7;
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (lVar1 == 0) goto LAB_051a0f60;
    if (*(char *)(unaff_x26 + 0x22e) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x26 + 0x22e) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar6 = fVar5 - unaff_s9;
    fVar8 = fVar7 - unaff_s10;
    fVar10 = fVar9 - unaff_s11;
    fVar11 = SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar8 * fVar8);
    fVar12 = in_stack_00000028._4_4_;
    if (fVar11 <= in_stack_00000028._4_4_) {
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        DAT_06a67148 = '\x01';
      }
      pfVar2 = *(float **)(*unaff_x22 + 0xb8);
      fVar6 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar10 = pfVar2[2];
    }
    else {
      fVar6 = fVar6 / fVar11;
      fVar8 = fVar8 / fVar11;
      fVar10 = fVar10 / fVar11;
    }
    fVar6 = (float)FUN_05eea074(fVar6,0);
    if (*(uint *)(lVar1 + 0x18) <= unaff_x24) goto LAB_051a0f5c;
    pfVar2 = (float *)(lVar1 + unaff_x25);
    pfVar2[-3] = fVar6;
    pfVar2[-2] = fVar8;
    pfVar2[-1] = fVar10;
    *pfVar2 = fVar12;
    if (unaff_x25 != 0x38) {
      if (*(char *)(unaff_x23 + 0x230) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x23 + 0x230) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      in_stack_00000040 = in_stack_00000040 + fVar11;
    }
    param_1 = (long)*(int *)(unaff_x19 + 0x50);
    unaff_x24 = unaff_x24 + 1;
    unaff_x25 = unaff_x25 + 0x20;
    unaff_s9 = fVar5;
    unaff_s10 = fVar7;
    unaff_s11 = fVar9;
  } while ((long)unaff_x24 < param_1);
  if (1 < *(int *)(unaff_x19 + 0x50)) {
    lVar3 = *(long *)(unaff_x19 + 0x68);
    lVar1 = 0x5c;
    uVar4 = 1;
    do {
      if (lVar3 == 0) {
LAB_051a0f60:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4)) {
LAB_051a0f5c:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      lVar3 = lVar3 + lVar1;
      fVar7 = *(float *)(lVar3 + -0x38);
      fVar9 = *(float *)(lVar3 + -0x34);
      fVar5 = *(float *)(lVar3 + -0x3c);
      fVar8 = *(float *)(lVar3 + -0x1c);
      fVar6 = *(float *)(lVar3 + -0x18);
      fVar12 = *(float *)(lVar3 + -0x14);
      if (*(char *)(unaff_x23 + 0x230) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x23 + 0x230) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar3 = *(long *)(unaff_x19 + 0x68);
      if (lVar3 == 0) goto LAB_051a0f60;
      if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4))
      goto LAB_051a0f5c;
      fVar5 = fVar5 - fVar8;
      fVar7 = fVar7 - fVar6;
      fVar9 = fVar9 - fVar12;
      *(float *)(lVar3 + lVar1) =
           SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9) / in_stack_00000040 +
           ((float *)(lVar3 + lVar1))[-8];
      uVar4 = uVar4 + 1;
      lVar1 = lVar1 + 0x20;
    } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
  }
  return;
}


