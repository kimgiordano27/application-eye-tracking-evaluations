/*
FUNCTION_NAME: OVRPlugin$$get_ipd
ENTRY_POINT: 0693e2c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_ipd(float param_1)

{
  long *unaff_x19;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  
  fVar1 = SQRT(unaff_s10 * unaff_s10 + param_1 + unaff_s9 * unaff_s9) * DAT_015c5928 *
          *(float *)((long)unaff_x19 + 0x3c);
  fVar4 = 1.0;
  if (fVar1 <= 1.0) {
    fVar4 = fVar1;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar4;
  }
  fVar2 = *(float *)((long)unaff_x19 + 0x24) * fVar2;
  fVar4 = 1.0;
  if (fVar2 <= 1.0) {
    fVar4 = fVar2;
  }
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar4;
  }
  uVar3 = FUN_07c94120(1.0 - *(float *)(unaff_x19 + 7),*(float *)(unaff_x19 + 7) + 1.0,0);
  (**(code **)(*unaff_x19 + 0x318))(fVar1);
  (**(code **)(*unaff_x19 + 0x308))(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0693e384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x2d8))();
  return;
}


