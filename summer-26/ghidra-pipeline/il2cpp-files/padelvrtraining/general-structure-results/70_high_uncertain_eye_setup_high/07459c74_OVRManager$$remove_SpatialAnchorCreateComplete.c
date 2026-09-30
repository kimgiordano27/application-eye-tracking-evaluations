/*
FUNCTION_NAME: OVRManager$$remove_SpatialAnchorCreateComplete
ENTRY_POINT: 07459c74
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpatialAnchorCreateComplete
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined1 in_w8;
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x21;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x21 + 0x2c7) = in_w8;
  pfVar1 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar3 = pfVar1[2];
  if (DAT_098362cc == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_098362cc = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar3 = fVar3 * fVar3;
  fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3);
  fVar5 = (float)FUN_08a5bbf8();
  if (unaff_s14 * param_3 + unaff_s12 * fVar5 + unaff_s13 * fVar3 < 0.0) {
    fVar4 = -fVar4;
  }
  fVar3 = 1.0;
  if (fVar4 < 0.0) {
    fVar3 = -1.0;
  }
  *(float *)(unaff_x19 + 0x160) = fVar4;
  if (in_stack_00000008._4_4_ != fVar3) {
    lVar2 = *(long *)(unaff_x19 + 0x168);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07459d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 07459db8 to 07559dc3 has its CatchHandler @ 0745a058 */
    FUN_03d2d548();
  }
                    /* try { // try from 07459d9c to 07559dab has its CatchHandler @ 0745a068 */
  return;
}


