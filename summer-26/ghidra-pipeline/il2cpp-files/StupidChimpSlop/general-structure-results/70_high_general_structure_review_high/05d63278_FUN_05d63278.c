/*
FUNCTION_NAME: FUN_05d63278
ENTRY_POINT: 05d63278
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_12
*/


void FUN_05d63278(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  
  puVar4 = Method_System_Configuration_SettingsLoadedEventHandler_BeginInvoke__;
  puVar3 = Method_System_Configuration_SettingsLoadedEventHandler__ctor__;
  puVar2 = Method_System_Configuration_SettingsLoadedEventArgs_get_Provider__;
  puVar1 = Method_System_Configuration_SettingsLoadedEventArgs__ctor__;
  if ((DAT_06a580f7 & 1) == 0) {
    FUN_02d4dc40(Method_System_Configuration_SettingsLoadedEventHandler_EndInvoke__);
    FUN_02d4dc40(Method_System_Configuration_SettingsLoadedEventHandler_Invoke__);
    FUN_02d4dc40(Method_System_Configuration_SettingsManageabilityAttribute_get_Manageability__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_get_Attributes__);
    FUN_02d4dc40(Method_System_Configuration_SettingsLoadedEventHandler_BeginInvoke__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_get_DefaultValue__);
    FUN_02d4dc40(Method_System_Configuration_SettingsLoadedEventHandler__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_get_IsReadOnly__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_get_Name__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_get_PropertyType__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_get_Provider__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_get_SerializeAs__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_get_ThrowOnErrorDeserializing__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_get_ThrowOnErrorSerializing__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_set_DefaultValue__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_set_IsReadOnly__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_set_Name__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_set_PropertyType__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_set_Provider__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_set_SerializeAs__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_set_ThrowOnErrorDeserializing__);
    FUN_02d4dc40(Method_System_Configuration_SettingsProperty_set_ThrowOnErrorSerializing__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_Add__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_Clear__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_Clone__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_CopyTo__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_GetEnumerator__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_OnAdd__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_OnAddComplete__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_OnClear__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_OnClearComplete__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_OnRemove__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_OnRemoveComplete__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_Remove__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_SetReadOnly__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_get_Count__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_get_IsSynchronized__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_get_Item__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyCollection_get_SyncRoot__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyIsReadOnlyException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyIsReadOnlyException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyIsReadOnlyException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyIsReadOnlyException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyNotFoundException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyNotFoundException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyNotFoundException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyNotFoundException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsLoadedEventArgs_get_Provider__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_get_Deserialized__);
    FUN_02d4dc40(Method_System_Configuration_SchemeSettingElement_get_Properties__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_get_IsDirty__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_get_Name__);
    FUN_02d4dc40(PTR_DAT_0664c638);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_get_Property__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_get_PropertyValue__);
    FUN_02d4dc40(PTR_DAT_0664c648);
    FUN_02d4dc40(Method_System_Configuration_SchemeSettingElement_get_Name__);
    FUN_02d4dc40(Method_System_Configuration_SettingsLoadedEventArgs__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_get_SerializedValue__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_get_UsingDefaultValue__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_set_Deserialized__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_set_IsDirty__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_set_PropertyValue__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValue_set_SerializedValue__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_Add__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_Clear__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_Clone__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_CopyTo__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_GetEnumerator__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_Remove__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_SetReadOnly__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_get_Count__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_get_IsSynchronized__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_get_Item__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyValueCollection_get_SyncRoot__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyWrongTypeException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyWrongTypeException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyWrongTypeException__ctor__);
    FUN_02d4dc40(Method_System_Configuration_SettingsPropertyWrongTypeException__ctor__);
    DAT_06a580f7 = 1;
  }
  uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
  FUN_036a55a0(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x60) = uVar10;
  thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x60),uVar10);
  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
  FUN_04bb2e70(lVar11,*(undefined8 *)puVar4);
  puVar4 = Method_System_Configuration_SettingsProperty_get_DefaultValue__;
  puVar3 = Method_System_Configuration_SettingsProperty_get_Attributes__;
  if (lVar11 != 0) {
    FUN_03c15b78(lVar11,0,*(undefined8 *)
                           Method_System_Configuration_SettingsPropertyValueCollection_Add__);
    *(long *)(param_1 + 0x68) = lVar11;
    thunk_FUN_02dc1ef0((long *)(param_1 + 0x68),lVar11);
    uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
    FUN_036a55a0(uVar10,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x70) = uVar10;
    thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x70),uVar10);
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
    FUN_04bb2e70(lVar11,*(undefined8 *)puVar3);
    puVar9 = Method_System_Configuration_SettingsPropertyWrongTypeException__ctor__;
    puVar8 = Method_System_Configuration_SettingsPropertyValueCollection__ctor__;
    puVar7 = Method_System_Configuration_SettingsPropertyValue_set_PropertyValue__;
    puVar6 = Method_System_Configuration_SettingsPropertyValue_set_IsDirty__;
    puVar5 = Method_System_Configuration_SettingsPropertyValue_set_Deserialized__;
    puVar4 = Method_System_Configuration_SettingsProperty__ctor__;
    puVar3 = Method_System_Configuration_SettingsProperty__ctor__;
    puVar2 = Method_System_Configuration_SettingsLoadedEventHandler_Invoke__;
    puVar1 = Method_System_Configuration_SettingsLoadedEventHandler_EndInvoke__;
    if (lVar11 != 0) {
      FUN_03c15b78(lVar11,0,*(undefined8 *)
                             Method_System_Configuration_SettingsPropertyValueCollection_Clear__);
      *(long *)(param_1 + 0x78) = lVar11;
      thunk_FUN_02dc1ef0((long *)(param_1 + 0x78),lVar11);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
      FUN_0483b4a8(uVar10,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x88) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x88),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
      FUN_0483b4a8(uVar10,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x90) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x90),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar7);
      FUN_03bf808c(uVar10,*(undefined8 *)puVar5);
      *(undefined8 *)(param_1 + 0x98) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x98),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar8);
      FUN_03bf808c(uVar10,*(undefined8 *)puVar6);
      *(undefined8 *)(param_1 + 0xa0) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xa0),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Configuration_SettingsPropertyValue_set_SerializedValue__
                                 );
      FUN_03bf808c(uVar10,*(undefined8 *)
                           Method_System_Configuration_SettingsPropertyValue_get_UsingDefaultValue__
                  );
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xa8),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Configuration_SettingsPropertyValue_get_Property__)
      ;
      FUN_036a55a0(uVar10,*(undefined8 *)
                           Method_System_Configuration_SettingsPropertyValue_get_Deserialized__);
      *(undefined8 *)(param_1 + 0xb0) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xb0),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Configuration_SchemeSettingElement_get_Name__);
      FUN_036a55a0(uVar10,*(undefined8 *)
                           Method_System_Configuration_SchemeSettingElement_get_Properties__);
      *(undefined8 *)(param_1 + 0xb8) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xb8),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Configuration_SettingsProperty__ctor__);
      FUN_0483b4a8(uVar10,*(undefined8 *)
                           Method_System_Configuration_SettingsManageabilityAttribute_get_Manageability__
                  );
      *(undefined8 *)(param_1 + 0xc0) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xc0),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Configuration_SettingsPropertyValue_get_SerializedValue__
                                 );
      FUN_036a55a0(uVar10,*(undefined8 *)
                           Method_System_Configuration_SettingsPropertyValue_get_Name__);
      *(undefined8 *)(param_1 + 200) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 200),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Configuration_SettingsPropertyCollection_Add__);
      FUN_04caa7b0(uVar10,*(undefined8 *)
                           Method_System_Configuration_SettingsProperty_set_ThrowOnErrorSerializing__
                  );
      *(undefined8 *)(param_1 + 0xd0) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xd0),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Configuration_SettingsPropertyCollection_Clear__);
      FUN_04caa7b0(uVar10,*(undefined8 *)
                           Method_System_Configuration_SettingsProperty_set_ThrowOnErrorDeserializing__
                  );
      *(undefined8 *)(param_1 + 0xd8) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xd8),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Configuration_SettingsPropertyCollection__ctor__);
      FUN_04caa7b0(uVar10,*(undefined8 *)
                           Method_System_Configuration_SettingsProperty_set_SerializeAs__);
      *(undefined8 *)(param_1 + 0xe0) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xe0),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Configuration_SettingsPropertyValue_get_PropertyValue__
                                 );
      FUN_036a55a0(uVar10,*(undefined8 *)
                           Method_System_Configuration_SettingsPropertyValue_get_IsDirty__);
      *(undefined8 *)(param_1 + 0xe8) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xe8),uVar10);
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664c648);
      FUN_036a55a0(uVar10,*(undefined8 *)PTR_DAT_0664c638);
      *(undefined8 *)(param_1 + 0xf0) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xf0),uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyIsReadOnlyException__ctor__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_Clone__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[1];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_set_Name__);
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyValueCollection_Clone__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0xf8) = uVar10;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0xf8),uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyIsReadOnlyException__ctor__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_CopyTo__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[2];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_set_DefaultValue__
                                   );
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyValueCollection_Remove__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x100) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x100,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyIsReadOnlyException__ctor__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_OnAdd__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[3];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_get_Provider__);
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyValueCollection_SetReadOnly__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x18);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x108) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x108,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyCollection_get_Item__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_OnAddComplete__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[4];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_get_IsReadOnly__);
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyValueCollection_get_Count__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x20);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x110) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x110,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyNotFoundException__ctor__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_Remove__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[5];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_set_IsReadOnly__);
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyValueCollection_get_IsSynchronized__
                     ,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x28);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x118) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x118,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyNotFoundException__ctor__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_SetReadOnly__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[6];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_get_PropertyType__
                                   );
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyValueCollection_get_Item__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x30);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x120) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x120,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyCollection_get_SyncRoot__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_get_Count__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[7];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_set_PropertyType__
                                   );
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyValueCollection_get_SyncRoot__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x38);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x128) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x128,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyNotFoundException__ctor__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_OnRemove__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[8];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_get_ThrowOnErrorDeserializing__
                                   );
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyWrongTypeException__ctor__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x40);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x130) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x130,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyCollection_get_IsSynchronized__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_OnClearComplete__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[9];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_get_ThrowOnErrorSerializing__
                                   );
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyWrongTypeException__ctor__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x48);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x138) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x138,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyValue__ctor__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_OnClear__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[10];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_get_Name__);
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyWrongTypeException__ctor__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x50);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x140) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x140,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyNotFoundException__ctor__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_OnRemoveComplete__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[0xb];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_get_SerializeAs__)
        ;
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyValueCollection_CopyTo__,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x58);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x148) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x148,uVar10);
      lVar11 = *(long *)puVar9;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar11 = *(long *)puVar9;
      }
      puVar2 = Method_System_Configuration_SettingsPropertyIsReadOnlyException__ctor__;
      puVar1 = Method_System_Configuration_SettingsPropertyCollection_GetEnumerator__;
      puVar13 = *(undefined8 **)(lVar11 + 0xb8);
      lVar14 = puVar13[0xc];
      if (lVar14 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
        }
        uVar10 = *puVar13;
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Configuration_SettingsProperty_set_Provider__);
        FUN_04c43d20(lVar14,uVar10,
                     *(undefined8 *)
                      Method_System_Configuration_SettingsPropertyValueCollection_GetEnumerator__,0)
        ;
        plVar12 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x60);
        *plVar12 = lVar14;
        thunk_FUN_02dc1ef0(plVar12,lVar14);
      }
      uVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
      FUN_035b167c(uVar10,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x150) = uVar10;
      thunk_FUN_02dc1ef0(param_1 + 0x150,uVar10);
      FUN_05ee4818(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


