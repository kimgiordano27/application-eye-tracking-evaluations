/*
FUNCTION_NAME: FUN_0656ede8
ENTRY_POINT: 0656ede8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_17;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0656ede8(void)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_070f1fd0;
  if ((DAT_075573e0 & 1) == 0) {
    FUN_03188a78(System_Collections_Generic_List<LocomotionEvent_RotationType>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2130);
    FUN_03188a78(System_Collections_Generic_List<LocomotionEvent_TranslationType>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<LoggingContext_LoggingContextField>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<MeshGenerator_RepeatRectUV>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<MeshGenerator_TessellationJobParameters>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<MonoChunkParser_Chunk>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<MultiColumnCollectionHeader_ColumnData>_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_List<MultiColumnCollectionHeader_SortedColumnState>_TypeInfo
                );
    FUN_03188a78(System_Collections_Generic_List<NetworkObjectBaker_TransformPath>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<NetworkObjectMeta_List>_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_List<NetworkSceneManagerDefault_MultiPeerSceneRoot>_TypeInfo
                );
    FUN_03188a78(System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OVRInput_Button>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OVRLipSync_Frame>_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                );
    FUN_03188a78(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1fd0);
    FUN_03188a78(System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo)
    ;
    FUN_03188a78(System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_List<FusionStatistics_FusionStatisticsStatCustomConfig>_TypeInfo
                );
    FUN_03188a78(System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo)
    ;
    FUN_03188a78(System_Collections_Generic_List<GameSetupData_Difficulty>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<GameSetupData_DrawingTwist>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OvrAvatarCustomHandPose_JointTransform>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OvrAvatarEntity_GPUInstancedAvatar>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OvrAvatarEntity_PrimitiveRenderData>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OvrAvatarEntity_SkeletonJoint>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OvrAvatarManager_BoneTransformInfo>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<OvrAvatarManager_LoadRequest>_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_List<OvrAvatarMaterialExtensionConfig_StringListWrapper>_TypeInfo
                );
    FUN_03188a78(System_Collections_Generic_List<Painter2D_Painter2DJobData>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<PhotonAnimatorView_SynchronizedLayer>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<PhotonAnimatorView_SynchronizedParameter>_TypeInfo)
    ;
    FUN_03188a78(
                System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_03188a78(System_Collections_Generic_List<PointableCanvasModule_PointerImpl>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo);
    DAT_075573e0 = 1;
  }
  puVar10 = System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo;
  puVar9 = System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo;
  puVar8 = System_Collections_Generic_List<OVRInput_Button>_TypeInfo;
  puVar7 = System_Collections_Generic_List<MeshGenerator_TessellationJobParameters>_TypeInfo;
  puVar6 = System_Collections_Generic_List<LocomotionEvent_TranslationType>_TypeInfo;
  puVar5 = System_Collections_Generic_List<LocomotionEvent_RotationType>_TypeInfo;
  puVar4 = System_Collections_Generic_List<GameSetupData_DrawingTwist>_TypeInfo;
  puVar3 = System_Collections_Generic_List<GameSetupData_Difficulty>_TypeInfo;
  puVar2 = 
  System_Collections_Generic_List<FusionStatistics_FusionStatisticsStatCustomConfig>_TypeInfo;
  local_68 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  puVar12 = 
  System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo;
  puVar11 = System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo;
  puVar1 = System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo;
  FUN_03af60cc(*(undefined8 *)puVar2,0,0,*(undefined8 *)puVar8);
  FUN_03af60cc(*(undefined8 *)puVar4,0,0,*(undefined8 *)puVar6);
  FUN_03af60cc(*(undefined8 *)puVar3,0,0,*(undefined8 *)puVar7);
  FUN_03af60cc(0,0,0,*(undefined8 *)puVar10);
  FUN_03af60cc(0,0,0,*(undefined8 *)puVar9);
  uVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar5);
  FUN_065a26e8(uVar13,0,*(undefined8 *)
                         System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
               ,0);
  FUN_064f8ed4(uVar13,0);
  local_68 = 0;
  if (*(int *)(*(long *)PTR_DAT_070f2130 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OvrAvatarCustomHandPose_JointTransform>_TypeInfo
                        ,1,0);
  local_78 = 0;
  uStack_70 = 0;
  FUN_04667494(&local_78,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_78,uStack_70,
               *(undefined8 *)
                System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
              );
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo
                        ,1,0);
  local_88 = 0;
  uStack_80 = 0;
  FUN_04667494(&local_88,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_88,uStack_80,
               *(undefined8 *)
                System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
              );
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo,1,0
                       );
  local_98 = 0;
  uStack_90 = 0;
  FUN_04667494(&local_98,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_98,uStack_90,
               *(undefined8 *)
                System_Collections_Generic_List<MultiColumnCollectionHeader_SortedColumnState>_TypeInfo
              );
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OvrAvatarEntity_SkeletonJoint>_TypeInfo,1,0
                       );
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_04667494(&local_a8,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_a8,uStack_a0,
               *(undefined8 *)System_Collections_Generic_List<NetworkObjectMeta_List>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OvrAvatarManager_LoadRequest>_TypeInfo,1,0)
  ;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_04667494(&local_b8,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_b8,uStack_b0,
               *(undefined8 *)
                System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OvrAvatarMaterialExtensionConfig_StringListWrapper>_TypeInfo
                        ,1,0);
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_04667494(&local_c8,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_c8,uStack_c0,
               *(undefined8 *)
                System_Collections_Generic_List<NetworkSceneManagerDefault_MultiPeerSceneRoot>_TypeInfo
              );
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_TypeInfo,1
                        ,0);
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_04667494(&local_d8,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_d8,uStack_d0,
               *(undefined8 *)System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo
              );
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo
                        ,1,0);
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_04667494(&local_e8,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(*(undefined8 *)
                System_Collections_Generic_List<PhotonAnimatorView_SynchronizedParameter>_TypeInfo,
               local_e8,uStack_e0,
               *(undefined8 *)
                System_Collections_Generic_List<NetworkObjectBaker_TransformPath>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<Painter2D_Painter2DJobData>_TypeInfo,1,0);
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_04667494(&local_f8,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_f8,uStack_f0,
               *(undefined8 *)System_Collections_Generic_List<MonoChunkParser_Chunk>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo,1,
                        0);
  local_108 = 0;
  uStack_100 = 0;
  FUN_04667494(&local_108,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_108,uStack_100,
               *(undefined8 *)System_Collections_Generic_List<MeshGenerator_RepeatRectUV>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<PointableCanvasModule_PointerImpl>_TypeInfo
                        ,1,0);
  local_118 = 0;
  uStack_110 = 0;
  FUN_04667494(&local_118,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_118,uStack_110,
               *(undefined8 *)
                System_Collections_Generic_List<LoggingContext_LoggingContextField>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OvrAvatarManager_BoneTransformInfo>_TypeInfo
                        ,1,0);
  local_128 = 0;
  uStack_120 = 0;
  FUN_04667494(&local_128,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_128,uStack_120,
               *(undefined8 *)
                System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo
                        ,1,0);
  local_138 = 0;
  uStack_130 = 0;
  FUN_04667494(&local_138,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_138,uStack_130,
               *(undefined8 *)System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  puVar2 = System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo;
  local_68 = FUN_064dee74(&local_68,
                          *(undefined8 *)
                           System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo,1,
                          0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OvrAvatarEntity_PrimitiveRenderData>_TypeInfo
                        ,1,0);
  local_148 = 0;
  uStack_140 = 0;
  FUN_04667494(&local_148,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_148,uStack_140,
               *(undefined8 *)System_Collections_Generic_List<OVRLipSync_Frame>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_TypeInfo
                        ,1,0);
  local_158 = 0;
  uStack_150 = 0;
  FUN_04667494(&local_158,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_158,uStack_150,
               *(undefined8 *)System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  local_68 = FUN_064dee74(&local_68,*(undefined8 *)puVar2,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OvrAvatarEntity_GPUInstancedAvatar>_TypeInfo
                        ,1,0);
  local_168 = 0;
  uStack_160 = 0;
  FUN_04667494(&local_168,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_168,uStack_160,
               *(undefined8 *)System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  local_68 = FUN_064dee74(&local_68,*(undefined8 *)puVar2,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo
                        ,1,0);
  local_178 = 0;
  uStack_170 = 0;
  FUN_04667494(&local_178,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_178,uStack_170,
               *(undefined8 *)
                System_Collections_Generic_List<MultiColumnCollectionHeader_ColumnData>_TypeInfo);
  local_68 = 0;
  local_68 = FUN_064deb84(&local_68,*(undefined8 *)puVar12,1,0);
  local_68 = FUN_064dee74(&local_68,*(undefined8 *)puVar2,1,0);
  uVar13 = FUN_064def60(&local_68,
                        *(undefined8 *)
                         System_Collections_Generic_List<PhotonAnimatorView_SynchronizedLayer>_TypeInfo
                        ,1,0);
  local_188 = 0;
  uStack_180 = 0;
  FUN_04667494(&local_188,uVar13,*(undefined8 *)puVar11);
  FUN_03af60cc(0,local_188,uStack_180,*(undefined8 *)puVar1);
  return;
}


