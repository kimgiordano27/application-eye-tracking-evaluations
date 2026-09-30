/*
FUNCTION_NAME: OVRPlugin$$get_occlusionMesh
ENTRY_POINT: 073d9978
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073d9c88) */

float OVRPlugin__get_occlusionMesh(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  float fVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  float fVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  float unaff_s9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 unaff_d10;
  float fVar13;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  float fStack0000000000000004;
  undefined4 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  undefined4 uStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  
  plVar5 = *(long **)(unaff_x20 + 0xe18);
  uStack000000000000001c = FUN_085d2bd4(0);
  uStack0000000000000014 = unaff_s13;
  if (*(char *)(unaff_x19 + 0x146) == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    *(undefined1 *)(unaff_x19 + 0x146) = 1;
  }
  uVar7 = FUN_085d2bd4(0);
  if (*(char *)(unaff_x19 + 0x146) == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    *(undefined1 *)(unaff_x19 + 0x146) = 1;
  }
  lVar4 = *(long *)(*plVar5 + 0xb8);
  fStack0000000000000024 = fStack0000000000000094;
  fVar6 = (float)FUN_085d2bd4(uStack0000000000000090,fStack0000000000000094,fStack0000000000000098,
                              uStack000000000000009c,*(undefined4 *)(lVar4 + 0x48),
                              *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  fVar13 = (float)unaff_d10;
  fVar10 = unaff_s9 * fStack0000000000000024;
  fVar11 = (float)uVar7;
  fVar12 = fVar11 * fStack0000000000000024;
  fStack000000000000002c = unaff_s9;
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  puVar1 = PTR_DAT_08e6a6b8;
  fVar10 = fVar13 * fStack0000000000000098 - fVar10;
  fVar9 = unaff_s9 * fVar6 - fVar11 * fStack0000000000000098;
  fVar12 = fVar12 - fVar13 * fVar6;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar3 = fStack000000000000002c;
  fVar10 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9);
  if (fVar10 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    fVar9 = *(float *)(*(long *)(*plVar5 + 0xb8) + 4);
  }
  else {
    fVar9 = fVar9 / fVar10;
  }
  uVar2 = uStack000000000000001c;
  fStack0000000000000004 = fVar9;
  fVar10 = (float)FUN_03f04c24(uStack000000000000001c,unaff_s14,uStack0000000000000014,uVar7,
                               unaff_d10,fVar3,0);
  fStack0000000000000004 = fVar9;
  fVar12 = (float)FUN_03f04c24(uVar2,unaff_s14,uStack0000000000000014,fVar6,fStack0000000000000024,
                               fStack0000000000000098,0);
  if (((0.0 <= fVar10) || (fVar9 = 1.0, 0.0 <= fVar12)) &&
     ((fVar10 <= 0.0 || (fVar9 = 0.0, fVar12 <= 0.0)))) {
    if (DAT_094108d3 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094108d3 = '\x01';
    }
    fVar12 = fStack000000000000002c * fStack000000000000002c;
    fVar9 = fStack0000000000000024 * fStack0000000000000024;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar12 = SQRT((fVar12 + fVar11 * fVar11 + fVar13 * fVar13) *
                  (fStack0000000000000098 * fStack0000000000000098 + fVar6 * fVar6 + fVar9));
    fVar9 = 0.0;
    if (DAT_018aff20 <= fVar12) {
      fVar12 = (fStack000000000000002c * fStack0000000000000098 +
               fVar11 * fVar6 + fVar13 * fStack0000000000000024) / fVar12;
      if (fVar12 < -1.0) {
        fVar12 = -1.0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      dVar8 = acos((double)fVar12);
      fVar9 = (float)dVar8 * DAT_018b1028;
    }
    fVar9 = ABS(fVar10) / fVar9;
  }
  return fVar9;
}


