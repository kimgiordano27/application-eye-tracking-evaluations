/*
FUNCTION_NAME: FUN_03286bbc
ENTRY_POINT: 03286bbc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_03286bbc(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__;
  if ((DAT_04532c48 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__);
    DAT_04532c48 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03286af0(param_2);
  if (param_1 - 1U < 0x25c2) {
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_042305b0);
  FUN_019b5f60();
  uVar2 = FUN_03295560(0);
  uVar3 = thunk_FUN_01c273e8(BRPotionSpawner_<DespawnAfterTime>d__9_TypeInfo);
  uVar3 = FUN_03313b64(uVar3,0);
  puVar1 = PTR_DAT_0422fd80;
  local_34 = 1;
  uVar4 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
  uVar4 = thunk_FUN_01c49334(uVar4,&local_34);
  local_38 = 0x25c2;
  uVar5 = thunk_FUN_01c273e8(puVar1);
  uVar5 = thunk_FUN_01c49334(uVar5,&local_38);
  uVar2 = FUN_03153858(uVar2,uVar3,uVar4,uVar5,0);
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar3 = thunk_FUN_01c496e0();
  uVar4 = thunk_FUN_01c273e8(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                            );
  FUN_03243400(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,uVar2);
}


