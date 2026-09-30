/*
FUNCTION_NAME: OVRManager$$remove_SceneCaptureComplete
ENTRY_POINT: 0745abb4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SceneCaptureComplete(undefined1 param_1 [16],float param_2,ulong param_3)

{
  ulong uVar1;
  uint *puVar2;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar16;
  float fVar17;
  ulong unaff_d15;
  
  uVar1 = FUN_08a508b0();
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0745ae5c;
    fVar17 = unaff_x20[1];
    fVar3 = unaff_x20[2];
    fVar16 = *unaff_x20;
    fVar4 = (float)FUN_08a5d3f4(*(long *)(unaff_x19 + 0x30),0);
    fVar9 = (float)param_3;
    fVar7 = param_2;
    fVar8 = fVar9;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar5 = (float)FUN_08a5bc68();
    if (DAT_09837382 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a2ee8);
                    /* try { // try from 0745ac30 to 0755ac37 has its CatchHandler @ 0745ad08 */
      DAT_09837382 = '\x01';
    }
                    /* try { // try from 0745ac4c to 0755ac53 has its CatchHandler @ 0745acf4 */
    fVar6 = fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7;
    fVar16 = fVar16 - fVar4;
    fVar17 = fVar17 - param_2;
                    /* try { // try from 0745ac68 to 0755ac6f has its CatchHandler @ 0745acf8 */
    fVar3 = fVar3 - fVar9;
    if (**(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) <= fVar6) {
      fVar4 = fVar3 * fVar8 + fVar16 * fVar5 + fVar17 * fVar7;
                    /* try { // try from 0745ac90 to 0755ac9b has its CatchHandler @ 0745acfc */
                    /* try { // try from 0745ac9c to 0755ace7 has its CatchHandler @ 0745ab10 */
      fVar16 = fVar16 - (fVar5 * fVar4) / fVar6;
      fVar17 = fVar17 - (fVar7 * fVar4) / fVar6;
      fVar3 = fVar3 - (fVar8 * fVar4) / fVar6;
    }
    if (DAT_0983637d == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983637d = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    param_3 = (ulong)(uint)(fVar3 * fVar3);
    fVar7 = SQRT(fVar3 * fVar3 + fVar16 * fVar16 + fVar17 * fVar17);
    if (fVar7 <= DAT_0191476c) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      puVar2 = *(uint **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
      unaff_d15 = (ulong)*puVar2;
      unaff_d9 = (ulong)puVar2[1];
      unaff_d10 = (ulong)puVar2[2];
    }
    else {
      unaff_d15 = (ulong)(uint)(fVar16 / fVar7);
      unaff_d9 = (ulong)(uint)(fVar17 / fVar7);
      unaff_d10 = (ulong)(uint)(fVar3 / fVar7);
    }
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar3 = unaff_x20[2];
    uVar1 = (ulong)(uint)fVar3;
    fVar7 = unaff_x20[1];
    fVar4 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x60);
    fVar8 = *unaff_x20;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar9 = (float)FUN_08a5bc68();
    fVar16 = *(float *)(unaff_x19 + 0x58);
    uVar12 = uVar1;
    uVar14 = param_3;
    uVar10 = FUN_08a5bc68();
    uVar13 = unaff_d9;
    uVar15 = unaff_d10;
    uVar11 = FUN_08a44a78(unaff_d15,unaff_d9,unaff_d10,uVar10,uVar12,uVar14,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_08a5e270((fVar8 - (float)unaff_d15 * fVar4) + fVar9 * fVar16,
                   (fVar7 - (float)unaff_d9 * fVar4) + (float)uVar1 * fVar16,
                   (fVar3 - (float)unaff_d10 * fVar4) + (float)param_3 * fVar16,uVar11,uVar13,uVar15
                   ,uVar10,*(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
LAB_0745ae5c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


