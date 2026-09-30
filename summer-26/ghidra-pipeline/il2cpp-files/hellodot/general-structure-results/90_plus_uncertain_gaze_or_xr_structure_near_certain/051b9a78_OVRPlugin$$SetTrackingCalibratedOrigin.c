/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 051b9a78
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__SetTrackingCalibratedOrigin(void)

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
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar17;
  float fVar18;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  *(undefined1 *)(unaff_x24 + 0x148) = 1;
  puVar1 = PTR_DAT_065d62a0;
  pfVar2 = *(float **)(*unaff_x23 + 0xb8);
  fVar9 = *pfVar2;
  fVar12 = pfVar2[1];
  fVar17 = pfVar2[2];
  fVar3 = *unaff_x22;
  fVar4 = unaff_x22[1];
  fVar5 = unaff_x22[2];
  fVar6 = unaff_x22[3];
  fVar7 = unaff_x22[4];
  fVar8 = unaff_x22[5];
  fVar10 = fVar9 * fVar3;
  fVar13 = fVar12 * fVar4;
  fVar18 = fVar17 * fVar5;
  fVar16 = fVar17 * fVar8 + fVar9 * fVar6 + fVar12 * fVar7;
  if (DAT_06a67231 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a67231 = '\x01';
    fVar3 = *unaff_x22;
    fVar4 = unaff_x22[1];
    fVar5 = unaff_x22[2];
    fVar6 = unaff_x22[3];
    fVar7 = unaff_x22[4];
    fVar8 = unaff_x22[5];
  }
  fVar14 = ABS(fVar16);
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar15 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) * 8.0;
  fVar11 = fVar14 * DAT_013de160;
  if (fVar14 * DAT_013de160 <= fVar15) {
    fVar11 = fVar15;
  }
  fVar14 = 0.0;
  if (fVar11 <= ABS(0.0 - fVar16)) {
    fVar14 = ((unaff_s14 * fVar17 + unaff_s12 * fVar9 + unaff_s13 * fVar12) -
             (fVar18 + fVar10 + fVar13)) / fVar16;
  }
  FUN_051b9e20(fVar3 + fVar6 * fVar14,fVar4 + fVar7 * fVar14,fVar5 + fVar14 * fVar8);
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


