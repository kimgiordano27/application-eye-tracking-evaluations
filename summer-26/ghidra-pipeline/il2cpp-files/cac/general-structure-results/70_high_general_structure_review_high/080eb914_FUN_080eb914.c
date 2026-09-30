/*
FUNCTION_NAME: FUN_080eb914
ENTRY_POINT: 080eb914
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_5;strong_file_logging_hits_5
*/


void FUN_080eb914(float param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = (float)UnityEngine_Collider__ClosestPoint_Injected(param_4,0);
  fVar2 = (float)UnityEngine_Collider__ClosestPoint_Injected(param_5,0);
  if (param_1 <= fVar2) {
    fVar2 = param_1;
  }
  if (fVar1 <= param_1) {
    fVar1 = fVar2;
  }
  fVar3 = (float)UnityEngine_Collider__ClosestPoint_Injected(param_5,0);
  fVar4 = (float)UnityEngine_Collider__ClosestPoint_Injected(param_4,0);
  fVar2 = fVar3 - fVar4;
  if (fVar3 - fVar4 <= DAT_01928e48) {
    fVar2 = DAT_01928e48;
  }
  fVar3 = (float)FUN_087864dc(param_5,0);
  fVar4 = (float)FUN_087864dc(param_4,0);
  fVar3 = fVar3 - fVar4;
  fVar7 = 1.0 / fVar2;
  fVar4 = (float)FUN_087864fc(param_4,0);
  fVar5 = (float)FUN_087864ec(param_5,0);
  fVar6 = fVar4 * fVar2;
  fVar8 = fVar7 * fVar7 * fVar7 * (((fVar6 + fVar2 * fVar5) - fVar3) - fVar3);
  fVar6 = fVar7 * fVar7 * ((((fVar3 + fVar3 + fVar3) - fVar6) - fVar6) - fVar2 * fVar5);
  fVar3 = (float)FUN_087864dc(param_4,0);
  fVar5 = (float)UnityEngine_Collider__ClosestPoint_Injected(param_4,0);
  fVar1 = fVar1 - fVar5;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar1) {
    fVar5 = fVar2;
  }
  *param_2 = fVar3 + fVar5 * (fVar4 + fVar5 * (fVar6 + fVar5 * fVar8));
  *param_3 = fVar4 + fVar5 * (fVar6 + fVar6 + fVar8 * fVar5 * 3.0);
  return;
}


