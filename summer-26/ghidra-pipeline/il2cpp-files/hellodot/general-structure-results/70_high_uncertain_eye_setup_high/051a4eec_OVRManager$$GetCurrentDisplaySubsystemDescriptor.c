/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystemDescriptor
ENTRY_POINT: 051a4eec
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystemDescriptor
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  float *pfVar1;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fStack000000000000005c;
  
  fVar16 = unaff_x20[1];
  fStack000000000000005c = unaff_x20[2];
  fVar15 = *unaff_x20;
  fVar2 = (float)FUN_05f01910(param_4,0);
  fVar5 = param_2;
  fVar6 = param_3;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar3 = (float)FUN_05f0023c();
  if (DAT_06a68533 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a68533 = '\x01';
  }
  fVar4 = fVar6 * fVar6 + fVar3 * fVar3 + fVar5 * fVar5;
  fVar15 = fVar15 - fVar2;
  fVar16 = fVar16 - param_2;
  param_3 = fStack000000000000005c - param_3;
  if (**(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) <= fVar4) {
    fVar2 = param_3 * fVar6 + fVar15 * fVar3 + fVar16 * fVar5;
    fVar15 = fVar15 - (fVar3 * fVar2) / fVar4;
    fVar16 = fVar16 - (fVar5 * fVar2) / fVar4;
    param_3 = param_3 - (fVar6 * fVar2) / fVar4;
  }
  if (DAT_06a6722e == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6722e = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar12 = (ulong)(uint)(param_3 * param_3);
  fVar5 = SQRT(param_3 * param_3 + fVar15 * fVar15 + fVar16 * fVar16);
  if (fVar5 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
    fVar15 = *pfVar1;
    fVar16 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar15 = fVar15 / fVar5;
    fVar16 = fVar16 / fVar5;
    param_3 = param_3 / fVar5;
  }
  uVar14 = (ulong)(uint)param_3;
  uVar11 = (ulong)(uint)fVar16;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fStack000000000000005c = unaff_x20[2];
    uVar9 = (ulong)(uint)fStack000000000000005c;
    fVar5 = unaff_x20[1];
    fVar2 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x60);
    fVar6 = *unaff_x20;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar3 = (float)FUN_05f0023c();
    fVar4 = *(float *)(unaff_x19 + 0x58);
    uVar10 = uVar9;
    uVar13 = uVar12;
    uVar7 = FUN_05f0023c();
    uVar8 = FUN_05ee9fc0(fVar15,uVar11,uVar14,uVar7,uVar10,uVar13,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_05f0278c((fVar6 - fVar15 * fVar2) + fVar3 * fVar4,
                   (fVar5 - fVar16 * fVar2) + (float)uVar9 * fVar4,
                   (fStack000000000000005c - param_3 * fVar2) + (float)uVar12 * fVar4,uVar8,uVar11,
                   uVar14,uVar7,*(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


