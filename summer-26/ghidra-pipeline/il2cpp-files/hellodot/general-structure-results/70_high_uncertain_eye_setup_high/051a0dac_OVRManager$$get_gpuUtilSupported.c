/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 051a0dac
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_gpuUtilSupported(float param_1,float param_2,float param_3,float param_4)

{
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
  long unaff_x29;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s9;
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
  
  do {
    param_2 = param_2 / unaff_s9;
    param_3 = param_3 / unaff_s9;
    fVar8 = unaff_s14;
    fVar7 = unaff_s15;
    fVar6 = unaff_s8;
    while( true ) {
      fVar5 = (float)FUN_05eea074(param_1,0);
      if (*(uint *)(unaff_x29 + 0x18) <= unaff_x24) goto LAB_051a0f5c;
      pfVar1 = (float *)(unaff_x29 + unaff_x25);
      pfVar1[-3] = fVar5;
      pfVar1[-2] = param_2;
      pfVar1[-1] = param_3;
      *pfVar1 = param_4;
      if (unaff_x25 != 0x38) {
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
      unaff_s15 = (float)unaff_x20[1];
      unaff_s8 = (float)unaff_x20[2];
      unaff_s14 = (float)FUN_051a10fc(*unaff_x20,unaff_s15,unaff_s8,uStack000000000000003c);
      lVar3 = *(long *)(unaff_x19 + 0x68);
      if (lVar3 == 0) goto LAB_051a0f60;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_051a0f5c;
      lVar3 = lVar3 + unaff_x25;
      *(float *)(lVar3 + -0x10) = fStack0000000000000030 * unaff_s8;
      *(float *)(lVar3 + -0x18) = fStack0000000000000038 * unaff_s14;
      *(float *)(lVar3 + -0x14) = fStack0000000000000034 * unaff_s15;
      unaff_x29 = *(long *)(unaff_x19 + 0x68);
      if (unaff_x29 == 0) goto LAB_051a0f60;
      if (*(char *)(unaff_x26 + 0x22e) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x26 + 0x22e) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar8 = unaff_s14 - fVar8;
      param_2 = unaff_s15 - fVar7;
      param_3 = unaff_s8 - fVar6;
      unaff_s9 = SQRT(param_3 * param_3 + fVar8 * fVar8 + param_2 * param_2);
      param_4 = in_stack_00000028._4_4_;
      if (in_stack_00000028._4_4_ < unaff_s9) break;
      if (*(char *)(unaff_x28 + 0x148) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x28 + 0x148) = unaff_w27;
      }
      pfVar1 = *(float **)(*unaff_x22 + 0xb8);
      param_1 = *pfVar1;
      param_2 = pfVar1[1];
      param_3 = pfVar1[2];
      fVar8 = unaff_s14;
      fVar7 = unaff_s15;
      fVar6 = unaff_s8;
    }
    param_1 = fVar8 / unaff_s9;
  } while( true );
LAB_051a0e70:
  if (lVar2 == 0) {
LAB_051a0f60:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4)) {
LAB_051a0f5c:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  lVar2 = lVar2 + lVar3;
  fVar7 = *(float *)(lVar2 + -0x38);
  fVar6 = *(float *)(lVar2 + -0x34);
  fVar8 = *(float *)(lVar2 + -0x3c);
  fVar10 = *(float *)(lVar2 + -0x1c);
  fVar9 = *(float *)(lVar2 + -0x18);
  fVar5 = *(float *)(lVar2 + -0x14);
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
  fVar7 = fVar7 - fVar9;
  fVar6 = fVar6 - fVar5;
  *(float *)(lVar2 + lVar3) =
       SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) / in_stack_00000040 +
       ((float *)(lVar2 + lVar3))[-8];
  uVar4 = uVar4 + 1;
  lVar3 = lVar3 + 0x20;
  if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar4) {
    return;
  }
  goto LAB_051a0e70;
}


