/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 05128d24
PROGRAM: hellodot-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking
               (float param_1,float param_2,float param_3,undefined1 param_4 [16],
               undefined1 param_5 [16],float param_6)

{
  long lVar1;
  float *pfVar2;
  undefined4 *puVar3;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float in_s24;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  while( true ) {
    fVar15 = param_6 - in_s24;
    unaff_x25 = unaff_x25 + 1;
    if (unaff_x28 == unaff_x24) {
      return;
    }
    lVar1 = *(long *)(unaff_x19 + 0x90);
    fStack000000000000004c = param_1;
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar1 = lVar1 + unaff_x24;
    fVar4 = *(float *)(lVar1 + 0x24);
    fVar7 = *(float *)(lVar1 + 0x20);
    fVar9 = *(float *)(lVar1 + 0x40);
    fVar10 = *(float *)(lVar1 + 0x44);
    fVar16 = *(float *)(lVar1 + 0x30);
    fVar17 = *(float *)(lVar1 + 0x34);
    fVar5 = *(float *)(lVar1 + 0x28);
    fStack000000000000002c = *(float *)(lVar1 + 0x2c);
    fVar20 = *(float *)(lVar1 + 0x48);
    fVar14 = *(float *)(lVar1 + 0x4c);
    fVar19 = *(float *)(lVar1 + 0x50);
    fVar22 = *(float *)(lVar1 + 0x54);
    fVar8 = *(float *)(lVar1 + 0x3c);
    fVar6 = (float)FUN_05ee9a10(*(undefined4 *)(lVar1 + 0x38),0);
    fVar21 = fStack000000000000002c * fStack000000000000002c + fVar16 * fVar16 + fVar17 * fVar17;
    fVar18 = fStack000000000000004c;
    if (fStack0000000000000024 < fVar21) {
      if (*(char *)(unaff_x26 + 0x22e) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x26 + 0x22e) = unaff_w27;
      }
      fVar18 = fStack000000000000004c;
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar21 = SQRT(fVar21);
      if (fVar21 <= fStack0000000000000020) {
        if (*(char *)(unaff_x29 + 0x148) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x29 + 0x148) = unaff_w27;
        }
        pfVar2 = *(float **)(*unaff_x22 + 0xb8);
        fStack000000000000002c = *pfVar2;
        fVar16 = pfVar2[1];
        fVar17 = pfVar2[2];
      }
      else {
        fVar16 = fVar16 / fVar21;
        fStack000000000000002c = fStack000000000000002c / fVar21;
        fVar17 = fVar17 / fVar21;
      }
      if (*(char *)(unaff_x26 + 0x22e) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x26 + 0x22e) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar21 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar4 * fVar4);
      if (fVar21 <= fStack0000000000000020) {
        if (*(char *)(unaff_x29 + 0x148) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x29 + 0x148) = unaff_w27;
        }
        pfVar2 = *(float **)(*unaff_x22 + 0xb8);
        fVar7 = *pfVar2;
        fVar4 = pfVar2[1];
        fVar5 = pfVar2[2];
      }
      else {
        fVar7 = fVar7 / fVar21;
        fVar4 = fVar4 / fVar21;
        fVar5 = fVar5 / fVar21;
      }
      FUN_05ee995c(fVar7,fVar4,fVar5,fStack000000000000002c,0);
      if (*(char *)(unaff_x23 + 0x311) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x23 + 0x311) = unaff_w27;
      }
      puVar3 = *(undefined4 **)(*unaff_x20 + 0xb8);
      fVar5 = (float)puVar3[1];
      fVar21 = (float)puVar3[2];
      fVar7 = (float)puVar3[3];
      fVar4 = (float)FUN_05ee9aa8(*puVar3,0);
      fVar11 = fVar15 * fVar4;
      fVar24 = param_2 * fVar4;
      fVar12 = param_3 * fVar5;
      fVar23 = fVar15 * fVar5;
      fVar13 = param_2 * fVar21;
      fVar25 = fVar15 * fVar21;
      fVar15 = ((fVar15 * fVar7 - fVar18 * fVar4) - param_2 * fVar5) - param_3 * fVar21;
      param_2 = (fVar18 * fVar21 + param_2 * fVar7 + fVar23) - param_3 * fVar4;
      param_3 = (fVar24 + param_3 * fVar7 + fVar25) - fVar18 * fVar5;
      FUN_05ee9e58((fVar14 * fVar9 + fVar22 * fVar6 + fVar20 * fVar10) - fVar19 * fVar8,
                   (fVar19 * fVar6 + fVar22 * fVar8 + fVar14 * fVar10) - fVar20 * fVar9,
                   (fVar20 * fVar8 + fVar22 * fVar9 + fVar19 * fVar10) - fVar14 * fVar6,
                   ((fVar22 * fVar10 - fVar20 * fVar6) - fVar14 * fVar8) - fVar19 * fVar9,
                   &stack0x00000050,(long)&stack0x00000058 + 4,0);
      fStack000000000000005c = fStack000000000000005c * DAT_013de5cc;
      FUN_05ee9f08(fStack000000000000005c *
                   (fVar17 * fStack0000000000000058 +
                   fStack000000000000002c * fStack0000000000000050 + fVar16 * fStack0000000000000054
                   ),0);
      fVar18 = (fVar12 + fVar18 * fVar7 + fVar11) - fVar13;
    }
    if (*(char *)(unaff_x23 + 0x311) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x23 + 0x311) = unaff_w27;
    }
    puVar3 = *(undefined4 **)(*unaff_x20 + 0xb8);
    fVar5 = (float)puVar3[1];
    fVar6 = (float)puVar3[2];
    fVar21 = (float)puVar3[3];
    fVar4 = (float)FUN_05ee9aa8(*puVar3,0);
    fVar7 = param_2 * fVar4;
    in_s24 = param_3 * fVar6;
    unaff_x24 = unaff_x24 + 0x38;
    param_6 = (fVar15 * fVar21 - fVar18 * fVar4) - param_2 * fVar5;
    param_1 = (param_3 * fVar5 + fVar18 * fVar21 + fVar15 * fVar4) - param_2 * fVar6;
    param_2 = (fVar18 * fVar6 + param_2 * fVar21 + fVar15 * fVar5) - param_3 * fVar4;
    param_3 = (fVar7 + param_3 * fVar21 + fVar15 * fVar6) - fVar18 * fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


