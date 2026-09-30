/*
FUNCTION_NAME: OVRManager$$remove_SpaceSaveComplete
ENTRY_POINT: 0519de38
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__remove_SpaceSaveComplete
               (float param_1,undefined1 param_2 [16],float param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  
  if ((DAT_06a71209 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608418);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d62a0);
    DAT_06a71209 = 1;
  }
  puVar1 = PTR_DAT_065d62a0;
  plVar8 = *(long **)(param_4 + 0xd0);
  if (plVar8 == (long *)0x0) {
    bVar2 = true;
  }
  else {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06608418) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0519deec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_06608418,0);
LAB_0519deec:
    (*(code *)*puVar3)(&stack0x00000018,plVar8,puVar3[1]);
    fVar12 = in_stack_00000018;
    fStack0000000000000014 = fStack0000000000000020;
    fStack000000000000000c = in_stack_00000028._4_4_;
    fVar14 = in_stack_00000018;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar9 = (float)FUN_05f0015c(param_5,0);
    if (DAT_06a67312 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67312 = '\x01';
    }
    puVar1 = PTR_DAT_065c9850;
    lVar4 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
    fVar16 = *(float *)(lVar4 + 0x18);
    fVar15 = *(float *)(lVar4 + 0x1c);
    fVar13 = *(float *)(lVar4 + 0x20);
    if (DAT_06a68533 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
      DAT_06a68533 = '\x01';
    }
    fVar10 = fVar13 * fVar13 + fVar16 * fVar16 + fVar15 * fVar15;
    if (**(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) <= fVar10) {
      fVar11 = param_3 * fVar13 + fVar9 * fVar16 + fVar14 * fVar15;
      fVar9 = fVar9 - (fVar16 * fVar11) / fVar10;
      fVar14 = fVar14 - (fVar15 * fVar11) / fVar10;
      param_3 = param_3 - (fVar13 * fVar11) / fVar10;
    }
    if (DAT_06a6722e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
      DAT_06a6722e = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar13 = SQRT(param_3 * param_3 + fVar9 * fVar9 + fVar14 * fVar14);
    if (fVar13 <= DAT_013ddfb8) {
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a67148 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar9 = *pfVar5;
      fVar14 = pfVar5[1];
      param_3 = pfVar5[2];
    }
    else {
      fVar9 = fVar9 / fVar13;
      fVar14 = fVar14 / fVar13;
      param_3 = param_3 / fVar13;
    }
    fVar13 = fStack0000000000000024 * fStack0000000000000024 +
             fStack000000000000000c * fStack000000000000000c;
    fVar15 = param_5[1] - param_5[1];
    fVar12 = fVar12 - *param_5;
    fStack0000000000000014 = fStack0000000000000014 - param_5[2];
    fVar16 = (fVar15 * fVar15 + fVar12 * fVar12 + fStack0000000000000014 * fStack0000000000000014) -
             fVar13;
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    if (param_1 < fVar16) {
      bVar2 = false;
    }
    else {
      fVar10 = param_3 * fVar15 - fVar14 * fStack0000000000000014;
      fVar16 = fVar9 * fStack0000000000000014 - param_3 * fVar12;
      fVar12 = fVar14 * fVar12 - fVar9 * fVar15;
      bVar2 = fVar12 * fVar12 + fVar10 * fVar10 + fVar16 * fVar16 <= fVar13;
    }
  }
  return bVar2;
}


