/*
FUNCTION_NAME: Unity.Mathematics.double3$$op_UnaryNegation
ENTRY_POINT: 05ac7a30
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 214
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_9;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_5;functionality_data_collection_or_telemetry_hits_5;functionality_possible_biometrics_hits_1
*/


void Unity_Mathematics_double3__op_UnaryNegation(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  long *plVar7;
  
  *(undefined8 *)(unaff_x20 + 0x98) = **(undefined8 **)(param_1 + 0x390);
  if (((((((((in_CY && !in_ZR) &&
            (*(undefined8 *)(unaff_x20 + 0xa0) = *(undefined8 *)PTR_DAT_067db078, param_3 != 0x11))
           && (*(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)PTR_DAT_067ca898, 0x12 < param_3))
          && ((*(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)PTR_DAT_067cb1e0, param_3 != 0x13
              && (*(undefined8 *)(unaff_x20 + 0xb8) =
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>_get_data__
                 , 0x14 < param_3)))) &&
         (*(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)PTR_DAT_067db8b8, param_3 != 0x15)) &&
        (((*(undefined8 *)(unaff_x20 + 200) =
                *(undefined8 *)
                 Method_Unity_XR_CoreUtils_Datums_Datum<Vector4AffordanceTheme>__ctor__,
          0x16 < param_3 &&
          (*(undefined8 *)(unaff_x20 + 0xd0) = *(undefined8 *)PTR_DAT_067cde50, param_3 != 0x17)) &&
         ((*(undefined8 *)(unaff_x20 + 0xd8) =
                *(undefined8 *)
                 Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>_get_data__
          , 0x18 < param_3 &&
          (((*(undefined8 *)(unaff_x20 + 0xe0) =
                  *(undefined8 *)
                   Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>__ctor__
            , param_3 != 0x19 &&
            (*(undefined8 *)(unaff_x20 + 0xe8) =
                  *(undefined8 *)
                   UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate_TypeInfo
            , 0x1a < param_3)) &&
           (*(undefined8 *)(unaff_x20 + 0xf0) =
                 *(undefined8 *)
                  System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo,
           param_3 != 0x1b)))))))) &&
       (((((*(undefined8 *)(unaff_x20 + 0xf8) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsRendering>__ctor__
           , 0x1c < param_3 &&
           (*(undefined8 *)(unaff_x20 + 0x100) =
                 *(undefined8 *)
                  System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo,
           param_3 != 0x1d)) &&
          ((*(undefined8 *)(unaff_x20 + 0x108) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsLighting>__ctor__
           , 0x1e < param_3 &&
           ((((((*(undefined8 *)(unaff_x20 + 0x110) =
                      *(undefined8 *)
                       Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsMaterial>_get_data__
                , param_3 != 0x1f &&
                (*(undefined8 *)(unaff_x20 + 0x118) =
                      *(undefined8 *)
                       System_Collections_Generic_List<WeakReference<VisualElement>>_TypeInfo,
                0x20 < param_3)) &&
               ((*(undefined8 *)(unaff_x20 + 0x120) = *(undefined8 *)PTR_DAT_067d5ea0,
                param_3 != 0x21 &&
                (((*(undefined8 *)(unaff_x20 + 0x128) = *(undefined8 *)PTR_DAT_067d9410,
                  0x22 < param_3 &&
                  (*(undefined8 *)(unaff_x20 + 0x130) =
                        *(undefined8 *)
                         System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo,
                  param_3 != 0x23)) &&
                 (*(undefined8 *)(unaff_x20 + 0x138) =
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_DebugDisplaySettingsPanel<DebugDisplaySettingsVolume>__ctor__
                 , 0x24 < param_3)))))) &&
              ((*(undefined8 *)(unaff_x20 + 0x140) =
                     *(undefined8 *)System_Collections_Hashtable_ValueCollection_TypeInfo,
               param_3 != 0x25 &&
               (*(undefined8 *)(unaff_x20 + 0x148) = *(undefined8 *)PTR_DAT_067d7df8, 0x26 < param_3
               )))) && (*(undefined8 *)(unaff_x20 + 0x150) =
                             *(undefined8 *)System_Collections_Hashtable_SyncHashtable_TypeInfo,
                       param_3 != 0x27)) &&
            (((*(undefined8 *)(unaff_x20 + 0x158) = *(undefined8 *)PTR_DAT_067cde60, 0x28 < param_3
              && (*(undefined8 *)(unaff_x20 + 0x160) = *(undefined8 *)PTR_DAT_067d52c0,
                 param_3 != 0x29)) &&
             ((*(undefined8 *)(unaff_x20 + 0x168) = *(undefined8 *)PTR_DAT_067db600, 0x2a < param_3
              && ((((*(undefined8 *)(unaff_x20 + 0x170) = *(undefined8 *)PTR_DAT_067db5f8,
                    param_3 != 0x2b &&
                    (*(undefined8 *)(unaff_x20 + 0x178) = *(undefined8 *)PTR_DAT_067db638,
                    0x2c < param_3)) &&
                   (*(undefined8 *)(unaff_x20 + 0x180) = *(undefined8 *)PTR_DAT_067db650,
                   param_3 != 0x2d)) &&
                  ((*(undefined8 *)(unaff_x20 + 0x188) = *(undefined8 *)PTR_DAT_067db610,
                   0x2e < param_3 &&
                   (*(undefined8 *)(unaff_x20 + 400) = *(undefined8 *)PTR_DAT_067db630,
                   param_3 != 0x2f)))))))))))))) &&
         ((*(undefined8 *)(unaff_x20 + 0x198) = *(undefined8 *)PTR_DAT_067db648, 0x30 < param_3 &&
          ((*(undefined8 *)(unaff_x20 + 0x1a0) = *(undefined8 *)PTR_DAT_067db608, param_3 != 0x31 &&
           (*(undefined8 *)(unaff_x20 + 0x1a8) = *(undefined8 *)PTR_DAT_067d52c8, 0x32 < param_3))))
         )) && ((*(undefined8 *)(unaff_x20 + 0x1b0) =
                      *(undefined8 *)
                       Method_System_Reflection_AssemblyName_InternalGetPublicKeyToken__,
                param_3 != 0x33 &&
                (((*(undefined8 *)(unaff_x20 + 0x1b8) =
                        *(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_LocalizedTextElement_<UpdateTextWithCurrentLocale>d__21>__
                  , 0x34 < param_3 &&
                  (*(undefined8 *)(unaff_x20 + 0x1c0) =
                        *(undefined8 *)
                         Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<int>__,
                  param_3 != 0x35)) &&
                 (*(undefined8 *)(unaff_x20 + 0x1c8) =
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ParseConstructorAsync>d__25>__
                 , 0x36 < param_3)))))))) &&
      ((((*(undefined8 *)(unaff_x20 + 0x1d0) =
               *(undefined8 *)Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__,
         param_3 != 0x37 &&
         (*(undefined8 *)(unaff_x20 + 0x1d8) =
               *(undefined8 *)Method_System_Threading_AsyncFlowControl_Undo__, 0x38 < param_3)) &&
        (*(undefined8 *)(unaff_x20 + 0x1e0) =
              *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Message>,_FriendsMatchmaking_<RegisterGameRoom>d__27>__
        , param_3 != 0x39)) &&
       (((*(undefined8 *)(unaff_x20 + 0x1e8) =
               *(undefined8 *)Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_Read__,
         0x3a < param_3 &&
         (*(undefined8 *)(unaff_x20 + 0x1f0) =
               *(undefined8 *)
                Method_Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_LoadAssembliesAsync__,
         param_3 != 0x3b)) &&
        (((*(undefined8 *)(unaff_x20 + 0x1f8) =
                *(undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<char>,_JsonTextReader_<ReadStringIntoBufferAsync>d__9>__
          , 0x3c < param_3 &&
          (((*(undefined8 *)(unaff_x20 + 0x200) =
                  *(undefined8 *)Method_System_Reflection_AssemblyName_GetPublicKeyToken__,
            param_3 != 0x3d &&
            (*(undefined8 *)(unaff_x20 + 0x208) =
                  *(undefined8 *)Method_System_Reflection_AssemblyName__ctor__, 0x3e < param_3)) &&
           (*(undefined8 *)(unaff_x20 + 0x210) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JContainer_<ReadContentFromAsync>d__1>__
           , param_3 != 0x3f)))) &&
         ((*(undefined8 *)(unaff_x20 + 0x218) =
                *(undefined8 *)Method_System_Reflection_Assembly_GetName__, 0x40 < param_3 &&
          (*(undefined8 *)(unaff_x20 + 0x220) =
                *(undefined8 *)Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__
          , param_3 != 0x41)))))))))) &&
     ((((((*(undefined8 *)(unaff_x20 + 0x228) =
                *(undefined8 *)
                 Method_UnityEngine_Assertions_Assert_IsNotNull<BaseVerticalCollectionView>__,
          0x42 < param_3 &&
          ((((*(undefined8 *)(unaff_x20 + 0x230) =
                   *(undefined8 *)
                    Method_UnityEngine_Accessibility_AssistiveSupport_ScreenReaderStatusChanged__,
             param_3 != 0x43 &&
             (*(undefined8 *)(unaff_x20 + 0x238) =
                   *(undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<XRHandJointsUpdatedEventArgs>_RemoveListener__
             , 0x44 < param_3)) &&
            ((*(undefined8 *)(unaff_x20 + 0x240) =
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<AsyncProtocolResult>,_MobileAuthenticatedStream_<ProcessAuthentication>d__48>__
             , param_3 != 0x45 &&
             ((((*(undefined8 *)(unaff_x20 + 0x248) =
                      *(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<ValueTuple<WebHeaderCollection,_byte[],_int>>,_WebConnectionTunnel_<Initialize>d__42>__
                , 0x46 < param_3 &&
                (*(undefined8 *)(unaff_x20 + 0x250) =
                      *(undefined8 *)Method_System_Reflection_Assembly_GetObjectData__,
                param_3 != 0x47)) &&
               (*(undefined8 *)(unaff_x20 + 600) =
                     *(undefined8 *)Method_System_Reflection_AssemblyFileVersionAttribute__ctor__,
               0x48 < param_3)) &&
              ((*(undefined8 *)(unaff_x20 + 0x260) =
                     *(undefined8 *)Method_System_Reflection_Assembly_LoadWithPartialName__,
               param_3 != 0x49 &&
               (*(undefined8 *)(unaff_x20 + 0x268) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadStringIntoBufferAsync>d__9>__
               , 0x4a < param_3)))))))) &&
           (*(undefined8 *)(unaff_x20 + 0x270) =
                 *(undefined8 *)Method_UnityEngine_Assertions_Assert_Fail__, param_3 != 0x4b)))) &&
         ((*(undefined8 *)(unaff_x20 + 0x278) =
                *(undefined8 *)Method_UnityEngine_Accessibility_AssistiveSupport_NodeFocusChanged__,
          0x4c < param_3 &&
          (*(undefined8 *)(unaff_x20 + 0x280) =
                *(undefined8 *)Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
          , param_3 != 0x4d)))) &&
        ((*(undefined8 *)(unaff_x20 + 0x288) =
               *(undefined8 *)Method_System_Reflection_AssemblyName_GetObjectData__, 0x4e < param_3
         && (((*(undefined8 *)(unaff_x20 + 0x290) =
                    *(undefined8 *)
                     Method_System_Runtime_CompilerServices_AsyncTaskCache_CreateCacheableTask<int>__
              , param_3 != 0x4f &&
              (*(undefined8 *)(unaff_x20 + 0x298) =
                    *(undefined8 *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JContainer_<ReadTokenFromAsync>d__0>__
              , 0x50 < param_3)) &&
             (*(undefined8 *)(unaff_x20 + 0x2a0) =
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadNumberIntoBufferAsync>d__32>__
             , param_3 != 0x51)))))) &&
       ((((*(undefined8 *)(unaff_x20 + 0x2a8) =
                *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__,
          0x52 < param_3 &&
          (*(undefined8 *)(unaff_x20 + 0x2b0) =
                *(undefined8 *)Method_System_Reflection_Assembly_get_MonoAssembly__, param_3 != 0x53
          )) && (*(undefined8 *)(unaff_x20 + 0x2b8) =
                      *(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<MatchAndSetAsync>d__21>__
                , 0x54 < param_3)) &&
        (((*(undefined8 *)(unaff_x20 + 0x2c0) =
                *(undefined8 *)
                 Method_System_Runtime_Remoting_Messaging_AsyncResult_AsyncProcessMessage__,
          param_3 != 0x55 &&
          (*(undefined8 *)(unaff_x20 + 0x2c8) =
                *(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__, 0x56 < param_3)) &&
         ((*(undefined8 *)(unaff_x20 + 0x2d0) =
                *(undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseCommentAsync>d__16>__
          , param_3 != 0x57 &&
          (((*(undefined8 *)(unaff_x20 + 0x2d8) =
                  *(undefined8 *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_WebResponseStream_<ReadAllAsync>d__48>__
            , 0x58 < param_3 &&
            (*(undefined8 *)(unaff_x20 + 0x2e0) =
                  *(undefined8 *)Method_System_Reflection_Assembly_GetReferencedAssemblies__,
            param_3 != 0x59)) &&
           (*(undefined8 *)(unaff_x20 + 0x2e8) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ParseCommentAsync>d__16>__
           , 0x5a < param_3)))))))))) &&
      ((((*(undefined8 *)(unaff_x20 + 0x2f0) =
               *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__,
         param_3 != 0x5b &&
         (*(undefined8 *)(unaff_x20 + 0x2f8) =
               *(undefined8 *)
                Method_UnityEngine_Accessibility_AssistiveSupport_GetService<AccessibilityHierarchyService>__
         , 0x5c < param_3)) &&
        (*(undefined8 *)(unaff_x20 + 0x300) =
              *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadScene>d__63>__
        , param_3 != 0x5d)) &&
       (((((*(undefined8 *)(unaff_x20 + 0x308) =
                 *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<int>__, 0x5e < param_3
           && (*(undefined8 *)(unaff_x20 + 0x310) =
                    *(undefined8 *)
                     Method_Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_GetAllAssemblies__,
              param_3 != 0x5f)) &&
          ((*(undefined8 *)(unaff_x20 + 0x318) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<EatWhitespaceAsync>d__17>__
           , 0x60 < param_3 &&
           (((((*(undefined8 *)(unaff_x20 + 800) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_WebResponseStream_<InitReadAsync>d__52>__
               , param_3 != 0x61 &&
               (*(undefined8 *)(unaff_x20 + 0x328) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadFinishedAsync>d__36>__
               , 0x62 < param_3)) &&
              (*(undefined8 *)(unaff_x20 + 0x330) =
                    *(undefined8 *)
                     Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__,
              param_3 != 99)) &&
             ((*(undefined8 *)(unaff_x20 + 0x338) =
                    *(undefined8 *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<byte[]>,_WebResponseStream_<ReadAllAsync>d__48>__
              , 100 < param_3 &&
              (*(undefined8 *)(unaff_x20 + 0x340) =
                    *(undefined8 *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_WebRequestStream_<WriteChunkTrailer>d__40>__
              , param_3 != 0x65)))) &&
            (*(undefined8 *)(unaff_x20 + 0x348) =
                  *(undefined8 *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_ServicePointScheduler_<RunScheduler>d__32>__
            , 0x66 < param_3)))))) &&
         (((*(undefined8 *)(unaff_x20 + 0x350) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>,_SpatialAnchorCoreBuildingBlock_<SaveAsync>d__23>__
           , param_3 != 0x67 &&
           (*(undefined8 *)(unaff_x20 + 0x358) =
                 *(undefined8 *)Method_System_Reflection_Assembly_GetModulesInternal__,
           0x68 < param_3)) &&
          ((*(undefined8 *)(unaff_x20 + 0x360) =
                 *(undefined8 *)Method_System_Reflection_Assembly_get_Location__, param_3 != 0x69 &&
           (((((*(undefined8 *)(unaff_x20 + 0x368) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonWriter_<WriteTokenSyncReadingAsync>d__31>__
               , 0x6a < param_3 &&
               (*(undefined8 *)(unaff_x20 + 0x370) =
                     *(undefined8 *)Method_System_Reflection_Assembly_get_FullName__,
               param_3 != 0x6b)) &&
              (*(undefined8 *)(unaff_x20 + 0x378) =
                    *(undefined8 *)
                     Method_UnityEngine_Rendering_AsyncGPUReadback_RequestIntoNativeArray<float>__,
              0x6c < param_3)) &&
             (((*(undefined8 *)(unaff_x20 + 0x380) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskCache_CreateCacheableTask<bool>__
               , param_3 != 0x6d &&
               (*(undefined8 *)(unaff_x20 + 0x388) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_LocalMatchmaking_<StartAsHost>d__14>__
               , 0x6f < param_3)) &&
              ((*(undefined8 *)(unaff_x20 + 0x398) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>,_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
               , param_3 != 0x70 &&
               ((*(undefined8 *)(unaff_x20 + 0x3a0) =
                      *(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_FriendsMatchmaking_<JoinRoom>d__25>__
                , 0x71 < param_3 &&
                (*(undefined8 *)(unaff_x20 + 0x3a8) =
                      *(undefined8 *)
                       Method_Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_GetImmersiveDebuggerEnabled__
                , param_3 != 0x72)))))))) &&
            (*(undefined8 *)(unaff_x20 + 0x3b0) =
                  *(undefined8 *)Method_System_Reflection_Assembly_get_CodeBase__, 0x73 < param_3)))
           ))))) &&
        (((((*(undefined8 *)(unaff_x20 + 0x3b8) =
                  *(undefined8 *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonReader_<SkipAsync>d__1>__
            , param_3 != 0x74 &&
            (*(undefined8 *)(unaff_x20 + 0x3c0) =
                  *(undefined8 *)Method_UnityEngine_AssetBundle_LoadAsset__, 0x75 < param_3)) &&
           (*(undefined8 *)(unaff_x20 + 0x3c8) =
                 *(undefined8 *)
                  Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__,
           param_3 != 0x76)) &&
          ((*(undefined8 *)(unaff_x20 + 0x3d0) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Nullable<int>>,_AsyncProtocolRequest_<ProcessOperation>d__24>__
           , 0x77 < param_3 &&
           (*(undefined8 *)(unaff_x20 + 0x3d8) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ProcessCarriageReturnAsync>d__11>__
           , param_3 != 0x78)))) &&
         ((*(undefined8 *)(unaff_x20 + 0x3e0) =
                *(undefined8 *)Method_System_Reflection_Assembly_IsDefined__, 0x79 < param_3 &&
          (*(undefined8 *)(unaff_x20 + 1000) =
                *(undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_LocalMatchmaking_<StartAsHost>d__14>__
          , puVar1 = Method_System_Reflection_Assembly_GetModule__, param_3 != 0x7a)))))))))))) {
    *(undefined8 *)(unaff_x20 + 0x3f0) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonWriter_<WriteTokenAsync>d__30>__
    ;
    uVar2 = FUN_02f0880c(*(undefined8 *)puVar1);
    uVar5 = *(ulong *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x1d0) = uVar2;
    if (0 < (int)uVar5) {
      uVar6 = 0;
      uVar5 = uVar5 & 0xffffffff;
      do {
        if (uVar5 <= uVar6) goto LAB_05ac85c0;
        uVar5 = FUN_04f6ebb4(*(undefined8 *)(unaff_x20 + uVar6 * 8 + 0x20),0);
        if ((uVar5 & 1) == 0) {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar6) goto LAB_05ac85c0;
          plVar7 = *(long **)(unaff_x19 + 0x1d0);
          lVar3 = FUN_03440bb0();
          if (plVar7 == (long *)0x0) {
Unity_Mathematics_double3x2___ctor:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
            uVar2 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar2,0);
          }
          if (*(uint *)(plVar7 + 3) <= uVar6) goto LAB_05ac85c0;
          plVar7[uVar6 + 4] = lVar3;
          lVar3 = *(long *)(unaff_x19 + 0x1d0);
          if (lVar3 == 0) goto Unity_Mathematics_double3x2___ctor;
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_05ac85c0;
          lVar3 = *(long *)(lVar3 + uVar6 * 8 + 0x20);
          if (lVar3 == 0) goto Unity_Mathematics_double3x2___ctor;
          *(int *)(lVar3 + 0x140) = (int)uVar6 + 1;
        }
        uVar6 = uVar6 + 1;
        uVar5 = (ulong)*(uint *)(unaff_x20 + 0x18);
      } while ((long)uVar6 < (long)(int)*(uint *)(unaff_x20 + 0x18));
    }
    uVar2 = FUN_03440bb0();
    *(undefined8 *)(unaff_x19 + 0x188) = uVar2;
    uVar2 = FUN_03440bb0();
    *(undefined8 *)(unaff_x19 + 400) = uVar2;
    uVar2 = FUN_03440bb0();
    *(undefined8 *)(unaff_x19 + 0x198) = uVar2;
    uVar2 = FUN_03440bb0();
    *(undefined8 *)(unaff_x19 + 0x1a0) = uVar2;
    uVar2 = FUN_03440bb0();
    *(undefined8 *)(unaff_x19 + 0x1a8) = uVar2;
    FUN_05abc18c();
    return;
  }
LAB_05ac85c0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


