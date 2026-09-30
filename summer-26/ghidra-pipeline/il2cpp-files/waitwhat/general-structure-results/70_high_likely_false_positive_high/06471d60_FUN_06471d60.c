/*
FUNCTION_NAME: FUN_06471d60
ENTRY_POINT: 06471d60
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06471d60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo;
  puVar3 = UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo;
  puVar2 = UnityEngine_Pool_CollectionPool<List<RectMask2D>,_RectMask2D>_TypeInfo;
  puVar1 = PTR_DAT_070c3c48;
  if ((DAT_07556af8 & 1) == 0) {
    FUN_03188a78(UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_TypeInfo);
    FUN_03188a78(UnityEngine_Pool_CollectionPool<List<RectMask2D>,_RectMask2D>_TypeInfo);
    FUN_03188a78(
                System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<double>_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
                );
    FUN_03188a78(UnityEngine_Pool_CollectionPool<List<VisualElement>,_VisualElement>_TypeInfo);
    FUN_03188a78(PTR_DAT_070c3c48);
    FUN_03188a78(
                UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_Pool_CollectionPool<List<HID_HIDElementDescriptor>,_HID_HIDElementDescriptor>_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_Pool_CollectionPool<List<MultiColumnCollectionHeader_SortedColumnState>,_MultiColumnCollectionHeader_SortedColumnState>_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_Pool_CollectionPool<List<StyleSelectorHelper_SelectorWorkItem>,_StyleSelectorHelper_SelectorWorkItem>_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_Pool_CollectionPool<List<VisualTreeAsset_UxmlObjectEntry>,_VisualTreeAsset_UxmlObjectEntry>_TypeInfo
                );
    FUN_03188a78(System_Collections_ObjectModel_Collection<IEnumerable<Claim>>_TypeInfo);
    FUN_03188a78(System_Collections_ObjectModel_Collection<string>_TypeInfo);
    DAT_07556af8 = 1;
  }
  plVar5 = (long *)FUN_03188b1c(*(undefined8 *)puVar3,0xd);
  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  uVar8 = *(undefined8 *)puVar4;
  uVar9 = *(undefined8 *)puVar1;
  FUN_05971910(lVar6,0);
  *(undefined8 *)(lVar6 + 0x10) = uVar8;
  uVar8 = DAT_012e2578;
  *(undefined8 *)(lVar6 + 0x20) = uVar9;
  *(undefined8 *)(lVar6 + 0x18) = uVar8;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar7 = thunk_FUN_031c3cac(lVar6,*(undefined8 *)(*plVar5 + 0x40));
  if (lVar7 != 0) {
    if ((int)plVar5[3] != 0) {
      plVar5[4] = lVar6;
      puVar3 = 
      UnityEngine_Pool_CollectionPool<List<CreationContext_AttributeOverrideRange>,_CreationContext_AttributeOverrideRange>_TypeInfo
      ;
      lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar2);
      uVar8 = *(undefined8 *)puVar3;
      uVar9 = *(undefined8 *)puVar1;
      FUN_05971910(lVar6,0);
      *(undefined8 *)(lVar6 + 0x10) = uVar8;
      uVar8 = DAT_012e1f38;
      *(undefined8 *)(lVar6 + 0x20) = uVar9;
      *(undefined8 *)(lVar6 + 0x18) = uVar8;
      lVar7 = thunk_FUN_031c3cac(lVar6,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar7 == 0) goto LAB_06472314;
      if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
        plVar5[5] = lVar6;
        puVar3 = 
        UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_TypeInfo
        ;
        lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)puVar2);
        uVar8 = *(undefined8 *)puVar3;
        uVar9 = *(undefined8 *)puVar1;
        FUN_05971910(lVar6,0);
        *(undefined8 *)(lVar6 + 0x10) = uVar8;
        uVar8 = DAT_012e1880;
        *(undefined8 *)(lVar6 + 0x20) = uVar9;
        *(undefined8 *)(lVar6 + 0x18) = uVar8;
        lVar7 = thunk_FUN_031c3cac(lVar6,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar7 == 0) goto LAB_06472314;
        if (2 < *(uint *)(plVar5 + 3)) {
          plVar5[6] = lVar6;
          puVar1 = 
          UnityEngine_Pool_CollectionPool<List<StyleSelectorHelper_SelectorWorkItem>,_StyleSelectorHelper_SelectorWorkItem>_TypeInfo
          ;
          lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)puVar2);
          uVar8 = *(undefined8 *)puVar1;
          FUN_05971910(lVar6,0);
          *(undefined8 *)(lVar6 + 0x10) = uVar8;
          uVar8 = DAT_012e2c18;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          *(undefined8 *)(lVar6 + 0x18) = uVar8;
          lVar7 = thunk_FUN_031c3cac(lVar6,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar7 == 0) goto LAB_06472314;
          if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
            plVar5[7] = lVar6;
            puVar1 = System_Collections_ObjectModel_Collection<IEnumerable<Claim>>_TypeInfo;
            lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)puVar2);
            uVar8 = *(undefined8 *)puVar1;
            FUN_05971910(lVar6,0);
            *(undefined8 *)(lVar6 + 0x10) = uVar8;
            FUN_06cd5b94(0x12e1000,lVar6);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_06472314:
  uVar8 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar8,0);
}


