/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 07c8b888
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin__StartColocationSessionAdvertisement(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  int unaff_w19;
  long *unaff_x20;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s14;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 in_stack_00000028;
  
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar4 = *unaff_x20;
  }
  lVar5 = *(long *)(lVar4 + 0xb8);
  bVar3 = unaff_w19 != 0;
  lVar4 = 0x74;
  if (bVar3) {
    lVar4 = 0x2c;
  }
  lVar1 = 0x70;
  if (bVar3) {
    lVar1 = 0x28;
  }
  lVar2 = 0x6c;
  if (bVar3) {
    lVar2 = 0x24;
  }
  fVar7 = (float)FUN_09516eb8(uStack000000000000001c,fStack0000000000000020,fStack0000000000000024,
                              in_stack_00000028,*(undefined4 *)(lVar5 + lVar2),
                              *(undefined4 *)(lVar5 + lVar1),*(undefined4 *)(lVar5 + lVar4),0);
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
                    /* try { // try from 07c8b938 to 07d8b9ef has its CatchHandler @ 07c8b938
                       catch() { ... } // from try @ 07c8b938 with catch @ 07c8b938
                       catch() { ... } // from try @ 07c8ba1c with catch @ 07c8b938
                       catch() { ... } // from try @ 07c8baa0 with catch @ 07c8b938
                       catch() { ... } // from try @ 07c8bad8 with catch @ 07c8b938
                       catch() { ... } // from try @ 07c8bb3c with catch @ 07c8b938
                       catch() { ... } // from try @ 07c8bb84 with catch @ 07c8b938
                       catch() { ... } // from try @ 07c8bba0 with catch @ 07c8b938
                       catch() { ... } // from try @ 07c8bbe0 with catch @ 07c8b938 */
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar8 = SQRT(fStack0000000000000024 * fStack0000000000000024 +
               fVar7 * fVar7 + fStack0000000000000020 * fStack0000000000000020);
  if (fVar8 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar7 = *pfVar6;
    fStack0000000000000020 = pfVar6[1];
    fStack0000000000000024 = pfVar6[2];
  }
  else {
    fVar7 = fVar7 / fVar8;
    fStack0000000000000020 = fStack0000000000000020 / fVar8;
    fStack0000000000000024 = fStack0000000000000024 / fVar8;
  }
  fVar9 = fStack0000000000000018 * fStack0000000000000024 +
          fStack0000000000000010 * fVar7 + fStack0000000000000014 * fStack0000000000000020;
  fVar7 = unaff_s14 * fStack0000000000000024 +
          fStack000000000000000c * fVar7 + fStack0000000000000008 * fStack0000000000000020;
  fVar8 = fVar7 - fVar9;
  return (0.0 < fVar8 || fVar8 < 0.0) && ABS(fVar7 - fVar9) < DAT_01c7621c;
}


