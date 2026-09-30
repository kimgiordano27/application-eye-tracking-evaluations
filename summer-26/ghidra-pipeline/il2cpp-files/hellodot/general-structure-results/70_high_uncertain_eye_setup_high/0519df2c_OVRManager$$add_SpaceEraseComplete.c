/*
FUNCTION_NAME: OVRManager$$add_SpaceEraseComplete
ENTRY_POINT: 0519df2c
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


bool OVRManager__add_SpaceEraseComplete(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  float *unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  if (DAT_06a67312 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67312 = '\x01';
  }
  puVar1 = PTR_DAT_065c9850;
  lVar3 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  fVar9 = *(float *)(lVar3 + 0x18);
  fVar8 = *(float *)(lVar3 + 0x1c);
  fVar7 = *(float *)(lVar3 + 0x20);
  if (DAT_06a68533 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a68533 = '\x01';
  }
  fVar5 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  if (**(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) <= fVar5) {
    fVar6 = param_3 * fVar7 + param_1 * fVar9 + param_2 * fVar8;
    param_1 = param_1 - (fVar9 * fVar6) / fVar5;
    param_2 = param_2 - (fVar8 * fVar6) / fVar5;
    param_3 = param_3 - (fVar7 * fVar6) / fVar5;
  }
  if (DAT_06a6722e == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6722e = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar7 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  if (fVar7 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    param_1 = *pfVar4;
    param_2 = pfVar4[1];
    param_3 = pfVar4[2];
  }
  else {
    param_1 = param_1 / fVar7;
    param_2 = param_2 / fVar7;
    param_3 = param_3 / fVar7;
  }
  fVar7 = unaff_s15 * unaff_s15 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_;
  fVar8 = unaff_x19[1] - unaff_x19[1];
  fStack0000000000000010 = fStack0000000000000010 - *unaff_x19;
  fStack0000000000000014 = fStack0000000000000014 - unaff_x19[2];
  fVar9 = (fVar8 * fVar8 + fStack0000000000000010 * fStack0000000000000010 +
          fStack0000000000000014 * fStack0000000000000014) - fVar7;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (unaff_s14 < fVar9) {
    bVar2 = false;
  }
  else {
    fVar5 = param_3 * fVar8 - param_2 * fStack0000000000000014;
    fVar9 = param_1 * fStack0000000000000014 - param_3 * fStack0000000000000010;
    fVar8 = param_2 * fStack0000000000000010 - param_1 * fVar8;
    bVar2 = fVar8 * fVar8 + fVar5 * fVar5 + fVar9 * fVar9 <= fVar7;
  }
  return bVar2;
}


