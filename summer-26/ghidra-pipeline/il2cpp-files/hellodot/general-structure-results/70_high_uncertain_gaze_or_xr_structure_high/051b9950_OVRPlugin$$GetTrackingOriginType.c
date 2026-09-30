/*
FUNCTION_NAME: OVRPlugin$$GetTrackingOriginType
ENTRY_POINT: 051b9950
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


undefined8
OVRPlugin__GetTrackingOriginType
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  ulong *unaff_x19;
  float *unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack00000000000000ac;
  
  uStack00000000000000ac = (undefined4)param_2;
  uVar7 = FUN_051b8da8();
  if (DAT_06a67312 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67312 = '\x01';
  }
  puVar1 = PTR_DAT_065c9850;
  lVar2 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  fVar4 = (float)FUN_05eea23c(uVar7,param_2,param_3,param_4,*(undefined4 *)(lVar2 + 0x18),
                              *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
  fVar22 = (float)param_3;
  fVar17 = (float)param_2;
  fVar8 = fVar17;
  fVar10 = fVar22;
  lVar2 = FUN_05ef2cb4();
  if (lVar2 != 0) {
    fVar5 = (float)FUN_05f01910(lVar2,0);
    if (DAT_06a6722e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
      DAT_06a6722e = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar6 = SQRT(fVar22 * fVar22 + fVar4 * fVar4 + fVar17 * fVar17);
    if (fVar6 <= DAT_013ddfb8) {
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a67148 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar4 = *pfVar3;
      fVar17 = pfVar3[1];
      fVar22 = pfVar3[2];
    }
    else {
      fVar4 = fVar4 / fVar6;
      fVar17 = fVar17 / fVar6;
      fVar22 = fVar22 / fVar6;
    }
    puVar1 = PTR_DAT_065d62a0;
    fVar6 = *unaff_x22;
    fVar9 = unaff_x22[1];
    fVar11 = unaff_x22[2];
    fVar12 = unaff_x22[3];
    fVar13 = unaff_x22[4];
    fVar14 = unaff_x22[5];
    fVar15 = fVar4 * fVar6;
    fVar18 = fVar17 * fVar9;
    fVar23 = fVar22 * fVar11;
    fVar21 = fVar22 * fVar14 + fVar4 * fVar12 + fVar17 * fVar13;
    if (DAT_06a67231 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
      DAT_06a67231 = '\x01';
      fVar6 = *unaff_x22;
      fVar9 = unaff_x22[1];
      fVar11 = unaff_x22[2];
      fVar12 = unaff_x22[3];
      fVar13 = unaff_x22[4];
      fVar14 = unaff_x22[5];
    }
    fVar19 = ABS(fVar21);
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    fVar20 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) * 8.0;
    fVar16 = fVar19 * DAT_013de160;
    if (fVar19 * DAT_013de160 <= fVar20) {
      fVar16 = fVar20;
    }
    fVar19 = 0.0;
    if (fVar16 <= ABS(0.0 - fVar21)) {
      fVar19 = ((fVar10 * fVar22 + fVar5 * fVar4 + fVar8 * fVar17) - (fVar23 + fVar15 + fVar18)) /
               fVar21;
    }
    FUN_051b9e20(fVar6 + fVar12 * fVar19,fVar9 + fVar13 * fVar19,fVar11 + fVar19 * fVar14);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05effcac(0,0,0,&stack0x00000040,0);
    FUN_051b9c70();
    unaff_x19[1] = in_stack_00000008;
    *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


