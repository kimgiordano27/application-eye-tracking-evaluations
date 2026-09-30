/*
FUNCTION_NAME: OVRPlugin$$GetLayerRecommendedResolution
ENTRY_POINT: 051ca3c8
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051ca888) */

float OVRPlugin__GetLayerRecommendedResolution(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float *pfVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar14;
  float fVar15;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  *(undefined1 *)(unaff_x19 + 0x533) = 1;
  puVar3 = PTR_DAT_065c9f70;
  fVar6 = unaff_s12 * unaff_s12 + unaff_s14 * unaff_s14 + unaff_s13 * unaff_s13;
  fVar5 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8);
  fVar11 = unaff_s15;
  fVar10 = fStack000000000000008c;
  fVar14 = fStack0000000000000088;
  fStack0000000000000008 = fStack0000000000000038;
  fVar7 = fStack000000000000003c;
  fVar9 = in_stack_00000030._4_4_;
  fVar12 = unaff_s10;
  fVar8 = unaff_s9;
  fVar15 = unaff_s8;
  fStack0000000000000018 = unaff_s11;
  fStack000000000000001c = fStack000000000000002c;
  fStack0000000000000020 = fStack0000000000000028;
  if (fVar5 <= fVar6) {
    fVar7 = unaff_s11 * unaff_s12 +
            fStack0000000000000028 * unaff_s14 + fStack000000000000002c * unaff_s13;
    fStack0000000000000020 = fStack0000000000000028 - (unaff_s14 * fVar7) / fVar6;
    fStack000000000000001c = fStack000000000000002c - (unaff_s13 * fVar7) / fVar6;
    fStack0000000000000018 = unaff_s11 - (unaff_s12 * fVar7) / fVar6;
    fVar8 = unaff_s8 * unaff_s12 + unaff_s10 * unaff_s14 + unaff_s9 * unaff_s13;
    fVar9 = in_stack_00000030._4_4_ * unaff_s12 +
            fStack000000000000003c * unaff_s14 + fStack0000000000000038 * unaff_s13;
    fStack0000000000000008 = fStack0000000000000038 - (unaff_s13 * fVar9) / fVar6;
    fVar7 = fStack000000000000008c * unaff_s12 +
            unaff_s15 * unaff_s14 + fStack0000000000000088 * unaff_s13;
    fVar11 = unaff_s15 - (unaff_s14 * fVar7) / fVar6;
    fVar10 = fStack000000000000008c - (unaff_s12 * fVar7) / fVar6;
    fVar14 = fStack0000000000000088 - (unaff_s13 * fVar7) / fVar6;
    fVar7 = fStack000000000000003c - (unaff_s14 * fVar9) / fVar6;
    fVar9 = in_stack_00000030._4_4_ - (unaff_s12 * fVar9) / fVar6;
    fVar12 = unaff_s10 - (unaff_s14 * fVar8) / fVar6;
    fVar8 = unaff_s9 - (unaff_s13 * fVar8) / fVar6;
    fVar15 = unaff_s8 - (unaff_s12 * fVar8) / fVar6;
  }
  fStack000000000000000c = unaff_s11;
  fStack0000000000000010 = unaff_s9;
  fStack0000000000000014 = unaff_s8;
  fStack0000000000000024 = unaff_s10;
  if (DAT_06a67310 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a67310 = '\x01';
    fVar5 = **(float **)(*(long *)puVar3 + 0xb8);
  }
  puVar2 = PTR_DAT_065c9850;
  fVar6 = fVar10 * fVar10 + fVar11 * fVar11 + fVar14 * fVar14;
  if (fVar5 <= fVar6) {
    fVar5 = (fStack0000000000000018 - fVar15) * fVar10 +
            (fStack0000000000000020 - fVar12) * fVar11 + (fStack000000000000001c - fVar8) * fVar14;
    fVar11 = (fVar11 * fVar5) / fVar6;
    fVar14 = (fVar14 * fVar5) / fVar6;
    fVar6 = (fVar10 * fVar5) / fVar6;
  }
  else {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar11 = *pfVar4;
    fVar14 = pfVar4[1];
    fVar6 = pfVar4[2];
  }
  if (DAT_06a6722e == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6722e = '\x01';
  }
  puVar1 = PTR_DAT_065c8d28;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar10 = DAT_013ddfb8;
  fVar5 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fStack0000000000000008 * fStack0000000000000008);
  if (fVar5 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar7 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar9 = pfVar4[2];
  }
  else {
    fVar7 = fVar7 / fVar5;
    fVar13 = fStack0000000000000008 / fVar5;
    fVar9 = fVar9 / fVar5;
  }
  if (DAT_06a6722e == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6722e = '\x01';
  }
  fVar12 = (fVar12 + fVar11) - fStack0000000000000020;
  fVar8 = (fVar8 + fVar14) - fStack000000000000001c;
  fVar15 = (fVar15 + fVar6) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar11 = SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar8 * fVar8);
  if (fVar11 <= fVar10) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar12 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar15 = pfVar4[2];
  }
  else {
    fVar12 = fVar12 / fVar11;
    fVar8 = fVar8 / fVar11;
    fVar15 = fVar15 / fVar11;
  }
  if (DAT_06a67230 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a67230 = '\x01';
  }
  if ((*(int *)(*(long *)puVar1 + 0xe0) == 0) && (thunk_FUN_02cd038c(), DAT_06a67230 == '\0')) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a67230 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar5 = (fVar11 / (fVar9 * fVar15 + fVar7 * fVar12 + fVar13 * fVar8)) / fVar5;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  if (DAT_06a67310 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a67310 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar5;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar5;
  fVar7 = fStack000000000000008c * fStack000000000000008c +
          unaff_s15 * unaff_s15 + fStack0000000000000088 * fStack0000000000000088;
  fVar9 = fStack000000000000000c + in_stack_00000030._4_4_ * fVar5;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar7) {
    fVar15 = fStack000000000000008c * (fVar9 - fStack0000000000000014) +
             unaff_s15 * (fStack0000000000000028 - fStack0000000000000024) +
             fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar12 = (unaff_s15 * fVar15) / fVar7;
    fVar8 = (fStack0000000000000088 * fVar15) / fVar7;
    fVar15 = (fStack000000000000008c * fVar15) / fVar7;
  }
  else {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar12 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar15 = pfVar4[2];
  }
  if (0.0 <= fStack000000000000008c * fVar15 + unaff_s15 * fVar12 + fStack0000000000000088 * fVar8)
  {
    if (fVar7 < fVar12 * fVar12 + fVar8 * fVar8 + fVar15 * fVar15) {
      fVar12 = unaff_s15;
      fVar8 = fStack0000000000000088;
      fVar15 = fStack000000000000008c;
    }
  }
  else {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar12 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar15 = pfVar4[2];
  }
  if (DAT_06a6730d == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6730d = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar12);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar8);
  fVar9 = fVar9 - (fStack0000000000000014 + fVar15);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  return SQRT(fVar9 * fVar9 +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


