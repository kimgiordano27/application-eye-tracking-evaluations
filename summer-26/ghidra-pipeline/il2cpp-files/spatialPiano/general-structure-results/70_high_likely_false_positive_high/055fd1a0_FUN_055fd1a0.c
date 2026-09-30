/*
FUNCTION_NAME: FUN_055fd1a0
ENTRY_POINT: 055fd1a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4
*/


void FUN_055fd1a0(void)

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
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_58;
  
  puVar4 = 
  Method_UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_Get__
  ;
  if ((DAT_06bbfd76 & 1) == 0) {
    FUN_02f08768(System_Xml_Schema_XdrBuilder_ElementContent_TypeInfo);
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Get__
                );
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Release__
                );
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_Get__
                );
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Get__
                );
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_Get__
                );
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
                );
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<List<HID_HIDElementDescriptor>,_HID_HIDElementDescriptor>_Get__
                );
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<List<MultiColumnCollectionHeader_SortedColumnState>,_MultiColumnCollectionHeader_SortedColumnState>_Get__
                );
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<List<StyleSelectorHelper_SelectorWorkItem>,_StyleSelectorHelper_SelectorWorkItem>_Get__
                );
    FUN_02f08768(PTR_DAT_067cbf00);
    FUN_02f08768(
                Method_UnityEngine_Pool_CollectionPool<List<StyleSelectorHelper_SelectorWorkItem>,_StyleSelectorHelper_SelectorWorkItem>_Release__
                );
    DAT_06bbfd76 = 1;
  }
  puVar10 = 
  Method_UnityEngine_Pool_CollectionPool<List<MultiColumnCollectionHeader_SortedColumnState>,_MultiColumnCollectionHeader_SortedColumnState>_Get__
  ;
  puVar9 = 
  Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Release__
  ;
  puVar8 = 
  Method_UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_Get__
  ;
  puVar7 = 
  Method_UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_Get__
  ;
  puVar6 = 
  Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Release__
  ;
  puVar5 = 
  Method_UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_Get__
  ;
  puVar3 = System_Xml_Schema_XdrBuilder_ElementContent_TypeInfo;
  puVar2 = PTR_DAT_067cbf00;
  puVar1 = PTR_DAT_067c9070;
  uVar15 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_050e4454(uVar15,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar15;
  uVar15 = FUN_050e4454(*(undefined8 *)puVar7,0);
  uVar12 = *(undefined8 *)puVar9;
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar15;
  uVar15 = FUN_050e4454(uVar12,0);
  uVar12 = *(undefined8 *)puVar6;
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar15;
  uVar15 = FUN_050e4454(uVar12,0);
  uVar12 = *(undefined8 *)puVar5;
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar15;
  uVar15 = FUN_050e4454(uVar12,0);
  uVar12 = *(undefined8 *)puVar8;
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar15;
  uVar15 = FUN_050e4454(uVar12,0);
  uVar14 = *(undefined8 *)puVar2;
  lVar13 = *(long *)(*(long *)puVar3 + 0xb8);
  uVar12 = *(undefined8 *)puVar1;
  *(undefined8 *)(lVar13 + 0x28) = uVar15;
  *(undefined8 *)(lVar13 + 0x30) = uVar14;
  lVar13 = FUN_02f0880c(uVar12,4);
  uVar15 = FUN_0555bb84(*(undefined8 *)puVar10,0);
  puVar4 = 
  Method_UnityEngine_Pool_CollectionPool<List<StyleSelectorHelper_SelectorWorkItem>,_StyleSelectorHelper_SelectorWorkItem>_Release__
  ;
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0x18) != 0) {
      *(undefined8 *)(lVar13 + 0x20) = uVar15;
      uVar15 = FUN_0555bb84(*(undefined8 *)puVar4,0);
      puVar4 = 
      Method_UnityEngine_Pool_CollectionPool<List<HID_HIDElementDescriptor>,_HID_HIDElementDescriptor>_Get__
      ;
      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar13 + 0x28) = uVar15;
        uVar15 = FUN_0555bb84(*(undefined8 *)puVar4,0);
        puVar4 = 
        Method_UnityEngine_Pool_CollectionPool<List<StyleSelectorHelper_SelectorWorkItem>,_StyleSelectorHelper_SelectorWorkItem>_Get__
        ;
        if (2 < *(uint *)(lVar13 + 0x18)) {
          *(undefined8 *)(lVar13 + 0x30) = uVar15;
          uVar15 = FUN_0555bb84(*(undefined8 *)puVar4,0);
          if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar13 + 0x38) = uVar15;
            local_58 = 0;
            *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) = lVar13;
            FUN_0511f968(&local_58,0,0);
            *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = local_58;
            uVar11 = FUN_0511b3e8(0);
            *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48) = uVar11;
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


