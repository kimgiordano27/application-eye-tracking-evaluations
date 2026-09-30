/*
FUNCTION_NAME: OVRManager$$add_HMDLost
ENTRY_POINT: 0519c0d4
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


void OVRManager__add_HMDLost(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  float fVar2;
  int in_w8;
  float *pfVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s11;
  float fVar11;
  float unaff_s12;
  float unaff_s13;
  float fVar12;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack000000000000006c;
  
  if (in_w8 == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    *(undefined1 *)(unaff_x22 + 0x533) = 1;
  }
  fVar4 = unaff_s13 * unaff_s13 + unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11;
  fVar10 = unaff_s8;
  fVar12 = param_2;
  fVar9 = param_3;
  if (**(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) <= fVar4) {
    fVar9 = unaff_s13 * param_3 + unaff_s12 * unaff_s8 + unaff_s11 * param_2;
    fVar10 = unaff_s8 - (unaff_s12 * fVar9) / fVar4;
    fVar12 = param_2 - (unaff_s11 * fVar9) / fVar4;
    fVar9 = param_3 - (unaff_s13 * fVar9) / fVar4;
  }
  fStack0000000000000014 = param_3;
  fStack000000000000001c = unaff_s8;
  if (DAT_06a6722e == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6722e = '\x01';
  }
  puVar1 = PTR_DAT_065c8d28;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar4 = DAT_013ddfb8;
  fVar5 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12);
  if (fVar5 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
    fStack000000000000006c = *pfVar3;
    fVar12 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  else {
    fStack000000000000006c = fVar10 / fVar5;
    fVar12 = fVar12 / fVar5;
    fVar9 = fVar9 / fVar5;
  }
  fVar10 = unaff_s13 * fStack000000000000006c;
  fVar5 = unaff_s11 * fStack000000000000006c;
  if (DAT_06a6722e == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6722e = '\x01';
  }
  fVar11 = unaff_s13 * fVar12 - unaff_s11 * fVar9;
  fVar10 = unaff_s12 * fVar9 - fVar10;
  fVar5 = fVar5 - unaff_s12 * fVar12;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar2 = fStack000000000000006c;
  fVar5 = SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar10 * fVar10);
  if (fVar5 <= fVar4) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    fVar11 = **(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
    fVar10 = (*(float **)(*(long *)PTR_DAT_065c9850 + 0xb8))[1];
  }
  else {
    fVar11 = fVar11 / fVar5;
    fVar10 = fVar10 / fVar5;
  }
  fStack0000000000000004 = fVar10;
  FUN_02faf120(fVar2,fVar12,fVar9,fStack000000000000001c,param_2,fStack0000000000000014,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_05eaba3c(*(long *)(unaff_x20 + 0x40),0);
    FUN_05ee9f08(0);
    uVar8 = FUN_05eea23c(0);
    if (fVar10 * fVar10 + (float)uVar8 * (float)uVar8 + fVar11 * fVar11 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_05f0023c();
      uVar7 = FUN_05ee9fc0(uVar8,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar7;
      *(float *)(unaff_x19 + 0x10) = fVar11;
      *(float *)(unaff_x19 + 0x14) = fVar10;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


