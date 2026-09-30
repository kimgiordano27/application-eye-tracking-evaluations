/*
FUNCTION_NAME: Unity.Scenes.SceneSectionStreamingSystem$$OnUpdate
ENTRY_POINT: 0337d688
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Scenes_SceneSectionStreamingSystem__OnUpdate(ulong param_1)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *plVar15;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *puVar16;
  
  puVar16 = *(undefined8 **)(unaff_x26 + 0x5f0);
  plVar15 = *(long **)(unaff_x24 + 0x628);
  if ((param_1 & 1) == 0) {
    FUN_01a46ff8();
  }
  uVar7 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar7,0,*unaff_x21,0);
  uVar7 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar7,0,*unaff_x22,0);
  uVar7 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar7,0,*unaff_x23,0);
  FUN_031a9590();
  uVar7 = FUN_0277b678(*puVar16,0);
  lVar13 = *plVar15;
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
  uVar14 = **(undefined8 **)(lVar12 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar2,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar3,0);
  uVar11 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar11,0,*(undefined8 *)puVar4,0);
  FUN_031a9590(uVar7,uVar14,uVar8,uVar9,uVar10,0,0,uVar11);
  uVar7 = FUN_0277b678(*(undefined8 *)puVar6,0);
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
  puVar5 = Unity_Services_Authentication_Shared_IApiResponse_TypeInfo;
  puVar4 = Animancer_IAnimationClipCollection_TypeInfo;
  puVar3 = Fusion_IAfterAllTicks_TypeInfo;
  puVar2 = System_Net_Http_HttpClientHandler_TypeInfo;
  puVar1 = Unity_Services_CloudSave_Internal_Http_HttpClient_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  uVar11 = **(undefined8 **)(lVar12 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar2,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar5,0);
  FUN_031a9590(uVar7,uVar11,uVar8,uVar9,0,0,0,uVar10);
  uVar7 = FUN_0277b678(*(undefined8 *)puVar4,0);
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
  puVar5 = Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorIKHandler_TypeInfo;
  puVar4 = Animancer_IAnimancerComponent_TypeInfo;
  puVar3 = Fusion_IAfterUpdate_TypeInfo;
  puVar2 = Unity_Services_Leaderboards_Internal_Http_HttpException_TypeInfo;
  puVar1 = System_Net_Http_Headers_HttpContentHeaders_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  uVar11 = **(undefined8 **)(lVar12 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar2,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar4,0);
  FUN_031a9590(uVar7,uVar11,uVar8,uVar9,0,0,0,uVar10);
  uVar7 = FUN_0277b678(*(undefined8 *)puVar5,0);
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
  puVar3 = System_Threading_IAsyncLocal_TypeInfo;
  puVar2 = System_Net_Http_HttpResponseMessage_TypeInfo;
  puVar1 = System_Net_Http_Headers_HttpRequestHeaders_TypeInfo;
  lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8();
  }
  uVar11 = **(undefined8 **)(lVar12 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar9,0,*(undefined8 *)puVar2,0);
  uVar10 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar3,0);
  FUN_031a9590(uVar7,uVar11,uVar8,uVar9,0,0,0,uVar10);
  return;
}


