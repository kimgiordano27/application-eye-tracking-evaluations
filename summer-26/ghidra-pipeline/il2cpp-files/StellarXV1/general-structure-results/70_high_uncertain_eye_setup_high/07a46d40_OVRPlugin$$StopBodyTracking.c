/*
FUNCTION_NAME: OVRPlugin$$StopBodyTracking
ENTRY_POINT: 07a46d40
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__StopBodyTracking(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = (float)FUN_089b9694(0);
  fVar7 = param_2;
  fVar8 = param_3;
  if (*(int *)(*(long *)PTR_DAT_092b7110 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar4 = (float)FUN_089d9cf0();
  if (DAT_098854e8 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e8 = '\x01';
  }
  puVar1 = PTR_DAT_09285ae0;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar5 = SQRT((param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2) *
               (fVar8 * fVar8 + fVar4 * fVar4 + fVar7 * fVar7));
  if (DAT_01aeb584 <= fVar5) {
    fVar5 = (param_3 * fVar8 + fVar3 * fVar4 + param_2 * fVar7) / fVar5;
    fVar7 = 1.0;
    if (fVar5 <= 1.0) {
      fVar7 = fVar5;
    }
    fVar8 = -1.0;
    if (-1.0 <= fVar5) {
      fVar8 = fVar7;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    dVar6 = acos((double)fVar8);
    bVar2 = (float)dVar6 * DAT_01aec2c8 <= 40.0;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


