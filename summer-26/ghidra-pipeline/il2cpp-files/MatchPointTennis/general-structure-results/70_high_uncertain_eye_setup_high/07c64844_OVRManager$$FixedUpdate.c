/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 07c64844
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FixedUpdate(long param_1,float param_2)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float fVar6;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar3 = **(float **)(param_1 + 0xb8);
  if (fVar3 <= param_2) {
    fVar4 = (fStack0000000000000008 - unaff_s15) * unaff_s11 +
            (unaff_s12 - unaff_s14) * unaff_s10 + (unaff_s13 - unaff_s8) * unaff_s9;
    fVar3 = unaff_s10 * fVar4;
    fVar5 = fVar3 / param_2;
    fVar6 = (unaff_s9 * fVar4) / param_2;
    param_2 = (unaff_s11 * fVar4) / param_2;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
                    /* try { // try from 07c6487c to 07d648a3 has its CatchHandler @ 07c6495c */
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
    param_2 = pfVar1[2];
  }
  if (DAT_0a51c009 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  param_2 = param_2 * param_2;
  fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + param_2);
  fVar5 = (float)FUN_095380e0();
  if ((fStack0000000000000008 - unaff_s15) * fVar3 +
      (unaff_s12 - unaff_s14) * fVar5 + (unaff_s13 - unaff_s8) * param_2 < 0.0) {
    fVar4 = -fVar4;
  }
  fVar3 = 1.0;
  if (fVar4 < 0.0) {
    fVar3 = -1.0;
  }
  *(float *)(unaff_x19 + 0x160) = fVar4;
  if (fStack000000000000000c != fVar3) {
    lVar2 = *(long *)(unaff_x19 + 0x168);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07c6499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  return;
}


