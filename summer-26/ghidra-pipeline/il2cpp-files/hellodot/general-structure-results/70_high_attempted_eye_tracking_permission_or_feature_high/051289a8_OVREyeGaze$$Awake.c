/*
FUNCTION_NAME: OVREyeGaze$$Awake
ENTRY_POINT: 051289a8
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Awake(float param_1,float param_2,float param_3)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  long unaff_x29;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float fVar8;
  float unaff_s13;
  float fVar9;
  float unaff_s14;
  float fVar10;
  float unaff_s15;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  while( true ) {
    fStack0000000000000040 = param_2 - param_3;
    fStack000000000000002c = unaff_s8;
    if (param_1 < unaff_s14) {
      if (*(char *)(unaff_x26 + 0x22e) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x26 + 0x22e) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar3 = SQRT(unaff_s14);
      if (fVar3 <= fStack0000000000000020) {
        if (*(char *)(unaff_x29 + 0x148) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x29 + 0x148) = unaff_w27;
        }
        pfVar2 = *(float **)(*unaff_x22 + 0xb8);
        fStack000000000000002c = *pfVar2;
        fVar6 = pfVar2[1];
        fVar3 = pfVar2[2];
      }
      else {
        fVar6 = unaff_s11 / fVar3;
        fStack000000000000002c = fStack000000000000002c / fVar3;
        fVar3 = unaff_s12 / fVar3;
      }
      if (*(char *)(unaff_x26 + 0x22e) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x26 + 0x22e) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar4 = SQRT(fStack0000000000000038 * fStack0000000000000038 +
                   in_stack_00000030._4_4_ * in_stack_00000030._4_4_ +
                   fStack000000000000003c * fStack000000000000003c);
      if (fVar4 <= fStack0000000000000020) {
        if (*(char *)(unaff_x29 + 0x148) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x29 + 0x148) = unaff_w27;
        }
        pfVar2 = *(float **)(*unaff_x22 + 0xb8);
        in_stack_00000030._4_4_ = *pfVar2;
        fStack000000000000003c = pfVar2[1];
        fStack0000000000000038 = pfVar2[2];
      }
      else {
        in_stack_00000030._4_4_ = in_stack_00000030._4_4_ / fVar4;
        fStack000000000000003c = fStack000000000000003c / fVar4;
        fStack0000000000000038 = fStack0000000000000038 / fVar4;
      }
      FUN_05ee995c(in_stack_00000030._4_4_,fStack000000000000003c,fStack0000000000000038,
                   fStack000000000000002c,0);
      if (*(char *)(unaff_x23 + 0x311) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x23 + 0x311) = unaff_w27;
      }
      FUN_05ee9aa8(**(undefined4 **)(*unaff_x20 + 0xb8),0);
      FUN_05ee9e58(unaff_s9,unaff_s13,unaff_s15,fStack0000000000000040,&stack0x00000050,
                   (long)&stack0x00000058 + 4,0);
      fStack000000000000005c = fStack000000000000005c * DAT_013de5cc;
      FUN_05ee9f08(fStack000000000000005c *
                   (fVar3 * fStack0000000000000058 +
                   fStack000000000000002c * fStack0000000000000050 + fVar6 * fStack0000000000000054)
                   ,0);
    }
    if (*(char *)(unaff_x23 + 0x311) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x23 + 0x311) = unaff_w27;
    }
    FUN_05ee9aa8(**(undefined4 **)(*unaff_x20 + 0xb8),0);
    unaff_x24 = unaff_x24 + 0x38;
    unaff_x25 = unaff_x25 + 1;
    if (unaff_x28 == unaff_x24) {
      return;
    }
    lVar1 = *(long *)(unaff_x19 + 0x90);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_x25) break;
    lVar1 = lVar1 + unaff_x24;
    fStack000000000000003c = *(float *)(lVar1 + 0x24);
    in_stack_00000030._4_4_ = *(float *)(lVar1 + 0x20);
    fVar4 = *(float *)(lVar1 + 0x40);
    fVar5 = *(float *)(lVar1 + 0x44);
    unaff_s11 = *(float *)(lVar1 + 0x30);
    unaff_s12 = *(float *)(lVar1 + 0x34);
    fStack0000000000000038 = *(float *)(lVar1 + 0x28);
    unaff_s8 = *(float *)(lVar1 + 0x2c);
    fVar9 = *(float *)(lVar1 + 0x48);
    fVar7 = *(float *)(lVar1 + 0x4c);
    fVar8 = *(float *)(lVar1 + 0x50);
    fVar10 = *(float *)(lVar1 + 0x54);
    fVar6 = *(float *)(lVar1 + 0x3c);
    fVar3 = (float)FUN_05ee9a10(*(undefined4 *)(lVar1 + 0x38),0);
    unaff_s15 = (fVar9 * fVar6 + fVar10 * fVar4 + fVar8 * fVar5) - fVar7 * fVar3;
    param_3 = fVar8 * fVar4;
    param_2 = (fVar10 * fVar5 - fVar9 * fVar3) - fVar7 * fVar6;
    unaff_s14 = unaff_s8 * unaff_s8 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12;
    unaff_s9 = (fVar7 * fVar4 + fVar10 * fVar3 + fVar9 * fVar5) - fVar8 * fVar6;
    unaff_s13 = (fVar8 * fVar3 + fVar10 * fVar6 + fVar7 * fVar5) - fVar9 * fVar4;
    param_1 = fStack0000000000000024;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


