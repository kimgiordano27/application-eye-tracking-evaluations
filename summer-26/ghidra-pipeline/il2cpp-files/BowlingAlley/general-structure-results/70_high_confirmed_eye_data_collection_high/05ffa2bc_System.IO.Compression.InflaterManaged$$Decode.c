/*
FUNCTION_NAME: System.IO.Compression.InflaterManaged$$Decode
ENTRY_POINT: 05ffa2bc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;keyword_support;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_21
*/


void System_IO_Compression_InflaterManaged__Decode(void)

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
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *unaff_x19;
  undefined8 uVar15;
  undefined8 *unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(System_Action<IDebugDisplaySettingsData>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<IGraphElement>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<IHandGrabState>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<IInteractor>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<IInteractorView>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<IXRInteractable>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<IXRInteractor>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<InputDevice>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<InputUpdateType>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<InstanceHandle>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<int>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<IntPtr>_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_07292210);
  thunk_FUN_032e1da0(System_Action<InteractableRegisteredEventArgs>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<InteractableStateChangeArgs>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<InteractableUnregisteredEventArgs>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<InteractionGroupRegisteredEventArgs>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<InteractionGroupUnregisteredEventArgs>_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_0728fca0);
  thunk_FUN_032e1da0(System_Action<InteractorRegisteredEventArgs>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<InteractorStateChangeArgs>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<InteractorUnregisteredEventArgs>_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_07292240);
  thunk_FUN_032e1da0(System_Action<LayoutRebuilder>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<LocomotionEvent>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<LocomotionSystem>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<LogEntry>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<MagnificationGesture>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<MeshGenerationContext>_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_07291df0);
  thunk_FUN_032e1da0(PTR_DAT_07292320);
  thunk_FUN_032e1da0(System_Action<MeshGenerationResult>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<MeshHandle>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<NativeInputUpdateType>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<OVRCameraRig>_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_0728fca8);
  thunk_FUN_032e1da0(System_Action<OVRRuntimeSettings>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<object>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<Object>_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_0728fcb0);
  thunk_FUN_032e1da0(System_Action<PanGesture>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<PinchGesture>_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_07291688);
  thunk_FUN_032e1da0(PTR_DAT_072922b8);
  thunk_FUN_032e1da0(System_Action<PlatformInfo>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<PointableCanvasEventArgs>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<PointerDownEvent>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<PointerEvent>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<PointerEventData>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<PointerMoveEvent>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<PointerUpEvent>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<PokeInteractor>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<PokeStateData>_TypeInfo);
  thunk_FUN_032e1da0(System_Action<Pose>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xd) = 1;
  uVar11 = thunk_FUN_032a56a0(*unaff_x20);
  FUN_04ec2788(uVar11,*unaff_x19);
  **(undefined8 **)(*unaff_x24 + 0xb8) = uVar11;
  thunk_FUN_0333a630(*(undefined8 *)(*unaff_x24 + 0xb8),uVar11);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076d3ca9 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07289360);
    DAT_076d3ca9 = '\x01';
  }
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_XRGazeAssistance_GetAssistedVelocityInternal_000006C1_PostfixBurstDelegate_var
  ;
  lVar12 = *unaff_x21;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar12 = *unaff_x21;
  }
  uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
  uVar11 = thunk_FUN_032a56a0(*unaff_x20);
  FUN_04ec27f8(uVar11,uVar15,*(undefined8 *)puVar1);
  puVar13 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
  *puVar13 = uVar11;
  thunk_FUN_0333a630(puVar13,uVar11);
  if (DAT_076d3ca9 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07289360);
    DAT_076d3ca9 = '\x01';
  }
  puVar4 = PTR_DAT_07289368;
  puVar1 = PTR_DAT_072799c0;
  lVar12 = *unaff_x21;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar12 = *unaff_x21;
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
  lVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_050f818c(lVar12,uVar11,*(undefined8 *)puVar4);
  puVar10 = System_Action<PointerMoveEvent>_TypeInfo;
  puVar9 = System_Action<PointerEventData>_TypeInfo;
  puVar8 = System_Action<int>_TypeInfo;
  puVar7 = System_Action<InstanceHandle>_TypeInfo;
  puVar6 = System_Action<Draggable>_TypeInfo;
  puVar3 = System_Action<ARPointCloudChangedEventArgs>_TypeInfo;
  puVar5 = System_Action<IEnumerable<int>>_TypeInfo;
  puVar2 = System_Action<HashSet<int>>_TypeInfo;
  puVar4 = 
  UnityEngine_XR_ARFoundation_ARTrackableManager<XRPointCloudSubsystem,_XRPointCloudSubsystemDescriptor,_XRPointCloudSubsystem_Provider,_XRPointCloud,_ARPointCloud>_TypeInfo
  ;
  puVar1 = PTR_DAT_072799d0;
  if (lVar12 != 0) {
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07292190,*(undefined8 *)PTR_DAT_072922f8,
                 *(undefined8 *)PTR_DAT_072799d0);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ColumnsDataType>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_00000185_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<LocomotionSystem>_TypeInfo,
                 *(undefined8 *)System_Action<LocomotionEvent>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<AutoMoveTowardsTarget>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000E6F_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<PanGesture>_TypeInfo,
                 *(undefined8 *)System_Action<PokeInteractor>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<PointerDownEvent>_TypeInfo,
                 *(undefined8 *)System_Action<ARAnchorsChangedEventArgs>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<MeshGenerationResult>_TypeInfo,
                 *(undefined8 *)System_Action<List<XRTargetEvaluator>>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<GameObject>_TypeInfo,
                 *(undefined8 *)System_Action<byte[]>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_00000126_PostfixBurstDelegate_var
                 ,*(undefined8 *)System_Action<IDebugDisplaySettingsData>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<PlatformInfo>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_ARFoundation_ARTrackableManager<XRParticipantSubsystem,_XRParticipantSubsystemDescriptor,_XRParticipantSubsystem_Provider,_XRParticipant,_ARParticipant>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ChangeEvent<bool>>_TypeInfo,
                 *(undefined8 *)System_Action<Task<DependencyStatus>>_TypeInfo,*(undefined8 *)puVar1
                );
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<PointerEvent>_TypeInfo,
                 *(undefined8 *)<>f__AnonymousType0<string,_Dictionary<string,_object>[]>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<Camera>_TypeInfo,
                 *(undefined8 *)System_Action<InputDevice>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<FocusEnterEventArgs>_TypeInfo,
                 *(undefined8 *)System_Action<LayoutRebuilder>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ARCameraFrameEventArgs>_TypeInfo,
                 *(undefined8 *)puVar5,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)puVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)puVar8,*(undefined8 *)puVar10,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)puVar7,*(undefined8 *)puVar6,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)puVar3,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual_ComputeNewRenderPoints_0000038A_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARCore_ARCoreXRDepthSubsystem_ARCoreProvider_ExtractConfidenceValuesJob_var
                 ,*(undefined8 *)
                   UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_0000007F_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_EaseAttachBurst_0000029A_PostfixBurstDelegate_var
                 ,*(undefined8 *)System_Action<object>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<IXRInteractor>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_ARFoundation_ARTrackableManager<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider,_XRTrackedImage,_ARTrackedImage>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<IOperation<AvatarContext>>_TypeInfo,
                 *(undefined8 *)PTR_DAT_07292310,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARCore_ARCoreXRDepthSubsystem_ARCoreProvider_CopyIdentifiersJob_var
                 ,*(undefined8 *)System_Action<IXRInteractable>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_GetHandAxisDirection_00000125_PostfixBurstDelegate_var
                 ,*(undefined8 *)System_Action<bool>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<InteractorRegisteredEventArgs>_TypeInfo,
                 *(undefined8 *)
                  Unity_Collections_AllocatorManager_StackAllocator_Try_000000A2_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ARFacesChangedEventArgs>_TypeInfo,
                 *(undefined8 *)GLTFast_AccessorData<int>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07291fe0,*(undefined8 *)PTR_DAT_07292320,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07291688,
                 *(undefined8 *)System_Action<AssetSelectionUI>_TypeInfo,*(undefined8 *)puVar1);
    puVar5 = 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_00000D09_PostfixBurstDelegate_var
    ;
    FUN_050f8b10(lVar12,*(undefined8 *)puVar2,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_StepSmoothingBurst_0000029B_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000D2B_PostfixBurstDelegate_var
                 ,*(undefined8 *)
                   UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000D2C_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07291ac8,*(undefined8 *)PTR_DAT_0728fa20,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ColocationFailedReason>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual_EvaluateLineEndPoint_0000038B_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)GLTFast_AccessorNativeData<Quaternion>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_ARFoundation_ARTrackableManager<XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider,_XRTrackedObject,_ARTrackedObject>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<IInteractorView>_TypeInfo,
                 *(undefined8 *)System_Action<PinchGesture>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARTrackableManager<XRHumanBodySubsystem,_XRHumanBodySubsystemDescriptor,_XRHumanBodySubsystem_Provider,_XRHumanBody,_ARHumanBody>_TypeInfo
                 ,*(undefined8 *)PTR_DAT_0728fa40,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARCore_ARCoreXRDepthSubsystem_ARCoreProvider_TransformPositionsJob_var
                 ,*(undefined8 *)
                   UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         Unity_Collections_xxHash3_Hash64Long_000008F4_PostfixBurstDelegate_var,
                 *(undefined8 *)System_Action<DismissType>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<InteractableStateChangeArgs>_TypeInfo,
                 *(undefined8 *)System_Action<ContextualMenuPopulateEvent>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<Object>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_XRHandSubsystemPlayerLoopRunnerUpdateSystem_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<CapabilityProfile>_TypeInfo,
                 *(undefined8 *)System_Action<AROcclusionFrameEventArgs>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<MagnificationGesture>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_00000194_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<IntPtr>_TypeInfo,
                 *(undefined8 *)System_Action<InteractableRegisteredEventArgs>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_072854b0,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000389_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         System_Action<ARCoreBeforeGetCameraConfigurationEventArgs>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_ARCore_ARCoreXRPointCloudSubsystem_ARCoreProvider_CopyIdentifiersJob_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_072b9410,
                 *(undefined8 *)System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_var,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ARHumanBodiesChangedEventArgs>_TypeInfo,
                 *(undefined8 *)PTR_DAT_0728f810,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ARTrackedImagesChangedEventArgs>_TypeInfo,
                 *(undefined8 *)PTR_DAT_0728fc90,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<IInteractor>_TypeInfo,
                 *(undefined8 *)System_Action<DebugUIHandlerPanel>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ARParticipantsChangedEventArgs>_TypeInfo,
                 *(undefined8 *)PTR_DAT_0728fca8,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07292180,*(undefined8 *)PTR_DAT_0728f808,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<AsyncGPUReadbackRequest>_TypeInfo,
                 *(undefined8 *)PTR_DAT_0728fca0,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<BaseVisualElementPanel>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_ARCore_ARCoreFaceSubsystem_ARCoreProvider_TransformUVsJob_var,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARCore_ARCoreFaceSubsystem_ARCoreProvider_TransformIndicesJob_var
                 ,*(undefined8 *)System_Action<EmptyEventArgs>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARCore_ARCoreFaceSubsystem_ARCoreProvider_TransformVerticesJob_var
                 ,*(undefined8 *)System_Action<ARMeshesChangedEventArgs>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000E6C_PostfixBurstDelegate_var
                 ,*(undefined8 *)
                   <>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_TypeInfo
                 ,*(undefined8 *)GLTFast_AccessorNativeData<Matrix4x4>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<IGraphElement>_TypeInfo,
                 *(undefined8 *)System_Action<LogEntry>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<Column>_TypeInfo,
                 *(undefined8 *)System_Action<MeshHandle>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<IAsyncResult>_TypeInfo,
                 *(undefined8 *)System_Action<Color>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<AvatarEntity>_TypeInfo,
                 *(undefined8 *)System_Action<ARPlaneBoundaryChangedEventArgs>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<DebugManager>_TypeInfo,
                 *(undefined8 *)UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted_00000193_PostfixBurstDelegate_var
                 ,*(undefined8 *)
                   OVRPassthroughColorLut_ColorLutTextureConverter_MapColorValuesJob_var,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_072922b8,*(undefined8 *)PTR_DAT_07292318,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<IHandGrabState>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeTransform_00000E6B_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07291d98,*(undefined8 *)PTR_DAT_0728fa38,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ARPlanesChangedEventArgs>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_0000007E_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ARCoreBeforeSetConfigurationEventArgs>_TypeInfo
                 ,*(undefined8 *)System_Action<PointerUpEvent>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07292b60,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_00000E6E_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<MeshGenerationContext>_TypeInfo,
                 *(undefined8 *)System_Action<ButtonElementLink>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         Unity_Collections_AllocatorManager_SlabAllocator_Try_000000B0_PostfixBurstDelegate_var
                 ,*(undefined8 *)System_Action<Font>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00000E6D_PostfixBurstDelegate_var
                 ,*(undefined8 *)System_Action<InteractableUnregisteredEventArgs>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<Task<IPAddress[]>>_TypeInfo,
                 *(undefined8 *)System_Action<Exception>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<AsyncOperation>_TypeInfo,
                 *(undefined8 *)System_Action<Collider>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<OVRRuntimeSettings>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000D2E_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<IEnumerable<object>>_TypeInfo,
                 *(undefined8 *)System_Action<PointableCanvasEventArgs>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_072920a8,*(undefined8 *)PTR_DAT_0728f7e0,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<Enum>_TypeInfo,*(undefined8 *)PTR_DAT_0728fbf8,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<List<IXRTargetPriorityInteractor>>_TypeInfo,
                 *(undefined8 *)
                  Unity_Collections_xxHash3_Hash128Long_000008FB_PostfixBurstDelegate_var,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<List<Type>>_TypeInfo,
                 *(undefined8 *)PTR_DAT_0728fc78,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07292160,*(undefined8 *)PTR_DAT_07291de0,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ARTrackedObjectsChangedEventArgs>_TypeInfo,
                 *(undefined8 *)GLTFast_AccessorNativeData<float>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARCore_ARCorePlaneSubsystem_ARCoreProvider_FlipBoundaryWindingJob_var
                 ,*(undefined8 *)PTR_DAT_0728fc80,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07292210,*(undefined8 *)PTR_DAT_07291df0,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<Dictionary<string,_string>>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_00000186_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         System_Action<ARTrackablesParentTransformChangedEventArgs>_TypeInfo,
                 *(undefined8 *)PTR_DAT_0728fc88,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07292240,*(undefined8 *)PTR_DAT_07291de8,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<NativeInputUpdateType>_TypeInfo,
                 *(undefined8 *)System_Action<ARFaceUpdatedEventArgs>_TypeInfo,*(undefined8 *)puVar1
                );
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARTrackableManager<XREnvironmentProbeSubsystem,_XREnvironmentProbeSubsystemDescriptor,_XREnvironmentProbeSubsystem_Provider,_XREnvironmentProbe,_AREnvironmentProbe>_TypeInfo
                 ,*(undefined8 *)PTR_DAT_0728fc98,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         <>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>_TypeInfo
                 ,*(undefined8 *)System_Action<Pose>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<EventBase>_TypeInfo,
                 *(undefined8 *)System_Action<Guid>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<PokeStateData>_TypeInfo,
                 *(undefined8 *)System_Action<InteractorStateChangeArgs>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_07297380,
                 *(undefined8 *)System_Action<DropdownMenuAction>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<AREnvironmentProbesChangedEvent>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_ARCore_ARCoreXRPointCloudSubsystem_ARCoreProvider_ExtractConfidenceValuesJob_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARCore_ARCorePlaneSubsystem_ARCoreProvider_FlipBoundaryHandednessJob_var
                 ,*(undefined8 *)System_Action<List<ReleaseVelocityInformation>>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)GLTFast_AccessorNativeData<Vector3>_TypeInfo,
                 *(undefined8 *)System_Action<InteractorUnregisteredEventArgs>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ARRaycastUpdatedEventArgs>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000D2D_PostfixBurstDelegate_var
                 ,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)System_Action<GradientRemap>_TypeInfo,
                 *(undefined8 *)System_Action<BaseRuntimePanel>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARTrackableManager<XRFaceSubsystem,_XRFaceSubsystemDescriptor,_XRFaceSubsystem_Provider,_XRFace,_ARFace>_TypeInfo
                 ,*(undefined8 *)System_Action<InputUpdateType>_TypeInfo,*(undefined8 *)puVar1);
    FUN_050f8b10(lVar12,*(undefined8 *)
                         UnityEngine_XR_ARCore_ARCoreXRPointCloudSubsystem_ARCoreProvider_TransformPositionsJob_var
                 ,*(undefined8 *)
                   UnityEngine_XR_ARFoundation_ARTrackableManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor>_TypeInfo
                 ,*(undefined8 *)puVar1);
    puVar4 = Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream_InsertBeforeOp_var;
    plVar14 = (long *)(*(long *)(*(long *)
                                  Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream_InsertBeforeOp_var
                                + 0xb8) + 0x10);
    *plVar14 = lVar12;
    thunk_FUN_0333a630(plVar14,lVar12);
    lVar12 = *(long *)puVar5;
    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar12 = *(long *)puVar5;
    }
    puVar3 = PTR_DAT_0727b440;
    puVar2 = PTR_DAT_072799c0;
    uVar16 = **(undefined8 **)(lVar12 + 0xb8);
    uVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b440);
    FUN_055ca58c(uVar15,uVar16,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition_00000D02_PostfixBurstDelegate_var
                 ,0);
    uVar17 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
    uVar16 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
    FUN_055ca58c(uVar16,uVar17,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_00000D08_PostfixBurstDelegate_var
                 ,0);
    uVar11 = FUN_039a4938(uVar11,uVar15,uVar16,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000D06_PostfixBurstDelegate_var
                         );
    puVar13 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    *puVar13 = uVar11;
    thunk_FUN_0333a630(puVar13,uVar11);
    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
    FUN_050f8160(lVar12,*(undefined8 *)PTR_DAT_072799c8);
    puVar10 = System_Action<OVRCameraRig>_TypeInfo;
    puVar9 = System_Action<InteractionGroupUnregisteredEventArgs>_TypeInfo;
    puVar8 = System_Action<InteractionGroupRegisteredEventArgs>_TypeInfo;
    puVar7 = System_Action<FocusExitEventArgs>_TypeInfo;
    puVar6 = System_Action<Drawer>_TypeInfo;
    puVar3 = System_Action<DragGesture>_TypeInfo;
    puVar5 = System_Action<AffordanceStateData>_TypeInfo;
    puVar2 = System_Action<ARPointCloudUpdatedEventArgs>_TypeInfo;
    puVar4 = PTR_DAT_07292158;
    if (lVar12 != 0) {
      FUN_050f8b10(lVar12,*(undefined8 *)
                           UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_var,
                   *(undefined8 *)System_Action<HashSet<int>>_TypeInfo,*(undefined8 *)puVar1);
      FUN_050f8b10(lVar12,*(undefined8 *)puVar10,*(undefined8 *)PTR_DAT_07291ac8,
                   *(undefined8 *)puVar1);
      FUN_050f8b10(lVar12,*(undefined8 *)puVar2,*(undefined8 *)System_Action<Enum>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_050f8b10(lVar12,*(undefined8 *)puVar7,*(undefined8 *)puVar5,*(undefined8 *)puVar1);
      FUN_050f8b10(lVar12,*(undefined8 *)puVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
      puVar4 = System_Action<ARParticipantsChangedEventArgs>_TypeInfo;
      FUN_050f8b10(lVar12,*(undefined8 *)puVar8,
                   *(undefined8 *)System_Action<ARParticipantsChangedEventArgs>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_050f8b10(lVar12,*(undefined8 *)puVar3,*(undefined8 *)puVar6,*(undefined8 *)puVar1);
      FUN_050f8b10(lVar12,*(undefined8 *)PTR_DAT_0728fcb0,
                   *(undefined8 *)System_Action<List<Type>>_TypeInfo,*(undefined8 *)puVar1);
      FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ColumnMover>_TypeInfo,
                   *(undefined8 *)System_Action<AsyncGPUReadbackRequest>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_050f8b10(lVar12,*(undefined8 *)System_Action<Controller>_TypeInfo,*(undefined8 *)puVar4,
                   *(undefined8 *)puVar1);
      FUN_050f8b10(lVar12,*(undefined8 *)System_Action<ARSessionStateChangedEventArgs>_TypeInfo,
                   *(undefined8 *)System_Action<ARTrackedImagesChangedEventArgs>_TypeInfo,
                   *(undefined8 *)puVar1);
      plVar14 = (long *)(*(long *)(*(long *)
                                    Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream_InsertBeforeOp_var
                                  + 0xb8) + 0x20);
      *plVar14 = lVar12;
      thunk_FUN_0333a630(plVar14,lVar12);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


