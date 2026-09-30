/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 07c7ef9c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *unaff_x19;
  undefined4 *unaff_x20;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  ulong uVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 in_d3;
  float unaff_s8;
  float fVar14;
  float unaff_s9;
  float unaff_s10;
  
  puVar1 = PTR_DAT_09f1e740;
  lVar3 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  fVar11 = *(float *)(lVar3 + 0x1c);
  fVar5 = *(float *)(lVar3 + 0x20);
  fVar8 = *(float *)(lVar3 + 0x18);
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  fVar14 = unaff_s9 * fVar5 - unaff_s10 * fVar11;
  fVar5 = unaff_s10 * fVar8 - unaff_s8 * fVar5;
  fVar8 = unaff_s8 * fVar11 - unaff_s9 * fVar8;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  puVar2 = PTR_DAT_09f4d0a8;
  fVar11 = SQRT(fVar8 * fVar8 + fVar14 * fVar14 + fVar5 * fVar5);
  if (fVar11 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar14 = *pfVar4;
    fVar5 = pfVar4[1];
    fVar8 = pfVar4[2];
  }
  else {
    fVar14 = fVar14 / fVar11;
    fVar5 = fVar5 / fVar11;
    fVar8 = fVar8 / fVar11;
  }
  uVar13 = (ulong)(uint)fVar8;
  uVar10 = (ulong)(uint)fVar5;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar7 = FUN_07ca05b4(fVar14,uVar10,uVar13,unaff_x20 + 3,0);
  uVar6 = *unaff_x20;
  uVar9 = unaff_x20[1];
  uVar12 = unaff_x20[2];
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  *unaff_x19 = 0;
  FUN_09537b20(uVar6,uVar9,uVar12,uVar7,uVar10,uVar13,in_d3);
  return;
}


