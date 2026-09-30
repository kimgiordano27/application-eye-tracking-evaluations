/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARCameraBackground$$OnOcclusionFrameReceived
ENTRY_POINT: 07259334
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 262
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_5;ray_or_cast_sink_hits_19;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_XR_ARFoundation_ARCameraBackground__OnOcclusionFrameReceived(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_0373b518(System_Collections_Generic_List<TextSettings_FontReferenceMap>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<TextureRegistry_TextureInfo>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<TimeNotificationBehaviour_NotificationEntry>_TypeInfo
              );
  FUN_0373b518(System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_TypeInfo);
  FUN_0373b518(
              System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
              );
  FUN_0373b518(System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<TruckBoss_AttackType>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_TypeInfo)
  ;
  FUN_0373b518(System_Collections_Generic_List<UIRenderDevice_AllocToFree>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<UITKTextJobSystem_ManagedJobData>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<UnityHapticSample_SerializableHapticSample>_TypeInfo)
  ;
  FUN_0373b518(System_Collections_Generic_List<UnityHapticSample_UnityPrimitiveData>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<VFXHierarchyAttributeMapBinder_Bone>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<VisualEffectControlClip_ClipEvent>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<VisualEffectControlTrackController_Clip>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<VisualEffectControlTrackController_Event>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<VisualTreeAsset_SlotDefinition>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<VisualTreeAsset_UsingEntry>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<VisualTreeDataBindingsUpdater_VersionInfo>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<XRDebugLineVisualizer_DebugLine>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<XRDeviceSimulator_SimulatedHandExpression>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo);
  FUN_0373b518(
              System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_TypeInfo
              );
  FUN_0373b518(System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<XRRayInteractor_SamplePoint>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<XRUIInputModule_RegisteredInteractor>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<XRUIInputModule_RegisteredTouch>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<fsAotCompilationManager_AotCompilation>_TypeInfo);
  FUN_0373b518(
              System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_TypeInfo
              );
  FUN_0373b518(
              System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
              );
  FUN_0373b518(
              System_Collections_Generic_List<DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain>_TypeInfo
              );
  FUN_0373b518(System_Collections_Generic_List<DebugUI_Foldout_ContextMenuItem>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_TypeInfo
              );
  FUN_0373b518(System_Collections_Generic_List<InstructionList_DebugView_InstructionView>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<MB3_MeshBakerRoot_ZSortObjects_Item>_TypeInfo);
  FUN_0373b518(
              System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>_TypeInfo
              );
  FUN_0373b518(
              System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_TypeInfo
              );
  FUN_0373b518(
              System_Collections_Generic_List<RenderChain_VisualChangesProcessor_EntryProcessingInfo>_TypeInfo
              );
  FUN_0373b518(System_Collections_Generic_List<RenderGraph_DebugData_PassData>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<TargetPositionCache_CacheCurve_Item>_TypeInfo);
  FUN_0373b518(
              System_Collections_Generic_List<TargetPositionCache_CacheEntry_RecordingItem>_TypeInfo
              );
  FUN_0373b518(
              System_Collections_Generic_List<RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_AttachmentInfo>_TypeInfo
              );
  FUN_0373b518(System_Data_Listeners<DataViewListener>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_LowLevelDictionary<int,_Task>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_LowLevelListWithIList<Exception>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_LowLevelListWithIList<object>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_LowLevelListWithIList<Task>_TypeInfo);
  FUN_0373b518(
              UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>_TypeInfo
              );
  FUN_0373b518(UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_TypeInfo);
  FUN_0373b518(UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_TypeInfo);
  FUN_0373b518(System_Buffers_MemoryPool<IntPtr>_TypeInfo);
  FUN_0373b518(Oculus_Platform_Message<bool>_TypeInfo);
  FUN_0373b518(Pico_Platform_Message<AchievementDefinitionList>_TypeInfo);
  FUN_0373b518(Pico_Platform_Message<AchievementProgressList>_TypeInfo);
  FUN_0373b518(Pico_Platform_Message<AchievementUpdate>_TypeInfo);
  FUN_0373b518(Pico_Platform_Message<ApplicationInviteList>_TypeInfo);
  FUN_0373b518(Pico_Platform_Message<ApplicationVersion>_TypeInfo);
  FUN_0373b518(Pico_Platform_Message<AsrResult>_TypeInfo);
  FUN_0373b518(Pico_Platform_Message<AssetDetailsList>_TypeInfo);
  FUN_0373b518(Pico_Platform_Message<AssetFileDeleteForSafety>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
  FUN_0373b518(
              System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
              );
  FUN_0373b518(PTR_DAT_07d86598);
  FUN_0373b518(PTR_DAT_07dc6350);
  *(undefined1 *)(unaff_x20 + 0x8c0) = 1;
  FUN_07251c3c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ResourceHandle>_TypeInfo);
    FUN_044ac128(uVar2,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo,0)
    ;
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_037aeb94(puVar3,uVar2);
  }
  if (unaff_x19 != 0) {
    FUN_03eaeabc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<StackFrame>_TypeInfo
                                );
      FUN_044ac8f4(uVar2,uVar4,
                   *(undefined8 *)System_Collections_Generic_List<RFMesh_RFSubMeshTris>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eafdf4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Polygon>_TypeInfo);
      FUN_044ac538(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_TypeInfo,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    Unity_Netcode_FastBufferWriter__WriteNetworkSerializable<NetworkDeltaPosition>();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFJoint>_TypeInfo);
      FUN_044acb74(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb045c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x28) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Product>_TypeInfo);
      FUN_044ac678(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<UnityHapticSample_UnityPrimitiveData>_TypeInfo,0
                  );
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eaf78c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x30) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo
                                );
      FUN_044accb4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualTreeDataBindingsUpdater_VersionInfo>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb0790();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x38) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProcessPort>_TypeInfo);
      FUN_044ac7b8(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eafac0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x40) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RegisterRequest>_TypeInfo);
      FUN_044acdf4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb0ac4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x48) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerScoreData>_TypeInfo);
      FUN_044aca34(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb0128();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x50) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireRigid>_TypeInfo);
      FUN_044ac268(uVar2,uVar4,
                   *(undefined8 *)Pico_Platform_Message<AssetFileDeleteForSafety>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eaedf0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x58) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PxrQueriedSpatialEntityInfo>_TypeInfo
                                );
      FUN_044ac3f8(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<Painter2D_Painter2DJobData>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eaf124();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x60) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuleMatcher>_TypeInfo);
      FUN_044b4580(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ebaaec();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x68) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Scene>_TypeInfo);
      FUN_044b4d4c(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<PhysicalMaterialHitHandler_ObjectMaterialPair>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ebbe24();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x70) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Renderer>_TypeInfo);
      FUN_044b4990(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ebb488();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x78) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<Rigidbody2D>_TypeInfo);
      FUN_044b4fcc(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee49e0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x80) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFCache>_TypeInfo);
      FUN_044b4ad0(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    Unity_Collections_FixedList__Capacity<FixedBytes4096Align8,_byte>();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x88) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerSetupInfo>_TypeInfo);
      FUN_044b510c(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee4d14();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x90) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
      FUN_044b4c10(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ebbaf0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x98) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuntimeElement>_TypeInfo);
      FUN_044b4e8c(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee46ac();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SkinSettingsDual>_TypeInfo);
      FUN_044b46c0(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ebae20();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SteamAudioDynamicObject>_TypeInfo)
      ;
      FUN_044b4850(uVar2,uVar4,
                   *(undefined8 *)System_Collections_Generic_List<RayfireBomb_Projectile>_TypeInfo,0
                  );
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ebb154();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pid>_TypeInfo);
      FUN_044af144(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<RegexCharClass_SingleRange>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb4ad4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerLoopSystemInternal>_TypeInfo
                                );
      FUN_044af910(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<RichTextTagParser_Segment>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb5e0c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xc0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SignalAsset>_TypeInfo);
      FUN_044af554(uVar2,uVar4,
                   *(undefined8 *)System_Collections_Generic_List<RichTextTagParser_Tag>_TypeInfo,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb5470();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 200) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuntimeType>_TypeInfo);
      FUN_044afb90(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<RuntimeManager_AttachedInstance>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb6474();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderTexture>_TypeInfo);
      FUN_044af694(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<Settings_PlatformTemplate>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb57a4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RaycastResult>_TypeInfo);
      FUN_044afcd0(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<ShadowShape2DProvider_Collider2D_MinMaxBounds>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb67a8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ShadowCaster2D>_TypeInfo);
      FUN_044af7d4(uVar2,uVar4,
                   *(undefined8 *)System_Collections_Generic_List<StencilMaterial_MatEntry>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb5ad8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StringBuilder>_TypeInfo);
      FUN_044afa50(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<StrikerProfiler_StrikerProfilerEntry>_TypeInfo,0
                  );
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb6140();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Player>_TypeInfo);
      FUN_044af284(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<StringHelper_ThreadSafeEncoding>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb4e08();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo);
      FUN_044af414(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TMP_Dropdown_DropdownItem>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb513c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x100) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Playable>_TypeInfo);
      FUN_044b6b94(uVar2,uVar4,
                   *(undefined8 *)System_Collections_Generic_List<TMP_Dropdown_OptionData>_TypeInfo,
                   0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x100) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x100,uVar2);
    }
    FUN_03ee7050();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x108) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectMask2D>_TypeInfo
                                );
      FUN_044b7360(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TMP_MaterialManager_FallbackMaterial>_TypeInfo,0
                  );
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x108) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x108,uVar2);
    }
    FUN_03ee8388();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x110) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pose>_TypeInfo);
      FUN_044b6fa4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_TypeInfo,0)
      ;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x110) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x110,uVar2);
    }
    FUN_03ee79ec();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x118) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectInt>_TypeInfo);
      FUN_044b75e0(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TeamSpeakClient_TeamSpeakError>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x118) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x118,uVar2);
    }
    FUN_03ee89f0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x120) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<float>_TypeInfo);
      FUN_044b70e4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TeamSpeakClient_TeamSpeakSoundDevice>_TypeInfo,0
                  );
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x120) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x120,uVar2);
    }
    FUN_03ee7d20();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x128) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RegexOptions>_TypeInfo);
      FUN_044b7720(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TextSettings_FontReferenceMap>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x128) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x128,uVar2);
    }
    FUN_03ee8d24();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x130) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RadioButton>_TypeInfo);
      FUN_044b7224(uVar2,uVar4,
                   *(undefined8 *)System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo,
                   0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x130) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x130,uVar2);
    }
    FUN_03ee8054();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x138) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StageController>_TypeInfo);
      FUN_044b7860(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TextureRegistry_TextureInfo>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x138) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x138,uVar2);
    }
    FUN_03ee9058();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x140) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo);
      FUN_044b74a0(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TimeNotificationBehaviour_NotificationEntry>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x140) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x140,uVar2);
    }
    FUN_03ee86bc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x148) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo
                                );
      FUN_044b6cd4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x148) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x148,uVar2);
    }
    FUN_03ee7384();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x150) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayableBinding>_TypeInfo);
      FUN_044b6e64(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo,
                   0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x150) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x150,uVar2);
    }
    FUN_03ee76b8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x158) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Selectable>_TypeInfo
                                );
      FUN_044afe10(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x158) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x158,uVar2);
    }
    FUN_03eb6adc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x160) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo
                                );
      FUN_044b09b4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x160) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x160,uVar2);
    }
    FUN_03eb7e14();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x168) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RendererListHandle>_TypeInfo);
      FUN_044b0220(uVar2,uVar4,
                   *(undefined8 *)System_Collections_Generic_List<TruckBoss_AttackType>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x168) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x168,uVar2);
    }
    FUN_03eb7478();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x170) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireDust>_TypeInfo);
      FUN_044b0c34(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x170) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x170,uVar2);
    }
    FUN_03eb847c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x178) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScheduledItem>_TypeInfo);
      FUN_044b04b8(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<UIRenderDevice_AllocToFree>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x178) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x178,uVar2);
    }
    FUN_03eb77ac();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x180) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Player>_TypeInfo);
      FUN_044b0d74(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x180) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x180,uVar2);
    }
    FUN_03eb87b0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x188) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Platform>_TypeInfo);
      FUN_044b05f4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<UITKTextJobSystem_ManagedJobData>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x188) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x188,uVar2);
    }
    FUN_03eb7ae0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 400) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PolyNode>_TypeInfo);
      FUN_044b0af4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<UnityHapticSample_SerializableHapticSample>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 400) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 400,uVar2);
    }
    FUN_03eb8148();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x198) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RFDictionary>_TypeInfo);
      FUN_044aff50(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x198) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x198,uVar2);
    }
    FUN_03eb6e10();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableObject>_TypeInfo);
      FUN_044b00e0(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<VFXHierarchyAttributeMapBinder_Bone>_TypeInfo,0)
      ;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1a0,uVar2);
    }
    FUN_03eb7144();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StudioListener>_TypeInfo);
      FUN_044b799c(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualEffectControlClip_ClipEvent>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1a8,uVar2);
    }
    FUN_03ee938c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RendererList>_TypeInfo);
      FUN_044b8164(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualEffectControlTrackController_Clip>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1b0,uVar2);
    }
    FUN_03eea6c4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Quaternion>_TypeInfo
                                );
      FUN_044b7dac(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualEffectControlTrackController_Event>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1b8,uVar2);
    }
    FUN_03ee9d28();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFFace>_TypeInfo);
      FUN_044b83e4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1c0,uVar2);
    }
    FUN_03eead2c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
      FUN_044b7eec(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1c8,uVar2);
    }
    FUN_03eea05c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
      FUN_044b8524(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualTreeAsset_SlotDefinition>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1d0,uVar2);
    }
    FUN_03eeb060();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProBuilderMesh>_TypeInfo);
      FUN_044b8028(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualTreeAsset_UsingEntry>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1d8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1d8,uVar2);
    }
    FUN_03eea390();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireDebris>_TypeInfo);
      FUN_044b8660(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1e0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1e0,uVar2);
    }
    FUN_03eeb394();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PhysicsShape2D>_TypeInfo);
      FUN_044b82a4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRDebugLineVisualizer_DebugLine>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1e8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1e8,uVar2);
    }
    FUN_03eea9f8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1f0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializationCallback>_TypeInfo);
      FUN_044b7adc(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRDeviceSimulator_SimulatedHandExpression>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1f0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1f0,uVar2);
    }
    FUN_03ee96c0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1f8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ReusableCollectionItem>_TypeInfo);
      FUN_044b7c6c(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1f8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1f8,uVar2);
    }
    FUN_03ee99f4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x200) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PositionType>_TypeInfo);
      FUN_044b12ec(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x200) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x200,uVar2);
    }
    FUN_03eb8ae4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x208) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
      FUN_044b1aa8(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x208) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x208,uVar2);
    }
    FUN_03eb9e1c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x210) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ShaderTagId>_TypeInfo);
      FUN_044b16f4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRRayInteractor_SamplePoint>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x210) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x210,uVar2);
    }
    FUN_03eb9480();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x218) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFShard>_TypeInfo);
      FUN_044b1d20(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRUIInputModule_RegisteredInteractor>_TypeInfo,0
                  );
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x218) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x218,uVar2);
    }
    FUN_03eba484();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x220) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderGraph>_TypeInfo);
      FUN_044b1830(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRUIInputModule_RegisteredTouch>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x220) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x220,uVar2);
    }
    FUN_03eb97b4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x228) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
      FUN_044b1e5c(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x228) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x228,uVar2);
    }
    FUN_03eba7b8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x230) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rect>_TypeInfo);
      FUN_044b196c(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<fsAotCompilationManager_AotCompilation>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x230) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x230,uVar2);
    }
    FUN_03eb9ae8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x238) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StudioEventEmitter>_TypeInfo);
      FUN_044b1be4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x238) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x238,uVar2);
    }
    FUN_03eba150();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x240) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFTriangle>_TypeInfo
                                );
      FUN_044b1428(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x240) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x240,uVar2);
    }
    FUN_03eb8e18();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x248) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProbeVolumePerSceneData>_TypeInfo)
      ;
      FUN_044b15b8(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<DebugUI_Foldout_ContextMenuItem>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x248) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x248,uVar2);
    }
    FUN_03eb914c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x250) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializedCommand>_TypeInfo);
      FUN_044b879c(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x250) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x250,uVar2);
    }
    FUN_03eeb6c8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 600) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
      FUN_044b91bc(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<InstructionList_DebugView_InstructionView>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 600) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 600,uVar2);
    }
    FUN_03eecd34();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x260) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteGlyph>_TypeInfo);
      FUN_044b92f8(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<MB3_MeshBakerRoot_ZSortObjects_Item>_TypeInfo,0)
      ;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x260) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x260,uVar2);
    }
    FUN_03eed068();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x268) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
      FUN_044b9434(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x268) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x268,uVar2);
    }
    FUN_03eed39c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x270) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyMetadata>_TypeInfo);
      FUN_044b9080(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x270) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x270,uVar2);
    }
    FUN_03eeca00();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x278) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo
                                );
      FUN_044b88d8(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<RenderChain_VisualChangesProcessor_EntryProcessingInfo>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x278) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x278,uVar2);
    }
    FUN_03eeb9fc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x280) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RFPoolingEmitter>_TypeInfo);
      FUN_044b8a68(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<RenderGraph_DebugData_PassData>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x280) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x280,uVar2);
    }
    FUN_03eebd30();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x288) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyPath>_TypeInfo);
      FUN_044b53c8(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TargetPositionCache_CacheCurve_Item>_TypeInfo,0)
      ;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x288) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x288,uVar2);
    }
    FUN_03ee5048();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x290) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SeverityEntry>_TypeInfo);
      FUN_044b5a04(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<TargetPositionCache_CacheEntry_RecordingItem>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x290) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x290,uVar2);
    }
    FUN_03ee604c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x298) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteRenderer>_TypeInfo);
      FUN_044b5648(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_List<RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_AttachmentInfo>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x298) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x298,uVar2);
    }
    FUN_03ee56b0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2a0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<string>_TypeInfo);
      FUN_044b5f30(uVar2,uVar4,*(undefined8 *)System_Data_Listeners<DataViewListener>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2a0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2a0,uVar2);
    }
    FUN_03ee66b4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2a8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SdkAccount>_TypeInfo
                                );
      FUN_044b5788(uVar2,uVar4,
                   *(undefined8 *)System_Collections_Generic_LowLevelDictionary<int,_Task>_TypeInfo,
                   0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2a8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2a8,uVar2);
    }
    FUN_03ee59e4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2b0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFCluster>_TypeInfo)
      ;
      FUN_044b6070(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_LowLevelListWithIList<Exception>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2b0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2b0,uVar2);
    }
    FUN_03ee69e8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2b8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PathPoint>_TypeInfo)
      ;
      FUN_044b58c8(uVar2,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2b8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2b8,uVar2);
    }
    FUN_03ee5d18();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2c0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RegexNode>_TypeInfo)
      ;
      FUN_044b61b0(uVar2,uVar4,
                   *(undefined8 *)System_Collections_Generic_LowLevelListWithIList<object>_TypeInfo,
                   0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2c0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2c0,uVar2);
    }
    FUN_03ee6d1c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2c8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo
                                );
      FUN_044b5c9c(uVar2,uVar4,
                   *(undefined8 *)System_Collections_Generic_LowLevelListWithIList<Task>_TypeInfo,0)
      ;
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2c8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2c8,uVar2);
    }
    FUN_03ee6380();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2d0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteCharacter>_TypeInfo);
      FUN_044b5508(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2d0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2d0,uVar2);
    }
    FUN_03ee537c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2d8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SkinnedMeshRenderer>_TypeInfo);
      FUN_044ad3dc(uVar2,uVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2d8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2d8,uVar2);
    }
    FUN_03eb0df8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2e0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SkinSettings>_TypeInfo);
      FUN_044adba4(uVar2,uVar4,*(undefined8 *)System_Buffers_MemoryPool<IntPtr>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2e0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2e0,uVar2);
    }
    FUN_03eb1dfc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2e8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RegexFC>_TypeInfo);
      FUN_044ad6f4(uVar2,uVar4,*(undefined8 *)Oculus_Platform_Message<bool>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2e8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2e8,uVar2);
    }
    FUN_03eb1460();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2f0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyInfo>_TypeInfo);
      FUN_044add34(uVar2,uVar4,
                   *(undefined8 *)Pico_Platform_Message<AchievementDefinitionList>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2f0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2f0,uVar2);
    }
    FUN_03eb2130();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2f8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayableDirector>_TypeInfo);
      FUN_044ad884(uVar2,uVar4,
                   *(undefined8 *)Pico_Platform_Message<AchievementProgressList>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x2f8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x2f8,uVar2);
    }
    FUN_03eb1794();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x300) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableRendererFeature>_TypeInfo
                                );
      FUN_044adec4(uVar2,uVar4,*(undefined8 *)Pico_Platform_Message<AchievementUpdate>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x300) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x300,uVar2);
    }
    FUN_03eb2464();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x308) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RangePositionInfo>_TypeInfo);
      FUN_044ada14(uVar2,uVar4,*(undefined8 *)Pico_Platform_Message<ApplicationInviteList>_TypeInfo,
                   0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x308) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x308,uVar2);
    }
    FUN_03eb1ac8();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_078d9ffc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


