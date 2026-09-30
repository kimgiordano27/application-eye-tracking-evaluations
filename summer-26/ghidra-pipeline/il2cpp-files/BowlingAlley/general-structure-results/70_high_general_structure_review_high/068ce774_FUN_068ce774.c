/*
FUNCTION_NAME: FUN_068ce774
ENTRY_POINT: 068ce774
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_19;frame_or_lifecycle_behavior
*/


void FUN_068ce774(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = Method_System_Collections_Generic_List<IOptimizedAccessor>_ToArray__;
  puVar4 = Method_System_Collections_Generic_List<IOptimizedAccessor>_Add__;
  puVar3 = PTR_DAT_072be280;
  puVar2 = PTR_DAT_072bd3e8;
  puVar1 = PTR_DAT_07293568;
  if ((DAT_076e1425 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IOvrGpuSkinner>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IOvrGpuSkinner>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IOvrGpuSkinner>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IOvrGpuSkinner>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IPAddress>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IPAddress>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IPAddress>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IPAddress>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IPanel>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IPanel>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IPanel>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IPanel>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IPanel>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IRaycaster>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IRaycaster>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IRaycaster>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IRaycaster>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IRaycaster>_Remove__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<IRuntimePanelComponent>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IStateTransition>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ITimelineEvaluateCallback>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ITimelineEvaluateCallback>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ITimelineEvaluateCallback>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ITimelineEvaluateCallback>_get_Count__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ITimelineEvaluateCallback>_get_Item__)
    ;
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<IUIControllerInterface>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IUIElementsUtility>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IUIElementsUtility>_Insert__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IUpdateDriver>_ConvertAll<Object>__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IUpdateDriver>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IUxmlFactory>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IUxmlFactory>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IUxmlFactory>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IValueAnimationUpdate>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IValueAnimationUpdate>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IValueAnimationUpdate>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IValueAnimationUpdate>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IValueAnimationUpdate>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRActivateInteractable>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRActivateInteractable>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRActivateInteractable>_Clear__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<IXRActivateInteractable>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRGrabTransformer>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRGrabTransformer>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRGrabTransformer>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRGrabTransformer>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRGrabTransformer>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRGrabTransformer>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRGroupMember>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRGroupMember>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRGroupMember>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRGroupMember>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHandProcessor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHandProcessor>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHandProcessor>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHandProcessor>_Sort__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHandProcessor>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHandProcessor>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHoverFilter>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHoverFilter>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHoverInteractable>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHoverInteractable>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHoverInteractable>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__)
    ;
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHoverInteractable>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHoverInteractable>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHoverInteractor>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRHoverInteractor>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>_Sort__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractable>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractionGroup>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractionGroup>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractionGroup>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractionGroup>_get_Item__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<IXRInteractionStrengthFilter>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<IXRInteractionStrengthFilter>_get_Count__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractor>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractor>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractor>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractor>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractor>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractor>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRInteractor>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectFilter>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectFilter>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectFilter>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractable>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractable>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractable>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractable>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractable>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractable>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractable>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractor>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractor>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractor>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractor>_IndexOf__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractor>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractor>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractor>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRSelectInteractor>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_Add__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_AddRange__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_Clear__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXmlNode>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXmlNode>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXmlNode>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXmlNode>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXmlNode>_Insert__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXmlNode>_Reverse__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXmlNode>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IXmlNode>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Image>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Image>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Image>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Image>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Image>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Image>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Image>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ImageCreateContext>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ImageCreateContext>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ImageCreateContext>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ImageCreateContext>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ImportAddon>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ImportAddon>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<ImportAddon>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Index>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Index>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Index>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Index>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Index>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Index>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Index>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Index>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputAction>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputAction>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputAction>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputAction>_ToArray__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputActionAsset>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputActionDefinition>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputActionMap>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputActionMap>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputActionMap>_ToArray__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputActionMap>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputActionMap>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputActionSet>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputAxis>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputAxis>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputAxis>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputAxis>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputBinding>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputBinding>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputBinding>_ToArray__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDeviceDescription>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputDeviceDescription>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputEventPtr>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputEventPtr>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputEventPtr>_Sort__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputEventPtr>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InputEventPtr>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InspectedData>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InspectedData>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InspectedData>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InspectedHandle>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InspectedHandle>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InspectedHandle>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InspectedMember>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InspectedMember>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InspectedMember>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InstalledApplication>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InstalledApplication>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InstanceHandle>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InstanceHandle>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InstanceHandle>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InstanceHandle>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InstanceHandle>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InstanceHandle>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InstanceHandle>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InstanceHandle>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Instruction>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Instruction>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Instruction>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Instruction>_ToArray__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Instruction>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Instruction>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Instruction>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_BinarySearch__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_IndexOf__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_Insert__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_RemoveRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_Sort__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_Sort__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_ToArray__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_set_Capacity__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<int>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<long>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<long>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<long>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<long>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<long>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>_GetRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>_Insert__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>_Reverse__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>_set_Capacity__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPoint>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPtr>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntPtr>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntegratedSubsystem>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntegratedSubsystem>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntegratedSubsystem>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntegratedSubsystem>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntegratedSubsystem>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntegratedSubsystem>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntegratedSubsystem>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_Clear__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InteractionTarget>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InteractionTarget>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InteractionTarget>_ToArray__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InteractionTrigger>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InteractionTrigger>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InteractionTrigger>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InteractionTrigger>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InteractionTrigger>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InteractionTrigger>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InteractionTrigger>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_125>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_125>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_125>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_125>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_125>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_130>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_130>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_130>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_130>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_131>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_131>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_131>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_131>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_131>_IndexOf__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_131>_Insert__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_131>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_131>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_131>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_146>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_146>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_146>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_146>_Insert__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_146>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_146>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_264>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_264>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_264>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_264>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_264>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_264>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_265>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_265>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_265>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_265>_IndexOf__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_265>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_265>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_273>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_273>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_273>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_273>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_312>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_312>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_323>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_323>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_323>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_323>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_34>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_34>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_34>_Insert__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_34>_LastIndexOf__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_34>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<InternalType_34>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IOptimizedAccessor>_ToArray__);
    thunk_FUN_032e1da0(PTR_DAT_072be280);
    thunk_FUN_032e1da0(PTR_DAT_07293568);
    thunk_FUN_032e1da0(PTR_DAT_072bd3e8);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<IOptimizedAccessor>_Add__);
    DAT_076e1425 = 1;
  }
  FUN_068d37c0(param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar3,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_Contains__);
    FUN_055ddb34(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<int>_AddRange__,0
                );
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar7 = lVar8;
    thunk_FUN_0333a630(plVar7,lVar8);
  }
  if (param_1 != 0) {
    FUN_03913660(param_1,lVar8,0,
                 *(undefined8 *)Method_System_Collections_Generic_List<IOvrGpuSkinner>__ctor__);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IPAddress>_GetEnumerator__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Instruction>_get_Count__);
      FUN_055ddf6c(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<long>_get_Count__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03914a10(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IOvrGpuSkinner>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Image>__ctor__);
      FUN_055ddd50(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>_get_Item__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    Nova_Compat_INovaJobExtensions__NovaScheduleByRef<InternalType_460_InternalType_473>
              (param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IPanel>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Index>_get_Item__);
      FUN_055de0d4(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IntegratedSubsystem>_get_Item__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_039150a0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IPAddress>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Image>_get_Item__);
      FUN_055dde04(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<InteractionTrigger>_Contains__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03914380(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IPanel>_Add__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRSelectInteractor>_IndexOf__
                                );
      FUN_055de188(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<InternalType_130>_get_Count__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_039153e8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IPAddress>_Add__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Image>_get_Count__);
      FUN_055ddeb8(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<InternalType_146>__ctor__,0
                  );
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_039146c8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IPanel>_Remove__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>__ctor__);
      FUN_055de23c(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<InternalType_264>_get_Item__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03915730(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IPAddress>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>_Reverse__);
      FUN_055de020(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<InternalType_312>__ctor__,0
                  );
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03914d58(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IOvrGpuSkinner>_Clear__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputActionSet>__ctor__);
      FUN_055ddbe8(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<InternalType_34>_get_Count__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_039139a8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IOvrGpuSkinner>_GetEnumerator__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ImportAddon>_GetEnumerator__
                                );
      FUN_055ddc9c(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<int>_Sort__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    Nova_Compat_INovaJobExtensions__NovaScheduleByRef<InternalType_227_InternalType_248>
              (param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverFilter>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_get_Count__);
      FUN_055e3038(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<int>_Sort__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x60);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_0391fb40(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_get_Item__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x68);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDeviceDescription>_Add__
                                );
      FUN_055e3470(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<int>_ToArray__,
                   0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x68);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03920ef0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_Clear__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x70);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>__ctor__);
      FUN_055e3254(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<int>_get_Count__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03920518(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractor>_get_Item__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x78);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_RemoveAt__);
      FUN_055e35d8(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<int>_get_Item__
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x78);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03921580(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x80);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Index>_Clear__);
      FUN_055e3308(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<int>_set_Capacity__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03920860(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x88);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>_get_Count__);
      FUN_055e368c(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<int>_set_Item__
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x88);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_039218c8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x90);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ImageCreateContext>_RemoveAt__
                                );
      FUN_055e33bc(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<long>__ctor__,0
                  );
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x90);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03920ba8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractor>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x98);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_get_Item__);
      FUN_055e3524(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<long>__ctor__,0
                  );
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x98);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03921238(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>_get_Count__
                                );
      FUN_055e30ec(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<long>_Add__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa0);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_0391fe88(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_AddRange__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Instruction>_set_Item__);
      FUN_055e31a0(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<long>_get_Item__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa8);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_039201d0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IUpdateDriver>_GetEnumerator__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_Add__
                                );
      FUN_055df4d4(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>__ctor__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb0);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_039198d0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IValueAnimationUpdate>_GetEnumerator__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>_Insert__);
      FUN_055df90c(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>__ctor__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb8);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_0391ac80(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IUxmlFactory>_GetEnumerator__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xc0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>_GetEnumerator__
                                );
      FUN_055df6f0(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<IntPoint>_Add__
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc0);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_0391a2a8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IValueAnimationUpdate>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 200);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDeviceDescription>__ctor__
                                );
      FUN_055dfa74(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>_AddRange__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 200);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_0391b310(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IValueAnimationUpdate>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xd0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_get_Item__);
      FUN_055df7a4(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>_GetEnumerator__,0
                  );
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xd0);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_0391a5f0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRActivateInteractable>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xd8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputActionMap>_ToArray__);
      FUN_055dfb28(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>_GetRange__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xd8);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_0391b658(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IValueAnimationUpdate>_Add__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>__ctor__);
      FUN_055df858(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>_Insert__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xe0);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_0391a938(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IValueAnimationUpdate>_Remove__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>__ctor__)
      ;
      FUN_055df9c0(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>_Reverse__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xe8);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_0391afc8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IUxmlFactory>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xf0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>_Add__);
      FUN_055df588(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>_get_Count__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xf0);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03919c18(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IUxmlFactory>_Add__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xf8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedHandle>_GetEnumerator__
                                );
      FUN_055df63c(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>_set_Capacity__,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xf8);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    FUN_03919f60(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionGroup>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x100);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_Clear__
                                );
      FUN_055e48c0(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPoint>_set_Item__,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x100) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x100,lVar8);
    }
    FUN_039416d4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x108);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAxis>_get_Count__);
      FUN_055e4cf8(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<IntPtr>_Add__,0
                  );
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x108) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x108,lVar8);
    }
    FUN_03942a84(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionGroup>_get_Item__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x110);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Image>_Add__)
      ;
      FUN_055e4adc(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntPtr>_GetEnumerator__,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x110) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x110,lVar8);
    }
    FUN_039420ac(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_AddRange__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x118);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAxis>_Add__);
      FUN_055e4e60(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IntegratedSubsystem>__ctor__,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x118) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x118,lVar8);
    }
    FUN_03943114(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionStrengthFilter>_GetEnumerator__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x120);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>_Remove__);
      FUN_055e4b90(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_List<IntegratedSubsystem>_Add__,
                   0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x120) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x120,lVar8);
    }
    FUN_039423f4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_Clear__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x128);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputBinding>_ToArray__);
      FUN_055e4f14(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IntegratedSubsystem>_Clear__,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x128) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x128,lVar8);
    }
    FUN_0394345c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionStrengthFilter>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x130);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAction>_ToArray__);
      FUN_055e4c44(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IntegratedSubsystem>_GetEnumerator__,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x130) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x130,lVar8);
    }
    FUN_0394273c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_Contains__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x138);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Instruction>_get_Item__);
      FUN_055e4fc8(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IntegratedSubsystem>_RemoveAt__,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x138) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x138,lVar8);
    }
    FUN_039437a4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_Add__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x140);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedData>_get_Item__);
      FUN_055e4dac(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IntegratedSubsystem>_get_Count__,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x140) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x140,lVar8);
    }
    FUN_03942dcc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionGroup>_GetEnumerator__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x148);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRSelectInteractor>_RemoveAt__
                                );
      FUN_055e4974(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>__ctor__,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x148) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x148,lVar8);
    }
    FUN_03941a1c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionGroup>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x150);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_GetEnumerator__
                                );
      FUN_055e4a28(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_Add__,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x150) = lVar8;
      thunk_FUN_0333a630(lVar6 + 0x150,lVar8);
    }
    FUN_03941d64(param_1,lVar8,0,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06e3d128();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


