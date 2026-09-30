/*
FUNCTION_NAME: UnityEngine.EventSystems.PointerInputModule$$GetPointerData
ENTRY_POINT: 06bbea48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 280
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_16;ray_or_cast_sink_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_14;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_EventSystems_PointerInputModule__GetPointerData(void)

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
  
  FUN_03188a78();
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<byte,_HashSet<Player>>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<byte,_PhotonTeam>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<Collider,_IXRInteractable>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<HandJointId,_JointDeltaProvider_PoseData[]>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<HandSynchronizationBoneId,_Quaternion>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<int,_List<HandJointId>>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<int,_IInitializablePackage>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<int,_IServiceComponent>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<int,_Player>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<int,_float>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<int,_ProbeReferenceVolume_CellDesc>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<OVRGrabbable,_int>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<object,_object>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<ParameterExpression,_LocalVariable>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<Rigidbody,_bool>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<string,_bool>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<string,_RuntimeConfig>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<string,_SessionProperty>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<string,_string>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<string,_SQLiteConnection_IndexInfo>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<string,_ServicePointScheduler_ConnectionGroup>_CopyTo__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<AxisAlignedBox_BoxSurface,_float>_GetEnumerator__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_Dictionary_KeyCollection<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
              );
  FUN_03188a78(Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<byte,_object>_Dispose__
              );
  FUN_03188a78(
              Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<byte,_object>_GetEnumerator__
              );
  FUN_03188a78(
              Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<byte,_object>_MoveNext__
              );
  FUN_03188a78(
              Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<byte,_object>_get_Current__
              );
  FUN_03188a78(
              Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<int,_NCommand>_Dispose__
              );
  FUN_03188a78(
              Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<int,_NCommand>_GetEnumerator__
              );
  FUN_03188a78(
              Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<int,_NCommand>_MoveNext__
              );
  FUN_03188a78(PTR_DAT_070cb820);
  FUN_03188a78(
              Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<int,_NCommand>_get_Current__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Value__
              );
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>__ctor__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__);
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
              );
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<byte,_LocalVoice>_get_Value__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<byte,_object>_get_Key__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<byte,_object>_get_Value__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<byte,_RemoteVoice>_get_Key__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<byte,_RemoteVoice>_get_Value__);
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_Deconstruct__
              );
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<Collider,_IXRInteractable>_get_Key__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<Collider,_IXRInteractable>_get_Value__
              );
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Key__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Value__);
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<DiscardReasonWithCategory,_int>_get_Key__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<DiscardReasonWithCategory,_int>_get_Value__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Key__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Value__
              );
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<Guid,_SubCategory>_get_Value__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<HTTP2Settings,_uint>__ctor__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<HTTP2Settings,_uint>_get_Key__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<HTTP2Settings,_uint>_get_Value__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<Hash128,_DNSCacheEntry>_get_Key__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<Hash128,_DNSCacheEntry>_get_Value__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<HostKey,_HostVariant>_get_Value__);
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Key__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Value__
              );
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Key__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Value__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<InstanceHandle,_Inspector>_get_Value__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<byte,_RemoteVoice>>_get_Value__
              );
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<int,_List<Volume>>_get_Key__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<int,_List<Volume>>_get_Value__);
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_get_Value__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<int,_ValueTuple<object,_OvrAvatarMaterial_PropertyType>>_get_Key__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<int,_ValueTuple<object,_OvrAvatarMaterial_PropertyType>>_get_Value__
              );
  FUN_03188a78(
              Method_System_Collections_Generic_KeyValuePair<int,_ValueTuple<RTHandle,_int>>_get_Value__
              );
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<int,_byte[]>_get_Key__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<int,_byte[]>_get_Value__);
  FUN_03188a78(Method_System_Collections_Generic_KeyValuePair<int,_RTHandle[]>_get_Value__);
  FUN_03188a78(PTR_DAT_0710d3e8);
  *(undefined1 *)(unaff_x20 + 0x426) = 1;
  lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x21);
  FUN_05233c70(lVar11,*unaff_x19);
  puVar10 = Method_System_Collections_Generic_KeyValuePair<Hash128,_DNSCacheEntry>_get_Value__;
  puVar9 = Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__;
  puVar8 = 
  Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<byte,_object>_GetEnumerator__;
  puVar7 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection<string,_ServicePointScheduler_ConnectionGroup>_CopyTo__
  ;
  puVar6 = Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_get_Values__;
  puVar5 = Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_get_Keys__;
  puVar4 = Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_TryRemoveProperty__;
  puVar3 = Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_Clear__;
  puVar2 = Method_System_Text_Json_Serialization_JsonConverter<Nullable<UIntPtr>>__ctor__;
  puVar1 = 
  Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_object>>_set_ObjectCreator__
  ;
  if (lVar11 != 0) {
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<GrowableArray<int>>_set_NumberHandling__
                 ,0xfffff8f0,
                 *(undefined8 *)
                  Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_object>>_set_ObjectCreator__
                );
    FUN_052345a8(lVar11,*(undefined8 *)puVar2,0xffd7ebfa,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)puVar8,0xffffff00,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)puVar5,0xffd4ff7f,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)puVar3,0xfffffff0,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)puVar10,0xffdcf5f5,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)puVar6,0xffc4e4ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)puVar4,0xff000000,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)puVar9,0xffcdebff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)puVar7,0xffff0000,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_ValueTuple<object,_OvrAvatarMaterial_PropertyType>>_get_Value__
                 ,0xffe22b8a,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_ContainsKey__,
                 0xff2a2aa5,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_get_Value__
                 ,0xff87b8de,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<int,_List<HandJointId>>_GetEnumerator__
                 ,0xffa09e5f,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_ValueTuple<object,_OvrAvatarMaterial_PropertyType>>_get_Key__
                 ,0xff00ff7f,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<int,_ProbeReferenceVolume_CellDesc>_GetEnumerator__
                 ,0xff1e69d2,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_Metadata_JsonParameterInfo<sbyte>__ctor__
                 ,0xff507fff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<JsonObject>__ctor__,
                 0xffed9564,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonPropertyInfo>_TryAdd__,
                 0xffdcf8ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<JsonDocument>__ctor__,
                 0xff3c14dc,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<byte,_object>_get_Value__,
                 0xffffff00,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<JsonElement>__ctor__,
                 0xff8b0000,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                 ,0xff8b8b00,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<int,_Player>_GetEnumerator__
                 ,0xff0b86b8,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<DateTime>__ctor__,
                 0xffa9a9a9,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_Deconstruct__
                 ,0xff006400,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<bool>__ctor__,
                 0xffa9a9a9,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<object>__ctor__,
                 0xff6bb7bd,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<int,_float>_GetEnumerator__
                 ,0xff8b008b,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_GetValueCollection__
                 ,0xff2f6b55,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<IntPtr>__ctor__,
                 0xff008cff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<object>_TryWrite__,
                 0xffcc3299,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_get_Count__,
                 0xff00008b,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_GetEnumerator__
                 ,0xff7a96e9,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                 ,0xff8fbc8f,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<Decimal>__ctor__,
                 0xff8b3d48,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<JsonValue>__ctor__,
                 0xff4f4f2f,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
                 ,0xff4f4f2f,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Key__,
                 0xffd1ce00,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<int,_NCommand>_Dispose__
                 ,0xffd30094,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<int,_NCommand>_get_Current__
                 ,0xff9314ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<OVRGrabbable,_int>_GetEnumerator__
                 ,0xffffbf00,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<Uri>__ctor__,0xff696969
                 ,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
                 ,0xff696969,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<HTTP2Settings,_uint>_get_Key__
                 ,0xffff901e,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<Guid,_SubCategory>_get_Value__
                 ,0xff2222b2,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<ulong>__ctor__,
                 0xfff0faff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<byte,_object>_get_Current__
                 ,0xff228b22,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>__ctor__,
                 0xffff00ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_CopyTo__,
                 0xffdcdcdc,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<byte[]>__ctor__,
                 0xfffff8f8,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Value__
                 ,0xff20a5da,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<int,_IServiceComponent>_GetEnumerator__
                 ,0xff00d7ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<short>__ctor__,
                 0xff808080,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<double>__ctor__,
                 0xff008000,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<Hash128,_DNSCacheEntry>_get_Key__
                 ,0xff2fffad,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonPropertyInfo>__ctor__,
                 0xff808080,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<uint>__ctor__,
                 0xfff0fff0,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
                 ,0xffb469ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<string>__ctor__,
                 0xff5c5ccd,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Value__
                 ,0xff82004b,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<string,_SessionProperty>_GetEnumerator__
                 ,0xfff0ffff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<GrowableArray<int>>_set_ObjectCreator__
                 ,0xff8ce6f0,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<GrowableArray<int>>_set_ElementInfo__
                 ,0xfff5f0ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_GetEnumerator__,
                 0xfffae6e6,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<Version>__ctor__,
                 0xff00fc7c,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<HTTP2Settings,_uint>_get_Value__
                 ,0xffcdfaff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_Add__,0xffe6d8ad,
                 *(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<HandSynchronizationBoneId,_Quaternion>_GetEnumerator__
                 ,0xff8080f0,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_byte[]>_get_Key__,
                 0xffffffe0,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<ParameterExpression,_LocalVariable>_GetEnumerator__
                 ,0xffd2fafa,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<int,_NCommand>_MoveNext__
                 ,0xffd3d3d3,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_Add__,0xff90ee90,
                 *(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<char>__ctor__,
                 0xffd3d3d3,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonParameterInfo>__ctor__,
                 0xffc1b6ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<string,_bool>_GetEnumerator__
                 ,0xff7aa0ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<int>__ctor__,0xffaab220
                 ,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonParameterInfo>_Add__,
                 0xffface87,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<Nullable<IntPtr>>__ctor__
                 ,0xff998877,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<byte,_RemoteVoice>_get_Value__
                 ,0xff998877,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Key__
                 ,0xffdec4b0,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<long>__ctor__,
                 0xffe0ffff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<int,_NCommand>_GetEnumerator__
                 ,0xff00ff00,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<string,_string>_GetEnumerator__
                 ,0xff32cd32,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<UIntPtr>__ctor__,
                 0xffe6f0fa,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<Guid>__ctor__,
                 0xffff00ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<HostKey,_HostVariant>_get_Value__
                 ,0xff000080,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<Collider,_IXRInteractable>_get_Value__
                 ,0xffaacd66,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)Method_System_Text_Json_Nodes_JsonValue<string>_get_Value__,
                 0xffcd0000,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Value__
                 ,0xffd355ba,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Value__,
                 0xffdb7093,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_List<Volume>>_get_Key__
                 ,0xff71b33c,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_ValueTuple<RTHandle,_int>>_get_Value__
                 ,0xffee687b,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<GrowableArray<int>>_set_SerializeHandler__
                 ,0xff9afa00,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<byte,_object>_MoveNext__
                 ,0xffccd148,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<AxisAlignedBox_BoxSurface,_float>_GetEnumerator__
                 ,0xff8515c7,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<byte,_LocalVoice>_get_Value__
                 ,0xff701919,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<JsonNode>__ctor__,
                 0xfffafff5,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>__ctor__,0xffe1e4ff
                 ,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Nodes_JsonValueTrimmable<JsonElement>__ctor__,
                 0xffb5e4ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<DiscardReasonWithCategory,_int>_get_Key__
                 ,0xffaddeff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Value__
                 ,0xff800000,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<byte,_HashSet<Player>>_GetEnumerator__
                 ,0xffe6f5fd,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonPropertyInfo>_get_Count__
                 ,0xff008080,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<ushort>__ctor__,
                 0xff238e6b,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_ExitGames_Client_Photon_NonAllocDictionary_KeyIterator<byte,_object>_Dispose__
                 ,0xff00a5ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<Rigidbody,_bool>_GetEnumerator__
                 ,0xff0045ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<string,_RuntimeConfig>_GetEnumerator__
                 ,0xffd670da,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<sbyte>__ctor__,
                 0xffaae8ee,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<byte,_RemoteVoice>_get_Key__
                 ,0xff98fb98,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_Contains__,
                 0xffeeeeaf,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Nodes_JsonValue<JsonElement>_get_Value__,0xff9370db
                 ,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_Metadata_JsonPropertyInfo<sbyte>__ctor__
                 ,0xffd5efff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<HandJointId,_JointDeltaProvider_PoseData[]>_GetEnumerator__
                 ,0xffb9daff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_object>>_set_SerializeHandler__
                 ,0xff3f85cd,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonPropertyInfo>_get_Item__
                 ,0xffcbc0ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<float>__ctor__,
                 0xffdda0dd,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__
                 ,0xffe6e0b0,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonPropertyInfo>_set_Item__
                 ,0xff800080,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<GrowableArray<int>>__ctor__
                 ,0xff993366,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)PTR_DAT_0710d3e0,0xff0000ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_RTHandle[]>_get_Value__
                 ,0xff8f8fbc,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonPropertyInfo>_get_List__
                 ,0xffe16941,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<byte,_PhotonTeam>_GetEnumerator__
                 ,0xff13458b,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Key__
                 ,0xff7280fa,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<Collider,_IXRInteractable>_get_Key__
                 ,0xff60a4f4,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Key__
                 ,0xff578b2e,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_List<Volume>>_get_Value__
                 ,0xffeef5ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<JsonArray>__ctor__,
                 0xff2d52a0,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<string,_SQLiteConnection_IndexInfo>_GetEnumerator__
                 ,0xffc0c0c0,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<DateTimeOffset>__ctor__
                 ,0xffebce87,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_Dictionary<byte,_RemoteVoice>>_get_Value__
                 ,0xffcd5a6a,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<InstanceHandle,_Inspector>_get_Value__
                 ,0xff908070,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<TimeSpan>__ctor__,
                 0xff908070,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_Metadata_JsonPropertyInfo<object>__ctor__
                 ,0xfffafaff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<Collider,_IXRInteractable>_GetEnumerator__
                 ,0xff7fff00,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<byte,_object>_get_Key__,
                 0xffb48246,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<SerializableExtensions_<SerializeToStringAsync>d__0>__
                 ,0xff8cb4d2,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_JsonConverter<byte>__ctor__,
                 0xff808000,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<int,_IInitializablePackage>_GetEnumerator__
                 ,0xffd8bfd8,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_TryGetValue__,
                 0xff4763ff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<object,_object>_GetEnumerator__
                 ,0,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<GrowableArray<int>>_set_KeyInfo__
                 ,0xffd0e040,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<HTTP2Settings,_uint>__ctor__
                 ,0xffee82ee,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Text_Json_JsonPropertyDictionary<JsonNode>_SetValue__,
                 0xffb3def5,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)PTR_DAT_0710d3e8,0xffffffff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<DiscardReasonWithCategory,_int>_get_Value__
                 ,0xfff5f5f5,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)PTR_DAT_070cb820,0xff00ffff,*(undefined8 *)puVar1);
    FUN_052345a8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_byte[]>_get_Value__,
                 0xff32cd9a,*(undefined8 *)puVar1);
    **(long **)(*(long *)
                 Method_System_Collections_Generic_List_Enumerator<OVRSceneAnchor>_MoveNext__ + 0xb8
               ) = lVar11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


