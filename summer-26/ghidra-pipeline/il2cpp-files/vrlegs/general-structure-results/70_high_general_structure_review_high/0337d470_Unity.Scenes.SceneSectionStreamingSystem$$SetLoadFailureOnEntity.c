/*
FUNCTION_NAME: Unity.Scenes.SceneSectionStreamingSystem$$SetLoadFailureOnEntity
ENTRY_POINT: 0337d470
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Scenes_SceneSectionStreamingSystem__SetLoadFailureOnEntity(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  FUN_031aa554(param_1,0,*unaff_x21,0);
  uVar7 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar7,0,*unaff_x22,0);
  uVar7 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar7,0,*unaff_x23,0);
  FUN_031a9590();
  uVar7 = FUN_0277b678(*unaff_x26,0);
  lVar12 = *unaff_x24;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_01a47054(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar5 = Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorMoveHandler_TypeInfo;
  puVar4 = UnityEngine_ResourceManagement_ResourceProviders_IAssetBundleResource_TypeInfo;
  puVar3 = Fusion_IAfterPhysicsSyncTransforms3D_TypeInfo;
  puVar2 = System_Numerics_Hashing_HashHelpers_TypeInfo;
  puVar1 = System_HashCode_TypeInfo;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  uVar13 = **(undefined8 **)(lVar11 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar2,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar5,0);
  FUN_031a9590(uVar7,uVar13,uVar8,uVar9,0,0,0,uVar10);
  uVar7 = FUN_0277b678(*(undefined8 *)puVar4,0);
  lVar12 = *(long *)puVar3;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_01a47054(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar5 = Mono_CSharp_IAssemblyDefinition_TypeInfo;
  puVar4 = Unity_Services_CloudSave_Models_IAccessClassOptions_TypeInfo;
  puVar3 = UnityEngine_HumanBodyBones_TypeInfo;
  puVar2 = _Common_Graphics_Scripts_HeightFog_TypeInfo;
  puVar1 = Cinemachine_Utility_HeadingTracker_TypeInfo;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  uVar13 = **(undefined8 **)(lVar11 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar2,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar5,0);
  FUN_031a9590(uVar7,uVar13,uVar8,uVar9,0,0,0,uVar10);
  uVar7 = FUN_0277b678(*(undefined8 *)puVar3,0);
  lVar12 = *(long *)puVar4;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_01a47054(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar6 = System_Linq_Expressions_IArgumentProvider_TypeInfo;
  puVar5 = Fusion_IAfterPhysicsSyncTransforms2D_TypeInfo;
  puVar4 = Technie_PhysicsCreator_HullMapping_TypeInfo;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
  puVar2 = Fusion_HostMigrationToken_TypeInfo;
  puVar1 = Mono_CSharp_HoistedStoreyClass_TypeInfo;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  uVar14 = **(undefined8 **)(lVar11 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar2,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar3,0);
  uVar13 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar13,0,*(undefined8 *)puVar4,0);
  FUN_031a9590(uVar7,uVar14,uVar8,uVar9,uVar10,0,0,uVar13);
  uVar7 = FUN_0277b678(*(undefined8 *)puVar6,0);
  lVar12 = *(long *)puVar5;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_01a47054(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar5 = Unity_Services_Authentication_Shared_IApiResponse_TypeInfo;
  puVar4 = Animancer_IAnimationClipCollection_TypeInfo;
  puVar3 = Fusion_IAfterAllTicks_TypeInfo;
  puVar2 = System_Net_Http_HttpClientHandler_TypeInfo;
  puVar1 = Unity_Services_CloudSave_Internal_Http_HttpClient_TypeInfo;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  uVar13 = **(undefined8 **)(lVar11 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar2,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar5,0);
  FUN_031a9590(uVar7,uVar13,uVar8,uVar9,0,0,0,uVar10);
  uVar7 = FUN_0277b678(*(undefined8 *)puVar4,0);
  lVar12 = *(long *)puVar3;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_01a47054(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar5 = Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorIKHandler_TypeInfo;
  puVar4 = Animancer_IAnimancerComponent_TypeInfo;
  puVar3 = Fusion_IAfterUpdate_TypeInfo;
  puVar2 = Unity_Services_Leaderboards_Internal_Http_HttpException_TypeInfo;
  puVar1 = System_Net_Http_Headers_HttpContentHeaders_TypeInfo;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  uVar13 = **(undefined8 **)(lVar11 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar2,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar4,0);
  FUN_031a9590(uVar7,uVar13,uVar8,uVar9,0,0,0,uVar10);
  uVar7 = FUN_0277b678(*(undefined8 *)puVar5,0);
  lVar12 = *(long *)puVar3;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_01a47054(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar3 = System_Threading_IAsyncLocal_TypeInfo;
  puVar2 = System_Net_Http_HttpResponseMessage_TypeInfo;
  puVar1 = System_Net_Http_Headers_HttpRequestHeaders_TypeInfo;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  uVar13 = **(undefined8 **)(lVar11 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar2,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar3,0);
  FUN_031a9590(uVar7,uVar13,uVar8,uVar9,0,0,0,uVar10);
  return;
}


