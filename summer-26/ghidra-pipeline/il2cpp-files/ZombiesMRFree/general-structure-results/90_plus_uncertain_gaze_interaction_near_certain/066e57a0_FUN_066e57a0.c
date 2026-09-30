/*
FUNCTION_NAME: FUN_066e57a0
ENTRY_POINT: 066e57a0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_14
*/


void FUN_066e57a0(void)

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
  
  puVar10 = System_Predicate<Rigidbody>_TypeInfo;
  puVar9 = System_Predicate<RTSUnit>_TypeInfo;
  puVar8 = System_Predicate<PlayerLoopSystem>_TypeInfo;
  puVar7 = System_Predicate<Object>_TypeInfo;
  puVar6 = System_Predicate<object>_TypeInfo;
  puVar5 = System_Predicate<OVRSpaceUser>_TypeInfo;
  puVar4 = System_Predicate<OVRAnchor>_TypeInfo;
  puVar3 = System_Predicate<Node>_TypeInfo;
  puVar2 = PTR_DAT_06f741d8;
  puVar1 = PTR_DAT_06f72958;
  if ((DAT_073a1165 & 1) == 0) {
    FUN_02fe925c(System_Predicate<Node>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f72958);
    FUN_02fe925c(System_Predicate<ScriptableObject>_TypeInfo);
    FUN_02fe925c(System_Predicate<ScriptableRenderPass>_TypeInfo);
    FUN_02fe925c(System_Predicate<SettingRequirement>_TypeInfo);
    FUN_02fe925c(System_Predicate<string>_TypeInfo);
    FUN_02fe925c(System_Predicate<StyleSelectorPart>_TypeInfo);
    FUN_02fe925c(System_Predicate<Task>_TypeInfo);
    FUN_02fe925c(System_Predicate<Terrain>_TypeInfo);
    FUN_02fe925c(System_Predicate<Toggle>_TypeInfo);
    FUN_02fe925c(System_Predicate<Transform>_TypeInfo);
    FUN_02fe925c(System_Predicate<Type>_TypeInfo);
    FUN_02fe925c(System_Predicate<VisualElement>_TypeInfo);
    FUN_02fe925c(System_Predicate<Volume>_TypeInfo);
    FUN_02fe925c(System_Predicate<VolumeComponent>_TypeInfo);
    FUN_02fe925c(System_Predicate<Data_AnchorData>_TypeInfo);
    FUN_02fe925c(System_Predicate<RTSUnit>_TypeInfo);
    FUN_02fe925c(System_Predicate<DebugUI_Panel>_TypeInfo);
    FUN_02fe925c(System_Predicate<DebugUI_ValueTuple>_TypeInfo);
    FUN_02fe925c(System_Predicate<DialogueTree_ActorParameter>_TypeInfo);
    FUN_02fe925c(System_Predicate<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo);
    FUN_02fe925c(System_Predicate<HID_HIDElementDescriptor>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06fb7468);
    FUN_02fe925c(System_Predicate<InputEventTrace_DeviceInfo>_TypeInfo);
    FUN_02fe925c(System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo);
    FUN_02fe925c(System_Predicate<MetaXRAcousticMaterialMapping_Pair>_TypeInfo);
    FUN_02fe925c(System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo);
    FUN_02fe925c(System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo);
    FUN_02fe925c(System_Predicate<PageScroll_Page>_TypeInfo);
    FUN_02fe925c(System_Predicate<ProbeBrickIndex_VoxelMeta>_TypeInfo);
    FUN_02fe925c(System_Predicate<OVRAnchor>_TypeInfo);
    FUN_02fe925c(System_Predicate<PlayerLoopSystem>_TypeInfo);
    FUN_02fe925c(System_Predicate<SkinGoreRenderer_TempTex>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f741d8);
    FUN_02fe925c(System_Predicate<TMP_MaterialManager_MaskingMaterial>_TypeInfo);
    FUN_02fe925c(System_Predicate<Tween_TweenCurve>_TypeInfo);
    FUN_02fe925c(System_Predicate<VisualTreeAsset_SlotUsageEntry>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<object[]>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<bool>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<byte>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<char>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<DateTime>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<Decimal>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<double>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f81dd8);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<Exception>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<short>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<int>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<long>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<sbyte>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<float>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<string>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<ushort>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<uint>_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_PrimitiveParameterExpression<ulong>_TypeInfo);
    FUN_02fe925c(
                UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_TypeInfo
                );
    FUN_02fe925c(Pathfinding_Sync_Promise<JobBuildNodes_BuildNodeTilesOutput>_TypeInfo);
    FUN_02fe925c(Unity_Properties_PropertyBag<SerializedArrayView>_TypeInfo);
    FUN_02fe925c(Unity_Properties_PropertyBag<SerializedObjectView>_TypeInfo);
    FUN_02fe925c(
                Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>_TypeInfo
                );
    FUN_02fe925c(System_Collections_Generic_Queue<List<Light>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<ValueTuple<Mesh,_Material>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<ValueTuple<MeshRenderer,_Material>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<AchievementPopupData>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<Action>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<bool>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<EventBase>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<GameObject>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<GraphNode>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<GraphUpdateObject>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<IDataNode>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<IEnumerator>_TypeInfo);
    FUN_02fe925c(System_Predicate<OVRSpaceUser>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<int>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<LocomotionEvent>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<MRUKRoom>_TypeInfo);
    FUN_02fe925c(System_Predicate<object>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<Path>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<string>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<Transform>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<TriangleMeshNode>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<Type>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<fsVersionedType>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<BVHRecorder_SkelTree>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<EventDispatcher_EventRecord>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<MeshCombineJobManager_MeshCombineJob>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Queue<MeshCombineJobManager_NewMeshObject>_TypeInfo);
    FUN_02fe925c(
                System_Collections_Generic_Queue<OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData>_TypeInfo
                );
    FUN_02fe925c(Oculus_Interaction_RandomSampleConsensus<Vector3>_TypeInfo);
    FUN_02fe925c(Unity_Collections_NativeArray_ReadOnly<byte>_TypeInfo);
    FUN_02fe925c(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputActionMap>_TypeInfo);
    FUN_02fe925c(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_TypeInfo);
    FUN_02fe925c(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo);
    FUN_02fe925c(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_TypeInfo);
    FUN_02fe925c(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo);
    FUN_02fe925c(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NamedValue>_TypeInfo);
    FUN_02fe925c(UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo);
    FUN_02fe925c(
                UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                );
    FUN_02fe925c(System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>_TypeInfo);
    FUN_02fe925c(
                System_Collections_ObjectModel_ReadOnlyCollection<CustomAttributeTypedArgument>_TypeInfo
                );
    FUN_02fe925c(System_Predicate<Rigidbody>_TypeInfo);
    FUN_02fe925c(System_Collections_ObjectModel_ReadOnlyCollection<Exception>_TypeInfo);
    FUN_02fe925c(System_Predicate<Object>_TypeInfo);
    FUN_02fe925c(System_Collections_ObjectModel_ReadOnlyCollection<ExceptionDispatchInfo>_TypeInfo);
    FUN_02fe925c(System_Collections_ObjectModel_ReadOnlyCollection<Expression>_TypeInfo);
    FUN_02fe925c(System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_TypeInfo);
    FUN_02fe925c(Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<MemberInfo>_TypeInfo)
    ;
    DAT_073a1165 = 1;
  }
  uVar11 = FUN_068cca24(*(undefined8 *)puVar2,0);
  **(undefined4 **)(*(long *)puVar3 + 0xb8) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)puVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)puVar5,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)puVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)puVar1,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<ushort>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<int>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<Type>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<char>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x2c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<Toggle>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)Unity_Collections_NativeArray_ReadOnly<byte>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x34) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<float>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<byte>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x3c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<GraphUpdateObject>_TypeInfo,
                        0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Predicate<TMP_MaterialManager_MaskingMaterial>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x44) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)puVar9,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)puVar9,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x4c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)puVar10,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)puVar10,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x54) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x5c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<Action>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<SkinGoreRenderer_TempTex>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 100) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<fsVersionedType>_TypeInfo,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         UnityEngine_InputSystem_Utilities_ReadOnlyArray<NamedValue>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x6c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_Generic_Queue<MeshCombineJobManager_MeshCombineJob>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<VisualTreeAsset_SlotUsageEntry>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x74) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<DebugUI_ValueTuple>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x78) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x7c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<Volume>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<sbyte>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x84) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<IEnumerator>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x88) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x8c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x90) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<Decimal>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x94) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<ProbeBrickIndex_VoxelMeta>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x98) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<object[]>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x9c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<SettingRequirement>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xa0) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_Generic_Queue<ValueTuple<MeshRenderer,_Material>>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xa4) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<DateTime>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xa8) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_Generic_Queue<MeshCombineJobManager_NewMeshObject>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xac) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<ScriptableObject>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb0) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_ObjectModel_ReadOnlyCollection<Expression>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb4) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<TriangleMeshNode>_TypeInfo,0
                       );
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb8) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xbc) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<Transform>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc0) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<GameObject>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc4) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_ObjectModel_ReadOnlyCollection<CustomAttributeTypedArgument>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 200) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<StyleSelectorPart>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xcc) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<InputEventTrace_DeviceInfo>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xd0) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<uint>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xd4) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<EventBase>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xd8) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xdc) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<VolumeComponent>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xe0) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_Generic_Queue<AchievementPopupData>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xe4) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<Tween_TweenCurve>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xe8) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<string>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xec) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<ScriptableRenderPass>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xf0) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_ObjectModel_ReadOnlyCollection<Exception>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xf4) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<PageScroll_Page>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xf8) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<long>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xfc) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<bool>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x100) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<MRUKRoom>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x104) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<bool>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x108) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<IDataNode>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)Oculus_Interaction_RandomSampleConsensus<Vector3>_TypeInfo,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x110) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<DialogueTree_ActorParameter>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x114) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<string>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x118) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<int>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x11c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<Terrain>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x120) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x124) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         UnityEngine_Rendering_Universal_LibTessDotNet_PriorityQueue<MeshUtils_Vertex>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x128) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)Unity_Properties_PropertyBag<SerializedObjectView>_TypeInfo,0
                       );
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 300) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x130) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<ulong>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x134) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_Generic_Queue<OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x138) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<short>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x13c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_Generic_Queue<EventDispatcher_EventRecord>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x140) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<Task>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x144) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<GraphNode>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x148) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_Generic_Queue<ValueTuple<Mesh,_Material>>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<MetaXRAcousticMaterialMapping_Pair>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x150) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<List<Light>>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x154) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputActionMap>_TypeInfo,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x158) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<LocomotionEvent>_TypeInfo,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x15c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)PTR_DAT_06f81dd8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x160) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<Data_AnchorData>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x164) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_TypeInfo,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x168) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<HID_HIDElementDescriptor>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x16c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<Transform>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x170) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x174) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)Unity_Properties_PropertyBag<SerializedArrayView>_TypeInfo,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x178) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         Pathfinding_Sync_Promise<JobBuildNodes_BuildNodeTilesOutput>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x17c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<DebugUI_Panel>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x180) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<MemberInfo>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x184) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<Type>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x188) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)PTR_DAT_06fb7468,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 400) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<Exception>_TypeInfo,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x194) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Collections_Generic_Queue<Path>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x198) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<VisualElement>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x19c) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Linq_Expressions_PrimitiveParameterExpression<double>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1a0) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_ObjectModel_ReadOnlyCollection<ExceptionDispatchInfo>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1a4) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)
                         System_Collections_Generic_Queue<BVHRecorder_SkelTree>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1a8) = uVar11;
  uVar11 = FUN_068cca24(*(undefined8 *)System_Predicate<string>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1ac) = uVar11;
  return;
}


