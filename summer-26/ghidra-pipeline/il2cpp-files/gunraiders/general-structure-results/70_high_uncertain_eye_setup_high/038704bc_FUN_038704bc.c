/*
FUNCTION_NAME: FUN_038704bc
ENTRY_POINT: 038704bc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_038704bc(long param_1,undefined8 param_2)

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
  long *plVar11;
  
  puVar1 = Method_OVRPlayerController_ResetOrientation__;
  if ((DAT_045393c8 & 1) == 0) {
    FUN_01c5d288(Method_OVRPlayerController_ResetOrientation__);
    FUN_01c5d288(PTR_DAT_04230020);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsSubmitHandler>__
                );
    FUN_01c5d288(Method_OVRPlayerController_UpdateTransform__);
    FUN_01c5d288(
                Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsUpdateSelectedHandler>__
                );
    FUN_01c5d288(Method_ListWithEvents<IUpdateReceiver>_add_OnElementAdded__);
    FUN_01c5d288(Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_Add__);
    FUN_01c5d288(Method_OVRPlugin_get_version__);
    FUN_01c5d288(
                Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_get_Count__
                );
    FUN_01c5d288(System_Func<Scale,_Scale,_bool>_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>__ctor__);
    FUN_01c5d288(
                Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_get_Item__
                );
    FUN_01c5d288(InventoryManager_InventoryType_TypeInfo);
    FUN_01c5d288(Method_OVRRuntimeController_InputFocusAquired__);
    FUN_01c5d288(
                Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_set_Capacity__
                );
    FUN_01c5d288(Method_System_Collections_Generic_List<PuppetMaster>__ctor__);
    FUN_01c5d288(
                Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_set_Item__
                );
    DAT_045393c8 = 1;
  }
  FUN_0387c930(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_0386c408(uVar10,param_1);
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  puVar9 = Method_OVRRuntimeController_InputFocusAquired__;
  puVar8 = Method_OVRPlugin_get_version__;
  puVar7 = Method_OVRPlayerController_UpdateTransform__;
  puVar6 = Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_set_Item__;
  puVar5 = Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_set_Capacity__
  ;
  puVar4 = Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_get_Item__;
  puVar3 = Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_Add__;
  puVar2 = System_Func<Scale,_Scale,_bool>_TypeInfo;
  puVar1 = PTR_DAT_0422fc38;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (plVar11 = *(long **)(*(long *)(param_1 + 0x18) + 0x10), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x198))
              (plVar11,**(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8),
               *(undefined8 *)(*plVar11 + 0x1a0));
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)puVar9,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0x98) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)puVar8,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xa0) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)puVar5,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xa8) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)puVar3,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xb0) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)puVar4,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xb8) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)puVar7,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xc0) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)puVar2,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 200) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)puVar6,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xf8) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)
                                 Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_get_Count__
                        ,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0x100) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)
                                 Method_UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>__ctor__
                        ,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xd0) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)InventoryManager_InventoryType_TypeInfo,
                        *(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xd8) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)
                                 Method_System_Collections_Generic_List<PuppetMaster>__ctor__,
                        *(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xe0) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)
                                 Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsSubmitHandler>__
                        ,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xe8) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)
                                 Method_ListWithEvents<IUpdateReceiver>_add_OnElementAdded__,
                        *(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0x108) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,*(undefined8 *)
                                 Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsUpdateSelectedHandler>__
                        ,*(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0x110) = uVar10;
    uVar10 = (**(code **)(*plVar11 + 0x198))
                       (plVar11,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                        *(undefined8 *)(*plVar11 + 0x1a0));
    *(undefined8 *)(param_1 + 0xf0) = uVar10;
    *(undefined8 *)(param_1 + 0x118) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    uVar10 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230020);
    FUN_03313b6c(uVar10,0);
    *(undefined8 *)(param_1 + 0x130) = uVar10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


