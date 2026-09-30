/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$.ctor
ENTRY_POINT: 05bb0910
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate___ctor(long param_1)

{
  undefined *puVar1;
  float *pfVar2;
  long lVar3;
  int in_w9;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  fVar8 = *(float *)(param_1 + 0x20);
  if (in_w9 == 0) {
    FUN_03188a78(PTR_DAT_070cf060);
    *(undefined1 *)(unaff_x22 + 0x684) = 1;
  }
  fVar4 = fVar8 * fVar8 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9;
  if (**(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) <= fVar4) {
    fVar5 = unaff_s13 * fVar8 + unaff_s11 * unaff_s8 + unaff_s12 * unaff_s9;
    unaff_s11 = unaff_s11 - (unaff_s8 * fVar5) / fVar4;
    unaff_s12 = unaff_s12 - (unaff_s9 * fVar5) / fVar4;
    unaff_s13 = unaff_s13 - (fVar8 * fVar5) / fVar4;
  }
  if (DAT_07546bbf == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07546bbf = '\x01';
  }
  puVar1 = PTR_DAT_070c22f8;
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar8 = DAT_012e3cb4;
  fVar4 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar4 <= DAT_012e3cb4) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar5 = *pfVar2;
    fVar6 = pfVar2[1];
    fVar4 = pfVar2[2];
  }
  else {
    fVar5 = unaff_s11 / fVar4;
    fVar6 = unaff_s12 / fVar4;
    fVar4 = unaff_s13 / fVar4;
  }
  FUN_069c54a4(fVar5,0);
  fVar5 = (float)FUN_069c57a8(0);
  if (DAT_07546bbf == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_07546bbf = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar7 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
  if (fVar7 <= fVar8) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar5 = *pfVar2;
    fVar6 = pfVar2[1];
    fVar4 = pfVar2[2];
  }
  else {
    fVar5 = fVar5 / fVar7;
    fVar6 = fVar6 / fVar7;
    fVar4 = fVar4 / fVar7;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar8 = *(float *)(unaff_x19 + 0x28);
    FUN_05bac85c(fVar5 * fVar8,fVar6 * fVar8,fVar4 * fVar8);
    lVar3 = *(long *)(unaff_x19 + 0x38);
    if (lVar3 != 0) {
      in_stack_00000050 = in_stack_00000020;
      in_stack_00000038 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000000;
      in_stack_00000048 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000010;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),&stack0x00000030,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


