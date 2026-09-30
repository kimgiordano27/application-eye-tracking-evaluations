/*
FUNCTION_NAME: OVRManager$$remove_HMDLost
ENTRY_POINT: 0519c1b0
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


void OVRManager__remove_HMDLost(float param_1)

{
  float fVar1;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float in_s4;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float fVar8;
  float unaff_s12;
  float unaff_s13;
  float fVar9;
  float fVar10;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack000000000000006c;
  
  fVar3 = SQRT(unaff_s10 * unaff_s10 + param_1);
  if (fVar3 <= in_s4) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
    fStack000000000000006c = *pfVar2;
    fVar7 = pfVar2[1];
    fVar3 = pfVar2[2];
  }
  else {
    fStack000000000000006c = unaff_s8 / fVar3;
    fVar7 = unaff_s15 / fVar3;
    fVar3 = unaff_s10 / fVar3;
  }
  fVar9 = unaff_s13 * fStack000000000000006c;
  fVar10 = unaff_s11 * fStack000000000000006c;
  if (*(char *)(unaff_x22 + 0x22e) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    *(undefined1 *)(unaff_x22 + 0x22e) = 1;
  }
  fVar8 = unaff_s13 * fVar7 - unaff_s11 * fVar3;
  fVar9 = unaff_s12 * fVar3 - fVar9;
  fVar10 = fVar10 - unaff_s12 * fVar7;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar1 = fStack000000000000006c;
  fVar10 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar10 <= in_s4) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    fVar8 = **(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
    fVar9 = (*(float **)(*(long *)PTR_DAT_065c9850 + 0xb8))[1];
  }
  else {
    fVar8 = fVar8 / fVar10;
    fVar9 = fVar9 / fVar10;
  }
  fStack0000000000000004 = fVar9;
  FUN_02faf120(fVar1,fVar7,fVar3,uStack000000000000001c,uStack0000000000000018,
               in_stack_00000010._4_4_,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_05eaba3c(*(long *)(unaff_x20 + 0x40),0);
    FUN_05ee9f08(0);
    uVar6 = FUN_05eea23c(0);
    if (fVar9 * fVar9 + (float)uVar6 * (float)uVar6 + fVar8 * fVar8 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar4 = FUN_05f0023c();
      uVar5 = FUN_05ee9fc0(uVar6,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar5;
      *(float *)(unaff_x19 + 0x10) = fVar8;
      *(float *)(unaff_x19 + 0x14) = fVar9;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar4;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


