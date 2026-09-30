/*
FUNCTION_NAME: UnityEngine.InputSystem.Users.InputUser$$get_hasMissingRequiredDevices
ENTRY_POINT: 06c66484
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 200
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_InputSystem_Users_InputUser__get_hasMissingRequiredDevices(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  *(undefined8 *)(param_1 + 0x990) = unaff_x20;
  thunk_FUN_036b7ad0();
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)UnityEngine_Pool_ObjectPool<Event>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x998) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x998,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo)
  ;
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9a0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9a0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)Sirenix_Serialization_MinimalBaseFormatter<Version>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9a8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9a8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9b0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9b0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)OVRTask<OVRSceneManager_Metrics>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9b8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9b8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Collections_Generic_List<SpectreFloor_InteractionData>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9c0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9c0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Collections_Generic_List<DiContainer_ProviderInfo>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9c8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9c8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9d0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9d0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<DuckStreamDifficultyController_Stage>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9d8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9d8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Func<PoolableManager_PoolableInfo,_IPoolable>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9e0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9e0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<IObserver<byte[]>,_CancellationToken,_IEnumerator>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9e8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9e8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<string,_ulong,_ulong>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9f0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9f0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0x9f8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0x9f8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<VisualElement,_StyleValues>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa00) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa00,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Type,_IPrefabInstantiator,_IProvider>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa08) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa08,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<DefaultEventSystem_LegacyInputProcessor,_EventBase>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa10) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa10,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<DebugUI_Widget,_int>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa18) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa18,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Func<Scrollbar,_IObserver<float>,_IDisposable>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa20) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa20,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<byte[],_int,_byte>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa28) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa28,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<InputDevice,_InputEventPtr,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa30) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa30,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<GameObject,_IEnumerable<Component>>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa38) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa38,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<byte[],_int,_ushort>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa40) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa40,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Volume,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa48) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa48,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Func<Dropdown,_IObserver<int>,_IDisposable>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa50) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa50,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Skelet_Bone,_int>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa58) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa58,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa60) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa60,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Stream,_IAsyncResult,_VoidTaskResult>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa68) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa68,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<byte[],_int,_short>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa70) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa70,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Scale,_Scale,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa78) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa78,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa80) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa80,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<string,_Material,_Texture2D>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa88) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa88,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<DiContainer_ProviderInfo,_Type>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa90) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa90,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Pose,_int,_float>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xa98) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xa98,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)PTR_DAT_07a057d0);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xaa0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xaa0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<ManiaNoteManager_SpawnedNote,_double>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xaa8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xaa8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<string,_float,_float>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xab0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xab0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<GraphModule,_Node,_Node>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xab8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xab8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Vector3Int,_int>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xac0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xac0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<double,_double,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xac8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xac8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)PTR_DAT_07a391a0);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xad0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xad0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<int,_string,_TMP_FontAsset>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xad8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xad8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Model_Input,_string>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xae0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xae0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<Vector3,_ValueTuple<PointerEvent,_int,_float>,_EventBase>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xae8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xae8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<ReflectionTypeInfo_InjectFieldInfo,_InjectTypeInfo_InjectMemberInfo>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xaf0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xaf0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<byte[],_int,_Decimal>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xaf8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xaf8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Toggle,_IObserver<bool>,_IDisposable>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb00) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb00,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<VolumeComponent,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb08) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb08,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb10) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb10,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<string,_int,_int>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb18) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb18,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)PTR_DAT_07a3bab0);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb20) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb20,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb28) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb28,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Quaternion,_int,_float>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb30) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb30,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb38) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb38,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)Unity_AppUI_UI_NumericalField<float>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb40) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb40,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<DisposableManager_DisposableInfo>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb48) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb48,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Nullable<DateTime>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb50) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb50,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<DataBindingManager_BindingData>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb58) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb58,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Nullable<JsonSchemaType>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb60) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb60,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Vector2,_int,_float>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb68) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb68,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb70) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb70,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb78) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb78,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)OVRTask<OVRPlugin_Result>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb80) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb80,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<HandGrabUtils_HandGrabPoseData>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb88) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb88,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)PTR_DAT_07a36588);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb90) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb90,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<InjectTypeInfo_InjectMethodInfo,_IEnumerable<InjectableInfo>>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb98) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xb98,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xba0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xba0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xba8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xba8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<WeakBaseFormatter_SerializationCallback>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xbb0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xbb0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)OVRTask<MRUK_LoadDeviceResult>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 3000) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 3000,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<PointableCanvasModule_PointerImpl>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xbc0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xbc0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Nullable<BigInteger>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xbc8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xbc8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xf0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<BackgroundSize,_BackgroundSize,_bool>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xbd0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xbd0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xf0);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)Unity_Collections_NativeHashSet<int>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xbd8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xbd8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xf8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xbe0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xbe0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xf8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)OVRTask<Int32Enum>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xbe8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xbe8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xf8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)Sirenix_Serialization_MinimalBaseFormatter<Color>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xbf0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xbf0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xf8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                UnityEngine_UIElements_UIR_NativePagedList<MeshGenerator_BackgroundRepeatInstance>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xbf8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xbf8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xf8);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc00) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc00,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x100);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Collections_Generic_List<MRUKRoom_CouchSeat>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc08) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc08,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x100);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<FormatterLocator_FormatterLocatorInfo>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc10) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc10,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x100);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)UnityEngine_Pool_ObjectPool<TypePathVisitor>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc18) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc18,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x100);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)Sirenix_Serialization_MinimalBaseFormatter<Vector2>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc20) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc20,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x108);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc28) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc28,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x108);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)Sirenix_Serialization_MinimalBaseFormatter<DateTime>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc30) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc30,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x110);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<DiContainer,_Type,_IProvider>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc38) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc38,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x110);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<PartialTensorElement<int>,_PartialTensorElement<float>,_PartialTensorElement<float>>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc40) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc40,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x110);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc48) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc48,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x110);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<Vector4,_int,_float>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc50) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc50,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x110);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc58) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc58,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x110);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<string,_long,_long>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc60) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc60,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x110);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<PartialTensorElement<float>,_PartialTensorElement<float>,_PartialTensorElement<float>>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc68) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc68,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x110);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Func<DisposableManager_DisposableInfo,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc70) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc70,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x118);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<string,_string,_string>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc78) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc78,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x120);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Func<IObserver<long>,_CancellationToken,_IEnumerator>_TypeInfo)
  ;
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc80) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc80,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x120);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<IObserver<AsyncOperation>,_CancellationToken,_IEnumerator>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc88) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc88,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x120);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<byte[],_int,_uint>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc90) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc90,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x120);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Func<ReflectionTypeInfo_InjectPropertyInfo,_InjectTypeInfo_InjectMemberInfo>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc98) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xc98,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x128);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Collections_Generic_List<FrameFactory_FrameCreator>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xca0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xca0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x128);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xca8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xca8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x130);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)System_Func<TextShadow,_TextShadow,_bool>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xcb0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xcb0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x138);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo
              );
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xcb8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xcb8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x138);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)
                System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xcc0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xcc0,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x138);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,*(undefined8 *)OVRResult<object,_Int32Enum>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xcc8) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xcc8,uVar3);
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x138);
  uVar3 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_06c68348(uVar3,uVar6,
               *(undefined8 *)System_Collections_Generic_List<HIDParser_HIDReportData>_TypeInfo);
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  *(undefined8 *)(lVar4 + 0xcd0) = uVar3;
  thunk_FUN_036b7ad0(lVar4 + 0xcd0,uVar3);
  lVar4 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f49f0,2);
  if (lVar4 != 0) {
    if ((*(uint *)(lVar4 + 0x18) != 0) &&
       (*(undefined4 *)(lVar4 + 0x20) = 1,
       puVar2 = System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo,
       puVar1 = System_Collections_Generic_List<ATGTextJobSystem_ManagedJobData>_TypeInfo,
       (*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0)) {
      lVar5 = *(long *)(*unaff_x21 + 0xb8);
      *(undefined4 *)(lVar4 + 0x24) = 0x40;
      *(long *)(lVar5 + 0xcd8) = lVar4;
      thunk_FUN_036b7ad0(lVar5 + 0xcd8);
      lVar4 = FUN_03642a4c(*(undefined8 *)puVar1,2);
      in_stack_00000098 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      FUN_0720626c(&stack0x00000098,*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40),
                   *(undefined8 *)puVar2,0);
      puVar2 = OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo;
      if (lVar4 == 0) goto LAB_06c68344;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = in_stack_000000a0;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000098;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_000000a8;
        thunk_FUN_036b7ad0(lVar4 + 0x28,0);
        in_stack_00000080 = 0;
        in_stack_00000088 = 0;
        in_stack_00000090 = 0;
        FUN_0720626c(&stack0x00000080,*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40),
                     *(undefined8 *)puVar2,0);
        puVar2 = UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>_TypeInfo;
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar4 + 0x48) = in_stack_00000090;
          *(undefined8 *)(lVar4 + 0x40) = in_stack_00000088;
          *(undefined8 *)(lVar4 + 0x38) = in_stack_00000080;
          thunk_FUN_036b7ad0(lVar4 + 0x40,0);
          lVar5 = *(long *)(*unaff_x21 + 0xb8);
          *(long *)(lVar5 + 0xce0) = lVar4;
          thunk_FUN_036b7ad0(lVar5 + 0xce0,lVar4);
          lVar4 = FUN_03642a4c(*(undefined8 *)puVar1,5);
          in_stack_00000068 = 0;
          in_stack_00000070 = 0;
          in_stack_00000078 = 0;
          FUN_072060bc(&stack0x00000068,*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x140),
                       *(undefined8 *)puVar2,0);
          puVar1 = System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_TypeInfo;
          if (lVar4 == 0) goto LAB_06c68344;
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined8 *)(lVar4 + 0x28) = in_stack_00000070;
            *(undefined8 *)(lVar4 + 0x20) = in_stack_00000068;
            *(undefined8 *)(lVar4 + 0x30) = in_stack_00000078;
            thunk_FUN_036b7ad0(lVar4 + 0x28,0);
            in_stack_00000050 = 0;
            in_stack_00000058 = 0;
            in_stack_00000060 = 0;
            FUN_072060bc(&stack0x00000050,*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x140),
                         *(undefined8 *)puVar1,0);
            puVar1 = System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_TypeInfo;
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar4 + 0x48) = in_stack_00000060;
              *(undefined8 *)(lVar4 + 0x40) = in_stack_00000058;
              *(undefined8 *)(lVar4 + 0x38) = in_stack_00000050;
              thunk_FUN_036b7ad0(lVar4 + 0x40,0);
              in_stack_00000038 = 0;
              in_stack_00000040 = 0;
              in_stack_00000048 = 0;
              FUN_072060bc(&stack0x00000038,*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x140),
                           *(undefined8 *)puVar1,0);
              puVar1 = 
              System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_TypeInfo
              ;
              if (2 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x60) = in_stack_00000048;
                *(undefined8 *)(lVar4 + 0x58) = in_stack_00000040;
                *(undefined8 *)(lVar4 + 0x50) = in_stack_00000038;
                thunk_FUN_036b7ad0(lVar4 + 0x58,0);
                in_stack_00000020 = 0;
                in_stack_00000028 = 0;
                in_stack_00000030 = 0;
                FUN_072060bc(&stack0x00000020,*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x140),
                             *(undefined8 *)puVar1,0);
                puVar1 = OVRResult<Guid,_Int32Enum>_TypeInfo;
                if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar4 + 0x78) = in_stack_00000030;
                  *(undefined8 *)(lVar4 + 0x70) = in_stack_00000028;
                  *(undefined8 *)(lVar4 + 0x68) = in_stack_00000020;
                  thunk_FUN_036b7ad0(lVar4 + 0x70,0);
                  in_stack_00000008 = 0;
                  in_stack_00000010 = 0;
                  in_stack_00000018 = 0;
                  FUN_072060bc(&stack0x00000008,
                               *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x140),
                               *(undefined8 *)puVar1,0);
                  if (4 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x90) = in_stack_00000018;
                    *(undefined8 *)(lVar4 + 0x88) = in_stack_00000010;
                    *(undefined8 *)(lVar4 + 0x80) = in_stack_00000008;
                    thunk_FUN_036b7ad0(lVar4 + 0x88,0);
                    lVar5 = *(long *)(*unaff_x21 + 0xb8);
                    *(long *)(lVar5 + 0xce8) = lVar4;
                    thunk_FUN_036b7ad0(lVar5 + 0xce8,lVar4);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_06c68344:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


