/*
FUNCTION_NAME: FUN_080eb798
ENTRY_POINT: 080eb798
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_080eb798(undefined8 *param_1,float param_2,float param_3,undefined8 *param_4,
                 undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_78 = *(undefined4 *)(param_4 + 3);
  local_80 = param_4[2];
  uStack_88 = param_4[1];
  local_90 = *param_4;
  fVar2 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_90,0);
  puVar1 = (undefined8 *)((long)param_4 + (long)((int)param_5 + -1) * 0x1c);
  uStack_88 = puVar1[1];
  local_90 = *puVar1;
  local_80 = puVar1[2];
  local_78 = *(undefined4 *)(puVar1 + 3);
  fVar3 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_90,0);
  uStack_88 = param_4[1];
  local_90 = *param_4;
  local_80 = param_4[2];
  local_78 = *(undefined4 *)(param_4 + 3);
  if (param_3 <= fVar3) {
    param_3 = fVar3;
  }
  uVar4 = FUN_087864dc(&local_90,0);
  uStack_88 = puVar1[1];
  local_90 = *puVar1;
  local_80 = puVar1[2];
  local_78 = *(undefined4 *)(puVar1 + 3);
  uVar5 = FUN_087864dc(&local_90,0);
  if (param_6 < 0) {
    param_3 = param_2;
    uVar5 = uVar4;
    if (fVar2 <= param_2) {
      param_3 = fVar2;
    }
  }
  else if (param_6 < (int)param_5) {
    FUN_080eb684(&local_70,param_4,param_5,param_6);
    goto LAB_080eb8e8;
  }
  FUN_087864b8(param_3,uVar5,0,0,&local_70,0);
LAB_080eb8e8:
  param_1[1] = CONCAT44(uStack_64,uStack_68);
  *param_1 = local_70;
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_58,uStack_5c);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_60,uStack_64);
  return;
}


