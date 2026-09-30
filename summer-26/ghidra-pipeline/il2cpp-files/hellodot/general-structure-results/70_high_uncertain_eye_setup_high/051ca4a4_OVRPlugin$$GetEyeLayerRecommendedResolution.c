/*
FUNCTION_NAME: OVRPlugin$$GetEyeLayerRecommendedResolution
ENTRY_POINT: 051ca4a4
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

float OVRPlugin__GetEyeLayerRecommendedResolution(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long *unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar10;
  float in_s16;
  float in_s17;
  float fVar11;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float in_stack_00000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  fVar8 = unaff_s15;
  fVar6 = fStack000000000000008c;
  fVar10 = fStack0000000000000088;
  fVar7 = fStack0000000000000038;
  fVar11 = fStack000000000000003c;
  fVar5 = in_stack_00000030._4_4_;
  if (param_1 <= param_2) {
    fVar5 = in_stack_00000030._4_4_ * unaff_s12 +
            fStack000000000000003c * unaff_s14 + fStack0000000000000038 * unaff_s13;
    fVar11 = fStack000000000000003c - (unaff_s14 * fVar5) / param_2;
    fVar7 = fStack0000000000000038 - (unaff_s13 * fVar5) / param_2;
    fVar5 = in_stack_00000030._4_4_ - (unaff_s12 * fVar5) / param_2;
    fVar6 = fStack000000000000008c * unaff_s12 +
            unaff_s15 * unaff_s14 + fStack0000000000000088 * unaff_s13;
    fVar8 = unaff_s15 - (unaff_s14 * fVar6) / param_2;
    fVar10 = fStack0000000000000088 - (unaff_s13 * fVar6) / param_2;
    fVar6 = fStack000000000000008c - (unaff_s12 * fVar6) / param_2;
  }
  fStack0000000000000010 = unaff_s9;
  fStack0000000000000014 = unaff_s8;
  fStack0000000000000024 = unaff_s10;
  if (DAT_06a67310 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum();
    DAT_06a67310 = '\x01';
    param_1 = **(float **)(*unaff_x19 + 0xb8);
  }
  puVar2 = PTR_DAT_065c9850;
  fVar4 = fVar6 * fVar6 + fVar8 * fVar8 + fVar10 * fVar10;
  if (param_1 <= fVar4) {
    fVar9 = (fStack0000000000000018 - (unaff_s8 - param_3)) * fVar6 +
            (in_stack_00000020 - in_s16) * fVar8 + (fStack000000000000001c - in_s17) * fVar10;
    fVar8 = (fVar8 * fVar9) / fVar4;
    fVar10 = (fVar10 * fVar9) / fVar4;
    fVar4 = (fVar6 * fVar9) / fVar4;
  }
  else {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar8 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  if (DAT_06a6722e == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6722e = '\x01';
  }
  puVar1 = PTR_DAT_065c8d28;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar6 = DAT_013ddfb8;
  fVar9 = SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar7 * fVar7);
  if (fVar9 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar11 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar5 = pfVar3[2];
  }
  else {
    fVar11 = fVar11 / fVar9;
    fVar7 = fVar7 / fVar9;
    fVar5 = fVar5 / fVar9;
  }
  if (DAT_06a6722e == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6722e = '\x01';
  }
  in_stack_00000020 = (in_s16 + fVar8) - in_stack_00000020;
  fStack000000000000001c = (in_s17 + fVar10) - fStack000000000000001c;
  fStack0000000000000018 = ((unaff_s8 - param_3) + fVar4) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar8 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               in_stack_00000020 * in_stack_00000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar8 <= fVar6) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    in_stack_00000020 = *pfVar3;
    fStack000000000000001c = pfVar3[1];
    fStack0000000000000018 = pfVar3[2];
  }
  else {
    in_stack_00000020 = in_stack_00000020 / fVar8;
    fStack000000000000001c = fStack000000000000001c / fVar8;
    fStack0000000000000018 = fStack0000000000000018 / fVar8;
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
  fVar9 = (fVar8 / (fVar5 * fStack0000000000000018 +
                   fVar11 * in_stack_00000020 + fVar7 * fStack000000000000001c)) / fVar9;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  if (DAT_06a67310 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a67310 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar9;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar9;
  fVar7 = fStack000000000000008c * fStack000000000000008c +
          unaff_s15 * unaff_s15 + fStack0000000000000088 * fStack0000000000000088;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + in_stack_00000030._4_4_ * fVar9;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar7) {
    fVar8 = fStack000000000000008c * (in_stack_00000008._4_4_ - fStack0000000000000014) +
            unaff_s15 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar11 = (unaff_s15 * fVar8) / fVar7;
    fVar5 = (fStack0000000000000088 * fVar8) / fVar7;
    fVar8 = (fStack000000000000008c * fVar8) / fVar7;
  }
  else {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar11 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  if (0.0 <= fStack000000000000008c * fVar8 + unaff_s15 * fVar11 + fStack0000000000000088 * fVar5) {
    if (fVar7 < fVar11 * fVar11 + fVar5 * fVar5 + fVar8 * fVar8) {
      fVar11 = unaff_s15;
      fVar5 = fStack0000000000000088;
      fVar8 = fStack000000000000008c;
    }
  }
  else {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar11 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  if (DAT_06a6730d == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6730d = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar11);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar5);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (fStack0000000000000014 + fVar8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  return SQRT(in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


