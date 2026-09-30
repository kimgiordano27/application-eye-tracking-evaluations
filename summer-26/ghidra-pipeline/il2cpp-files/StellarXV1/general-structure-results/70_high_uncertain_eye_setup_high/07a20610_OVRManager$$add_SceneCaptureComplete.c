/*
FUNCTION_NAME: OVRManager$$add_SceneCaptureComplete
ENTRY_POINT: 07a20610
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SceneCaptureComplete(long param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float fVar4;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined8 uVar6;
  
  param_4 = unaff_s9 * unaff_s9 + param_4;
  fVar3 = **(float **)(param_1 + 0xb8);
  if (fVar3 <= param_4) {
    fVar3 = unaff_s10 * unaff_s9 + unaff_s11 * param_2 + unaff_s12 * param_3;
    uVar6 = CONCAT44((param_3 * fVar3) / param_4,(param_2 * fVar3) / param_4);
    fVar4 = (unaff_s9 * fVar3) / param_4;
  }
  else {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    uVar6 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
    param_4 = fVar3;
  }
  if (DAT_098854e9 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar3 = (float)((ulong)uVar6 >> 0x20);
  fVar4 = fVar4 * fVar4;
  fVar5 = SQRT((float)uVar6 * (float)uVar6 + fVar3 * fVar3 + fVar4);
  fVar2 = (float)FUN_089d9d60();
  fVar3 = -fVar5;
  if (0.0 <= unaff_s10 * param_4 + unaff_s11 * fVar2 + unaff_s12 * fVar4) {
    fVar3 = fVar5;
  }
  *(float *)(unaff_x19 + 0x160) = fVar3;
  fVar4 = -1.0;
  if (0.0 <= fVar3) {
    fVar4 = 1.0;
  }
  if (unaff_s8 != fVar4) {
    lVar1 = *(long *)(unaff_x19 + 0x168);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07a2075c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  return;
}


