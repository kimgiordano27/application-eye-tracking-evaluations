/*
FUNCTION_NAME: FUN_04fbee6c
ENTRY_POINT: 04fbee6c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_04fbee6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = System_Func<Collider,_Transform>_TypeInfo;
  if ((DAT_066cbe62 & 1) == 0) {
    FUN_02b3c81c(System_Func<Collider,_Transform>_TypeInfo);
    FUN_02b3c81c(
                System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
                );
    DAT_066cbe62 = 1;
  }
  puVar2 = 
  System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
  ;
  FUN_04dbdb8c(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_04fa7c40(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = FUN_04fa7cbc(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_02bb0e9c();
  uVar3 = FUN_04fa7d90(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_02bb0e9c();
  uVar3 = FUN_04fa7e64(param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  thunk_FUN_02bb0e9c();
  uVar3 = FUN_04fa7f38(param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_02bb0e9c();
  lVar4 = FUN_04fa800c(param_2);
  uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_04fd4850(uVar3,lVar4,0);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x40),uVar3);
  if (lVar4 == 0) {
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
  }
  thunk_FUN_02bb0e9c(param_1 + 0x38,uVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_04fa8088(param_2);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x48),uVar3);
  return;
}


