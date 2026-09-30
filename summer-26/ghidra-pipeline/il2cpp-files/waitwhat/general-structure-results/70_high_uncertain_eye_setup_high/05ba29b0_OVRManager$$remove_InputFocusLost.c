/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 05ba29b0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__remove_InputFocusLost
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined8 param_7,undefined8 param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  
  *param_9 = 0.0;
  fVar9 = param_3;
  fVar6 = param_2;
  fVar1 = (float)FUN_06a63564(param_8,0);
  fVar10 = fVar9;
  fVar7 = fVar6;
  fVar2 = (float)FUN_06a6354c(param_8,0);
  fVar11 = fVar10;
  fVar8 = fVar7;
  fVar3 = (float)FUN_06a63564(param_8,0);
  fVar13 = fVar11;
  fVar5 = fVar8;
  fVar4 = (float)FUN_06a63564(param_8,0);
  fVar13 = param_6 * fVar13 + param_4 * fVar4 + param_5 * fVar5;
  if (DAT_07546c44 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_07546c44 = '\x01';
  }
  fVar5 = ABS(fVar13);
  if (ABS(fVar13) <= 0.0) {
    fVar5 = 0.0;
  }
  fVar12 = **(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) * 8.0;
  fVar4 = fVar5 * DAT_012e3b94;
  if (fVar5 * DAT_012e3b94 <= fVar12) {
    fVar4 = fVar12;
  }
  if (fVar4 <= ABS(0.0 - fVar13)) {
    *param_9 = ((fVar9 * fVar10 + fVar1 * fVar2 + fVar6 * fVar7) -
               (param_3 * fVar11 + param_1 * fVar3 + param_2 * fVar8)) / fVar13;
  }
  return fVar4 <= ABS(0.0 - fVar13);
}


