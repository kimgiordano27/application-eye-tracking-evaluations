/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 051b9a04
PROGRAM: hellodot-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__GetTrackingCalibratedOrigin(long param_1)

{
  undefined *puVar1;
  float *pfVar2;
  ulong *unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float unaff_s9;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar18;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0xd28));
  *(undefined1 *)(unaff_x24 + 0x22e) = 1;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar3 = SQRT(unaff_s9 * unaff_s9 + unaff_s15 * unaff_s15 + unaff_s8 * unaff_s8);
  if (fVar3 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x23 + 0xb8);
    fVar10 = *pfVar2;
    fVar13 = pfVar2[1];
    fVar3 = pfVar2[2];
  }
  else {
    fVar10 = unaff_s15 / fVar3;
    fVar13 = unaff_s8 / fVar3;
    fVar3 = unaff_s9 / fVar3;
  }
  puVar1 = PTR_DAT_065d62a0;
  fVar4 = *unaff_x22;
  fVar5 = unaff_x22[1];
  fVar6 = unaff_x22[2];
  fVar7 = unaff_x22[3];
  fVar8 = unaff_x22[4];
  fVar9 = unaff_x22[5];
  fVar11 = fVar10 * fVar4;
  fVar14 = fVar13 * fVar5;
  fVar18 = fVar3 * fVar6;
  fVar17 = fVar3 * fVar9 + fVar10 * fVar7 + fVar13 * fVar8;
  if (DAT_06a67231 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a67231 = '\x01';
    fVar4 = *unaff_x22;
    fVar5 = unaff_x22[1];
    fVar6 = unaff_x22[2];
    fVar7 = unaff_x22[3];
    fVar8 = unaff_x22[4];
    fVar9 = unaff_x22[5];
  }
  fVar15 = ABS(fVar17);
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar16 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) * 8.0;
  fVar12 = fVar15 * DAT_013de160;
  if (fVar15 * DAT_013de160 <= fVar16) {
    fVar12 = fVar16;
  }
  fVar15 = 0.0;
  if (fVar12 <= ABS(0.0 - fVar17)) {
    fVar15 = ((unaff_s14 * fVar3 + unaff_s12 * fVar10 + unaff_s13 * fVar13) -
             (fVar18 + fVar11 + fVar14)) / fVar17;
  }
  FUN_051b9e20(fVar4 + fVar7 * fVar15,fVar5 + fVar8 * fVar15,fVar6 + fVar15 * fVar9);
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


