/*
FUNCTION_NAME: FUN_059c5a78
ENTRY_POINT: 059c5a78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_059c5a78(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  
  puVar1 = Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandle__;
  if ((DAT_066d3ab8 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandleRead__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandleWrite__);
    FUN_02b3c81c(Method_UnityEngine_Events_BaseInvokableCall__ctor__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseListView_<get_trackCount>b__65_0__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_BaseListView_<get_untilManualBindingSourceSelectionMode>b__68_0__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseListView_OnAddClicked__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseListView_OnArraySizeFieldChanged__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandle__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseListView_OnItemAdded__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseListView_OnItemsRemoved__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseListView_OnItemsSourceSizeChanged__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseListView_OnRemoveClicked__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_BaseListViewController_<AddItems>g__IsGenericList_19_0__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseListViewController_AddToArray__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseListViewController_EnsureItemSourceCanBeResized__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseListViewController_RemoveFromArray__);
    FUN_02b3c81c(Method_System_ComponentModel_BaseNumberConverter_ConvertFrom__);
    FUN_02b3c81c(Method_System_ComponentModel_BaseNumberConverter_ConvertTo__);
    FUN_02b3c81c(Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchMany__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchManyByOrder__);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__60_0__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseTreeView_OnCustomStyleResolved__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseTreeView_OnItemExpandedChanged__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseTreeViewController_OnItemPointerUp__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseTreeViewController_OnToggleValueChanged__);
    DAT_066d3ab8 = 1;
  }
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04dbdb8c(lVar10,0);
  uVar11 = _DAT_010366a0;
  *(undefined8 *)(lVar10 + 0x18) = _UNK_010366a8;
  *(undefined8 *)(lVar10 + 0x10) = uVar11;
  puVar9 = Method_UnityEngine_UIElements_BaseTreeViewController_OnItemPointerUp__;
  puVar8 = Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchManyByOrder__;
  puVar7 = Method_UnityEngine_UIElements_BaseListViewController_<AddItems>g__IsGenericList_19_0__;
  puVar6 = Method_UnityEngine_UIElements_BaseListView_OnRemoveClicked__;
  puVar5 = Method_UnityEngine_UIElements_BaseListView_OnItemsSourceSizeChanged__;
  puVar4 = Method_UnityEngine_UIElements_BaseListView_OnItemsRemoved__;
  puVar3 = 
  Method_UnityEngine_UIElements_BaseListView_<get_untilManualBindingSourceSelectionMode>b__68_0__;
  puVar2 = Method_UnityEngine_UIElements_BaseListView_<get_trackCount>b__65_0__;
  puVar1 = Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandleRead__;
  if (param_2 != 0) {
    uVar11 = FUN_03186d08(param_2,*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseListView_OnItemAdded__);
    uVar12 = FUN_03186d08(param_2,*(undefined8 *)puVar5);
    uVar13 = FUN_03186d08(param_2,*(undefined8 *)puVar4);
    uVar14 = FUN_03186d08(param_2,*(undefined8 *)puVar7);
    uVar15 = FUN_059c60a4(uVar14,uVar14);
    uVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
    FUN_04dbdb8c(uVar16,0);
    FUN_059c72a4(uVar16,uVar15);
    uVar15 = FUN_03186d08(param_2,*(undefined8 *)puVar6);
    uVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_059c61a4(uVar17,uVar15);
    uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
    FUN_04dbdb8c(uVar15,0);
    uVar18 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_059c6284(uVar18,uVar13,uVar16);
    uVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_04dbdb8c(uVar19,0);
    uVar20 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchMany__
                               );
    FUN_04dbdb8c(uVar20,0);
    uVar21 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseTreeView_OnCustomStyleResolved__)
    ;
    FUN_059c62d8(uVar21,uVar18);
    uVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseTreeView_OnItemExpandedChanged__)
    ;
    FUN_059c6320(uVar22,uVar18);
    uVar23 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseTreeViewController_OnToggleValueChanged__
                               );
    FUN_059c6368(uVar23,uVar18);
    lVar24 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                               );
    *(undefined8 *)(lVar24 + 0x10) = DAT_01031838;
    FUN_04dbdb8c(lVar24,0);
    lVar25 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__60_0__
                               );
    FUN_04dbdb8c(lVar25,0);
    *(long *)(lVar25 + 0x10) = lVar24;
    uVar26 = thunk_FUN_02bb0e9c((long *)(lVar25 + 0x10),lVar24);
    uVar26 = FUN_059c63f4(uVar26,uVar14);
    lVar27 = thunk_FUN_02b79644(*(undefined8 *)Method_UnityEngine_Events_BaseInvokableCall__ctor__);
    FUN_04dbdb8c(lVar27,0);
    *(long *)(lVar27 + 0x10) = lVar24;
    thunk_FUN_02bb0e9c((long *)(lVar27 + 0x10),lVar24);
    plVar28 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                          Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandleWrite__
                                        );
    uVar29 = FUN_059c6544();
    uVar14 = FUN_059c66ec(uVar29,uVar14);
    puVar1 = Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x178))(plVar28,uVar14,*(undefined8 *)(*plVar28 + 0x180));
      uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000350_PostfixBurstDelegate__BeginInvoke
                (uVar14,lVar27,plVar28);
      uVar29 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseListView_OnAddClicked__);
      FUN_059c68c0(uVar29,uVar26,uVar13,uVar12,lVar25,uVar19);
      lVar24 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseListView_OnArraySizeFieldChanged__
                                 );
      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000358_BurstDirectCall__Invoke
                (lVar24,lVar10,uVar29,uVar14,uVar16,uVar15,uVar18,uVar11,uVar17,uVar19,uVar20,uVar21
                 ,uVar22,uVar23,uVar12);
      FUN_03186ee4(param_2,lVar24,
                   *(undefined8 *)Method_System_Xml_Schema_BaseProcessor_SendValidationEvent__);
      puVar4 = Method_System_ComponentModel_BaseNumberConverter_ConvertTo__;
      puVar3 = Method_System_ComponentModel_BaseNumberConverter_ConvertFrom__;
      puVar2 = Method_UnityEngine_UIElements_BaseListViewController_RemoveFromArray__;
      puVar1 = Method_UnityEngine_UIElements_BaseListViewController_AddToArray__;
      if (lVar24 != 0) {
        FUN_031870dc(param_2,*(undefined8 *)(lVar24 + 0x18),
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_BaseListViewController_EnsureItemSourceCanBeResized__
                    );
        FUN_031870dc(param_2,*(undefined8 *)(lVar24 + 0x18),*(undefined8 *)puVar1);
        FUN_031870dc(param_2,*(undefined8 *)(lVar24 + 0x20),*(undefined8 *)puVar2);
        FUN_031870dc(param_2,*(undefined8 *)(lVar24 + 0x28),*(undefined8 *)puVar3);
        FUN_031870dc(param_2,*(undefined8 *)(lVar24 + 0x30),*(undefined8 *)puVar4);
        return lVar24;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


