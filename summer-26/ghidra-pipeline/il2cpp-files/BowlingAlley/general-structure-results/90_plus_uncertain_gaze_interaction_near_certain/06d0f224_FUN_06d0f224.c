/*
FUNCTION_NAME: FUN_06d0f224
ENTRY_POINT: 06d0f224
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 275
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_18;ui_or_gameplay_sink_hits_20;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06d0f224(void)

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
  
  puVar2 = Method_UnityEngine_GameObject_AddComponent<AvatarLODOverride>__;
  puVar1 = Method_UnityEngine_GameObject_AddComponent<AvatarData>__;
  if ((DAT_076e98b9 & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<AvatarLODParent>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<AvatarLODOverride>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<AvatarData>__);
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_FixedStringMethods_CompareTo<HeapString,_FixedString128Bytes>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<BaseInput>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<BezierGrabSurface>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<BoxCollider>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<BoxGrabSurface>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Bullet>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Button>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<CallbackRunner>__);
    thunk_FUN_032e1da0(Method_Nova_Compat_NovaHashMap<InternalType_310,_InternalType_282>_Add__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Camera>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Canvas>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<CanvasGroup>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<CanvasScaler>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<CanvasTracker>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<CapsuleCollider>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<CharacterController>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<ColliderGrabSurface>__);
    thunk_FUN_032e1da0(System_Collections_Generic_ICollection<UILineInfo>_TypeInfo);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<ConfigurableJoint>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Context>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Cursor>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<CylinderGrabSurface>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<DebugInterface>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<DebugManager>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<DefaultDeferAgent>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<EventSystem>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<FirebaseMonoBehaviour>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
    thunk_FUN_032e1da0(PTR_DAT_072a8400);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<GrabFreeTransformer>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Grabbable>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<GrabbableChild>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<HandGrabInteractable>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<HandGrabPose>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<HandPoseBlender>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<HmdOffset>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Image>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Image>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<InputBridge>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<InputSystemUIInputModule>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<InteractableTriggerBroadcaster>__)
    ;
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<LODGallerySceneAvatarEntity>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<LODGallerySceneHQAvatarEntity>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<LayoutElement>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Light>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<LineRenderer>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Mask>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<MeshCollider>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<MeshFilter>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<MeshRenderer>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Mic>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<MoveTowardsTargetProvider>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<ONSPAudioSource>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<ONSPPropagationMaterial>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVRGridCube>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVRLipSyncDebugConsole>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVRMRAudioFilter>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVRManager>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVROverlay>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVROverlayMeshGenerator>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVRRaycaster>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVRSceneAnchor>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVRSceneRoom>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVRSpatialAnchor>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVRTouchpadHelper>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OVRVirtualKeyboard>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_GameObject_AddComponent<OVRVirtualKeyboardInputFieldTextHandler>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OculusRestarter>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OverlayCanvas>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_GameObject_AddComponent<OvrAvatarComputeInterpolatedSkinnedMvRenderable>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_GameObject_AddComponent<OvrAvatarComputeInterpolatedSkinnedRenderable>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_GameObject_AddComponent<OvrAvatarComputeSkinnedMvRenderable>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_GameObject_AddComponent<OvrAvatarComputeSkinnedRenderable>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OvrAvatarGazeTarget>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_GameObject_AddComponent<OvrAvatarGpuInterpolatedSkinnedMvRenderable>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_GameObject_AddComponent<OvrAvatarGpuInterpolatedSkinnedRenderable>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OvrAvatarGpuSkinnedMvRenderable>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OvrAvatarGpuSkinnedRenderable>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OvrAvatarRenderable>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OvrAvatarShaderManagerSingle>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OvrAvatarSocket>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<OvrAvatarUnitySkinnedRenderable>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<PanelInputModule>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<ParticleSystem>__);
    thunk_FUN_032e1da0(System_Collections_Generic_ICollection<UIVertex>_TypeInfo);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<PhysicsRaycaster>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<PointerHandler>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<PostProcessVolume>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Projectile>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<RawImage>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<RectMask2D>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Renderer>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Rigidbody>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<RigidbodyKinematicLocker>__);
    thunk_FUN_032e1da0(PTR_DAT_072a83f8);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<ScrollRect>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Scrollbar>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<SkinnedMeshRenderer>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<SnapZoneOffset>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<SortGroup>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<SphereCollider>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<SphereGrabSurface>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TMP_Dropdown>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TMP_InputField>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TMP_SpriteAnimator>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TMP_SubMeshUI>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TTSServiceLogging>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TTSSpeaker>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TeleportArcGravity>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TeleportCandidateComputer>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Text>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TextMeshProUGUI>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TimeBudgetPerFrameDeferAgent>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Toggle>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TouchSimulation>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TranscriptionEventListener>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TriggerEventBroadcaster>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<TwistRelaxer>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<UIBlock2D>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<UnityAudioPlayer>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<UnityAudioSystem>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalCameraData>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalLightData>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<VRIKRootController>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<VRUISystem>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<VRUtils>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Variables>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<VelocityTracker>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<Wit>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<WitDictation>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<WitService>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<XRHandMeshController>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<XRHandSkeletonDriver>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<XRHandTrackingEvents>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<XRInteractableSnapVolume>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_AddComponent<XRUIInputModule>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_GameObject_AddComponent<CanvasRenderTexture_TransformChangeListener>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_GameObject_AddComponent<CoroutineUtility_CoroutinePerformer>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072a83f0);
    DAT_076e98b9 = 1;
  }
  lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_050e1c0c(lVar11,*(undefined8 *)puVar2);
  puVar10 = Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalCameraData>__;
  puVar9 = Method_UnityEngine_GameObject_AddComponent<SortGroup>__;
  puVar8 = Method_UnityEngine_GameObject_AddComponent<RawImage>__;
  puVar7 = Method_UnityEngine_GameObject_AddComponent<Mic>__;
  puVar6 = Method_UnityEngine_GameObject_AddComponent<MeshRenderer>__;
  puVar5 = Method_UnityEngine_GameObject_AddComponent<MeshCollider>__;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<InputSystemUIInputModule>__;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<Canvas>__;
  puVar2 = Method_UnityEngine_GameObject_AddComponent<AvatarLODParent>__;
  puVar1 = System_Collections_Generic_ICollection<UIVertex>_TypeInfo;
  if (lVar11 != 0) {
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Bullet>__,
                 0xfffff8f0,
                 *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<AvatarLODParent>__);
    FUN_050e25c0(lVar11,*(undefined8 *)puVar3,0xffd7ebfa,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)puVar8,0xffffff00,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)puVar6,0xffd4ff7f,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)puVar4,0xfffffff0,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)puVar10,0xffdcf5f5,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)puVar7,0xffc4e4ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)puVar5,0xff000000,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)puVar9,0xffcdebff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)puVar1,0xffff0000,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<XRHandTrackingEvents>__,
                 0xffe22b8a,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<LODGallerySceneAvatarEntity>__,
                 0xff2a2aa5,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<XRHandMeshController>__,
                 0xff87b8de,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarComputeInterpolatedSkinnedMvRenderable>__
                 ,0xffa09e5f,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<XRHandSkeletonDriver>__,
                 0xff00ff7f,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarGpuInterpolatedSkinnedMvRenderable>__
                 ,0xff1e69d2,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<HmdOffset>__,
                 0xff507fff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<DefaultDeferAgent>__,0xffed9564,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OVRGridCube>__,
                 0xffdcf8ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<DebugInterface>__,
                 0xff3c14dc,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<TMP_SpriteAnimator>__,0xffffff00
                 ,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<DebugManager>__,
                 0xff8b0000,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SphereCollider>__,
                 0xff8b8b00,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarComputeSkinnedRenderable>__
                 ,0xff0b86b8,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<CapsuleCollider>__
                 ,0xffa9a9a9,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TTSSpeaker>__,
                 0xff006400,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__,
                 0xffa9a9a9,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<EventSystem>__,
                 0xff6bb7bd,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarGazeTarget>__,
                 0xff8b008b,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Light>__,
                 0xff2f6b55,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__,
                 0xff008cff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<FirebaseMonoBehaviour>__,
                 0xffcc3299,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<MeshFilter>__,
                 0xff00008b,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OverlayCanvas>__,
                 0xff7a96e9,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<SphereGrabSurface>__,0xff8fbc8f,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<ColliderGrabSurface>__,
                 0xff8b3d48,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__,
                 0xff4f4f2f,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Scrollbar>__,
                 0xff4f4f2f,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Text>__,0xffd1ce00
                 ,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Renderer>__,
                 0xffd30094,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<ScrollRect>__,
                 0xff9314ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarGpuInterpolatedSkinnedRenderable>__
                 ,0xffffbf00,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<HandGrabPose>__,
                 0xff696969,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<PostProcessVolume>__,0xff696969,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<UIBlock2D>__,
                 0xffff901e,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<TriggerEventBroadcaster>__,
                 0xff2222b2,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__,0xfff0faff,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<RectTransform>__,
                 0xff228b22,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SnapZoneOffset>__,
                 0xffff00ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<LODGallerySceneHQAvatarEntity>__
                 ,0xffdcdcdc,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<CanvasGroup>__,
                 0xfffff8f8,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Variables>__,
                 0xff20a5da,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarComputeSkinnedMvRenderable>__
                 ,0xff00d7ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Context>__,
                 0xff808080,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)System_Collections_Generic_ICollection<UILineInfo>_TypeInfo,
                 0xff008000,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<UnityAudioSystem>__,0xff2fffad,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<ONSPPropagationMaterial>__,
                 0xff808080,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<GrabbableChild>__,
                 0xfff0fff0,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<PhysicsRaycaster>__,0xffb469ff,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__,
                 0xff5c5ccd,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<TranscriptionEventListener>__,
                 0xff82004b,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarUnitySkinnedRenderable>__
                 ,0xfff0ffff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Button>__,
                 0xff8ce6f0,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<BoxCollider>__,
                 0xfff5f0ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<LayoutElement>__,
                 0xfffae6e6,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<HandPoseBlender>__
                 ,0xff00fc7c,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<UnityAudioPlayer>__,0xffcdfaff,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<InputBridge>__,
                 0xffe6d8ad,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                 ,0xff8080f0,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<XRUIInputModule>__
                 ,0xffffffe0,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarGpuSkinnedRenderable>__
                 ,0xffd2fafa,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<RigidbodyKinematicLocker>__,
                 0xffd3d3d3,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Image>__,
                 0xff90ee90,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<CanvasTracker>__,
                 0xffd3d3d3,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<MoveTowardsTargetProvider>__,
                 0xffc1b6ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarShaderManagerSingle>__,
                 0xff7aa0ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Cursor>__,
                 0xffaab220,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<ONSPAudioSource>__
                 ,0xffface87,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Camera>__,
                 0xff998877,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<TTSServiceLogging>__,0xff998877,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TouchSimulation>__
                 ,0xffdec4b0,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<CylinderGrabSurface>__,
                 0xffe0ffff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Rigidbody>__,
                 0xff00ff00,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<PanelInputModule>__,0xff32cd32,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<HandGrabInteractable>__,
                 0xffe6f0fa,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<ConfigurableJoint>__,0xffff00ff,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalLightData>__,
                 0xff000080,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<TeleportCandidateComputer>__,
                 0xffaacd66,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OVRSpatialAnchor>__,0xffcd0000,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<VRUISystem>__,
                 0xffd355ba,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TextMeshProUGUI>__
                 ,0xffdb7093,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<WitDictation>__,
                 0xff71b33c,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<XRInteractableSnapVolume>__,
                 0xffee687b,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<CallbackRunner>__,
                 0xff9afa00,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<RectMask2D>__,
                 0xffccd148,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<PointerHandler>__,
                 0xff8515c7,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TMP_Dropdown>__,
                 0xff701919,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__,
                 0xfffafff5,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Image>__,
                 0xffe1e4ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OVRSceneAnchor>__,
                 0xffb5e4ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<TimeBudgetPerFrameDeferAgent>__,
                 0xffaddeff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<SkinnedMeshRenderer>__,
                 0xff800000,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OVRTouchpadHelper>__,0xffe6f5fd,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OVRLipSyncDebugConsole>__,
                 0xff008080,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Grabbable>__,
                 0xff238e6b,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Projectile>__,
                 0xff00a5ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarRenderable>__,
                 0xff0045ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OvrAvatarSocket>__
                 ,0xffd670da,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__,
                 0xffaae8ee,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TMP_SubMeshUI>__,
                 0xff98fb98,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<InteractableTriggerBroadcaster>__
                 ,0xffeeeeaf,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OVRSceneRoom>__,
                 0xff9370db,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OVRRaycaster>__,
                 0xffd5efff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OculusRestarter>__
                 ,0xffb9daff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<BaseInput>__,
                 0xff3f85cd,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OVRMRAudioFilter>__,0xffcbc0ff,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__,
                 0xffdda0dd,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__,
                 0xffe6e0b0,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OVROverlay>__,
                 0xff800080,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<BezierGrabSurface>__,0xff993366,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)PTR_DAT_072a8400,0xff0000ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<CoroutineUtility_CoroutinePerformer>__
                 ,0xff8f8fbc,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OVRManager>__,
                 0xffe16941,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OVRVirtualKeyboard>__,0xff13458b
                 ,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<VRIKRootController>__,0xff7280fa
                 ,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<TeleportArcGravity>__,0xff60a4f4
                 ,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<VRUtils>__,
                 0xff578b2e,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<WitService>__,
                 0xffeef5ff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__,
                 0xff2d52a0,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<ParticleSystem>__,
                 0xffc0c0c0,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<CharacterController>__,
                 0xffebce87,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Wit>__,0xffcd5a6a,
                 *(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<VelocityTracker>__
                 ,0xff908070,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<GrabFreeTransformer>__,
                 0xff908070,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OVROverlayMeshGenerator>__,
                 0xfffafaff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OVRVirtualKeyboardInputFieldTextHandler>__
                 ,0xff7fff00,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TMP_InputField>__,
                 0xffb48246,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_Nova_Compat_NovaHashMap<InternalType_310,_InternalType_282>_Add__,
                 0xff8cb4d2,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<CanvasScaler>__,
                 0xff808000,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarComputeInterpolatedSkinnedRenderable>__
                 ,0xffd8bfd8,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Mask>__,0xff4763ff
                 ,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<OvrAvatarGpuSkinnedMvRenderable>__
                 ,0,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<BoxGrabSurface>__,
                 0xffd0e040,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<TwistRelaxer>__,
                 0xffee82ee,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<LineRenderer>__,
                 0xffb3def5,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)PTR_DAT_072a83f0,0xffffffff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Toggle>__,
                 0xfff5f5f5,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)PTR_DAT_072a83f8,0xff00ffff,*(undefined8 *)puVar2);
    FUN_050e25c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_AddComponent<CanvasRenderTexture_TransformChangeListener>__
                 ,0xff32cd9a,*(undefined8 *)puVar2);
    puVar1 = 
    Method_Unity_Collections_FixedStringMethods_CompareTo<HeapString,_FixedString128Bytes>__;
    **(long **)(*(long *)
                 Method_Unity_Collections_FixedStringMethods_CompareTo<HeapString,_FixedString128Bytes>__
               + 0xb8) = lVar11;
    thunk_FUN_0333a630(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


