/*
FUNCTION_NAME: FUN_07ea21d8
ENTRY_POINT: 07ea21d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07ea21d8(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 local_11c [16];
  undefined4 local_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined4 local_e0;
  undefined1 local_dc [16];
  undefined8 local_cc;
  undefined1 local_c4 [16];
  undefined4 local_b4;
  undefined1 auStack_b0 [80];
  
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__;
  puVar10 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
  ;
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Start<SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
  ;
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
  ;
  puVar7 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__;
  puVar6 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
  ;
  puVar2 = UnityEngine_UIElements_TextAutoSize_PropertyBag_TypeInfo;
  puVar5 = OVRPlugin_OverlayShape_TypeInfo;
  if ((DAT_0899ab96 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
                );
    FUN_03a8a718(PTR_DAT_084959d8);
    FUN_03a8a718(PTR_DAT_084959c0);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                );
    FUN_03a8a718(UnityEngine_UIElements_TextAutoSize_PropertyBag_TypeInfo);
    FUN_03a8a718(PTR_DAT_084959c8);
    FUN_03a8a718(TextChatUI_<SendScrollRectToBottom>d__26_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Start<SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                );
    FUN_03a8a718(PTR_DAT_084cd578);
    DAT_0899ab96 = 1;
  }
  FUN_07f6eea4(auStack_b0,0);
  memcpy(*(void **)(*(long *)puVar5 + 0xb8),auStack_b0,0x50);
  thunk_FUN_03afed3c(*(undefined8 *)(*(long *)puVar5 + 0xb8),0);
  puVar12 = (undefined4 *)FUN_0586d9f0(*(long *)(*(long *)puVar5 + 0xb8) + 8,*(undefined8 *)puVar6);
  lVar16 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar6;
  *puVar12 = 1;
  lVar16 = FUN_0586d9f0(*(long *)(lVar16 + 0xb8) + 8,uVar15);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined4 *)(lVar16 + 4) = 4;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar3;
  *(undefined4 *)(lVar16 + 8) = 0;
  puVar13 = (undefined8 *)FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,uVar15);
  *puVar13 = 0;
  puVar13[1] = 0;
  lVar16 = FUN_0586edcc(*(long *)(*(long *)puVar5 + 0xb8) + 0x28,*(undefined8 *)puVar3);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar3;
  *(undefined8 *)(lVar16 + 0x18) = 0;
  *(undefined8 *)(lVar16 + 0x10) = 0;
  *(undefined8 *)(lVar16 + 0x28) = 0;
  *(undefined8 *)(lVar16 + 0x20) = 0;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,uVar15);
  auVar21 = FUN_07db3ed0(0);
  lVar17 = *(long *)puVar5;
  *(undefined1 (*) [12])(lVar16 + 0x30) = auVar21;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,*(undefined8 *)puVar3);
  auVar21 = FUN_07db3ed0(0);
  lVar17 = *(long *)puVar5;
  *(undefined1 (*) [12])(lVar16 + 0x3c) = auVar21;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,*(undefined8 *)puVar3);
  uVar15 = FUN_07db48d8(0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x48) = uVar15;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,*(undefined8 *)puVar3);
  FUN_07db4d28(local_c4,0);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar3;
  *(long *)(lVar16 + 0x58) = local_c4._8_8_;
  *(long *)(lVar16 + 0x50) = local_c4._0_8_;
  *(undefined4 *)(lVar16 + 0x60) = local_b4;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,uVar15);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x6c) = 0;
  uVar15 = *(undefined8 *)puVar3;
  *(undefined8 *)(lVar16 + 100) = 0;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,uVar15);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x74) = uVar15;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,*(undefined8 *)puVar3);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x7c) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar3;
  *(undefined4 *)(lVar16 + 0xc) = 0;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,uVar15);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x8c) = 0;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar16 + 0x84) = 0;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar3;
  *(undefined4 *)(lVar16 + 0x10) = 0;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,uVar15);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x9c) = 0;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar16 + 0x94) = 0;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar3;
  *(undefined4 *)(lVar16 + 0x14) = 0;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,uVar15);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0xac) = 0;
  uVar15 = *(undefined8 *)puVar3;
  *(undefined8 *)(lVar16 + 0xa4) = 0;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,uVar15);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0xb4) = uVar15;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,*(undefined8 *)puVar3);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0xbc) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined4 *)(lVar16 + 0x18) = 0;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  uVar15 = FUN_07e264ec(2,0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x1c) = uVar15;
  puVar13 = (undefined8 *)FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),*(undefined8 *)puVar7);
  auVar20 = _DAT_015c7550;
  puVar13[1] = DAT_015c7550._8_8_;
  *puVar13 = auVar20._0_8_;
  puVar13 = (undefined8 *)
            FUN_0586deec(*(long *)(*(long *)puVar5 + 0xb8) + 0x10,*(undefined8 *)puVar8);
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  lVar16 = FUN_0586d9f0(*(long *)(*(long *)puVar5 + 0xb8) + 8,*(undefined8 *)puVar6);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined4 *)(lVar16 + 0x24) = 0;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  uVar15 = FUN_07e264ec(2,0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x28) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined4 *)(lVar16 + 0x30) = 0;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined4 *)(lVar16 + 0x34) = 0;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined4 *)(lVar16 + 0x38) = 0x3f800000;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar7;
  *(undefined4 *)(lVar16 + 0x3c) = 0;
  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x10) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = FUN_07e264ec(2,0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x40) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined4 *)(lVar16 + 0x48) = 0;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  uVar15 = FUN_07e264ec(2,0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x4c) = uVar15;
  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),*(undefined8 *)puVar7);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x18) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x54) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x5c) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 100) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x6c) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = FUN_07e264ec(3,0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x74) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = FUN_07e264ec(3,0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x7c) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = FUN_07e264ec(2,0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x84) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = FUN_07e264ec(2,0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x8c) = uVar15;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,*(undefined8 *)puVar3);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar3;
  *(undefined4 *)(lVar16 + 0xc4) = 0x3f800000;
  lVar16 = FUN_0586edcc(*(long *)(lVar17 + 0xb8) + 0x28,uVar15);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined4 *)(lVar16 + 200) = 0;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x94) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x9c) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0xa4) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0xac) = uVar15;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,*(undefined8 *)puVar6);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined4 *)(lVar16 + 0xb4) = 0;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  uVar15 = FUN_07e264ec(2,0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0xb8) = uVar15;
  puVar13 = (undefined8 *)FUN_0586e3e8(*(long *)(lVar17 + 0xb8) + 0x18,*(undefined8 *)puVar9);
  FUN_07e265ec(local_dc,3,0);
  puVar13[2] = local_cc;
  puVar13[1] = local_dc._8_8_;
  *puVar13 = local_dc._0_8_;
  lVar16 = FUN_0586e3e8(*(long *)(*(long *)puVar5 + 0xb8) + 0x18,*(undefined8 *)puVar9);
  auVar20 = FUN_07e26758(3,0);
  lVar17 = *(long *)puVar5;
  *(undefined1 (*) [16])(lVar16 + 0x18) = auVar20;
  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,*(undefined8 *)puVar8);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar7;
  *(undefined4 *)(lVar16 + 0x18) = 0;
  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0x20) = 0;
  *(undefined8 *)(lVar16 + 0x28) = 0;
  uVar15 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar16 + 0x30) = 0;
  *(undefined4 *)(lVar16 + 0x38) = 0;
  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
  uVar15 = FUN_07e264ec(2,0);
  lVar17 = *(long *)puVar5;
  *(undefined8 *)(lVar16 + 0xc0) = uVar15;
  lVar16 = FUN_0586e3e8(*(long *)(lVar17 + 0xb8) + 0x18,*(undefined8 *)puVar9);
  FUN_07e25c14(local_f0,0);
  lVar17 = *(long *)puVar5;
  uVar15 = *(undefined8 *)puVar10;
  *(long *)(lVar16 + 0x30) = local_f0._8_8_;
  *(long *)(lVar16 + 0x28) = local_f0._0_8_;
  *(undefined4 *)(lVar16 + 0x38) = local_e0;
  plVar14 = (long *)FUN_0586e8e4(*(long *)(lVar17 + 0xb8) + 0x20,uVar15);
  lVar16 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_04eaf554(lVar16,*(undefined8 *)puVar4);
  uVar15 = FUN_07e26b34(ZEXT816(0),0);
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__;
  if (lVar16 != 0) {
    lVar17 = *(long *)(lVar16 + 0x10);
    lVar18 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
    ;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar17 != 0) {
      uVar1 = *(uint *)(lVar16 + 0x18);
      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
      }
      else {
        FUN_04eafde0(lVar16,uVar15,
                     *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      }
      *plVar14 = lVar16;
      thunk_FUN_03afed3c(plVar14,lVar16);
      lVar16 = FUN_0586e8e4(*(long *)(*(long *)puVar5 + 0xb8) + 0x20,*(undefined8 *)puVar10);
      lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      FUN_04eaf554(lVar17,*(undefined8 *)puVar4);
      uVar15 = FUN_07e26b34(ZEXT816(0),0);
      if (lVar17 != 0) {
        lVar18 = *(long *)(lVar17 + 0x10);
        lVar19 = *(long *)puVar3;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        puVar4 = PTR_DAT_084cd578;
        puVar3 = PTR_DAT_084959c8;
        puVar2 = PTR_DAT_084959c0;
        if (lVar18 != 0) {
          uVar1 = *(uint *)(lVar17 + 0x18);
          if (uVar1 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar17 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          }
          else {
            FUN_04eafde0(lVar17,uVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar16 + 8) = lVar17;
          thunk_FUN_03afed3c((long *)(lVar16 + 8),lVar17);
          lVar16 = FUN_0586e8e4(*(long *)(*(long *)puVar5 + 0xb8) + 0x20,*(undefined8 *)puVar10);
          lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
          FUN_04e8ea98(lVar17,*(undefined8 *)puVar2);
          auVar20 = FUN_07e2c800(*(undefined8 *)puVar4,0);
          if (lVar17 != 0) {
            lVar18 = *(long *)(lVar17 + 0x10);
            lVar19 = *(long *)PTR_DAT_084959d8;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            puVar3 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
            ;
            puVar2 = TextChatUI_<SendScrollRectToBottom>d__26_TypeInfo;
            if (lVar18 != 0) {
              uVar1 = *(uint *)(lVar17 + 0x18);
              if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                lVar18 = lVar18 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                *(undefined1 (*) [16])(lVar18 + 0x20) = auVar20;
                thunk_FUN_03afed3c(lVar18 + 0x28,0);
              }
              else {
                FUN_04e8f350(lVar17,auVar20._0_8_,auVar20._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar16 + 0x10) = lVar17;
              thunk_FUN_03afed3c((long *)(lVar16 + 0x10),lVar17);
              lVar16 = FUN_0586e8e4(*(long *)(*(long *)puVar5 + 0xb8) + 0x20,*(undefined8 *)puVar10)
              ;
              lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
              FUN_04d5b05c(lVar17,*(undefined8 *)puVar3);
              uVar11 = FUN_07de5678(0,0);
              if (lVar17 != 0) {
                lVar18 = *(long *)(lVar17 + 0x10);
                lVar19 = *(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
                ;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar18 != 0) {
                  uVar1 = *(uint *)(lVar17 + 0x18);
                  if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar18 + (long)(int)uVar1 * 4 + 0x20) = uVar11;
                  }
                  else {
                    FUN_04d5b8f0(lVar17,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar16 + 0x18) = lVar17;
                  thunk_FUN_03afed3c((long *)(lVar16 + 0x18),lVar17);
                  lVar16 = FUN_0586e3e8(*(long *)(*(long *)puVar5 + 0xb8) + 0x18,
                                        *(undefined8 *)puVar9);
                  FUN_07e26860(local_108,3,0);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar8;
                  *(long *)(lVar16 + 0x44) = local_108._8_8_;
                  *(long *)(lVar16 + 0x3c) = local_108._0_8_;
                  *(undefined8 *)(lVar16 + 0x4c) = local_f8;
                  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,uVar15);
                  auVar20 = NEON_fmov(0x3f800000,4);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar7;
                  *(long *)(lVar16 + 0x24) = auVar20._8_8_;
                  *(long *)(lVar16 + 0x1c) = auVar20._0_8_;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar7;
                  *(undefined4 *)(lVar16 + 0x3c) = 0;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
                  *(undefined8 *)(lVar16 + 0x40) = 0;
                  thunk_FUN_03afed3c((undefined8 *)(lVar16 + 0x40),0);
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(*(long *)puVar5 + 0xb8),
                                        *(undefined8 *)puVar7);
                  lVar17 = *(long *)puVar5;
                  *(undefined8 *)(lVar16 + 0x48) = 0;
                  *(undefined8 *)(lVar16 + 0x50) = 0;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),*(undefined8 *)puVar7);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar8;
                  *(undefined4 *)(lVar16 + 0x58) = 0;
                  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar7;
                  *(undefined4 *)(lVar16 + 0x2c) = 0;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
                  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0)
                  ;
                  lVar17 = *(long *)puVar5;
                  *(undefined8 *)(lVar16 + 0x5c) = uVar15;
                  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,*(undefined8 *)puVar8);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar8;
                  *(undefined4 *)(lVar16 + 0x30) = 0;
                  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar8;
                  *(undefined4 *)(lVar16 + 0x34) = 0;
                  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar8;
                  *(undefined4 *)(lVar16 + 0x38) = 0;
                  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar8;
                  *(undefined4 *)(lVar16 + 0x3c) = 0x3f800000;
                  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar8;
                  *(undefined4 *)(lVar16 + 0x40) = 0;
                  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar7;
                  *(undefined4 *)(lVar16 + 0x44) = 0;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar8;
                  *(undefined4 *)(lVar16 + 100) = 0;
                  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,uVar15);
                  FUN_07e269a8(local_11c,3,0);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar7;
                  *(long *)(lVar16 + 0x50) = local_11c._8_8_;
                  *(long *)(lVar16 + 0x48) = local_11c._0_8_;
                  *(undefined4 *)(lVar16 + 0x58) = local_10c;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar7;
                  *(undefined4 *)(lVar16 + 0x68) = 0;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
                  lVar17 = *(long *)puVar5;
                  *(undefined8 *)(lVar16 + 0x74) = 0;
                  uVar15 = *(undefined8 *)puVar7;
                  *(undefined8 *)(lVar16 + 0x6c) = 0;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar8;
                  *(undefined4 *)(lVar16 + 0x7c) = 0;
                  lVar16 = FUN_0586deec(*(long *)(lVar17 + 0xb8) + 0x10,uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar7;
                  *(undefined4 *)(lVar16 + 0x5c) = 0;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar7;
                  *(undefined4 *)(lVar16 + 0x80) = 0;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),uVar15);
                  lVar17 = *(long *)puVar5;
                  uVar15 = *(undefined8 *)puVar6;
                  *(undefined4 *)(lVar16 + 0x84) = 0;
                  lVar16 = FUN_0586d9f0(*(long *)(lVar17 + 0xb8) + 8,uVar15);
                  uVar15 = FUN_07e264ec(2,0);
                  lVar17 = *(long *)puVar5;
                  *(undefined8 *)(lVar16 + 200) = uVar15;
                  lVar16 = FUN_0586d4f4(*(undefined8 *)(lVar17 + 0xb8),*(undefined8 *)puVar7);
                  uVar15 = UnityEngine_UIElements_DragAndDropArgs__set_dragAndDropData(ZEXT816(0),0)
                  ;
                  *(undefined8 *)(lVar16 + 0x88) = uVar15;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


