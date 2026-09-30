/*
FUNCTION_NAME: FUN_05a9ebcc
ENTRY_POINT: 05a9ebcc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05a9ebcc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar6 = Method_DestinationArea_HandleEnemyDeath__;
  puVar5 = Method_System_Collections_Generic_List<NameAndParameters>_get_Item__;
  puVar4 = Method_System_Collections_Generic_List<InterpretedFrameInfo>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<long>_get_Count__;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<VolumeProfile>_MoveNext__;
  puVar1 = Oculus_Platform_Request<RejoinDialogResult>_TypeInfo;
  if ((DAT_066d4228 & 1) == 0) {
    FUN_02b3c81c(Method_DestinationMode_CompletedDestinationArea__);
    FUN_02b3c81c(Oculus_Platform_Request<RejoinDialogResult>_TypeInfo);
    FUN_02b3c81c(Method_DestinationMode_OnPlayerDeath__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<long>_get_Count__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_Shuffle<Vector3>__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_<Start>b__36_0__);
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List_Enumerator<VolumeProfile>_MoveNext__);
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_CreateDestructibleGlobalMesh__
                );
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_GeneratePoints__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_ReceiveCreatedRoom__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<NativePassData>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<NameAndParameters>_get_Item__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_ReceiveRemovedRoom__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<InterpretedFrameInfo>__ctor__);
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_RemoveDestructibleGlobalMesh__
                );
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_DestructibleMeshComponent_GetDestructibleMeshSegments<List<GameObject>>__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<GameObject>_AddRange__);
    FUN_02b3c81c(
                Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ConfigureTrackerResult>>_get_IsCompleted__
                );
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_DestructibleMeshComponent_GetDestructibleMeshSegments__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<object[]>__ctor__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_DestructibleMeshComponent_OnSegmentationTaskCompleted__
                );
    FUN_02b3c81c(Method_DestinationArea_HandleEnemyDeath__);
    FUN_02b3c81c(Method_Unity_Services_Authentication_Generated_Detail__ctor__);
    DAT_066d4228 = 1;
  }
  uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_056df104(uVar9,*(undefined8 *)puVar2,0,0,0,0,*(undefined8 *)puVar4,0);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_056f55d8(&local_78,uVar9,0);
  *(undefined8 *)(param_1 + 0xb8) = uStack_70;
  *(undefined8 *)(param_1 + 0xb0) = local_78;
  *(undefined8 *)(param_1 + 0xc0) = local_68;
  thunk_FUN_02bb0e9c(param_1 + 0xb8,0);
  uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_056df104(uVar9,*(undefined8 *)puVar5,0,0,0,0,*(undefined8 *)puVar3,0);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  FUN_056f55d8(&local_90,uVar9,0);
  *(undefined8 *)(param_1 + 0xd0) = uStack_88;
  *(undefined8 *)(param_1 + 200) = local_90;
  *(undefined8 *)(param_1 + 0xd8) = local_80;
  thunk_FUN_02bb0e9c(param_1 + 0xd0,0);
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_056df104(lVar10,*(undefined8 *)puVar6,1,0,0,0,0,0);
  puVar8 = Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_ReceiveCreatedRoom__;
  puVar7 = Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh__;
  puVar6 = Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_Shuffle<Vector3>__;
  puVar5 = Method_System_Collections_Generic_List<NativePassData>__ctor__;
  puVar4 = Method_System_Collections_Generic_List<GameObject>_AddRange__;
  puVar3 = Method_System_Collections_Generic_List<object[]>__ctor__;
  puVar2 = Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ConfigureTrackerResult>>_get_IsCompleted__;
  if (lVar10 != 0) {
    FUN_056df0a0(lVar10,1,0);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_056f55d8(&local_a8,lVar10,0);
    *(undefined8 *)(param_1 + 0xe8) = uStack_a0;
    *(undefined8 *)(param_1 + 0xe0) = local_a8;
    *(undefined8 *)(param_1 + 0xf0) = local_98;
    thunk_FUN_02bb0e9c(param_1 + 0xe8,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)puVar5,0,0,0,0,*(undefined8 *)puVar2,0);
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    FUN_056f55d8(&local_c0,uVar9,0);
    *(undefined8 *)(param_1 + 0x100) = uStack_b8;
    *(undefined8 *)(param_1 + 0xf8) = local_c0;
    *(undefined8 *)(param_1 + 0x108) = local_b0;
    thunk_FUN_02bb0e9c(param_1 + 0x100,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)puVar6,1,0,0,0,0,0);
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    FUN_056f55d8(&local_d8,uVar9,0);
    *(undefined8 *)(param_1 + 0x118) = uStack_d0;
    *(undefined8 *)(param_1 + 0x110) = local_d8;
    *(undefined8 *)(param_1 + 0x120) = local_c8;
    thunk_FUN_02bb0e9c(param_1 + 0x118,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)puVar7,0,0,0,0,*(undefined8 *)puVar3,0);
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    FUN_056f55d8(&local_f0,uVar9,0);
    *(undefined8 *)(param_1 + 0x130) = uStack_e8;
    *(undefined8 *)(param_1 + 0x128) = local_f0;
    *(undefined8 *)(param_1 + 0x138) = local_e0;
    thunk_FUN_02bb0e9c(param_1 + 0x130,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)puVar8,1,0,0,0,0,0);
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    FUN_056f55d8(&local_108,uVar9,0);
    *(undefined8 *)(param_1 + 0x148) = uStack_100;
    *(undefined8 *)(param_1 + 0x140) = local_108;
    *(undefined8 *)(param_1 + 0x150) = local_f8;
    thunk_FUN_02bb0e9c(param_1 + 0x148,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)
                        Method_Meta_XR_MRUtilityKit_DestructibleMeshComponent_GetDestructibleMeshSegments__
                 ,0,0,0,0,*(undefined8 *)puVar3,0);
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    FUN_056f55d8(&local_120,uVar9,0);
    *(undefined8 *)(param_1 + 0x160) = uStack_118;
    *(undefined8 *)(param_1 + 0x158) = local_120;
    *(undefined8 *)(param_1 + 0x168) = local_110;
    thunk_FUN_02bb0e9c(param_1 + 0x160,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)
                        Method_Meta_XR_MRUtilityKit_DestructibleMeshComponent_OnSegmentationTaskCompleted__
                 ,1,0,0,0,0,0);
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    FUN_056f55d8(&local_138,uVar9,0);
    *(undefined8 *)(param_1 + 0x178) = uStack_130;
    *(undefined8 *)(param_1 + 0x170) = local_138;
    *(undefined8 *)(param_1 + 0x180) = local_128;
    thunk_FUN_02bb0e9c(param_1 + 0x178,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)
                        Method_Meta_XR_MRUtilityKit_DestructibleMeshComponent_GetDestructibleMeshSegments<List<GameObject>>__
                 ,0,0,0,0,*(undefined8 *)puVar3,0);
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    FUN_056f55d8(&local_150,uVar9,0);
    *(undefined8 *)(param_1 + 400) = uStack_148;
    *(undefined8 *)(param_1 + 0x188) = local_150;
    *(undefined8 *)(param_1 + 0x198) = local_140;
    thunk_FUN_02bb0e9c(param_1 + 400,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)
                        Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_<Start>b__36_0__,0
                 ,0,0,0,*(undefined8 *)puVar4,0);
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    FUN_056f55d8(&local_168,uVar9,0);
    *(undefined8 *)(param_1 + 0x1a8) = uStack_160;
    *(undefined8 *)(param_1 + 0x1a0) = local_168;
    *(undefined8 *)(param_1 + 0x1b0) = local_158;
    thunk_FUN_02bb0e9c(param_1 + 0x1a8,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)
                        Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_CreateDestructibleGlobalMesh__
                 ,2,0,0,0,0,0);
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    FUN_056f55d8(&local_180,uVar9,0);
    *(undefined8 *)(param_1 + 0x1c0) = uStack_178;
    *(undefined8 *)(param_1 + 0x1b8) = local_180;
    *(undefined8 *)(param_1 + 0x1c8) = local_170;
    thunk_FUN_02bb0e9c(param_1 + 0x1c0,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)Method_Unity_Services_Authentication_Generated_Detail__ctor__,
                 0,0,0,0,*(undefined8 *)puVar4,0);
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    FUN_056f55d8(&local_198,uVar9,0);
    *(undefined8 *)(param_1 + 0x1d8) = uStack_190;
    *(undefined8 *)(param_1 + 0x1d0) = local_198;
    *(undefined8 *)(param_1 + 0x1e0) = local_188;
    thunk_FUN_02bb0e9c(param_1 + 0x1d8,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)
                        Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_GeneratePoints__,0
                 ,0,0,0,*(undefined8 *)puVar4,0);
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    FUN_056f55d8(&local_1b0,uVar9,0);
    *(undefined8 *)(param_1 + 0x1f0) = uStack_1a8;
    *(undefined8 *)(param_1 + 0x1e8) = local_1b0;
    *(undefined8 *)(param_1 + 0x1f8) = local_1a0;
    thunk_FUN_02bb0e9c(param_1 + 0x1f0,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)
                        Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_RemoveDestructibleGlobalMesh__
                 ,0,0,0,0,*(undefined8 *)puVar4,0);
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    FUN_056f55d8(&local_1c8,uVar9,0);
    *(undefined8 *)(param_1 + 0x208) = uStack_1c0;
    *(undefined8 *)(param_1 + 0x200) = local_1c8;
    *(undefined8 *)(param_1 + 0x210) = local_1b8;
    thunk_FUN_02bb0e9c(param_1 + 0x208,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)
                        Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_ReceiveRemovedRoom__
                 ,1,0,0,0,0,0);
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    FUN_056f55d8(&local_1e0,uVar9,0);
    *(undefined8 *)(param_1 + 0x220) = uStack_1d8;
    *(undefined8 *)(param_1 + 0x218) = local_1e0;
    *(undefined8 *)(param_1 + 0x228) = local_1d0;
    thunk_FUN_02bb0e9c(param_1 + 0x220,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_056df104(uVar9,*(undefined8 *)Method_DestinationMode_OnPlayerDeath__,0,0,0,0,
                 *(undefined8 *)puVar4,0);
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    FUN_056f55d8(&local_1f8,uVar9,0);
    *(undefined8 *)(param_1 + 0x238) = uStack_1f0;
    *(undefined8 *)(param_1 + 0x230) = local_1f8;
    *(undefined8 *)(param_1 + 0x240) = local_1e8;
    thunk_FUN_02bb0e9c(param_1 + 0x238,0);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)Method_DestinationMode_CompletedDestinationArea__);
    FUN_05b74378(uVar9,0);
    *(undefined8 *)(param_1 + 0x250) = uVar9;
    thunk_FUN_02bb0e9c(param_1 + 0x250,uVar9);
    *(undefined1 *)(param_1 + 0x88) = 1;
    *(undefined2 *)(param_1 + 0x24) = 0x101;
    *(undefined1 *)(param_1 + 0x99) = 1;
    thunk_FUN_05c88cb0(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


