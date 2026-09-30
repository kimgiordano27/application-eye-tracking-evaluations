/*
FUNCTION_NAME: FUN_05b25058
ENTRY_POINT: 05b25058
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05b25058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar10 = Method_UnityEngine_GraphicsBuffer_SetData<uint>__;
  puVar9 = Method_UnityEngine_GraphicsBuffer_SetData<int>__;
  puVar8 = Method_UnityEngine_GameObject_GetComponent<Ai_Bullet>__;
  puVar7 = Method_UnityEngine_GameObject_GetComponent<AerialProjectile>__;
  puVar6 = Method_UnityEngine_GUILayoutUtility_BeginLayoutArea__;
  puVar5 = Method_System_Linq_Enumerable_First<KeyValuePair<string,_JSONNode>>__;
  puVar4 = Method_System_Linq_Enumerable_Empty<NameAndParameters>__;
  puVar3 = Method_Meta_XR_MRUtilityKit_DestructibleMeshComponent_OnSegmentationTaskCompleted__;
  if ((DAT_066d4745 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_GraphicsBuffer_SetData<Vector2Int>__);
    FUN_02b3c81c(Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__);
    FUN_02b3c81c(Method_UnityEngine_GraphicsBuffer_SetData<uint>__);
    FUN_02b3c81c(Method_System_Reflection_Emit_EnumBuilder_GetInterfaces__);
    FUN_02b3c81c(Method_UnityEngine_GraphicsBuffer_SetData<int>__);
    FUN_02b3c81c(Method_System_Reflection_Emit_EnumBuilder_GetMethods__);
    FUN_02b3c81c(Method_UnityEngine_GraphicsBuffer_UnlockBufferAfterWrite<byte>__);
    FUN_02b3c81c(PTR_DAT_063198c8);
    FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<AerialProjectile>__);
    FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<Ai_Bullet>__);
    FUN_02b3c81c(Method_System_Net_DigestSession_Authenticate__);
    FUN_02b3c81c(Method_UnityEngine_GUILayoutUtility_BeginLayoutArea__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_First<FieldInfo>__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_First<KeyValuePair<string,_JSONNode>>__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Empty<NameAndParameters>__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_First<ConstructorInfo>__);
    FUN_02b3c81c(Method_UnityEngine_GraphicsBuffer_InternalInitialization__);
    FUN_02b3c81c(Method_UnityEngine_GraphicsBuffer_SetData__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_<Start>b__36_0__);
    FUN_02b3c81c(Method_UnityEngine_GraphicsBuffer_SetData__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_GraphicsFence_Validate__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_ReceiveRemovedRoom__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_DestructibleMeshComponent_OnSegmentationTaskCompleted__
                );
    FUN_02b3c81c(Method_System_Array_Exists<string>__);
    DAT_066d4745 = 1;
  }
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
  FUN_037a5cd0(uVar12,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x270) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x270,uVar12);
  uVar2 = _UNK_01035b08;
  uVar1 = _DAT_01035b00;
  uVar13 = _UNK_01035488;
  uVar12 = _DAT_01035480;
  *(undefined4 *)(param_1 + 0x280) = 0x41f00000;
  *(undefined8 *)(param_1 + 0x2a0) = uVar13;
  *(undefined8 *)(param_1 + 0x298) = uVar12;
  *(undefined8 *)(param_1 + 0x2b0) = uVar2;
  *(undefined8 *)(param_1 + 0x2a8) = uVar1;
  uVar12 = DAT_01031718;
  *(undefined1 *)(param_1 + 0x27c) = 1;
  *(undefined4 *)(param_1 + 0x2b8) = 0x14;
  *(undefined8 *)(param_1 + 0x2c0) = uVar12;
  uVar11 = FUN_05c8db94(0xffffffff,0);
  *(undefined4 *)(param_1 + 0x2d4) = uVar11;
  *(undefined4 *)(param_1 + 0x2e4) = 0x3f000000;
  uVar12 = DAT_010301d8;
  uVar13 = *(undefined8 *)puVar7;
  *(undefined4 *)(param_1 + 0x2ec) = 0x40400000;
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0x100000001;
  *(undefined2 *)(param_1 + 0x2f2) = 0x101;
  *(undefined8 *)(param_1 + 0x2f8) = uVar12;
  uVar12 = thunk_FUN_02b79644(uVar13);
  FUN_05ae40e8(uVar12,0);
  *(undefined8 *)(param_1 + 0x310) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x310,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
  FUN_05ae4130(uVar12,0);
  *(undefined8 *)(param_1 + 0x318) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x318,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
  FUN_05b723fc(uVar12,*(undefined8 *)puVar3,0,0,2,0);
  *(undefined8 *)(param_1 + 0x328) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x328,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_042b98f8(uVar12,*(undefined8 *)
                       Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_<Start>b__36_0__,2,
               *(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x330) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x330,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_042b98f8(uVar12,*(undefined8 *)Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__
               ,2,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x338) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x338,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_042b98f8(uVar12,*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData__,2,
               *(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x340) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x340,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_042b98f8(uVar12,*(undefined8 *)Method_UnityEngine_Rendering_GraphicsFence_Validate__,2,
               *(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x348) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x348,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
  FUN_05b723fc(uVar12,*(undefined8 *)
                       Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_ReceiveRemovedRoom__
               ,0,0,2,0);
  *(undefined8 *)(param_1 + 0x350) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x350,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_042b98f8(uVar12,*(undefined8 *)Method_UnityEngine_GraphicsBuffer_InternalInitialization__,2,
               *(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x358) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x358,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Linq_Enumerable_First<ConstructorInfo>__)
  ;
  FUN_042b9144(uVar12,*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData__,0,
               *(undefined8 *)Method_System_Linq_Enumerable_First<FieldInfo>__);
  *(undefined8 *)(param_1 + 0x360) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x360,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_GetMethods__)
  ;
  FUN_037a5cd0(uVar12,*(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_GetInterfaces__);
  *(undefined8 *)(param_1 + 0x390) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x390,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__);
  FUN_04542774(uVar12,*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<Vector2Int>__);
  *(undefined8 *)(param_1 + 0x398) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x398,uVar12);
  uVar12 = FUN_02b3c908(*(undefined8 *)PTR_DAT_063198c8,10);
  *(undefined8 *)(param_1 + 0x3c0) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x3c0,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_UnityEngine_GraphicsBuffer_UnlockBufferAfterWrite<byte>__);
  FUN_04dbdb8c(uVar12,0);
  *(undefined8 *)(param_1 + 0x3d0) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x3d0,uVar12);
  puVar3 = Method_System_Array_Exists<string>__;
  *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
  uVar12 = FUN_02b3c908(*(undefined8 *)puVar3,3);
  *(undefined8 *)(param_1 + 0x3f0) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x3f0,uVar12);
  uVar12 = FUN_02b3c908(*(undefined8 *)puVar3,3);
  *(undefined8 *)(param_1 + 0x3f8) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x3f8,uVar12);
  if (*(int *)(*(long *)Method_System_Net_DigestSession_Authenticate__ + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05b0aa5c(param_1,0);
  return;
}


