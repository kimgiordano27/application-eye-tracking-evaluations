/*
FUNCTION_NAME: FUN_06001d10
ENTRY_POINT: 06001d10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_06001d10(undefined8 param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  if ((DAT_06dc49fe & 1) == 0) {
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_BaseAffordanceStateProvider_OnAffordanceStateUpdated__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseBoolField_OnClickEvent__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseBoolField_OnNavigationSubmit__);
    FUN_02d965b8(Method_UnityEngine_Rendering_BaseCommandBuffer_ThrowIfGlobalStateNotAllowed__);
    FUN_02d965b8(Method_UnityEngine_Rendering_BaseCommandBuffer_ThrowIfRasterNotAllowed__);
    FUN_02d965b8(Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandle__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<List<string>>,_SessionsManager_<CreateSession>d__55>__
                );
    FUN_02d965b8(Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandleRead__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_LobbyManager_<CreateLobby>d__52>__
                );
    FUN_02d965b8(Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandleWrite__);
    FUN_02d965b8(Method_UnityEngine_Events_BaseInvokableCall__ctor__);
    FUN_02d965b8(Method_Unity_Services_Authentication_PlayerAccounts_BaseJwt_ConvertTimestamp__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseListView_<get_trackCount>b__65_0__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseListView_<get_untilManualBindingSourceSelectionMode>b__68_0__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseListView_OnAddClicked__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseListView_OnArraySizeFieldChanged__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseListView_OnItemAdded__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseListView_OnItemsRemoved__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseListView_OnItemsSourceSizeChanged__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseListView_OnRemoveClicked__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseListViewController_<AddItems>g__IsGenericList_19_0__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseListViewController_AddToArray__);
    DAT_06dc49fe = 1;
  }
  puVar8 = Method_UnityEngine_UIElements_BaseListViewController_AddToArray__;
  puVar7 = Method_UnityEngine_UIElements_BaseListView_OnItemAdded__;
  puVar6 = Method_UnityEngine_UIElements_BaseListView_OnAddClicked__;
  puVar5 = Method_UnityEngine_UIElements_BaseListView_<get_trackCount>b__65_0__;
  puVar4 = Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandleRead__;
  puVar3 = Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandle__;
  puVar2 = Method_UnityEngine_Rendering_BaseCommandBuffer_ThrowIfRasterNotAllowed__;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<List<string>>,_SessionsManager_<CreateSession>d__55>__
  ;
  if (param_2 != 0) {
    uVar9 = FUN_035c1040(param_2,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_LobbyManager_<CreateLobby>d__52>__
                        );
    uVar10 = FUN_035c1040(param_2,*(undefined8 *)puVar1);
    uVar11 = FUN_035c1040(param_2,*(undefined8 *)puVar3);
    uVar12 = FUN_035c1040(param_2,*(undefined8 *)puVar4);
    uVar9 = FUN_060022a0(uVar9);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_060023c4(uVar13,uVar9,0,0,0);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    FUN_0552aca4(uVar9,0);
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_0602c278(uVar14,uVar9,uVar11,uVar13,0);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    FUN_0552aca4(uVar9,0);
    uVar15 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
    FUN_0602a8d8(uVar15,uVar9,uVar11,uVar13,0);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseBoolField_OnClickEvent__);
    FUN_060024b4(uVar9,uVar12,uVar11);
    uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseListView_OnItemsRemoved__);
    FUN_060024f8(uVar11,uVar10,uVar9,uVar14);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_UnityEngine_Events_BaseInvokableCall__ctor__);
    FUN_06002558(uVar12,uVar10,uVar9,uVar14);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseListView_OnRemoveClicked__);
    FUN_060025b8(uVar13,uVar10,uVar9,uVar15);
    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
    FUN_0552aca4(lVar16,0);
    puVar1 = Method_UnityEngine_UIElements_BaseBoolField_OnNavigationSubmit__;
    *(undefined4 *)(lVar16 + 0x10) = 0;
    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_0552aca4(lVar17,0);
    *(long *)(lVar17 + 0x10) = lVar16;
    LeanTween__value((long *)(lVar17 + 0x10),lVar16);
    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
    FUN_0552aca4(lVar16,0);
    puVar1 = 
    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_BaseAffordanceStateProvider_OnAffordanceStateUpdated__
    ;
    *(undefined4 *)(lVar16 + 0x10) = 0;
    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_0552aca4(lVar18,0);
    *(long *)(lVar18 + 0x10) = lVar16;
    LeanTween__value((long *)(lVar18 + 0x10),lVar16);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseListView_OnItemsSourceSizeChanged__
                              );
    FUN_06002694(uVar9,uVar11,lVar18);
    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
    FUN_0552aca4(lVar16,0);
    uVar10 = *(undefined8 *)puVar1;
    *(undefined4 *)(lVar16 + 0x10) = 0;
    lVar18 = thunk_FUN_02dd3144(uVar10);
    FUN_0552aca4(lVar18,0);
    *(long *)(lVar18 + 0x10) = lVar16;
    LeanTween__value((long *)(lVar18 + 0x10),lVar16);
    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_Unity_Services_Authentication_PlayerAccounts_BaseJwt_ConvertTimestamp__
                               );
    FUN_060026d8(uVar10,uVar12,lVar18);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseListView_<get_untilManualBindingSourceSelectionMode>b__68_0__
                               );
    FUN_0600271c(uVar12,uVar11,lVar17,uVar9,uVar10);
    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
    FUN_0552aca4(lVar16,0);
    uVar9 = *(undefined8 *)puVar1;
    *(undefined4 *)(lVar16 + 0x10) = 0;
    lVar17 = thunk_FUN_02dd3144(uVar9);
    FUN_0552aca4(lVar17,0);
    *(long *)(lVar17 + 0x10) = lVar16;
    LeanTween__value((long *)(lVar17 + 0x10),lVar16);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseListViewController_<AddItems>g__IsGenericList_19_0__
                              );
    FUN_06002790(uVar9,uVar13,lVar17);
    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseListView_OnArraySizeFieldChanged__
                               );
    FUN_0552aca4(lVar16,0);
    *(undefined8 *)(lVar16 + 0x10) = uVar9;
    LeanTween__value((undefined8 *)(lVar16 + 0x10),uVar9);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_Rendering_BaseCommandBuffer_ThrowIfGlobalStateNotAllowed__
                              );
    FUN_06002804(uVar9,uVar12,lVar16);
    TinyJSON_JSON__SupportTypeForAOT<Decimal>
              (param_2,uVar9,
               *(undefined8 *)
                Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandleWrite__);
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


