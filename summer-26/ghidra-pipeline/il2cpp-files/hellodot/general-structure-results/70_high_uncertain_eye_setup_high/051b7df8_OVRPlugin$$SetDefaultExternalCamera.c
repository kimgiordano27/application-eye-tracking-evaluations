/*
FUNCTION_NAME: OVRPlugin$$SetDefaultExternalCamera
ENTRY_POINT: 051b7df8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetDefaultExternalCamera(void)

{
  float *pfVar1;
  float *unaff_x19;
  long *unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float unaff_s10;
  float fVar8;
  float unaff_s11;
  float fVar9;
  float unaff_s12;
  float unaff_s13;
  float fVar10;
  float unaff_s15;
  float fVar11;
  undefined8 in_stack_00000010;
  float in_stack_00000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  
  fVar7 = unaff_s9 - unaff_s15;
  fVar10 = unaff_s13 - unaff_s11;
  fVar6 = unaff_s8 - unaff_s10;
  fStack000000000000001c = unaff_s9;
  fStack0000000000000020 = unaff_s8;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar5 = fVar6 * fVar6 + fVar7 * fVar7 + fVar10 * fVar10;
  fVar2 = SQRT(fVar5);
  fStack0000000000000024 = unaff_s15;
  fStack000000000000002c = unaff_s10;
  if (fVar2 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
    fVar8 = *pfVar1;
    fVar9 = pfVar1[1];
    fVar11 = pfVar1[2];
  }
  else {
    fVar8 = fVar7 / fVar2;
    fVar9 = fVar10 / fVar2;
    fVar11 = fVar6 / fVar2;
  }
  if (DAT_06a67310 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a67310 = '\x01';
  }
  fVar3 = fVar11 * fVar11 + fVar8 * fVar8 + fVar9 * fVar9;
  if (**(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) <= fVar3) {
    fVar4 = (unaff_s12 - fStack000000000000002c) * fVar11 +
            (in_stack_00000010._4_4_ - fStack0000000000000024) * fVar8 +
            (in_stack_00000018 - unaff_s11) * fVar9;
    fVar8 = (fVar8 * fVar4) / fVar3;
    fVar9 = (fVar9 * fVar4) / fVar3;
    fVar3 = (fVar11 * fVar4) / fVar3;
  }
  else {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
    fVar8 = *pfVar1;
    fVar9 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  if (fVar6 * fVar3 + fVar7 * fVar8 + fVar10 * fVar9 <= 0.0) {
    fVar6 = 0.0;
    fStack000000000000001c = fStack0000000000000024;
  }
  else {
    fVar7 = fVar8 * fVar8 + fVar9 * fVar9 + fVar3 * fVar3;
    fVar6 = 1.0;
    if (fVar7 < fVar5) {
      if (DAT_06a67230 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum
                  (0x3f800000,fStack000000000000001c,fStack0000000000000020,PTR_DAT_065c8d28);
        DAT_06a67230 = '\x01';
      }
      if ((*(int *)(*unaff_x20 + 0xe0) == 0) && (thunk_FUN_02cd038c(), DAT_06a67230 == '\0')) {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
        DAT_06a67230 = '\x01';
      }
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fStack000000000000001c = fStack0000000000000024 + fVar8;
      fVar6 = SQRT(fVar7) / fVar2;
    }
  }
  *unaff_x19 = fVar6;
  return fStack000000000000001c;
}


