/*
FUNCTION_NAME: FUN_06458980
ENTRY_POINT: 06458980
PROGRAM: waitwhat-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;validity_or_gating_hits_12;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_6
*/


undefined8 FUN_06458980(uint param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint local_14;
  
  if ((DAT_07556a08 & 1) == 0) {
    FUN_03188a78(System_Action<RenderTexture>_TypeInfo);
    FUN_03188a78(System_Action<RenderingLayerMask>_TypeInfo);
    FUN_03188a78(System_Action<RequestEventInfo>_TypeInfo);
    FUN_03188a78(System_Action<RequestFailedException>_TypeInfo);
    FUN_03188a78(System_Action<ReusableCollectionItem>_TypeInfo);
    FUN_03188a78(System_Action<SceneAdapter>_TypeInfo);
    FUN_03188a78(System_Action<Scope>_TypeInfo);
    FUN_03188a78(System_Action<SentryUser>_TypeInfo);
    FUN_03188a78(System_Action<ShareAndLocalizeParams>_TypeInfo);
    FUN_03188a78(System_Action<float>_TypeInfo);
    FUN_03188a78(System_Action<SortColumnDescription>_TypeInfo);
    FUN_03188a78(System_Action<Speaker>_TypeInfo);
    FUN_03188a78(System_Action<SpriteAtlas>_TypeInfo);
    FUN_03188a78(System_Action<string>_TypeInfo);
    FUN_03188a78(System_Action<StringBuilder>_TypeInfo);
    FUN_03188a78(System_Action<TMP_TextInfo>_TypeInfo);
    FUN_03188a78(System_Action<Tab>_TypeInfo);
    FUN_03188a78(System_Action<Task>_TypeInfo);
    FUN_03188a78(System_Action<TeleportInteractable>_TypeInfo);
    FUN_03188a78(System_Action<TeleportationMultiAnchorVolume>_TypeInfo);
    FUN_03188a78(System_Action<TextAsset>_TypeInfo);
    FUN_03188a78(System_Action<Texture>_TypeInfo);
    FUN_03188a78(System_Action<TimerState>_TypeInfo);
    FUN_03188a78(System_Action<TrackedDevice>_TypeInfo);
    FUN_03188a78(System_Action<Transform>_TypeInfo);
    FUN_03188a78(PTR_DAT_07105060);
    FUN_03188a78(System_Action<TransformDispatchData>_TypeInfo);
    FUN_03188a78(System_Action<TreeViewExpansionChangedArgs>_TypeInfo);
    FUN_03188a78(System_Action<Type>_TypeInfo);
    FUN_03188a78(System_Action<TypeDispatchData>_TypeInfo);
    FUN_03188a78(System_Action<TypePathVisitor>_TypeInfo);
    FUN_03188a78(System_Action<ulong>_TypeInfo);
    FUN_03188a78(System_Action<VectorImageRenderInfo>_TypeInfo);
    FUN_03188a78(System_Action<VisualElement>_TypeInfo);
    FUN_03188a78(System_Action<XRBodyTransformer>_TypeInfo);
                    /* try { // try from 06458b44 to 06558c07 has its CatchHandler @ 06458b44
                       catch() { ... } // from try @ 06458b44 with catch @ 06458b44
                       catch() { ... } // from try @ 06458d50 with catch @ 06458b44
                       catch() { ... } // from try @ 06458dfc with catch @ 06458b44
                       catch() { ... } // from try @ 06458e6c with catch @ 06458b44
                       catch() { ... } // from try @ 06458ef8 with catch @ 06458b44 */
    FUN_03188a78(System_Action<XRHand>_TypeInfo);
    FUN_03188a78(System_Action<XRInputButtonReader>_TypeInfo);
    FUN_03188a78(System_Action<XRInputSubsystem>_TypeInfo);
    FUN_03188a78(System_Action<XRInputValueReader>_TypeInfo);
    FUN_03188a78(System_Action<XRMovableBody>_TypeInfo);
    FUN_03188a78(System_Action<XRNodeState>_TypeInfo);
    FUN_03188a78(PTR_DAT_07105078);
    FUN_03188a78(System_Action<float3>_TypeInfo);
    FUN_03188a78(System_Action<ATGTextJobSystem_ManagedJobData>_TypeInfo);
    FUN_03188a78(System_Action<Allocator2D_Row>_TypeInfo);
    FUN_03188a78(System_Action<BestFitAllocator_Block>_TypeInfo);
    FUN_03188a78(System_Action<DebugUI_Panel>_TypeInfo);
    FUN_03188a78(System_Action<DynamicAtlas_TextureInfo>_TypeInfo);
    FUN_03188a78(System_Action<HandTracking_SubsystemCreatedEventArgs>_TypeInfo);
    FUN_03188a78(System_Action<InputAction_CallbackContext>_TypeInfo);
    FUN_03188a78(System_Action<InputStateHistory_Record>_TypeInfo);
    FUN_03188a78(System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo);
                    /* try { // try from 06458c08 to 06558c0b has its CatchHandler @ 06458e10 */
                    /* try { // try from 06458c0c to 06558c1b has its CatchHandler @ 06458e34 */
    FUN_03188a78(System_Action<NearFarInteractor_Region>_TypeInfo);
    FUN_03188a78(System_Action<OVRColocationSession_Data>_TypeInfo);
    FUN_03188a78(System_Action<OVRHand_MicrogestureType>_TypeInfo);
    FUN_03188a78(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
                    /* try { // try from 06458c3c to 06558c3f has its CatchHandler @ 06458e00 */
                    /* try { // try from 06458c40 to 06558c4f has its CatchHandler @ 06458e18 */
    FUN_03188a78(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_03188a78(System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
                    /* try { // try from 06458c50 to 06558c5b has its CatchHandler @ 06458e14 */
    FUN_03188a78(System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo);
    FUN_03188a78(System_Action<PointableCanvasModule_Pointer>_TypeInfo);
    FUN_03188a78(System_Action<PropertyContainer_GetPropertyVisitor>_TypeInfo);
                    /* try { // try from 06458c74 to 06558c77 has its CatchHandler @ 06458dfc */
                    /* try { // try from 06458c78 to 06558c87 has its CatchHandler @ 06458e0c */
    FUN_03188a78(System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo);
                    /* try { // try from 06458c88 to 06558c93 has its CatchHandler @ 06458e08 */
    FUN_03188a78(System_Action<XRInputModalityManager_InputMode>_TypeInfo);
    FUN_03188a78(System_Action<ArraySegment<byte>,_FrameFlags>_TypeInfo);
                    /* try { // try from 06458c98 to 06558c9b has its CatchHandler @ 06458e30 */
    FUN_03188a78(System_Action<DebugUI_Field<bool>,_bool>_TypeInfo);
    FUN_03188a78(System_Action<DebugUI_Field<int>,_int>_TypeInfo);
                    /* try { // try from 06458cb0 to 06558cb3 has its CatchHandler @ 06458e3c */
    FUN_03188a78(PTR_DAT_0712d658);
                    /* try { // try from 06458cc4 to 06558ccb has its CatchHandler @ 06458e24 */
    FUN_03188a78(System_Action<DebugUI_Field<Object>,_Object>_TypeInfo);
    FUN_03188a78(System_Action<List<OVRAnchor>,_int>_TypeInfo);
                    /* try { // try from 06458cdc to 06558ce7 has its CatchHandler @ 06458e20 */
    FUN_03188a78(
                System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_03188a78(System_Action<float[],_int>_TypeInfo);
    FUN_03188a78(PTR_DAT_071050d0);
    FUN_03188a78(System_Action<AccessoryUIEntry,_Accessory>_TypeInfo);
                    /* try { // try from 06458d04 to 06558d23 has its CatchHandler @ 06458e1c */
    FUN_03188a78(System_Action<AvatarLOD,_bool>_TypeInfo);
    FUN_03188a78(System_Action<bool,_List<OVRAnchor>>_TypeInfo);
    FUN_03188a78(System_Action<CacheMetadataContent,_CacheMetadata>_TypeInfo);
    FUN_03188a78(System_Action<ClientState,_ClientState>_TypeInfo);
    FUN_03188a78(System_Action<ClientState,_ClientState>_TypeInfo);
                    /* try { // try from 06458d48 to 06558d4f has its CatchHandler @ 06458e38 */
    FUN_03188a78(System_Action<Column,_ColumnDataType>_TypeInfo);
                    /* try { // try from 06458d50 to 06558d9b has its CatchHandler @ 06458b44 */
    FUN_03188a78(PTR_DAT_07143010);
    FUN_03188a78(System_Action<Column,_int>_TypeInfo);
    DAT_07556a08 = 1;
  }
  if ((int)param_1 < 0x79) {
    if ((int)param_1 < 0x22) {
                    /* catch() { ... } // from try @ 06458c78 with catch @ 06458e0c */
                    /* catch() { ... } // from try @ 06458c08 with catch @ 06458e10 */
                    /* catch() { ... } // from try @ 06458c50 with catch @ 06458e14 */
                    /* catch() { ... } // from try @ 06458c40 with catch @ 06458e18 */
                    /* catch() { ... } // from try @ 06458d04 with catch @ 06458e1c */
                    /* catch() { ... } // from try @ 06458cdc with catch @ 06458e20 */
                    /* catch() { ... } // from try @ 06458cc4 with catch @ 06458e24 */
                    /* catch() { ... } // from try @ 06458da0 with catch @ 06458e28 */
      switch(param_1) {
      case 0:
        puVar2 = (undefined8 *)System_Action<TypePathVisitor>_TypeInfo;
        break;
      default:
        goto switchD_06458dac_caseD_2715;
      case 2:
      case 3:
        puVar2 = (undefined8 *)System_Action<StringBuilder>_TypeInfo;
                    /* catch() { ... } // from try @ 06458d9c with catch @ 06458e2c */
                    /* catch() { ... } // from try @ 06458c98 with catch @ 06458e30 */
                    /* catch() { ... } // from try @ 06458c0c with catch @ 06458e34 */
        break;
      case 4:
switchD_06458dac_caseD_2728:
        puVar2 = (undefined8 *)PTR_DAT_071050d0;
        break;
      case 5:
switchD_06458dac_caseD_271d:
        puVar2 = (undefined8 *)System_Action<Transform>_TypeInfo;
        break;
      case 6:
        puVar2 = (undefined8 *)System_Action<TransformDispatchData>_TypeInfo;
        break;
      case 0xd:
        puVar2 = (undefined8 *)System_Action<DebugUI_Field<Object>,_Object>_TypeInfo;
        break;
      case 0xe:
        puVar2 = (undefined8 *)System_Action<XRInputValueReader>_TypeInfo;
        break;
      case 0x11:
        puVar2 = (undefined8 *)System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo;
        break;
      case 0x12:
        puVar2 = (undefined8 *)System_Action<float[],_int>_TypeInfo;
        break;
      case 0x18:
        puVar2 = (undefined8 *)System_Action<List<OVRAnchor>,_int>_TypeInfo;
                    /* catch() { ... } // from try @ 06458e54 with catch @ 06458ef0
                       catch() { ... } // from try @ 06458ee0 with catch @ 06458ef0 */
                    /* try { // try from 06458ef4 to 06558ef7 has its CatchHandler @ 06458f00 */
        break;
      case 0x1f:
        puVar2 = (undefined8 *)System_Action<SentryUser>_TypeInfo;
        break;
      case 0x20:
        puVar2 = (undefined8 *)System_Action<Column,_int>_TypeInfo;
                    /* try { // try from 06458ef8 to 06558f03 has its CatchHandler @ 06458b44 */
                    /* catch() { ... } // from try @ 06458ef4 with catch @ 06458f00 */
        break;
      case 0x21:
        puVar2 = (undefined8 *)System_Action<ClientState,_ClientState>_TypeInfo;
                    /* try { // try from 06458ee0 to 06558eef has its CatchHandler @ 06458ef0 */
      }
      goto LAB_06458f54;
    }
    if (0x37 < param_1) {
      puVar2 = (undefined8 *)PTR_DAT_07105078;
      if ((param_1 != 0x57) &&
         (puVar2 = (undefined8 *)System_Action<DebugUI_Panel>_TypeInfo, param_1 != 0x78))
      goto switchD_06458dac_caseD_2715;
      goto LAB_06458f54;
    }
                    /* try { // try from 06458e54 to 06558e6b has its CatchHandler @ 06458ef0 */
    if (param_1 != 0x32) {
      puVar2 = (undefined8 *)System_Action<SpriteAtlas>_TypeInfo;
      if (param_1 != 0x37) goto switchD_06458dac_caseD_2715;
      goto LAB_06458f54;
    }
switchD_06458dac_caseD_273d:
    puVar2 = (undefined8 *)System_Action<NearFarInteractor_Region>_TypeInfo;
  }
  else {
    if (param_1 < 0x10c) {
      if (param_1 < 0x80) {
        puVar2 = (undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo;
        if ((param_1 != 0x7b) &&
           (puVar2 = (undefined8 *)System_Action<VectorImageRenderInfo>_TypeInfo, param_1 != 0x7f))
        goto switchD_06458dac_caseD_2715;
      }
      else {
        puVar2 = (undefined8 *)System_Action<ClientState,_ClientState>_TypeInfo;
                    /* catch() { ... } // from try @ 06458c74 with catch @ 06458dfc
                       try { // try from 06458dfc to 06558e53 has its CatchHandler @ 06458b44 */
        if ((param_1 != 0xb7) &&
           (puVar2 = (undefined8 *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo,
           param_1 != 0x10b)) goto switchD_06458dac_caseD_2715;
      }
      goto LAB_06458f54;
    }
    if (param_1 < 0x1771) {
                    /* catch() { ... } // from try @ 06458d48 with catch @ 06458e38 */
      puVar2 = (undefined8 *)System_Action<TypeDispatchData>_TypeInfo;
                    /* catch() { ... } // from try @ 06458cb0 with catch @ 06458e3c
                       catch() { ... } // from try @ 06458da4 with catch @ 06458e3c */
      if ((param_1 != 0x3e3) && (puVar2 = (undefined8 *)PTR_DAT_07105060, param_1 != 6000))
      goto switchD_06458dac_caseD_2715;
      goto LAB_06458f54;
    }
                    /* try { // try from 06458d9c to 06558d9f has its CatchHandler @ 06458e2c */
                    /* try { // try from 06458da0 to 06558da3 has its CatchHandler @ 06458e28 */
                    /* try { // try from 06458da4 to 06558da7 has its CatchHandler @ 06458e3c */
    switch(param_1) {
    case 0x2714:
      puVar2 = (undefined8 *)System_Action<DebugUI_Field<bool>,_bool>_TypeInfo;
                    /* try { // try from 06458db4 to 06558dfb has its CatchHandler @ 06458e04 */
      break;
    case 0x2715:
    case 0x2716:
    case 0x2717:
    case 0x2718:
    case 0x271a:
    case 0x271b:
    case 0x271c:
    case 0x271f:
    case 0x2720:
    case 0x2721:
    case 0x2722:
    case 0x2723:
    case 0x2724:
    case 0x2725:
    case 0x2727:
    case 0x2729:
    case 0x272a:
    case 0x272b:
    case 0x272c:
    case 0x272d:
    case 0x272e:
    case 0x272f:
    case 0x2730:
    case 0x2731:
    case 0x2732:
    case 0x2758:
    case 0x2759:
    case 0x275a:
    case 0x275b:
    case 0x275c:
    case 0x275d:
    case 0x275e:
    case 0x275f:
    case 0x2760:
    case 0x2761:
    case 0x2762:
    case 0x2763:
    case 0x2764:
    case 0x2765:
    case 0x2766:
    case 0x2767:
    case 0x2768:
    case 0x2769:
    case 0x276a:
    case 0x276e:
    case 0x276f:
    case 0x2770:
    case 0x2771:
    case 0x2772:
    case 0x2773:
    case 0x2774:
    case 0x277e:
    case 0x277f:
switchD_06458dac_caseD_2715:
      local_14 = param_1;
      uVar1 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x48),&local_14);
      uVar1 = FUN_057b5e54(*(undefined8 *)System_Action<InputAction_CallbackContext>_TypeInfo,uVar1,
                           0);
      return uVar1;
    case 0x2719:
      puVar2 = (undefined8 *)System_Action<bool,_List<OVRAnchor>>_TypeInfo;
      break;
    case 0x271d:
      goto switchD_06458dac_caseD_271d;
    case 0x271e:
      puVar2 = (undefined8 *)System_Action<ArraySegment<byte>,_FrameFlags>_TypeInfo;
      break;
    case 0x2726:
      puVar2 = (undefined8 *)System_Action<TMP_TextInfo>_TypeInfo;
      break;
    case 0x2728:
      goto switchD_06458dac_caseD_2728;
    case 0x2733:
      puVar2 = (undefined8 *)System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo;
      break;
    case 0x2734:
      puVar2 = (undefined8 *)System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo;
      break;
    case 0x2735:
      puVar2 = (undefined8 *)PTR_DAT_07143010;
      break;
    case 0x2736:
      puVar2 = (undefined8 *)System_Action<OVRHand_MicrogestureType>_TypeInfo;
      break;
    case 0x2737:
      puVar2 = (undefined8 *)System_Action<float>_TypeInfo;
      break;
    case 0x2738:
      puVar2 = (undefined8 *)System_Action<float3>_TypeInfo;
      break;
    case 0x2739:
      puVar2 = (undefined8 *)System_Action<TrackedDevice>_TypeInfo;
      break;
    case 0x273a:
      puVar2 = (undefined8 *)System_Action<Task>_TypeInfo;
      break;
    case 0x273b:
      puVar2 = (undefined8 *)System_Action<TeleportInteractable>_TypeInfo;
      break;
    case 0x273c:
      puVar2 = (undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo;
      break;
    case 0x273d:
      goto switchD_06458dac_caseD_273d;
    case 0x273e:
      puVar2 = (undefined8 *)System_Action<XRMovableBody>_TypeInfo;
      break;
    case 0x273f:
      puVar2 = (undefined8 *)System_Action<Allocator2D_Row>_TypeInfo;
      break;
    case 0x2740:
      puVar2 = (undefined8 *)System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
      break;
    case 0x2741:
      puVar2 = (undefined8 *)PTR_DAT_0712d658;
      break;
    case 0x2742:
      puVar2 = (undefined8 *)System_Action<TextAsset>_TypeInfo;
      break;
    case 0x2743:
      puVar2 = (undefined8 *)System_Action<SortColumnDescription>_TypeInfo;
      break;
    case 0x2744:
      puVar2 = (undefined8 *)System_Action<XRBodyTransformer>_TypeInfo;
      break;
    case 0x2745:
      puVar2 = (undefined8 *)System_Action<TimerState>_TypeInfo;
      break;
    case 0x2746:
      puVar2 = (undefined8 *)System_Action<VisualElement>_TypeInfo;
      break;
    case 0x2747:
      puVar2 = (undefined8 *)System_Action<CacheMetadataContent,_CacheMetadata>_TypeInfo;
      break;
    case 0x2748:
      puVar2 = (undefined8 *)System_Action<XRInputButtonReader>_TypeInfo;
      break;
    case 0x2749:
      puVar2 = (undefined8 *)System_Action<Type>_TypeInfo;
      break;
    case 0x274a:
      puVar2 = (undefined8 *)System_Action<XRNodeState>_TypeInfo;
      break;
    case 0x274b:
      puVar2 = (undefined8 *)System_Action<HandTracking_SubsystemCreatedEventArgs>_TypeInfo;
      break;
    case 0x274c:
      puVar2 = (undefined8 *)
               System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
      ;
      break;
    case 0x274d:
      puVar2 = (undefined8 *)System_Action<DynamicAtlas_TextureInfo>_TypeInfo;
      break;
    case 0x274e:
      puVar2 = (undefined8 *)System_Action<Texture>_TypeInfo;
      break;
    case 0x274f:
      puVar2 = (undefined8 *)System_Action<PointableCanvasModule_Pointer>_TypeInfo;
      break;
    case 0x2750:
      puVar2 = (undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo;
      break;
    case 0x2751:
      puVar2 = (undefined8 *)System_Action<PropertyContainer_GetPropertyVisitor>_TypeInfo;
      break;
    case 0x2752:
      puVar2 = (undefined8 *)System_Action<Scope>_TypeInfo;
      break;
    case 0x2753:
      puVar2 = (undefined8 *)System_Action<AvatarLOD,_bool>_TypeInfo;
      break;
    case 0x2754:
      puVar2 = (undefined8 *)System_Action<ShareAndLocalizeParams>_TypeInfo;
      break;
    case 0x2755:
      puVar2 = (undefined8 *)System_Action<RenderTexture>_TypeInfo;
      break;
    case 0x2756:
      puVar2 = (undefined8 *)System_Action<ReusableCollectionItem>_TypeInfo;
      break;
    case 0x2757:
      puVar2 = (undefined8 *)System_Action<RequestEventInfo>_TypeInfo;
      break;
    case 0x276b:
      puVar2 = (undefined8 *)System_Action<ulong>_TypeInfo;
      break;
    case 0x276c:
      puVar2 = (undefined8 *)System_Action<string>_TypeInfo;
      break;
    case 0x276d:
      puVar2 = (undefined8 *)System_Action<SceneAdapter>_TypeInfo;
      break;
    case 0x2775:
      puVar2 = (undefined8 *)System_Action<TeleportationMultiAnchorVolume>_TypeInfo;
      break;
    case 0x2776:
      puVar2 = (undefined8 *)System_Action<Tab>_TypeInfo;
      break;
    case 0x2777:
      puVar2 = (undefined8 *)System_Action<Speaker>_TypeInfo;
      break;
    case 0x2778:
      puVar2 = (undefined8 *)System_Action<InputStateHistory_Record>_TypeInfo;
      break;
    case 0x2779:
      puVar2 = (undefined8 *)System_Action<AccessoryUIEntry,_Accessory>_TypeInfo;
      break;
    case 0x277a:
      puVar2 = (undefined8 *)System_Action<XRHand>_TypeInfo;
      break;
    case 0x277b:
      puVar2 = (undefined8 *)System_Action<RequestFailedException>_TypeInfo;
      break;
    case 0x277c:
      puVar2 = (undefined8 *)System_Action<XRInputModalityManager_InputMode>_TypeInfo;
      break;
    case 0x277d:
      puVar2 = (undefined8 *)System_Action<XRInputSubsystem>_TypeInfo;
      break;
    case 0x2780:
      puVar2 = (undefined8 *)System_Action<ATGTextJobSystem_ManagedJobData>_TypeInfo;
      break;
    default:
      if ((int)param_1 < 0x2afb) {
        puVar2 = (undefined8 *)System_Action<DebugUI_Field<int>,_int>_TypeInfo;
        if ((param_1 != 0x2af9) &&
           (puVar2 = (undefined8 *)System_Action<RenderingLayerMask>_TypeInfo, param_1 != 0x2afa))
        goto switchD_06458dac_caseD_2715;
      }
      else {
        puVar2 = (undefined8 *)System_Action<Column,_ColumnDataType>_TypeInfo;
        if ((param_1 != 0x2afb) &&
           (puVar2 = (undefined8 *)System_Action<TreeViewExpansionChangedArgs>_TypeInfo,
           param_1 != 0x2afc)) goto switchD_06458dac_caseD_2715;
      }
    }
  }
LAB_06458f54:
  return *puVar2;
}


