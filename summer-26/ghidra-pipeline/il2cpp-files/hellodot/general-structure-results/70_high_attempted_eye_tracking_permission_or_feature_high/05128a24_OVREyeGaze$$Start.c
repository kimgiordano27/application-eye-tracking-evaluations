/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 05128a24
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Start(void)

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
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  while( true ) {
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
    fVar3 = *(float *)(lVar1 + 0x24);
    fVar6 = *(float *)(lVar1 + 0x20);
    fVar8 = *(float *)(lVar1 + 0x40);
    fVar9 = *(float *)(lVar1 + 0x44);
    fVar11 = *(float *)(lVar1 + 0x30);
    fVar12 = *(float *)(lVar1 + 0x34);
    fVar4 = *(float *)(lVar1 + 0x28);
    fStack000000000000002c = *(float *)(lVar1 + 0x2c);
    fVar14 = *(float *)(lVar1 + 0x48);
    fVar10 = *(float *)(lVar1 + 0x4c);
    fVar13 = *(float *)(lVar1 + 0x50);
    fVar16 = *(float *)(lVar1 + 0x54);
    fVar7 = *(float *)(lVar1 + 0x3c);
    fVar5 = (float)FUN_05ee9a10(*(undefined4 *)(lVar1 + 0x38),0);
    fVar15 = fStack000000000000002c * fStack000000000000002c + fVar11 * fVar11 + fVar12 * fVar12;
    if (fStack0000000000000024 < fVar15) {
      if (*(char *)(unaff_x26 + 0x22e) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x26 + 0x22e) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar15 = SQRT(fVar15);
      if (fVar15 <= fStack0000000000000020) {
        if (*(char *)(unaff_x29 + 0x148) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x29 + 0x148) = unaff_w27;
        }
        pfVar2 = *(float **)(*unaff_x22 + 0xb8);
        fStack000000000000002c = *pfVar2;
        fVar11 = pfVar2[1];
        fVar12 = pfVar2[2];
      }
      else {
        fVar11 = fVar11 / fVar15;
        fStack000000000000002c = fStack000000000000002c / fVar15;
        fVar12 = fVar12 / fVar15;
      }
      if (*(char *)(unaff_x26 + 0x22e) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x26 + 0x22e) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar15 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar3 * fVar3);
      if (fVar15 <= fStack0000000000000020) {
        if (*(char *)(unaff_x29 + 0x148) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x29 + 0x148) = unaff_w27;
        }
        pfVar2 = *(float **)(*unaff_x22 + 0xb8);
        fVar6 = *pfVar2;
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
      }
      else {
        fVar6 = fVar6 / fVar15;
        fVar3 = fVar3 / fVar15;
        fVar4 = fVar4 / fVar15;
      }
      FUN_05ee995c(fVar6,fVar3,fVar4,fStack000000000000002c,0);
      if (*(char *)(unaff_x23 + 0x311) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x23 + 0x311) = unaff_w27;
      }
      FUN_05ee9aa8(**(undefined4 **)(*unaff_x20 + 0xb8),0);
      FUN_05ee9e58((fVar10 * fVar8 + fVar16 * fVar5 + fVar14 * fVar9) - fVar13 * fVar7,
                   (fVar13 * fVar5 + fVar16 * fVar7 + fVar10 * fVar9) - fVar14 * fVar8,
                   (fVar14 * fVar7 + fVar16 * fVar8 + fVar13 * fVar9) - fVar10 * fVar5,
                   ((fVar16 * fVar9 - fVar14 * fVar5) - fVar10 * fVar7) - fVar13 * fVar8,
                   &stack0x00000050,(long)&stack0x00000058 + 4,0);
      fStack000000000000005c = fStack000000000000005c * DAT_013de5cc;
      FUN_05ee9f08(fStack000000000000005c *
                   (fVar12 * fStack0000000000000058 +
                   fStack000000000000002c * fStack0000000000000050 + fVar11 * fStack0000000000000054
                   ),0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


