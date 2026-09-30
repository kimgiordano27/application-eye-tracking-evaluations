/*
FUNCTION_NAME: Unity.Scenes.SceneSectionStreamingSystem$$SceneSectionRequiresSynchronousLoading
ENTRY_POINT: 0337d5e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Scenes_SceneSectionStreamingSystem__SceneSectionRequiresSynchronousLoading
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = 0;
  uStack0000000000000000 = param_1;
  FUN_031a9590();
  uVar8 = FUN_0277b678(*unaff_x26,0);
  lVar13 = *unaff_x24;
  lVar12 = *(long *)(lVar13 + 0x38);
  if (lVar12 == 0) {
    FUN_01a47054(lVar13);
    lVar12 = *(long *)(lVar13 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar6 = Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionExit2DHandler_TypeInfo;
  puVar5 = Mono_CSharp_IAssemblyDefinition_TypeInfo;
  puVar4 = Unity_Services_CloudSave_Models_IAccessClassOptions_TypeInfo;
  puVar3 = UnityEngine_HumanBodyBones_TypeInfo;
  puVar2 = _Common_Graphics_Scripts_HeightFog_TypeInfo;
  puVar1 = Cinemachine_Utility_HeadingTracker_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  uVar14 = **(undefined8 **)(lVar12 + 0xb8);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar1,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar2,0);
  uVar11 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar11,0,*(undefined8 *)puVar5,0);
  uStack0000000000000000 = *(undefined8 *)puVar6;
  uStack0000000000000010 = 0;
  uStack0000000000000008 = 3;
  FUN_031a9590(uVar8,uVar14,uVar9,uVar10,0,0,0,uVar11);
  uVar8 = FUN_0277b678(*(undefined8 *)puVar3,0);
  lVar13 = *(long *)puVar4;
  lVar12 = *(long *)(lVar13 + 0x38);
  if (lVar12 == 0) {
    FUN_01a47054(lVar13);
    lVar12 = *(long *)(lVar13 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar7 = Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionEnter2DHandler_TypeInfo;
  puVar6 = System_Linq_Expressions_IArgumentProvider_TypeInfo;
  puVar5 = Fusion_IAfterPhysicsSyncTransforms2D_TypeInfo;
  puVar4 = Technie_PhysicsCreator_HullMapping_TypeInfo;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
  puVar2 = Fusion_HostMigrationToken_TypeInfo;
  puVar1 = Mono_CSharp_HoistedStoreyClass_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  uVar15 = **(undefined8 **)(lVar12 + 0xb8);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar1,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar2,0);
  uVar11 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar11,0,*(undefined8 *)puVar3,0);
  uVar14 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar14,0,*(undefined8 *)puVar4,0);
  uStack0000000000000000 = *(undefined8 *)puVar7;
  uStack0000000000000010 = 0;
  uStack0000000000000008 = 7;
  FUN_031a9590(uVar8,uVar15,uVar9,uVar10,uVar11,0,0,uVar14);
  uVar8 = FUN_0277b678(*(undefined8 *)puVar6,0);
  lVar13 = *(long *)puVar5;
  lVar12 = *(long *)(lVar13 + 0x38);
  if (lVar12 == 0) {
    FUN_01a47054(lVar13);
    lVar12 = *(long *)(lVar13 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar6 = Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionStay2DHandler_TypeInfo;
  puVar5 = Unity_Services_Authentication_Shared_IApiResponse_TypeInfo;
  puVar4 = Animancer_IAnimationClipCollection_TypeInfo;
  puVar3 = Fusion_IAfterAllTicks_TypeInfo;
  puVar2 = System_Net_Http_HttpClientHandler_TypeInfo;
  puVar1 = Unity_Services_CloudSave_Internal_Http_HttpClient_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  uVar14 = **(undefined8 **)(lVar12 + 0xb8);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar1,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar2,0);
  uVar11 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar11,0,*(undefined8 *)puVar5,0);
  uStack0000000000000000 = *(undefined8 *)puVar6;
  uStack0000000000000010 = 0;
  uStack0000000000000008 = 3;
  FUN_031a9590(uVar8,uVar14,uVar9,uVar10,0,0,0,uVar11);
  uVar8 = FUN_0277b678(*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar3;
  lVar12 = *(long *)(lVar13 + 0x38);
  if (lVar12 == 0) {
    FUN_01a47054(lVar13);
    lVar12 = *(long *)(lVar13 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar6 = Cysharp_Threading_Tasks_Triggers_IAsyncOnControllerColliderHitHandler_TypeInfo;
  puVar5 = Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorIKHandler_TypeInfo;
  puVar4 = Animancer_IAnimancerComponent_TypeInfo;
  puVar3 = Fusion_IAfterUpdate_TypeInfo;
  puVar2 = Unity_Services_Leaderboards_Internal_Http_HttpException_TypeInfo;
  puVar1 = System_Net_Http_Headers_HttpContentHeaders_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  uVar14 = **(undefined8 **)(lVar12 + 0xb8);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar1,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar2,0);
  uVar11 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar11,0,*(undefined8 *)puVar4,0);
  uStack0000000000000000 = *(undefined8 *)puVar6;
  uStack0000000000000010 = 0;
  uStack0000000000000008 = 3;
  FUN_031a9590(uVar8,uVar14,uVar9,uVar10,0,0,0,uVar11);
  uVar8 = FUN_0277b678(*(undefined8 *)puVar5,0);
  lVar13 = *(long *)puVar3;
  lVar12 = *(long *)(lVar13 + 0x38);
  if (lVar12 == 0) {
    FUN_01a47054(lVar13);
    lVar12 = *(long *)(lVar13 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar4 = Cysharp_Threading_Tasks_Triggers_IAsyncOnBeforeTransformParentChangedHandler_TypeInfo;
  puVar3 = System_Threading_IAsyncLocal_TypeInfo;
  puVar2 = System_Net_Http_HttpResponseMessage_TypeInfo;
  puVar1 = System_Net_Http_Headers_HttpRequestHeaders_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  uVar14 = **(undefined8 **)(lVar12 + 0xb8);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar1,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar2,0);
  uVar11 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar11,0,*(undefined8 *)puVar3,0);
  uStack0000000000000000 = *(undefined8 *)puVar4;
  uStack0000000000000010 = 0;
  uStack0000000000000008 = 3;
  FUN_031a9590(uVar8,uVar14,uVar9,uVar10,0,0,0,uVar11);
  return;
}


