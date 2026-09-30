/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 051be784
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__get_bodyTrackingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x21;
  long *unaff_x24;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  float fVar13;
  float fVar14;
  float unaff_s14;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  float fStack0000000000000014;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  thunk_FUN_02cd038c();
  puVar1 = PTR_DAT_065c9850;
  fVar8 = unaff_s10 * unaff_s10;
  fStack000000000000001c = DAT_013ddfb8;
  fVar9 = unaff_s8 * unaff_s8;
  fVar5 = SQRT(fVar9 + unaff_s14 * unaff_s14 + fVar8);
  if (fVar5 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar14 = *pfVar4;
    fVar12 = pfVar4[1];
    fVar5 = pfVar4[2];
  }
  else {
    fVar14 = unaff_s14 / fVar5;
    fVar12 = unaff_s10 / fVar5;
    fVar5 = unaff_s8 / fVar5;
  }
  FUN_051bd91c();
  fStack0000000000000014 = fVar14;
  fVar6 = (float)FUN_05ee995c(0);
  fVar11 = (unaff_s9 * fVar9 + fStack000000000000000c * fVar14 + unaff_s11 * fVar8) -
           in_stack_00000010 * fVar6;
  fVar13 = (in_stack_00000010 * fVar8 + unaff_s9 * fVar14 + unaff_s11 * fVar6) -
           fStack000000000000000c * fVar9;
  fVar10 = (fStack000000000000000c * fVar6 + in_stack_00000010 * fVar14 + unaff_s11 * fVar9) -
           unaff_s9 * fVar8;
  fVar8 = ((unaff_s11 * fVar14 - unaff_s9 * fVar6) - fStack000000000000000c * fVar8) -
          in_stack_00000010 * fVar9;
  if (DAT_06a67233 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67233 = '\x01';
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar9 = fVar11;
  fVar14 = fVar10;
  fStack0000000000000008 =
       (float)FUN_05eea23c(fVar13,fVar11,fVar10,fVar8,*(undefined4 *)(lVar3 + 0x48),
                           *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
  if (DAT_06a68533 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a68533 = '\x01';
  }
  puVar2 = PTR_DAT_065c9f70;
  fVar6 = fVar5 * fVar5 + fStack0000000000000014 * fStack0000000000000014 + fVar12 * fVar12;
  if (**(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) <= fVar6) {
    fVar7 = fVar5 * fVar14 + fStack0000000000000014 * fStack0000000000000008 + fVar12 * fVar9;
    fStack0000000000000008 = fStack0000000000000008 - (fStack0000000000000014 * fVar7) / fVar6;
    fVar9 = fVar9 - (fVar12 * fVar7) / fVar6;
    fVar14 = fVar14 - (fVar5 * fVar7) / fVar6;
  }
  if (*(char *)(unaff_x21 + 0x22e) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    *(undefined1 *)(unaff_x21 + 0x22e) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar7 = SQRT(fVar14 * fVar14 + fStack0000000000000008 * fStack0000000000000008 + fVar9 * fVar9);
  if (fVar7 <= fStack000000000000001c) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fStack0000000000000008 = *pfVar4;
    fStack0000000000000004 = pfVar4[1];
    fVar14 = pfVar4[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar7;
    fStack0000000000000004 = fVar9 / fVar7;
    fVar14 = fVar14 / fVar7;
  }
  if (DAT_06a67233 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67233 = '\x01';
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar9 = (float)FUN_05eea23c(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar3 + 0x48),
                              *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
  if (DAT_06a68533 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a68533 = '\x01';
  }
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar6) {
    fVar7 = fVar5 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar9 + fVar12 * fStack00000000000000a4;
    fVar9 = fVar9 - (fStack0000000000000014 * fVar7) / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 - (fVar12 * fVar7) / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 - (fVar5 * fVar7) / fVar6;
  }
  if (*(char *)(unaff_x21 + 0x22e) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    *(undefined1 *)(unaff_x21 + 0x22e) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar5 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar9 * fVar9 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar5 <= fStack000000000000001c) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar9 = *pfVar4;
    fStack00000000000000a4 = pfVar4[1];
    fStack00000000000000a8 = pfVar4[2];
  }
  else {
    fVar9 = fVar9 / fVar5;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar5;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar5;
  }
  fVar5 = (float)FUN_05ee995c(fStack0000000000000008,fStack0000000000000004,fVar14,fVar9,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (fVar10 * fStack0000000000000004 + fVar13 * fVar9 + fVar8 * fVar5) - fVar11 * fVar14;
}


