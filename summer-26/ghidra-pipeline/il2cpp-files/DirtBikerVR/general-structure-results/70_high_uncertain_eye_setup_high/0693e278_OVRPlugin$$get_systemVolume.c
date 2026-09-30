/*
FUNCTION_NAME: OVRPlugin$$get_systemVolume
ENTRY_POINT: 0693e278
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


void OVRPlugin__get_systemVolume
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long *unaff_x19;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar1 = (float)FUN_07d22ae4(param_4,0);
  if (DAT_08974e24 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974e24 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar2 = SQRT(param_3 * param_3 + fVar1 * fVar1 + param_2 * param_2) * DAT_015c5928 *
          *(float *)((long)unaff_x19 + 0x3c);
  fVar1 = 1.0;
  if (fVar2 <= 1.0) {
    fVar1 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  fVar3 = *(float *)((long)unaff_x19 + 0x24) * fVar3;
  fVar1 = 1.0;
  if (fVar3 <= 1.0) {
    fVar1 = fVar3;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar1;
  }
  uVar4 = FUN_07c94120(1.0 - *(float *)(unaff_x19 + 7),*(float *)(unaff_x19 + 7) + 1.0,0);
  (**(code **)(*unaff_x19 + 0x318))(fVar2);
  (**(code **)(*unaff_x19 + 0x308))(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0693e384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x2d8))();
  return;
}


