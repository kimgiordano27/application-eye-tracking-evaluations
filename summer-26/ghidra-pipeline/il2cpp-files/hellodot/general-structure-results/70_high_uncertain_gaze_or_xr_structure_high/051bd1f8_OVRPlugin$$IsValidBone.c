/*
FUNCTION_NAME: OVRPlugin$$IsValidBone
ENTRY_POINT: 051bd1f8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsValidBone(void)

{
  undefined1 in_w8;
  float *pfVar1;
  undefined8 *unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float fVar10;
  float unaff_s14;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  
  *(undefined1 *)(unaff_x23 + 0x22e) = in_w8;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar2 = SQRT(unaff_s14 * unaff_s14 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13);
  if (fVar2 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar9 = *pfVar1;
    fVar10 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  else {
    fVar9 = unaff_s12 / fVar2;
    fVar10 = unaff_s13 / fVar2;
    fVar2 = unaff_s14 / fVar2;
  }
  fVar3 = (float)FUN_051bc17c(uStack0000000000000028,fStack0000000000000024,fStack0000000000000020);
  fVar9 = fStack000000000000002c * fVar9;
  uVar5 = (ulong)(uint)(fStack000000000000002c * fVar10 + fStack0000000000000024);
  uVar7 = (ulong)(uint)(fStack000000000000002c * fVar2 + fStack0000000000000020);
  uVar4 = FUN_051bc5b4(fVar9 + fVar3,uVar5,uVar7);
  uVar6 = uVar5;
  uVar8 = uVar7;
  fVar2 = (float)FUN_051bd38c();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  fVar10 = (float)uVar6;
  fVar3 = (float)uVar8;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_05effcac(uVar4,uVar5,uVar7,
               (fStack000000000000003c * fVar10 +
               fStack0000000000000034 * fVar9 + fStack0000000000000030 * fVar2) -
               fStack0000000000000038 * fVar3,
               (fStack0000000000000034 * fVar3 +
               fStack0000000000000038 * fVar9 + fStack0000000000000030 * fVar10) -
               fStack000000000000003c * fVar2,
               (fStack0000000000000038 * fVar2 +
               fStack000000000000003c * fVar9 + fStack0000000000000030 * fVar3) -
               fStack0000000000000034 * fVar10,
               ((fStack0000000000000030 * fVar9 - fStack0000000000000034 * fVar2) -
               fStack0000000000000038 * fVar10) - fStack000000000000003c * fVar3);
  return;
}


