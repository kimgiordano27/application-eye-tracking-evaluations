/*
FUNCTION_NAME: OVRManager$$set_isSupportedPlatform
ENTRY_POINT: 069293e8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__set_isSupportedPlatform
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  undefined *puVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar2 = (param_5 - param_2) * (in_stack_00000008 - param_3) -
          (param_6 - param_3) * (fStack0000000000000004 - param_2);
  fVar4 = (param_6 - param_3) * (fStack0000000000000000 - param_1) -
          (param_4 - param_1) * (in_stack_00000008 - param_3);
  fVar5 = (param_4 - param_1) * (fStack0000000000000004 - param_2) -
          (param_5 - param_2) * (fStack0000000000000000 - param_1);
  fVar6 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4);
  if (fVar6 != 0.0) {
    fVar9 = fVar2 / fVar6;
    fVar8 = fVar4 / fVar6;
    fVar7 = fVar5 / fVar6;
  }
  if (DAT_08974d91 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974d91 = '\x01';
  }
  puVar1 = PTR_DAT_08486c60;
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar2 = SQRT((in_stack_00000018 * in_stack_00000018 +
               fStack0000000000000010 * fStack0000000000000010 +
               fStack0000000000000014 * fStack0000000000000014) *
               (fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9));
  fVar4 = 0.0;
  if (DAT_015c5594 <= fVar2) {
    fVar2 = (in_stack_00000018 * fVar7 +
            fStack0000000000000014 * fVar8 + fStack0000000000000010 * fVar9) / fVar2;
    fVar4 = 1.0;
    if (fVar2 <= 1.0) {
      fVar4 = fVar2;
    }
    fVar5 = -1.0;
    if (-1.0 <= fVar2) {
      fVar5 = fVar4;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    dVar3 = acos((double)fVar5);
    fVar4 = (float)dVar3 * DAT_015c595c;
  }
  fVar4 = cosf(fVar4);
  fVar2 = 0.0;
  if (0.0 <= fVar4) {
    fVar2 = fVar6 * 0.5 * fVar4;
  }
  return fVar2;
}


