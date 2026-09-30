/*
FUNCTION_NAME: FUN_0691537c
ENTRY_POINT: 0691537c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_10;ui_or_gameplay_sink_hits_20;frame_or_lifecycle_behavior
*/


void FUN_0691537c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = Method_System_Collections_Generic_List<string>_AddRange__;
  puVar3 = Method_System_Collections_Generic_List<string>_Add__;
  puVar2 = PTR_DAT_072bd450;
  puVar1 = PTR_DAT_072a12f8;
  if ((DAT_076e17f8 & 1) == 0) {
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
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_Find__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_IndexOf__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_Insert__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_Reverse__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_Sort__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_ToArray__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_get_Capacity__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_set_Capacity__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyId>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyId>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyId>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyId>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyId>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyName>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyName>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyName>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyName>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyName>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyName>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyName>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyName>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyValue>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyValue>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyValue>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyValue>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyValue>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StylePropertyValue>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelector>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelector>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelector>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelector>_ToArray__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelector>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelectorPart>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelectorPart>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelectorPart>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelectorPart>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelectorPart>_RemoveAll__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelectorPart>_Sort__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelectorPart>_ToArray__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelectorPart>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSelectorPart>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSheet>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSheet>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSheet>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSheet>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSheet>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSheet>_RemoveRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSheet>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSheet>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSyntaxToken>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSyntaxToken>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSyntaxToken>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSyntaxToken>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleSyntaxToken>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleValue>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleValue>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleValue>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleValue>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleValue>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleValue>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleValue>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleValueManaged>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleVariable>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleVariable>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleVariable>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleVariable>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleVariable>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleVariable>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<StyleVariable>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SubMeshDescriptor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Subsystem>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Subsystem>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<Subsystem>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SubsystemDescriptor>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<SubsystemDescriptorWithProvider>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SubsystemWithProvider>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SubsystemWithProvider>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SubsystemWithProvider>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SubsystemWithProvider>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SubsystemWithProvider>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SwipeViewItem>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SwipeViewItem>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SwipeViewItem>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<SwipeViewItem>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TEdge>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TEdge>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TEdge>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TEdge>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TEdge>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TEdge>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_Character>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_Character>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_Character>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_Character>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_Character>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_Character>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_FontAsset>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_FontAsset>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_FontAsset>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_FontAsset>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<TMP_FontAsset>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<string>_Add__);
    thunk_FUN_032e1da0(PTR_DAT_072a12f8);
    thunk_FUN_032e1da0(PTR_DAT_072bd450);
    DAT_076e17f8 = 1;
  }
  FUN_068d37c0(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar3,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2,0);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_Contains__);
    FUN_055ddb34(lVar7,uVar8,*(undefined8 *)Method_System_Collections_Generic_List<string>_Clear__,0
                );
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_0333a630(plVar6,lVar7);
  }
  if (param_1 != 0) {
    FUN_03913660(param_1,lVar7,0,
                 *(undefined8 *)Method_System_Collections_Generic_List<IOvrGpuSkinner>__ctor__);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IPAddress>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Instruction>_get_Count__);
      FUN_055ddf6c(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StylePropertyId>_get_Count__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03914a10(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IOvrGpuSkinner>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Image>__ctor__);
      FUN_055ddd50(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StylePropertyValue>_AddRange__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    Nova_Compat_INovaJobExtensions__NovaScheduleByRef<InternalType_460_InternalType_473>
              (param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IPanel>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Index>_get_Item__);
      FUN_055de0d4(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StyleSelectorPart>_AddRange__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_039150a0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IPAddress>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Image>_get_Item__);
      FUN_055dde04(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSheet>_Remove__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03914380(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IPanel>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRSelectInteractor>_IndexOf__
                                );
      FUN_055de188(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleValue>_GetEnumerator__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_039153e8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IPAddress>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Image>_get_Count__);
      FUN_055ddeb8(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleVariable>_get_Count__,
                   0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_039146c8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IPanel>_Remove__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>__ctor__);
      FUN_055de23c(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<SubsystemWithProvider>_GetEnumerator__,0)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03915730(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IPAddress>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>_Reverse__);
      FUN_055de020(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TEdge>_set_Item__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03914d58(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IOvrGpuSkinner>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputActionSet>__ctor__);
      FUN_055ddbe8(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_FontAsset>_get_Count__,
                   0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_039139a8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IOvrGpuSkinner>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ImportAddon>_GetEnumerator__
                                );
      FUN_055ddc9c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_ToArray__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    Nova_Compat_INovaJobExtensions__NovaScheduleByRef<InternalType_227_InternalType_248>
              (param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverFilter>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_get_Count__);
      FUN_055e3038(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_get_Capacity__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_0391fb40(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDeviceDescription>_Add__
                                );
      FUN_055e3470(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_get_Count__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03920ef0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>__ctor__);
      FUN_055e3254(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_get_Item__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03920518(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractor>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_RemoveAt__);
      FUN_055e35d8(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_set_Capacity__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03921580(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Index>_Clear__);
      FUN_055e3308(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_set_Item__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03920860(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x88);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>_get_Count__);
      FUN_055e368c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StylePropertyId>__ctor__,0)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_039218c8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x90);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ImageCreateContext>_RemoveAt__
                                );
      FUN_055e33bc(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StylePropertyId>_Add__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03920ba8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractor>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_get_Item__);
      FUN_055e3524(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StylePropertyId>_Clear__,0)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03921238(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>_get_Count__
                                );
      FUN_055e30ec(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StylePropertyId>_GetEnumerator__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_0391fe88(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractable>_AddRange__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Instruction>_set_Item__);
      FUN_055e31a0(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StylePropertyName>__ctor__,
                   0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_039201d0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IUpdateDriver>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_Add__
                                );
      FUN_055df4d4(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StylePropertyName>__ctor__,
                   0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_039198d0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IValueAnimationUpdate>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>_Insert__);
      FUN_055df90c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StylePropertyName>_Add__,0)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_0391ac80(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IUxmlFactory>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xc0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>_GetEnumerator__
                                );
      FUN_055df6f0(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StylePropertyName>_AddRange__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc0);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_0391a2a8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IValueAnimationUpdate>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 200);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDeviceDescription>__ctor__
                                );
      FUN_055dfa74(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StylePropertyName>_Clear__,
                   0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 200);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_0391b310(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IValueAnimationUpdate>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_get_Item__);
      FUN_055df7a4(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StylePropertyName>_GetEnumerator__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd0);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_0391a5f0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRActivateInteractable>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputActionMap>_ToArray__);
      FUN_055dfb28(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StylePropertyName>_get_Count__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd8);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_0391b658(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IValueAnimationUpdate>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>__ctor__);
      FUN_055df858(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StylePropertyName>_get_Item__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe0);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_0391a938(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IValueAnimationUpdate>_Remove__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>__ctor__)
      ;
      FUN_055df9c0(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StylePropertyValue>__ctor__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe8);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_0391afc8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IUxmlFactory>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>_Add__);
      FUN_055df588(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StylePropertyValue>_Add__,0
                  );
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf0);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03919c18(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IUxmlFactory>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedHandle>_GetEnumerator__
                                );
      FUN_055df63c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StylePropertyValue>_Clear__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf8);
      *plVar6 = lVar7;
      thunk_FUN_0333a630(plVar6,lVar7);
    }
    FUN_03919f60(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionGroup>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x100);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_Clear__
                                );
      FUN_055e48c0(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StylePropertyValue>_get_Count__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x100) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x100,lVar7);
    }
    FUN_039416d4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x108);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAxis>_get_Count__);
      FUN_055e4cf8(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StylePropertyValue>_get_Item__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x108) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x108,lVar7);
    }
    FUN_03942a84(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionGroup>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x110);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Image>_Add__)
      ;
      FUN_055e4adc(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSelector>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x110) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x110,lVar7);
    }
    FUN_039420ac(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_AddRange__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x118);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAxis>_Add__);
      FUN_055e4e60(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSelector>_Add__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x118) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x118,lVar7);
    }
    FUN_03943114(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionStrengthFilter>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x120);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>_Remove__);
      FUN_055e4b90(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSelector>_Clear__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x120) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x120,lVar7);
    }
    FUN_039423f4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x128);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputBinding>_ToArray__);
      FUN_055e4f14(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSelector>_ToArray__,0)
      ;
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x128) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x128,lVar7);
    }
    FUN_0394345c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionStrengthFilter>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x130);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAction>_ToArray__);
      FUN_055e4c44(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSelector>_get_Count__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x130) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x130,lVar7);
    }
    FUN_0394273c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_Contains__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x138);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Instruction>_get_Item__);
      FUN_055e4fc8(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSelectorPart>__ctor__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x138) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x138,lVar7);
    }
    FUN_039437a4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x140);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedData>_get_Item__);
      FUN_055e4dac(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSelectorPart>_Add__,0)
      ;
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x140) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x140,lVar7);
    }
    FUN_03942dcc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionGroup>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x148);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRSelectInteractor>_RemoveAt__
                                );
      FUN_055e4974(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSelectorPart>_Clear__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x148) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x148,lVar7);
    }
    FUN_03941a1c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractionGroup>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x150);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_GetEnumerator__
                                );
      FUN_055e4a28(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StyleSelectorPart>_RemoveAll__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x150) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x150,lVar7);
    }
    FUN_03941d64(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRActivateInteractable>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x158);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedData>_get_Count__)
      ;
      FUN_055dfbdc(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSelectorPart>_Sort__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x158) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x158,lVar7);
    }
    FUN_0391b9a0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x160);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputActionMap>_Add__);
      FUN_055e0230(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StyleSelectorPart>_ToArray__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x160) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x160,lVar7);
    }
    FUN_0391cd50(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x168);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_Clear__);
      FUN_055dfdf8(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StyleSelectorPart>_get_Count__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x168) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x168,lVar7);
    }
    FUN_0391c378(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x170);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputActionMap>_get_Item__)
      ;
      FUN_055e0398(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StyleSelectorPart>_get_Item__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x170) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x170,lVar7);
    }
    FUN_0391d3e0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x178);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputEventPtr>_Add__);
      FUN_055dff60(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSheet>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x178) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x178,lVar7);
    }
    FUN_0391c6c0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRGroupMember>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x180);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>__ctor__);
      FUN_055e044c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSheet>_Add__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x180) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x180,lVar7);
    }
    FUN_0391d728(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x188);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_AddRange__
                                );
      FUN_055e0014(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSheet>_Contains__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x188) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x188,lVar7);
    }
    FUN_0391ca08(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>_Remove__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 400);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>_get_Item__);
      FUN_055e02e4(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSheet>_GetEnumerator__
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 400) = lVar7;
      thunk_FUN_0333a630(lVar5 + 400,lVar7);
    }
    FUN_0391d098(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRActivateInteractable>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x198);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Index>_Remove__);
      FUN_055dfc90(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSheet>_RemoveRange__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x198) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x198,lVar7);
    }
    FUN_0391bce8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRActivateInteractable>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1a0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputEventPtr>_Sort__);
      FUN_055dfd44(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSheet>_get_Count__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1a0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1a0,lVar7);
    }
    FUN_0391c030(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1a8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>_Add__);
      FUN_055e507c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSheet>_get_Item__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1a8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1a8,lVar7);
    }
    FUN_03943aec(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_Add__);
      FUN_055e54b4(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSyntaxToken>__ctor__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1b0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1b0,lVar7);
    }
    FUN_03944e9c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectFilter>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Index>__ctor__);
      FUN_055e5298(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSyntaxToken>_Add__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1b8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1b8,lVar7);
    }
    FUN_039444c4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1c0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Index>_get_Count__);
      FUN_055e561c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleSyntaxToken>_Clear__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1c0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1c0,lVar7);
    }
    FUN_0394552c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectFilter>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1c8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRSelectInteractor>_get_Item__
                                );
      FUN_055e534c(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StyleSyntaxToken>_get_Count__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1c8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1c8,lVar7);
    }
    FUN_0394480c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1d0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputEventPtr>_get_Count__)
      ;
      FUN_055e56d0(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StyleSyntaxToken>_get_Item__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1d0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1d0,lVar7);
    }
    FUN_03945874(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectFilter>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1d8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Image>_Remove__);
      FUN_055e5400(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleValue>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1d8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1d8,lVar7);
    }
    FUN_03944b54(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1e0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputActionMap>_get_Count__
                                );
      FUN_055e5784(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleValue>_Add__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1e0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1e0,lVar7);
    }
    FUN_03945bbc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1e8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>__ctor__
                                );
      FUN_055e5568(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleValue>_RemoveAt__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1e8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1e8,lVar7);
    }
    FUN_039451e4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_Remove__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1f0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedHandle>__ctor__);
      FUN_055e5130(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleValue>_get_Count__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1f0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1f0,lVar7);
    }
    FUN_03943e34(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1f8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_GetEnumerator__
                                );
      FUN_055e51e4(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleValue>_get_Item__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1f8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x1f8,lVar7);
    }
    FUN_0394417c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRGroupMember>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x200);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Image>_GetEnumerator__);
      FUN_055e05b4(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleValue>_set_Item__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x200) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x200,lVar7);
    }
    FUN_0391da70(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>_Sort__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x208);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Index>__ctor__);
      FUN_055e09ec(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StyleValueManaged>_GetEnumerator__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x208) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x208,lVar7);
    }
    FUN_0391ee20(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x210);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstalledApplication>__ctor__
                                );
      FUN_055e07d0(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleVariable>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x210) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x210,lVar7);
    }
    FUN_0391e448(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x218);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAction>_Add__);
      FUN_055e0b54(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleVariable>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x218) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x218,lVar7);
    }
    FUN_0391f4b0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x220);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_Add__);
      FUN_055e0884(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleVariable>_Add__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x220) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x220,lVar7);
    }
    FUN_0391e790(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHoverFilter>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x228);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>_GetEnumerator__);
      FUN_055e0c08(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleVariable>_AddRange__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x228) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x228,lVar7);
    }
    FUN_0391f7f8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>_Remove__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x230);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAxis>__ctor__);
      FUN_055e0938(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleVariable>_Clear__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x230) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x230,lVar7);
    }
    FUN_0391ead8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x238);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>__ctor__)
      ;
      FUN_055e0aa0(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<StyleVariable>_get_Item__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x238) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x238,lVar7);
    }
    FUN_0391f168(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRGroupMember>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x240);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAction>_AddRange__);
      FUN_055e0668(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<SubMeshDescriptor>__ctor__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x240) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x240,lVar7);
    }
    FUN_0391ddb8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRGroupMember>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x248);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Image>_RemoveAt__);
      FUN_055e071c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<Subsystem>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x248) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x248,lVar7);
    }
    FUN_0391e100(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x250);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedMember>__ctor__);
      FUN_055e5838(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<Subsystem>_Clear__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x250) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x250,lVar7);
    }
    FUN_03945f04(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractor>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 600);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ImageCreateContext>__ctor__
                                );
      FUN_055e5d24(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<Subsystem>_Remove__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 600) = lVar7;
      thunk_FUN_0333a630(lVar5 + 600,lVar7);
    }
    FUN_039475fc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractor>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x260);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Instruction>_RemoveAt__);
      FUN_055e5dd8(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<SubsystemDescriptor>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x260) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x260,lVar7);
    }
    FUN_03947944(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractor>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x268);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_get_Count__);
      FUN_055e5e8c(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<SubsystemDescriptorWithProvider>__ctor__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x268) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x268,lVar7);
    }
    FUN_03947c8c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractor>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x270);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ImageCreateContext>_get_Item__
                                );
      FUN_055e5c70(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<SubsystemWithProvider>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x270) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x270,lVar7);
    }
    FUN_039472b4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x278);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedHandle>_Add__);
      FUN_055e58ec(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<SubsystemWithProvider>_Add__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x278) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x278,lVar7);
    }
    FUN_0394624c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_set_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x280);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAction>__ctor__);
      FUN_055e59a0(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<SubsystemWithProvider>_Clear__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x280) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x280,lVar7);
    }
    FUN_03946594(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x288);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ImportAddon>__ctor__);
      FUN_055e38b0(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<SubsystemWithProvider>_Remove__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x288) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x288,lVar7);
    }
    FUN_03921c10(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Remove__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x290);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedMember>_GetEnumerator__
                                );
      FUN_055e3ce8(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<SwipeViewItem>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x290) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x290,lVar7);
    }
    FUN_03922c78(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x298);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Instruction>_ToArray__);
      FUN_055e3acc(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<SwipeViewItem>_Add__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x298) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x298,lVar7);
    }
    FUN_039222a0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Sort__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2a0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>__ctor__)
      ;
      FUN_055e3fb8(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<SwipeViewItem>_get_Count__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2a0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2a0,lVar7);
    }
    FUN_03940cfc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Contains__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2a8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedData>__ctor__);
      FUN_055e3b80(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<SwipeViewItem>_get_Item__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2a8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2a8,lVar7);
    }
    FUN_039225e8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2b0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Index>_GetEnumerator__);
      FUN_055e406c(lVar7,uVar8,*(undefined8 *)Method_System_Collections_Generic_List<TEdge>__ctor__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2b0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2b0,lVar7);
    }
    FUN_03941044(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2b8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRSelectInteractor>_get_Count__
                                );
      FUN_055e3c34(lVar7,uVar8,*(undefined8 *)Method_System_Collections_Generic_List<TEdge>_Add__,0)
      ;
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2b8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2b8,lVar7);
    }
    FUN_03922930(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2c0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputBinding>_Add__);
      FUN_055e4120(lVar7,uVar8,*(undefined8 *)Method_System_Collections_Generic_List<TEdge>_Clear__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2c0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2c0,lVar7);
    }
    FUN_0394138c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_RemoveAt__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2c8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputActionMap>__ctor__);
      FUN_055e3e50(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TEdge>_get_Count__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2c8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2c8,lVar7);
    }
    Nova_InternalNamespace_0_InternalNamespace_5_InternalNamespace_6_InternalType_208__InternalMethod_1022<InternalType_418>
              (param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_AddRange__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2d0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Instruction>_Add__);
      FUN_055e3a18(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TEdge>_get_Item__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2d0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2d0,lVar7);
    }
    FUN_03921f58(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IPanel>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2d8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>_get_Item__)
      ;
      FUN_055de610(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_Character>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2d8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2d8,lVar7);
    }
    FUN_03915a78(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IRaycaster>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2e0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>_RemoveAt__)
      ;
      FUN_055de994(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_Character>_Add__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2e0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2e0,lVar7);
    }
    FUN_03916ae0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IRaycaster>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2e8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputBinding>__ctor__);
      FUN_055de778(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_Character>_Clear__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2e8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2e8,lVar7);
    }
    FUN_03916108(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IRaycaster>_Remove__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2f0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ImageCreateContext>_get_Count__
                                );
      FUN_055dea48(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_Character>_RemoveAt__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2f0) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2f0,lVar7);
    }
    FUN_03916e28(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IRaycaster>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2f8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXmlNode>__ctor__);
      FUN_055de82c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_Character>_get_Count__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2f8) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x2f8,lVar7);
    }
    FUN_03916450(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IRuntimePanelComponent>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x300);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputEventPtr>_get_Item__);
      FUN_055deafc(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_Character>_get_Item__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x300) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x300,lVar7);
    }
    FUN_03917170(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IRaycaster>_Contains__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x308);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputActionDefinition>__ctor__
                                );
      FUN_055de8e0(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_FontAsset>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x308) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x308,lVar7);
    }
    FUN_03916798(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IStateTransition>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x310);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Index>_Add__)
      ;
      FUN_055debb0(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_FontAsset>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x310) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x310,lVar7);
    }
    FUN_039174b8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IPanel>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x318);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ImportAddon>_Add__);
      FUN_055de6c4(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_FontAsset>_Add__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x318) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x318,lVar7);
    }
    FUN_03915dc0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<ITimelineEvaluateCallback>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 800);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InspectedMember>_Add__);
      FUN_055dec64(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<TMP_FontAsset>_Clear__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 800) = lVar7;
      thunk_FUN_0333a630(lVar5 + 800,lVar7);
    }
    FUN_03917800(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IUIControllerInterface>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x328);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputActionAsset>_GetEnumerator__
                                );
      FUN_055defe8(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_Contains__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x328) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x328,lVar7);
    }
    FUN_03918868(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<ITimelineEvaluateCallback>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x330);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRSelectInteractor>_set_Item__
                                );
      FUN_055dedcc(lVar7,uVar8,*(undefined8 *)Method_System_Collections_Generic_List<string>_Find__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x330) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x330,lVar7);
    }
    FUN_03917e90(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IUIElementsUtility>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x338);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputDevice>_Remove__);
      FUN_055df150(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_GetEnumerator__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x338) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x338,lVar7);
    }
    FUN_03918ef8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<ITimelineEvaluateCallback>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x340);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>_Add__);
      FUN_055dee80(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_IndexOf__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x340) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x340,lVar7);
    }
    FUN_039181d8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IUIElementsUtility>_Insert__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x348);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Instruction>__ctor__);
      FUN_055df204(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_Insert__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x348) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x348,lVar7);
    }
    FUN_03919240(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<ITimelineEvaluateCallback>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x350);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputEventPtr>__ctor__);
      FUN_055def34(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_Remove__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x350) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x350,lVar7);
    }
    FUN_03918520(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IUpdateDriver>_ConvertAll<Object>__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x358);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstanceHandle>_Contains__)
      ;
      FUN_055df2b8(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_RemoveAt__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x358) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x358,lVar7);
    }
    FUN_03919588(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x360);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InstalledApplication>_Add__
                                );
      FUN_055df09c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<string>_Reverse__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x360) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x360,lVar7);
    }
    FUN_03918bb0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<ITimelineEvaluateCallback>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x368);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List<InputAxis>_get_Item__);
      FUN_055ded18(lVar7,uVar8,*(undefined8 *)Method_System_Collections_Generic_List<string>_Sort__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x368) = lVar7;
      thunk_FUN_0333a630(lVar5 + 0x368,lVar7);
    }
    FUN_03917b48(param_1,lVar7,0,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


