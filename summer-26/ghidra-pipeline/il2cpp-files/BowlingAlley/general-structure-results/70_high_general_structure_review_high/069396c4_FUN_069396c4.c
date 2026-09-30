/*
FUNCTION_NAME: FUN_069396c4
ENTRY_POINT: 069396c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_12;ui_or_gameplay_sink_hits_20;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_069396c4(long param_1)

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
  
  puVar5 = Method_System_Collections_Generic_List<XRBaseController>__ctor__;
  puVar4 = Method_System_Collections_Generic_List<XRAnchorSubsystemDescriptor>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<X509Extension>_GetEnumerator__;
  puVar2 = PTR_DAT_072bd3f0;
  puVar1 = PTR_DAT_07279e78;
  if ((DAT_076e19ef & 1) == 0) {
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
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseController>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseController>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseGrabTransformer>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseGrabTransformer>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseGrabTransformer>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseInteractable>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseInteractable>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseInteractable>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseInteractable>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseInteractable>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseInteractable>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseInteractor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseInteractor>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseInteractor>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseInteractor>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRCameraSubsystemDescriptor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRControllerState>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRControllerState>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRControllerState>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRControllerState>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRControllerState>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRDisplaySubsystem>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRDisplaySubsystem>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRDisplaySubsystem>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRDisplaySubsystem>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRDisplaySubsystem>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRDisplaySubsystemDescriptor>__ctor__)
    ;
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_get_Count__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<XREnvironmentProbeSubsystemDescriptor>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRFaceSubsystemDescriptor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRFeatureDescriptor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRFeatureDescriptor>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRFeatureDescriptor>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRFeatureDescriptor>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRFingerShapeCondition>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRFingerShapeCondition>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRFingerShapeCondition>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRHandSubsystem>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRHandSubsystem>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRHandSubsystem>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRHandSubsystem>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRHandSubsystemDescriptor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRHandSubsystemDescriptor>_get_Count__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRHandSubsystemDescriptor>_get_Item__)
    ;
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<XRImageTrackingSubsystemDescriptor>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRInputSubsystem>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRInputSubsystem>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRInputSubsystem>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRInputSubsystem>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRInputSubsystemDescriptor>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRInteractionManager>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRInteractionManager>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRInteractionManager>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRInteractionManager>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRLoader>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRLoader>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRLoader>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRLoader>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRLoader>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRLoader>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRLoader>_Insert__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRLoader>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRLoader>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRNodeState>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRNodeState>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRNodeState>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRNodeState>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRNodeState>_get_Item__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<XROcclusionSubsystemDescriptor>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRPlaneSubsystemDescriptor>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<XRPointCloudSubsystemDescriptor>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__)
    ;
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceImage>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceImage>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceImage>_IndexOf__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceImage>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceImage>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceObject>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceObject>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceObject>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceObject>_IndexOf__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceObject>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceObject>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceObjectEntry>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRReferenceObjectEntry>_Add__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<XRReferenceObjectEntry>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRSessionSubsystemDescriptor>__ctor__)
    ;
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRTargetEvaluator>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRTargetEvaluator>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRTargetEvaluator>_AddRange__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRTargetEvaluator>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRTargetEvaluator>_GetEnumerator__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRTargetEvaluator>_IndexOf__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRTargetEvaluator>_Insert__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRTargetEvaluator>_RemoveAt__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRTargetEvaluator>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRTargetEvaluator>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRView>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRView>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRView>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRView>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRView>_get_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRView>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XmlQualifiedName>_Add__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XmlQualifiedName>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XmlQualifiedName>_Contains__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRBaseController>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<XRAnchorSubsystemDescriptor>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_072bd3f0);
    thunk_FUN_032e1da0(PTR_DAT_07279e78);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<X509Extension>_GetEnumerator__);
    DAT_076e19ef = 1;
  }
  FUN_068d37c0(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar4,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2,0);
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
    FUN_055ddb34(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRBaseController>_get_Count__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar7 = lVar8;
    thunk_FUN_0333a630(plVar7,lVar8);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRControllerState>_get_Item__
                 ,0);
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
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Image>__ctor__)
    ;
    FUN_055ddd50(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRFeatureDescriptor>__ctor__,
                 0);
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
                  Method_System_Collections_Generic_List<XRHandSubsystemDescriptor>__ctor__,0);
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
                  Method_System_Collections_Generic_List<XRInteractionManager>_Remove__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>__ctor__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceImage>_IndexOf__,0
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
                  Method_System_Collections_Generic_List<XRReferenceObjectEntry>_GetEnumerator__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_get_Item__
                 ,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XmlQualifiedName>_Contains__,
                 0);
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
                                Method_System_Collections_Generic_List<ImportAddon>_GetEnumerator__)
    ;
    FUN_055ddc9c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRBaseInteractable>_get_Count__,0);
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
    FUN_055e3038(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRBaseInteractor>__ctor__,0);
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
    FUN_055e3470(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRBaseInteractor>_Add__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRBaseInteractor>_Remove__,0)
    ;
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
    FUN_055e35d8(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRBaseInteractor>_get_Count__
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
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Index>_Clear__)
    ;
    FUN_055e3308(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRCameraSubsystemDescriptor>__ctor__,0);
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
    FUN_055e368c(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRControllerState>__ctor__,0)
    ;
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
    FUN_055e33bc(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRControllerState>_Add__,0);
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
    FUN_055e3524(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRControllerState>_Clear__,0)
    ;
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
                                Method_System_Collections_Generic_List<InstanceHandle>_get_Count__);
    FUN_055e30ec(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRControllerState>_get_Count__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRDisplaySubsystem>__ctor__,0
                );
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRDisplaySubsystem>__ctor__,0
                );
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
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRDisplaySubsystem>_GetEnumerator__,0);
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
    FUN_055df6f0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRDisplaySubsystem>_get_Count__,0);
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
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRDisplaySubsystem>_get_Item__,0);
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
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRDisplaySubsystemDescriptor>__ctor__,0);
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
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_get_Count__,0
                );
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
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_get_Item__,0)
    ;
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
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>__ctor__);
    FUN_055df9c0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XREnvironmentProbeSubsystemDescriptor>__ctor__
                 ,0);
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
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<IXmlNode>_Add__
                              );
    FUN_055df588(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRFaceSubsystemDescriptor>__ctor__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRFeatureDescriptor>_Add__,0)
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
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRFeatureDescriptor>_get_Count__,0);
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
    FUN_055e4cf8(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRFeatureDescriptor>_get_Item__,0);
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
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Image>_Add__);
    FUN_055e4adc(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRFingerShapeCondition>__ctor__,0);
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
                  Method_System_Collections_Generic_List<XRFingerShapeCondition>_get_Count__,0);
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
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRFingerShapeCondition>_get_Item__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRHandSubsystem>__ctor__,0);
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
                  Method_System_Collections_Generic_List<XRHandSubsystem>_GetEnumerator__,0);
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRHandSubsystem>_get_Count__,
                 0);
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
                 *(undefined8 *)Method_System_Collections_Generic_List<XRHandSubsystem>_get_Item__,0
                );
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
                  Method_System_Collections_Generic_List<XRHandSubsystemDescriptor>_get_Count__,0);
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
                  Method_System_Collections_Generic_List<XRHandSubsystemDescriptor>_get_Item__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x150) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x150,lVar8);
  }
  FUN_03941d64(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRActivateInteractable>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x158);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedData>_get_Count__);
    FUN_055dfbdc(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRImageTrackingSubsystemDescriptor>__ctor__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x158) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x158,lVar8);
  }
  FUN_0391b9a0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x160);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    FUN_06e3cba0(*(undefined8 *)(lVar6 + 0xb8));
    return;
  }
  FUN_0391cd50(param_1,lVar8,0,
               *(undefined8 *)
                Method_System_Collections_Generic_List<IXRGrabTransformer>_GetEnumerator__);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x168);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_Clear__);
    FUN_055dfdf8(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRInputSubsystem>_GetEnumerator__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x168) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x168,lVar8);
  }
  FUN_0391c378(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x170);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputActionMap>_get_Item__);
    FUN_055e0398(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRInputSubsystem>_get_Count__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x170) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x170,lVar8);
  }
  FUN_0391d3e0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x178);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputEventPtr>_Add__);
    FUN_055dff60(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRInputSubsystem>_get_Item__,
                 0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x178) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x178,lVar8);
  }
  FUN_0391c6c0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRGroupMember>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x180);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXmlNode>__ctor__);
    FUN_055e044c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRInputSubsystemDescriptor>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x180) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x180,lVar8);
  }
  FUN_0391d728(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x188);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_AddRange__
                              );
    FUN_055e0014(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRInteractionManager>__ctor__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x188) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x188,lVar8);
  }
  FUN_0391ca08(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>_Remove__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 400);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXmlNode>_get_Item__);
    FUN_055e02e4(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRInteractionManager>_Add__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 400) = lVar8;
    thunk_FUN_0333a630(lVar6 + 400,lVar8);
  }
  FUN_0391d098(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRActivateInteractable>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x198);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Index>_Remove__
                              );
    FUN_055dfc90(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRInteractionManager>_get_Count__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x198) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x198,lVar8);
  }
  FUN_0391bce8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRActivateInteractable>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1a0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputEventPtr>_Sort__);
    FUN_055dfd44(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<XRLoader>__ctor__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1a0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1a0,lVar8);
  }
  FUN_0391c030(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1a8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>_Add__);
    FUN_055e507c(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<XRLoader>__ctor__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1a8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1a8,lVar8);
  }
  FUN_03943aec(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1b0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_Add__);
    FUN_055e54b4(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Add__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1b0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1b0,lVar8);
  }
  FUN_03944e9c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectFilter>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1b8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Index>__ctor__)
    ;
    FUN_055e5298(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Clear__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1b8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1b8,lVar8);
  }
  FUN_039444c4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1c0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Index>_get_Count__);
    FUN_055e561c(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Contains__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1c0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1c0,lVar8);
  }
  FUN_0394552c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectFilter>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1c8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRSelectInteractor>_get_Item__
                              );
    FUN_055e534c(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_GetEnumerator__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1c8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1c8,lVar8);
  }
  FUN_0394480c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1d0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputEventPtr>_get_Count__);
    FUN_055e56d0(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Insert__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1d0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1d0,lVar8);
  }
  FUN_03945874(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectFilter>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1d8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Image>_Remove__
                              );
    FUN_055e5400(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Remove__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1d8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1d8,lVar8);
  }
  FUN_03944b54(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1e0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputActionMap>_get_Count__);
    FUN_055e5784(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_get_Count__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1e0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1e0,lVar8);
  }
  FUN_03945bbc(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1e8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>__ctor__
                              );
    FUN_055e5568(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_Clear__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1e8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1e8,lVar8);
  }
  FUN_039451e4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_Remove__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1f0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedHandle>__ctor__);
    FUN_055e5130(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_GetEnumerator__,
                 0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1f0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1f0,lVar8);
  }
  FUN_03943e34(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractor>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1f8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_GetEnumerator__)
    ;
    FUN_055e51e4(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_get_Count__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1f8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x1f8,lVar8);
  }
  FUN_0394417c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRGroupMember>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x200);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Image>_GetEnumerator__);
    FUN_055e05b4(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_get_Item__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x200) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x200,lVar8);
  }
  FUN_0391da70(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>_Sort__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x208);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Index>__ctor__)
    ;
    FUN_055e09ec(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XROcclusionSubsystemDescriptor>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x208) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x208,lVar8);
  }
  FUN_0391ee20(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x210);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InstalledApplication>__ctor__
                              );
    FUN_055e07d0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRPlaneSubsystemDescriptor>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x210) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x210,lVar8);
  }
  FUN_0391e448(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x218);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputAction>_Add__);
    FUN_055e0b54(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRPointCloudSubsystemDescriptor>__ctor__,0)
    ;
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x218) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x218,lVar8);
  }
  FUN_0391f4b0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x220);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_Add__);
    FUN_055e0884(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x220) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x220,lVar8);
  }
  FUN_0391e790(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRHoverFilter>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x228);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXmlNode>_GetEnumerator__);
    FUN_055e0c08(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceImage>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x228) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x228,lVar8);
  }
  FUN_0391f7f8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>_Remove__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x230);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputAxis>__ctor__);
    FUN_055e0938(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRReferenceImage>_GetEnumerator__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x230) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x230,lVar8);
  }
  FUN_0391ead8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRHandProcessor>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x238);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>__ctor__);
    FUN_055e0aa0(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceImage>_get_Count__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x238) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x238,lVar8);
  }
  FUN_0391f168(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRGroupMember>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x240);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputAction>_AddRange__);
    FUN_055e0668(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceImage>_get_Item__,
                 0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x240) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x240,lVar8);
  }
  FUN_0391ddb8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRGroupMember>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x248);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Image>_RemoveAt__);
    FUN_055e071c(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObject>__ctor__,0)
    ;
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x248) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x248,lVar8);
  }
  FUN_0391e100(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x250);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedMember>__ctor__);
    FUN_055e5838(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObject>_Add__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x250) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x250,lVar8);
  }
  FUN_03945f04(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractor>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 600);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<ImageCreateContext>__ctor__);
    FUN_055e5d24(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRReferenceObject>_GetEnumerator__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 600) = lVar8;
    thunk_FUN_0333a630(lVar6 + 600,lVar8);
  }
  FUN_039475fc(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractor>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x260);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Instruction>_RemoveAt__);
    FUN_055e5dd8(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObject>_IndexOf__,
                 0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x260) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x260,lVar8);
  }
  FUN_03947944(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractor>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x268);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_055e5e8c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRReferenceObject>_get_Count__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x268) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x268,lVar8);
  }
  FUN_03947c8c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractor>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x270);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<ImageCreateContext>_get_Item__
                              );
    FUN_055e5c70(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObject>_get_Item__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x270) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x270,lVar8);
  }
  FUN_039472b4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x278);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedHandle>_Add__);
    FUN_055e58ec(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRReferenceObjectEntry>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x278) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x278,lVar8);
  }
  FUN_0394624c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRSelectInteractable>_set_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x280);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputAction>__ctor__);
    FUN_055e59a0(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObjectEntry>_Add__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x280) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x280,lVar8);
  }
  FUN_03946594(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x288);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<ImportAddon>__ctor__);
    FUN_055e38b0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRSessionSubsystemDescriptor>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x288) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x288,lVar8);
  }
  FUN_03921c10(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Remove__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x290);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedMember>_GetEnumerator__
                              );
    FUN_055e3ce8(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>__ctor__,0)
    ;
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x290) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x290,lVar8);
  }
  FUN_03922c78(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x298);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Instruction>_ToArray__);
    FUN_055e3acc(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_Add__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x298) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x298,lVar8);
  }
  FUN_039222a0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Sort__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2a0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>__ctor__);
    FUN_055e3fb8(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_AddRange__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2a0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2a0,lVar8);
  }
  FUN_03940cfc(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Contains__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2a8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedData>__ctor__);
    FUN_055e3b80(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_Clear__,0)
    ;
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2a8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2a8,lVar8);
  }
  FUN_039225e8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2b0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Index>_GetEnumerator__);
    FUN_055e406c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRTargetEvaluator>_GetEnumerator__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2b0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2b0,lVar8);
  }
  FUN_03941044(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2b8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRSelectInteractor>_get_Count__
                              );
    FUN_055e3c34(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_IndexOf__,
                 0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2b8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2b8,lVar8);
  }
  FUN_03922930(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2c0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputBinding>_Add__);
    FUN_055e4120(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_Insert__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2c0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2c0,lVar8);
  }
  FUN_0394138c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_RemoveAt__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2c8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputActionMap>__ctor__);
    FUN_055e3e50(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_RemoveAt__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2c8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2c8,lVar8);
  }
  Nova_InternalNamespace_0_InternalNamespace_5_InternalNamespace_6_InternalType_208__InternalMethod_1022<InternalType_418>
            (param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_AddRange__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2d0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Instruction>_Add__);
    FUN_055e3a18(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRTargetEvaluator>_get_Count__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2d0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2d0,lVar8);
  }
  FUN_03921f58(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IPanel>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2d8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InstanceHandle>_get_Item__);
    FUN_055de610(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<XRView>__ctor__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2d8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2d8,lVar8);
  }
  FUN_03915a78(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IRaycaster>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2e0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InstanceHandle>_RemoveAt__);
    FUN_055de994(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<XRView>_Add__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2e0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2e0,lVar8);
  }
  FUN_03916ae0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IRaycaster>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2e8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputBinding>__ctor__);
    FUN_055de778(lVar8,uVar9,*(undefined8 *)Method_System_Collections_Generic_List<XRView>_Clear__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2e8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2e8,lVar8);
  }
  FUN_03916108(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IRaycaster>_Remove__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2f0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<ImageCreateContext>_get_Count__
                              );
    FUN_055dea48(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRView>_get_Count__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2f0) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2f0,lVar8);
  }
  FUN_03916e28(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IRaycaster>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2f8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXmlNode>__ctor__);
    FUN_055de82c(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRView>_get_Item__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2f8) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x2f8,lVar8);
  }
  FUN_03916450(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IRuntimePanelComponent>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x300);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputEventPtr>_get_Item__);
    FUN_055deafc(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRView>_set_Item__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x300) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x300,lVar8);
  }
  FUN_03917170(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<IRaycaster>_Contains__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x308);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputActionDefinition>__ctor__
                              );
    FUN_055de8e0(lVar8,uVar9,
                 *(undefined8 *)Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x308) = lVar8;
    thunk_FUN_0333a630(lVar6 + 0x308,lVar8);
  }
  FUN_03916798(param_1,lVar8,0,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06e3d158();
  return;
}


