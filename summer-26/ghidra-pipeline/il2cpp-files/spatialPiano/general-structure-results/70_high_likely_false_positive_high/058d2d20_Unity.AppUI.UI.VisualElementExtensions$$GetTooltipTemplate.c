/*
FUNCTION_NAME: Unity.AppUI.UI.VisualElementExtensions$$GetTooltipTemplate
ENTRY_POINT: 058d2d20
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Unity_AppUI_UI_VisualElementExtensions__GetTooltipTemplate(long param_1)

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
  long lVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x6f0));
  FUN_02f08768(Method_System_Collections_Generic_List<ClimbInteractable>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<ClimbInteractable>_RemoveAt__);
  FUN_02f08768(Method_System_Collections_Generic_List<ClimbInteractable>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<ClimbInteractable>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<CodeTypeReference>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<CodeTypeReference>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<CodeTypeReference>_GetEnumerator__);
  FUN_02f08768(PTR_DAT_067dd1c0);
  FUN_02f08768(Method_System_Collections_Generic_List<CodeTypeReference>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<Collider>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Collider>_Add__);
  FUN_02f08768(PTR_DAT_067db6f8);
  FUN_02f08768(Method_System_Collections_Generic_List<Collider>_Clear__);
  FUN_02f08768(PTR_DAT_067dd1e8);
  FUN_02f08768(Method_System_Collections_Generic_List<Collider>_ForEach__);
  FUN_02f08768(PTR_DAT_067dd1f0);
  FUN_02f08768(Method_System_Collections_Generic_List<Collider>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<Collider>_RemoveAll__);
  FUN_02f08768(Method_System_Collections_Generic_List<Collider>_RemoveAt__);
  FUN_02f08768(Method_System_Collections_Generic_List<Collider>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<Collider>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color>_set_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color32>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color32>_AddRange__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color32>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<Color32>_get_Item__);
  FUN_02f08768(PTR_DAT_067dc698);
  FUN_02f08768(Method_System_Collections_Generic_List<Color32>_set_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>__ctor__);
  FUN_02f08768(PTR_DAT_067dc6b8);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_AddRange__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_FindAll__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_ForEach__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_IndexOf__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_Insert__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_Remove__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_RemoveAt__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_Sort__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<Column>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<CommandList>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<CommandList>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<CommandList>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<CommandList>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<CommandList>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<CommonTouch>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<CommonTouch>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<CommonTouch>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<CommonTouch>_GetEnumerator__);
  FUN_02f08768(PTR_DAT_067dafc8);
  FUN_02f08768(Method_System_Collections_Generic_List<CommonTouch>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<Component>_RemoveAll__);
  FUN_02f08768(PTR_DAT_067dd240);
  FUN_02f08768(Method_System_Collections_Generic_List<Component>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<Component>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<ComponentItem>__ctor__);
  FUN_02f08768(PTR_DAT_067dd250);
  FUN_02f08768(Method_System_Collections_Generic_List<ComponentItem>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<ComponentItem>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<ComponentItem>_GetEnumerator__);
  FUN_02f08768(PTR_DAT_067db370);
  FUN_02f08768(Method_System_Collections_Generic_List<CompositionLayer>_AddRange__);
  FUN_02f08768(Method_System_Collections_Generic_List<CompositionLayer>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<CompositionLayerExtension>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<CompositionLayerExtension>_Add__);
  FUN_02f08768(PTR_DAT_067d5688);
  FUN_02f08768(Method_System_Collections_Generic_List<CompositionLayerExtension>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<CompositionLayerExtension>_Contains__);
  FUN_02f08768(Method_System_Collections_Generic_List<CompositionLayerExtension>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<CompositionLayerExtension>_Remove__);
  FUN_02f08768(Method_System_Collections_Generic_List<ComputedTransitionProperty>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<ComputedTransitionProperty>_Add__);
  FUN_02f08768(PTR_DAT_067dd268);
  FUN_02f08768(PTR_DAT_067dd278);
  FUN_02f08768(Method_System_Collections_Generic_List<ComputedTransitionProperty>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<ComputedTransitionProperty>_CopyTo__);
  FUN_02f08768(Method_System_Collections_Generic_List<ComputedTransitionProperty>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<ConstantBufferBase>__ctor__);
  FUN_02f08768(PTR_DAT_067dd280);
  FUN_02f08768(Method_System_Collections_Generic_List<ConstantBufferBase>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<ConstantBufferBase>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<ConstantBufferBase>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<Contraction>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Contraction>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<Contraction>_Sort__);
  FUN_02f08768(PTR_DAT_067dd298);
  FUN_02f08768(Method_System_Collections_Generic_List<Contraction>_ToArray__);
  FUN_02f08768(Method_System_Collections_Generic_List<Controller>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Controller>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<Controller>_Contains__);
  FUN_02f08768(Method_System_Collections_Generic_List<Controller>_GetEnumerator__);
  FUN_02f08768(PTR_DAT_067dc178);
  FUN_02f08768(PTR_DAT_067dd2a0);
  FUN_02f08768(PTR_DAT_067db3f8);
  FUN_02f08768(Method_System_Collections_Generic_List<Controller>_IndexOf__);
  FUN_02f08768(Method_System_Collections_Generic_List<Controller>_Insert__);
  FUN_02f08768(Method_System_Collections_Generic_List<Controller>_Remove__);
  FUN_02f08768(Method_System_Collections_Generic_List<Controller>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<Controller>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<ControllerInputMode>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<ControllerInputMode>_get_Count__);
  FUN_02f08768(PTR_DAT_067dd2a8);
  FUN_02f08768(PTR_DAT_067dd2b0);
  FUN_02f08768(Method_System_Collections_Generic_List<ControllerInputMode>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<CowatchViewer>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<CowatchViewer>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<CustomAttributeData>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<CustomAttributeData>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<CustomAttributeData>_ToArray__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataColumn>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataColumn>_Add__);
  FUN_02f08768(PTR_DAT_067dd2c8);
  FUN_02f08768(Method_System_Collections_Generic_List<DataColumn>_Contains__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataColumn>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataColumn>_Remove__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataColumn>_ToArray__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataColumn>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataColumn>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataMember>__ctor__);
  FUN_02f08768(PTR_DAT_067dd2d0);
  FUN_02f08768(Method_System_Collections_Generic_List<DataMember>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataMember>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataMember>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataMember>_Sort__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataMember>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataMember>_get_Item__);
  FUN_02f08768(PTR_DAT_067dd2d8);
  FUN_02f08768(PTR_DAT_067dd2e0);
  FUN_02f08768(Method_System_Collections_Generic_List<DataRelation>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataRelation>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataRelation>_GetEnumerator__);
  FUN_02f08768(PTR_DAT_067dd2e8);
  FUN_02f08768(Method_System_Collections_Generic_List<DataRelation>_ToArray__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataRelation>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataRow>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataRow>_Contains__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataRow>_GetEnumerator__);
  FUN_02f08768(PTR_DAT_067dd300);
  FUN_02f08768(Method_System_Collections_Generic_List<DataRow>_InsertRange__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataRow>_get_Count__);
  FUN_02f08768(PTR_DAT_067dd308);
  FUN_02f08768(Method_System_Collections_Generic_List<DataTable>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataTable>__ctor__);
  FUN_02f08768(PTR_DAT_067dd310);
  FUN_02f08768(Method_System_Collections_Generic_List<DataTable>_Add__);
  FUN_02f08768(PTR_DAT_067cb550);
  FUN_02f08768(Method_System_Collections_Generic_List<DataTable>_Contains__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataTable>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataTable>_ToArray__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataTable>_get_Count__);
  FUN_02f08768(PTR_DAT_067dd320);
  FUN_02f08768(Method_System_Collections_Generic_List<DataTable>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataView>__ctor__);
  FUN_02f08768(PTR_DAT_067daf20);
  FUN_02f08768(Method_System_Collections_Generic_List<DataViewListener>__ctor__);
  FUN_02f08768(PTR_DAT_067dd328);
  FUN_02f08768(Method_System_Collections_Generic_List<DataViewListener>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataViewListener>_Remove__);
  FUN_02f08768(PTR_DAT_067dd330);
  FUN_02f08768(Method_System_Collections_Generic_List<DataViewListener>_RemoveAt__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataViewListener>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<DataViewListener>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugData>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugData>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugData>_Clear__);
  FUN_02f08768(PTR_DAT_067dd338);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugData>_GetEnumerator__);
  FUN_02f08768(PTR_DAT_067dd348);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugGizmoType>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugGizmoType>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugInfo>__ctor__);
  FUN_02f08768(PTR_DAT_067d5668);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugInfo>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugInfo>_ToArray__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugInspector>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugInspector>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugInspector>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugInspector>_Remove__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugPanel>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugPanel>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugRenderSetup>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugRenderSetup>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugRenderSetup>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugRenderSetup>_GetEnumerator__);
  FUN_02f08768(PTR_DAT_067db400);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_GetEnumerator__)
  ;
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_set_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerPanel>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerPanel>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerPanel>_Clear__);
  FUN_02f08768(PTR_DAT_067dd370);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerPanel>_ForEach__);
  FUN_02f08768(PTR_DAT_067dd378);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerPanel>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerPanel>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerValue>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerValue>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerValue>_Clear__);
  FUN_02f08768(PTR_DAT_067dd388);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerValue>_FindIndex__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerValue>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerValue>_RemoveAt__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerValue>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerValue>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerWidget>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerWidget>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerWidget>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIHandlerWidget>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIPrefabBundle>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DebugUIPrefabBundle>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCachedChunk>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCachedChunk>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCachedChunk>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCachedChunk>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCachedChunk>_RemoveRange__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCachedChunk>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCachedChunk>_set_Item__);
  FUN_02f08768(PTR_DAT_067dd3a0);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCulledChunk>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCulledChunk>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCulledChunk>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCulledChunk>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCulledChunk>_RemoveRange__);
  FUN_02f08768(PTR_DAT_067daf30);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCulledChunk>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalCulledChunk>_set_Item__);
  FUN_02f08768(PTR_DAT_067dd3b8);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalDrawCallChunk>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalDrawCallChunk>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalDrawCallChunk>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalDrawCallChunk>_GetEnumerator__);
  FUN_02f08768(PTR_DAT_067dd3c8);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalDrawCallChunk>_RemoveRange__);
  FUN_02f08768(PTR_DAT_067dd3d0);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalDrawCallChunk>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalDrawCallChunk>_set_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalEntityChunk>__ctor__);
  FUN_02f08768(PTR_DAT_067dd3e0);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalEntityChunk>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalEntityChunk>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalEntityChunk>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalEntityChunk>_RemoveRange__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalEntityChunk>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<DecalEntityChunk>_set_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<Destination>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Destination>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<double>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<double>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<double>_Reverse__);
  FUN_02f08768(Method_System_Collections_Generic_List<double>_ToArray__);
  FUN_02f08768(Method_System_Collections_Generic_List<double>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<DropdownMenuItem>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<DropdownMenuItem>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<DropdownMenuItem>_FindIndex__);
  FUN_02f08768(Method_System_Collections_Generic_List<DropdownMenuItem>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<DropdownMenuItem>_Insert__);
  FUN_02f08768(Method_System_Collections_Generic_List<DropdownMenuItem>_RemoveAt__);
  FUN_02f08768(Method_System_Collections_Generic_List<DropdownMenuItem>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<DropdownMenuItem>_get_Item__);
  FUN_02f08768(PTR_DAT_067dd3f8);
  FUN_02f08768(Method_System_Collections_Generic_List<EasingFunction>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<EasingFunction>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<EasingFunction>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<EasingFunction>_AddRange__);
  FUN_02f08768(Method_System_Collections_Generic_List<EasingFunction>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<EasingFunction>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<EasingFunction>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<EmulatedCompositionLayer>__ctor__);
  FUN_02f08768(PTR_DAT_067dd400);
  FUN_02f08768(Method_System_Collections_Generic_List<EmulatedCompositionLayer>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<EmulatedCompositionLayer>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<EmulatedCompositionLayer>_GetEnumerator__);
  FUN_02f08768(PTR_DAT_067dd408);
  FUN_02f08768(Method_System_Collections_Generic_List<EmulatedCompositionLayer>_Sort__);
  FUN_02f08768(Method_System_Collections_Generic_List<EmulatedCompositionLayer>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<EmulatedLayerData>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<EmulatedLayerData>_Add__);
  FUN_02f08768(PTR_DAT_067dd410);
  FUN_02f08768(Method_System_Collections_Generic_List<EmulatedLayerData>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<EmulatedLayerData>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<Entry>__ctor__);
  FUN_02f08768(PTR_DAT_067cbf00);
  FUN_02f08768(Method_System_Collections_Generic_List<Entry>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<Entry>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<Entry>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<Entry>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<EntryProcessor>__ctor__);
  FUN_02f08768(PTR_DAT_067dd418);
  FUN_02f08768(Method_System_Collections_Generic_List<EntryProcessor>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<EntryProcessor>_get_Count__);
  FUN_02f08768(PTR_DAT_067dd420);
  FUN_02f08768(Method_System_Collections_Generic_List<EntryProcessor>_get_Item__);
  FUN_02f08768(PTR_DAT_067dd430);
  FUN_02f08768(Method_System_Collections_Generic_List<Enum>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Enum>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<Enum>_ToArray__);
  FUN_02f08768(Method_System_Collections_Generic_List<Event>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Event>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<Event>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<Event>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<Event>_Sort__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventCallbackFunctorBase>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventCallbackFunctorBase>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventDescriptor>__ctor__);
  FUN_02f08768(PTR_DAT_067dd468);
  FUN_02f08768(Method_System_Collections_Generic_List<EventDescriptor>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventDescriptor>_set_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventSystem>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventSystem>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventSystem>_IndexOf__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventSystem>_Insert__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventSystem>_Remove__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventSystem>_RemoveAt__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventSystem>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<EventSystem>_get_Item__);
  FUN_02f08768(PTR_DAT_067dd480);
  FUN_02f08768(Method_System_Collections_Generic_List<Exception>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Exception>__ctor__);
  FUN_02f08768(PTR_DAT_067dd490);
  FUN_02f08768(PTR_DAT_067dce18);
  FUN_02f08768(Method_System_Collections_Generic_List<Exception>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<ExceptionDispatchInfo>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<ExceptionHandler>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<ExceptionHandler>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<ExceptionHandler>_ToArray__);
  FUN_02f08768(PTR_DAT_067dd4a0);
  FUN_02f08768(Method_System_Collections_Generic_List<Expression>__ctor__);
  FUN_02f08768(PTR_DAT_067dd4b0);
  FUN_02f08768(Method_System_Collections_Generic_List<Expression>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<Expression>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<Expression>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<Expression>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<Expression>_Insert__);
  FUN_02f08768(Method_System_Collections_Generic_List<Expression>_ToArray__);
  FUN_02f08768(Method_System_Collections_Generic_List<ExtensionDataMember>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<FeedbackActionSO>__ctor__);
  FUN_02f08768(PTR_DAT_067db408);
  FUN_02f08768(Method_System_Collections_Generic_List<FeedbackActionSO>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<FieldInfo>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<FieldInfo>_Add__);
  FUN_02f08768(PTR_DAT_067dd4c0);
  FUN_02f08768(PTR_DAT_067db410);
  FUN_02f08768(Method_System_Collections_Generic_List<FieldInfo>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<FieldInfo>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<FieldInfo>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<FieldInfo>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<FingerFeatureStateThreshold>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<FontAsset>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<FontAsset>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<FontAsset>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<FontAsset>_ForEach__);
  FUN_02f08768(Method_System_Collections_Generic_List<FontAsset>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<FontAsset>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<FontAsset>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<FrameTimeSample>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<FrameTimeSample>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<FrameTimeSample>_Clear__);
  FUN_02f08768(Method_System_Collections_Generic_List<FrameTimeSample>_RemoveAt__);
  FUN_02f08768(Method_System_Collections_Generic_List<FrameTimeSample>_get_Count__);
  *(undefined1 *)(unaff_x20 + 0x42e) = 1;
  lVar11 = thunk_FUN_02f45270(*unaff_x21);
  FUN_0492c438(lVar11,0x112,*unaff_x19);
  puVar10 = Method_System_Collections_Generic_List<Expression>_Insert__;
  puVar9 = Method_System_Collections_Generic_List<EventSystem>_get_Count__;
  puVar8 = Method_System_Collections_Generic_List<DecalDrawCallChunk>__ctor__;
  puVar7 = Method_System_Collections_Generic_List<DecalCachedChunk>_set_Item__;
  puVar6 = Method_System_Collections_Generic_List<ConstantBufferBase>__ctor__;
  puVar5 = Method_System_Collections_Generic_List<Column>_GetEnumerator__;
  puVar4 = Method_System_Collections_Generic_List<Collider>_RemoveAll__;
  puVar3 = Method_System_Collections_Generic_List<Camera>_get_Count__;
  puVar2 = PTR_DAT_067dafb8;
  puVar1 = PTR_DAT_067d7690;
  if (lVar11 != 0) {
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataMember>_Sort__,
                 *(undefined8 *)PTR_DAT_067dd420,*(undefined8 *)PTR_DAT_067d7690);
    FUN_0492cd38(lVar11,*(undefined8 *)puVar7,*(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)puVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)puVar6,
                 *(undefined8 *)Method_System_Collections_Generic_List<char>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataTable>_get_Item__,
                 *(undefined8 *)PTR_DAT_067dd2d8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<FieldInfo>__ctor__,
                 *(undefined8 *)PTR_DAT_067db410,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<EventSystem>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BaseInputModule>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<ByRefUpdater>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataColumn>_Remove__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<double>__ctor__,
                 *(undefined8 *)PTR_DAT_067db3d8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CompositionLayerExtension>_Contains__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<DataRelation>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<FeedbackActionSO>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BaseRaycaster>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugData>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Binding>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ComputedTransitionProperty>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataMember>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Destination>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Expression>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BillingPlan>__ctor__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<AudioAffordanceThemeData>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataRow>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BillingPlan>_Add__,
                 *(undefined8 *)PTR_DAT_067db408,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>_AddRange__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DropdownMenuItem>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_get_Item__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<ClimbInteractable>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>_Remove__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Color32>_AddRange__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DataColumn>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<FieldInfo>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DataTable>_GetEnumerator__,
                 *(undefined8 *)PTR_DAT_067dd300,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EasingFunction>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ClimbInteractable>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataRow>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Column>_Insert__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<FieldInfo>_Clear__,
                 *(undefined8 *)PTR_DAT_067db6f8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BoneCapsule>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Camera>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataMember>_get_Item__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<ClimbInteractable>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalDrawCallChunk>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUIPrefabBundle>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalEntityChunk>_GetEnumerator__,
                 *(undefined8 *)PTR_DAT_067dafc8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BsonToken>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugData>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugInspector>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd378,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseInputModule>_RemoveAt__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Attribute>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DataViewListener>_Remove__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ConstantBufferBase>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CodeTypeReference>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BranchLabel>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugInspector>_Remove__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BezierControlPoint>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Character>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DecalCulledChunk>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<ComponentItem>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BaseInvokableCall>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EntryProcessor>_get_Item__,
                 *(undefined8 *)PTR_DAT_067dd308,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalCachedChunk>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUIHandlerValue>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Claim>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd3a0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CompositionLayerExtension>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BlockedUser>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CompositionLayerExtension>_Clear__,
                 *(undefined8 *)Method_System_Collections_Generic_List<FrameTimeSample>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Collider>_get_Item__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DebugUIHandlerWidget>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<bool>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugData>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DropdownMenuItem>__ctor__,
                 *(undefined8 *)PTR_DAT_067d5668,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CodeTypeReference>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Color>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<AssetBundle>__ctor__,
                 *(undefined8 *)PTR_DAT_067daf30,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BranchLabel>_GetEnumerator__,
                 *(undefined8 *)PTR_DAT_067d5688,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<CommonTouch>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DecalCulledChunk>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>_Sort__,
                 *(undefined8 *)PTR_DAT_067dd310,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DebugInfo>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataMember>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DebugPanel>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<CanvasGroup>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>_set_Item__,
                 *(undefined8 *)PTR_DAT_067dd330,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Camera>_RemoveAll__,
                 *(undefined8 *)Method_System_Collections_Generic_List<CustomAttributeData>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EmulatedCompositionLayer>_Clear__,
                 *(undefined8 *)PTR_DAT_067dd2a0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Bounds>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>_IndexOf__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BaseRaycaster>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalDrawCallChunk>_RemoveRange__,
                 *(undefined8 *)PTR_DAT_067dd128,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ExceptionHandler>_ToArray__,
                 *(undefined8 *)PTR_DAT_067db370,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Contraction>_ToArray__
                 ,*(undefined8 *)PTR_DAT_067dd250,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseRuntimePanel>_Add__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ControllerInputMode>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DecalEntityChunk>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<EntryProcessor>_Add__,
                 *(undefined8 *)PTR_DAT_067dd3e0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<FrameTimeSample>_Add__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_List<EmulatedCompositionLayer>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<double>_Add__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalCulledChunk>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EmulatedCompositionLayer>_Sort__,
                 *(undefined8 *)Method_System_Collections_Generic_List<CommandList>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Camera>_Add__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<CompositionLayerExtension>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataTable>_ToArray__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EventCallbackFunctorBase>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Canvas>_get_Item__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<CodeTypeReference>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIPrefabBundle>_GetEnumerator__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<Collider>_ForEach__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataMember>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Column>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalDrawCallChunk>_set_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<EasingFunction>_AddRange__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Controller>_get_Item__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<BsonProperty>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CommandList>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUIHandlerValue>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Event>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Entry>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerPanel>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataRow>_InsertRange__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EmulatedCompositionLayer>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataRelation>_ToArray__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerWidget>_get_Item__,
                 *(undefined8 *)PTR_DAT_067db3e8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<double>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BlockedUser>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_GetEnumerator__
                 ,*(undefined8 *)PTR_DAT_067dd400,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerPanel>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Color>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>_FindAll__,
                 *(undefined8 *)PTR_DAT_067dd240,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<byte>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataViewListener>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EventSystem>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<FieldInfo>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Color>_Add__,
                 *(undefined8 *)PTR_DAT_067dd2e8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<EventSystem>_IndexOf__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_List<DebugUIHandlerValue>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<FontAsset>_Clear__,
                 *(undefined8 *)PTR_DAT_067dd140,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ClimbInteractable>_RemoveAt__,
                 *(undefined8 *)Method_System_Collections_Generic_List<byte>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Button>_IndexOf__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalCachedChunk>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Controller>_IndexOf__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ExceptionHandler>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<ChallengeEntry>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<FrameTimeSample>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Contraction>_Sort__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Entry>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Camera>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DropdownMenuItem>_FindIndex__
                 ,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ExtensionDataMember>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BaseRuntimePanel>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataColumn>_ToArray__,
                 *(undefined8 *)PTR_DAT_067dd178,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataRelation>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<AssetBundle>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Character>_Clear__,
                 *(undefined8 *)PTR_DAT_067dd1f0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CanvasGroup>_GetEnumerator__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DropdownMenuItem>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)PTR_DAT_067dc6b8,*(undefined8 *)PTR_DAT_067dd418,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Challenge>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<AstNode>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerWidget>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Controller>_Insert__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CompositionLayerExtension>_GetEnumerator__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<CanvasGroup>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Camera>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Controller>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DataViewListener>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<EmulatedLayerData>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<FingerFeatureStateThreshold>__ctor__
                 ,*(undefined8 *)PTR_DAT_067dd1c0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalEntityChunk>_RemoveRange__,
                 *(undefined8 *)Method_System_Collections_Generic_List<char>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EventDescriptor>_set_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Camera>_ToArray__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<Character>_GetEnumerator__,
                 *(undefined8 *)PTR_DAT_067dd2e0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Claim>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ConstantBufferBase>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Exception>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Button>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CommonTouch>_get_Count__,
                 *(undefined8 *)PTR_DAT_067dc178,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<FeedbackActionSO>__ctor__,
                 *(undefined8 *)PTR_DAT_067db3f8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataTable>_get_Count__
                 ,*(undefined8 *)PTR_DAT_067dd4b0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalCulledChunk>_set_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Camera>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseRuntimePanel>_Sort__,
                 *(undefined8 *)PTR_DAT_067dd150,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalDrawCallChunk>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ClimbInteractable>_get_Item__
                 ,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Item__
                 ,*(undefined8 *)PTR_DAT_067dd3c8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>_ForEach__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataRelation>_GetEnumerator__
                 ,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Controller>_Contains__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_List<DebugUIHandlerValue>_FindIndex__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ComputedTransitionProperty>_get_Count__
                 ,*(undefined8 *)PTR_DAT_067cb550,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerValue>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Bounds>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugRenderSetup>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Color>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Component>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataColumn>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)PTR_DAT_067dd030,*(undefined8 *)PTR_DAT_067cbf00,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseInvokableCall>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataColumn>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerValue>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BaseRuntimePanel>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<CommonTouch>_Clear__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DebugRenderSetup>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BsonProperty>_GetEnumerator__,
                 *(undefined8 *)PTR_DAT_067dd130,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Color32>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Controller>_Remove__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalEntityChunk>_set_Item__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EmulatedLayerData>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BsonToken>_Add__,
                 *(undefined8 *)PTR_DAT_067d5678,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Button>_get_Count__,
                 *(undefined8 *)PTR_DAT_067daf20,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseInputModule>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Character>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BaseRaycaster>_Add__,
                 *(undefined8 *)PTR_DAT_067dd490,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<AutoMoveTowardsTarget>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugData>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<bool>_Add__,
                 *(undefined8 *)PTR_DAT_067dd430,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Collider>_RemoveAt__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Canvas>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<AutoMoveTowardsTarget>_Remove__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Column>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ComponentItem>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataViewListener>_RemoveAt__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EventDescriptor>_get_Item__,
                 *(undefined8 *)PTR_DAT_067dd2c8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DropdownMenuItem>_get_Count__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<CompositionLayerExtension>_Remove__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DropdownMenuItem>_Insert__,
                 *(undefined8 *)PTR_DAT_067dd370,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DebugInspector>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Color>_set_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<EventSystem>_Remove__,
                 *(undefined8 *)PTR_DAT_067d5680,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ComputedTransitionProperty>_Add__,
                 *(undefined8 *)PTR_DAT_067db400,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Color>_get_Count__,
                 *(undefined8 *)PTR_DAT_067daf48,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<CowatchViewer>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<double>_Reverse__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<Controller>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Color32>_set_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<FontAsset>_GetEnumerator__,
                 *(undefined8 *)PTR_DAT_067dd4c0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<CommandList>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<AstNode>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ApplicationInvite>__ctor__,
                 *(undefined8 *)PTR_DAT_067d5500,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<AssetBundle>_GetEnumerator__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<BaseRuntimePanel>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<ButtonControl>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Column>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Destination>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BsonToken>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EasingFunction>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd328,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Expression>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ByRefUpdater>_ToArray__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DropdownMenuItem>_get_Item__,
                 *(undefined8 *)PTR_DAT_067dd1e8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Button>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<AutoMoveTowardsTarget>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseInvokableCall>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<FontAsset>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataTable>__ctor__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DebugUIHandlerPanel>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Character>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<CommandList>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<bool>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BaseInvokableCall>_AddRange__
                 ,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerValue>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<EasingFunction>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BoneCapsule>_get_Item__,
                 *(undefined8 *)PTR_DAT_067dd4a0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BezierControlPoint>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<FrameTimeSample>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<Button>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ExceptionHandler>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Enum>_Add__,
                 *(undefined8 *)PTR_DAT_067dd480,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ByRefUpdater>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUIHandlerWidget>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Collider>_Clear__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DecalCulledChunk>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BoneCapsule>__ctor__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ComputedTransitionProperty>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)PTR_DAT_067dce18,*(undefined8 *)PTR_DAT_067dd298,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalEntityChunk>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Camera>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalDrawCallChunk>_Clear__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Exception>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<ComponentItem>__ctor__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<FontAsset>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<AudioAffordanceThemeData>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ControllerInputMode>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalEntityChunk>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugInfo>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Expression>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd3f8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Camera>_Contains__,
                 *(undefined8 *)PTR_DAT_067db3f0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataRelation>_Add__,
                 *(undefined8 *)PTR_DAT_067dd408,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Attribute>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Exception>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd120,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BoneWeight>_ToArray__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BezierControlPoint>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Color32>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataRow>_Contains__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BoneCapsule>_AsReadOnly__,
                 *(undefined8 *)PTR_DAT_067dd278,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BoneWeight>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ComponentItem>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<byte>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Collider>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BranchLabel>__ctor__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_set_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Event>_GetEnumerator__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_List<BaseInvokableCall>_RemoveAll__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<AssetDetails>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd0f0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BsonProperty>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BaseRaycaster>_Remove__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_get_Count__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<ConstantBufferBase>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BoneWeight>_Add__,
                 *(undefined8 *)PTR_DAT_067dd3b8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>_RemoveAt__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ButtonControl>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<AstNode>_set_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Collider>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EntryProcessor>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Claim>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CommandList>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<EventDescriptor>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DropdownMenuItem>_RemoveAt__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataTable>_Contains__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CompositionLayer>_Clear__,
                 *(undefined8 *)Method_System_Collections_Generic_List<byte>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ExceptionDispatchInfo>__ctor__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<CodeTypeReference>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugInspector>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Collider>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Component>_get_Count__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<Controller>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ControllerInputMode>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<EmulatedLayerData>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BoneCapsule>_GetEnumerator__,
                 *(undefined8 *)PTR_DAT_067dd1b8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Expression>_ToArray__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EmulatedCompositionLayer>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<FontAsset>_ForEach__,
                 *(undefined8 *)PTR_DAT_067dd2a8,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Camera>_Sort__,
                 *(undefined8 *)Method_System_Collections_Generic_List<AstNode>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Challenge>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BaseInvokableCall>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BaseRaycaster>__ctor__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<EventSystem>_RemoveAt__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Expression>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<CommonTouch>_Add__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ComputedTransitionProperty>_CopyTo__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<FieldInfo>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Color>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugRenderSetup>__ctor__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<AutoMoveTowardsTarget>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Character>_get_Item__,
                 *(undefined8 *)PTR_DAT_067dd2b0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataColumn>_get_Item__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_List<CustomAttributeData>_ToArray__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<AssetDetails>_Add__,
                 *(undefined8 *)PTR_DAT_067dd3d0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<AutoMoveTowardsTarget>_get_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Attribute>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<bool>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd280,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<bool>_set_Item__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Collider>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugUIHandlerPanel>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugGizmoType>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<ClimbInteractable>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Entry>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<BoneCapsule>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<FontAsset>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Button>_Remove__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<BezierControlPoint>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EntryProcessor>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Component>_RemoveAll__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DataViewListener>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ChallengeEntry>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DataMember>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<char>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Event>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseInputModule>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Contraction>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Expression>_Clear__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUIHandlerPanel>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<FieldInfo>_Add__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EventCallbackFunctorBase>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataMember>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BaseInvokableCall>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Color32>_Clear__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ButtonControl>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Attribute>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataColumn>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<ByRefUpdater>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Character>_RemoveAt__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseRuntimePanel>_get_Count__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<BaseInputModule>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EasingFunction>_GetEnumerator__,
                 *(undefined8 *)Method_System_Collections_Generic_List<CompositionLayer>_AddRange__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseRaycaster>_Contains__,
                 *(undefined8 *)Method_System_Collections_Generic_List<AstNode>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseInvokableCall>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<byte>_ToArray__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)PTR_DAT_067dc698,*(undefined8 *)PTR_DAT_067dd348,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataTable>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugInfo>_ToArray__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseRuntimePanel>_Clear__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DecalDrawCallChunk>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Binding>_Add__,
                 *(undefined8 *)PTR_DAT_067dd148,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DebugRenderSetup>_Clear__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataColumn>_Contains__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EasingFunction>_Clear__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DecalCachedChunk>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<CanvasGroup>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Entry>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<BaseInvokableCall>_Add__,
                 *(undefined8 *)PTR_DAT_067dd320,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Enum>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<BezierControlPoint>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Event>_Clear__,
                 *(undefined8 *)PTR_DAT_067dd388,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<CowatchViewer>__ctor__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<DecalCachedChunk>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Contraction>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd268,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<AstNode>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<AssetBundle>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DebugGizmoType>_Add__,
                 *(undefined8 *)PTR_DAT_067dd170,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<AsyncGPUReadbackRequest>_Add__,
                 *(undefined8 *)PTR_DAT_067db3e0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<DataTable>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<double>_ToArray__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Attribute>_CopyTo__,
                 *(undefined8 *)PTR_DAT_067db6f0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<FontAsset>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<CommonTouch>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DataViewListener>_get_Count__,
                 *(undefined8 *)Method_System_Collections_Generic_List<EventSystem>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Claim>_Add__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<BezierControlPoint>_get_Item__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalCachedChunk>_RemoveRange__,
                 *(undefined8 *)PTR_DAT_067dd338,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Entry>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DataView>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalCulledChunk>_RemoveRange__,
                 *(undefined8 *)Method_System_Collections_Generic_List<ApplicationInvite>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Binding>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd410,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalCachedChunk>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Attribute>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<CustomAttributeData>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd468,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Column>_Clear__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DebugUIHandlerPanel>_ForEach__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Controller>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<EasingFunction>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DecalEntityChunk>__ctor__,
                 *(undefined8 *)PTR_DAT_067dd2d0,*(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<FrameTimeSample>_RemoveAt__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Enum>_ToArray__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EmulatedLayerData>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugPanel>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Event>_Sort__,
                 *(undefined8 *)Method_System_Collections_Generic_List<bool>_GetEnumerator__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<EmulatedCompositionLayer>_Add__,
                 *(undefined8 *)Method_System_Collections_Generic_List<EventSystem>_Insert__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<DataRow>_GetEnumerator__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DebugUIHandlerValue>_RemoveAt__,
                 *(undefined8 *)puVar1);
    FUN_0492cd38(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Bounds>__ctor__,
                 *(undefined8 *)Method_System_Collections_Generic_List<DecalCulledChunk>__ctor__,
                 *(undefined8 *)puVar1);
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


