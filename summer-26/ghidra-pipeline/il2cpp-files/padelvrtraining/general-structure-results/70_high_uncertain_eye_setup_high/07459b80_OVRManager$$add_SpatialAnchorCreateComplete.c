/*
FUNCTION_NAME: OVRManager$$add_SpatialAnchorCreateComplete
ENTRY_POINT: 07459b80
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpatialAnchorCreateComplete
               (ulong param_1,long param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  long lVar2;
  long unaff_x22;
  long *plVar3;
  long unaff_x23;
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
  float fStack000000000000000c;
  
  plVar3 = *(long **)(unaff_x22 + 0x220);
                    /* try { // try from 07459b88 to 07559bff has its CatchHandler @ 0745a054 */
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091f9220);
    *(undefined1 *)(unaff_x23 + 1999) = 1;
  }
  fVar12 = *param_3;
  fVar13 = param_3[1];
  fVar9 = param_3[2];
  fVar14 = *param_4;
  fVar11 = param_4[1];
  fVar15 = param_4[2];
  fVar7 = 1.0;
  fStack000000000000000c = 1.0;
  if (*(float *)(param_2 + 0x160) < 0.0) {
    fStack000000000000000c = -1.0;
  }
  fVar6 = fVar9;
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar4 = (float)FUN_08a5bbf8(param_4,0);
                    /* try { // try from 07459c00 to 07559cbb has its CatchHandler @ 07459920 */
  if (DAT_098373f2 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_098373f2 = '\x01';
  }
  fVar5 = fVar6 * fVar6 + fVar4 * fVar4 + fVar7 * fVar7;
  fVar10 = **(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8);
  if (fVar10 <= fVar5) {
    fVar8 = (fVar9 - fVar15) * fVar6 + (fVar12 - fVar14) * fVar4 + (fVar13 - fVar11) * fVar7;
    fVar10 = fVar4 * fVar8;
    fVar4 = fVar10 / fVar5;
    fVar7 = (fVar7 * fVar8) / fVar5;
    fVar5 = (fVar6 * fVar8) / fVar5;
  }
  else {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar4 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  if (DAT_098362cc == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_098362cc = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar5 = fVar5 * fVar5;
  fVar7 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar5);
  fVar6 = (float)FUN_08a5bbf8(param_4,0);
  if ((fVar9 - fVar15) * fVar10 + (fVar12 - fVar14) * fVar6 + (fVar13 - fVar11) * fVar5 < 0.0) {
    fVar7 = -fVar7;
  }
  fVar9 = 1.0;
  if (fVar7 < 0.0) {
    fVar9 = -1.0;
  }
  *(float *)(param_2 + 0x160) = fVar7;
  if (fStack000000000000000c != fVar9) {
    lVar2 = *(long *)(param_2 + 0x168);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07459d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  return;
}


