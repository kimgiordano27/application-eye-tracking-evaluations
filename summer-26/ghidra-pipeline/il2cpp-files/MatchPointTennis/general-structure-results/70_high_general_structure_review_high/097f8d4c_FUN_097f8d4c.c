/*
FUNCTION_NAME: FUN_097f8d4c
ENTRY_POINT: 097f8d4c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: pose_vector;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_097f8d4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = System_Func<UpdatePlayerRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo;
  puVar3 = System_Func<UpdateLobbyRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo;
  puVar2 = System_Func<Translate,_Translate,_bool>_TypeInfo;
  puVar1 = System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo;
  if ((DAT_0a547dc7 & 1) == 0) {
    FUN_04447ba8(System_Func<UpdatePlayerRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo);
    FUN_04447ba8(System_Func<UpdateLobbyRequest,_Configuration,_Task<Response<Lobby>>>_TypeInfo);
    FUN_04447ba8(System_Func<Translate,_Translate,_bool>_TypeInfo);
    FUN_04447ba8(System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo);
    DAT_0a547dc7 = 1;
  }
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_05bad610(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x10),uVar5);
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_05bad610(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x20),uVar5);
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_0567183c(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x28),uVar5);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  FUN_07a80df4(param_1,0);
  return;
}


