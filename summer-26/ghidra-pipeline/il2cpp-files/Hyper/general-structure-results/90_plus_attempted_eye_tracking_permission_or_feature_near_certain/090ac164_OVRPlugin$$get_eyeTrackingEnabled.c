/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 090ac164
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__get_eyeTrackingEnabled
                (float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack000000000000004c;
  
  fVar4 = param_2;
  fStack000000000000004c = param_3;
  fVar1 = (float)FUN_090aba08();
  fVar5 = fVar4;
  fVar6 = param_3;
  fVar2 = (float)FUN_090abc78(param_4,param_5);
  if (DAT_0b32d3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b32d3e5 = '\x01';
  }
  fVar3 = fVar6 * fVar6 + fVar2 * fVar2 + fVar5 * fVar5;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar3) {
    fVar3 = (fVar2 * ((fStack000000000000004c - param_3) * fVar6 +
                     (param_1 - fVar1) * fVar2 + (param_2 - fVar4) * fVar5)) / fVar3;
  }
  else {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    fVar3 = **(float **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  }
  return fVar1 + fVar3;
}


