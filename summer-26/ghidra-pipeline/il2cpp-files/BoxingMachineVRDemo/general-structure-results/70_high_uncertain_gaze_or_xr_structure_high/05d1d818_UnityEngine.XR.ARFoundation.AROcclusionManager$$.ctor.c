/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.AROcclusionManager$$.ctor
ENTRY_POINT: 05d1d818
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_6
*/


void UnityEngine_XR_ARFoundation_AROcclusionManager___ctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_02d6084c(Method_System_Collections_Generic_List<UserCapability>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<UserCapability>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<UserInputActionSet>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_AddRange__);
  FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_RemoveAt__);
  FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_AddRange__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_Contains__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_Remove__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Value>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Value>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Value>_Clear__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Value>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<ValueInput>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<ValueInput>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<ValueInput>_AsReadOnly__);
  FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>_Clear__);
  FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Variant>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Variant>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VariantCheckpoint>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>_Clear__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>_ToArray__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_AddRange__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_Clear__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_ToArray__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_get_Capacity__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_set_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_AddRange__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_Clear__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_set_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VectorImageManager>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VectorImageManager>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VectorImageManager>_Remove__);
  FUN_02d6084c(Method_System_Collections_Generic_List<ViewerTrigger>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>__ctor__)
  ;
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Add__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_GetEnumerator__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Sort__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_Add__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_GetEnumerator__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_ToArray__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_AddRange__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Clear__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Contains__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_IndexOf__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Insert__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Remove__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_RemoveAt__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_get_Capacity__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_set_Capacity__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_set_Item__);
  FUN_02d6084c(Method_System_Memory<byte>_ToArray__);
  FUN_02d6084c(Method_System_Memory<byte>_get_Length__);
  FUN_02d6084c(Method_System_Memory<byte>_get_Span__);
  FUN_02d6084c(Method_System_Memory<byte>_op_Implicit__);
  FUN_02d6084c(Method_System_Memory<byte>_op_Implicit__);
  FUN_02d6084c(Method_System_Memory<char>__ctor__);
  FUN_02d6084c(Method_System_Memory<char>_get_Length__);
  FUN_02d6084c(Method_System_Memory<char>_get_Span__);
  FUN_02d6084c(Method_System_Memory<IntPtr>_get_Span__);
  FUN_02d6084c(
              Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<ControlConnection>__
              );
  FUN_02d6084c(
              Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<GraphGroup>__
              );
  FUN_02d6084c(
              Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<IUnit>__
              );
  FUN_02d6084c(
              Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<InvalidConnection>__
              );
  FUN_02d6084c(
              Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<StickyNote>__
              );
  FUN_02d6084c(
              Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<ValueConnection>__
              );
  FUN_02d6084c(Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>__ctor__);
  FUN_02d6084c(Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Clear__);
  FUN_02d6084c(Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Contains__);
  FUN_02d6084c(
              Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_GetEnumerator__
              );
  FUN_02d6084c(Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_TryGetValue__
              );
  FUN_02d6084c(Method_Oculus_Platform_Message<AbuseReportRecording>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AbuseReportRecording>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AchievementProgressList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AchievementProgressList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AchievementUpdate>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AchievementUpdate>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AppDownloadProgressResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AppDownloadProgressResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AppDownloadResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AppDownloadResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<ApplicationInviteList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<ApplicationInviteList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<ApplicationVersion>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<ApplicationVersion>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetDetails>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetDetails>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetDetailsList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDeleteResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadCancelResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadCancelResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadUpdate>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadUpdate>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AvatarEditorResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<AvatarEditorResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<BlockedUserList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<BlockedUserList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<bool>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<bool>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<Challenge>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<Challenge>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<ChallengeEntryList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<ChallengeEntryList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<ChallengeList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<ChallengeList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<CowatchViewerList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<CowatchViewerList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<CowatchViewerUpdate>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<CowatchViewerUpdate>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<CowatchingState>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<CowatchingState>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<DestinationList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<DestinationList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<GroupPresenceJoinIntent>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<GroupPresenceJoinIntent>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<GroupPresenceLeaveIntent>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<GroupPresenceLeaveIntent>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<HttpTransferUpdate>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<HttpTransferUpdate>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<InstalledApplicationList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<InstalledApplicationList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<InvitePanelResultInfo>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<InvitePanelResultInfo>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LaunchBlockFlowResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LaunchBlockFlowResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LaunchInvitePanelFlowResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LaunchInvitePanelFlowResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LaunchReportFlowResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LaunchUnblockFlowResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LaunchUnblockFlowResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LeaderboardList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LinkedAccountList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LinkedAccountList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingApplicationStatus>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingApplicationStatus>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingStartResult>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingStartResult>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingStatus>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingVideoStats>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<MicrophoneAvailabilityState>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<MicrophoneAvailabilityState>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncConnection>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
  FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__);
  FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>__ctor__);
  FUN_02d6084c(Method_System_Memory<byte>_Slice__);
  FUN_02d6084c(Method_System_Memory<byte>_Slice__);
  FUN_02d6084c(PTR_DAT_06781ec0);
  FUN_02d6084c(PTR_DAT_0678be78);
  *(undefined1 *)(unaff_x20 + 0xa1e) = 1;
  FUN_05ce6dd8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_Clear__);
    FUN_04d6838c(uVar2,uVar4,*(undefined8 *)Method_System_Memory<byte>_ToArray__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  if (unaff_x19 != 0) {
    FUN_033305a8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VisualElement>_Remove__);
      FUN_04d687c4(uVar2,uVar4,
                   *(undefined8 *)Method_Oculus_Platform_Message<AbuseReportRecording>__ctor__,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_033318e0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UnityEvent>_get_Count__);
      FUN_04d685a8(uVar2,uVar4,
                   *(undefined8 *)Method_Oculus_Platform_Message<AppDownloadResult>_get_Data__,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_03330f44();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VFXBinderBase>_Remove__);
      FUN_04d6892c(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Oculus_Platform_Message<AssetFileDownloadCancelResult>__ctor__,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_03331f48();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x28) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UserCapability>__ctor__);
      FUN_04d6865c(uVar2,uVar4,*(undefined8 *)Method_Oculus_Platform_Message<bool>_get_Data__,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_03331278();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x30) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__
                                );
      FUN_04d689e0(uVar2,uVar4,
                   *(undefined8 *)Method_Oculus_Platform_Message<CowatchingState>__ctor__,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333227c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x38) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>_Add__);
      FUN_04d68710(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Oculus_Platform_Message<InstalledApplicationList>_get_Data__,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_033315ac();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x40) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector2>_Clear__);
      FUN_04d68a94(uVar2,uVar4,
                   *(undefined8 *)Method_Oculus_Platform_Message<LaunchUnblockFlowResult>__ctor__,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_033325b0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x48) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UnityEvent>__ctor__);
      FUN_04d68878(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Oculus_Platform_Message<LivestreamingStartResult>_get_Data__,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_03331c14();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x50) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ValueOutput>_Clear__);
      FUN_04d68440(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>__ctor__,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_033308dc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x58) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UxmlObjectAsset>_RemoveAt__
                                );
      FUN_04d684f4(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<GraphGroup>__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_03330c10();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x60) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector3>_get_Count__);
      Mono_Math_BigInteger_ModulusRing__Pow
                (uVar2,uVar4,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<IUnit>__
                 ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333d548();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x68) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector3>_set_Item__);
      FUN_04d6d16c(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<InvalidConnection>__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333e880();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x70) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector3>__ctor__);
      FUN_04d6cf50(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<StickyNote>__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333dee4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x78) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector3>_get_Capacity__);
      FUN_04d6d2d4(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<ValueConnection>__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333eee8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x80) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VFXBinderBase>_Add__);
      FUN_04d6d004(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>__ctor__,
                   0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333e218();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x88) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UnityEvent>_Add__);
      FUN_04d6d388(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Clear__,
                   0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333f21c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x90) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UserInputActionSet>__ctor__
                                );
      FUN_04d6d0b8(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Contains__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333e54c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x98) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector3>_get_Item__);
      FUN_04d6d220(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_GetEnumerator__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333ebb4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VisualElement>_AddRange__);
      FUN_04d6cde8(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_TryGetValue__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333d87c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VisualElement>_get_Capacity__
                                );
      FUN_04d6ce9c(uVar2,uVar4,
                   *(undefined8 *)Method_Oculus_Platform_Message<AbuseReportRecording>_get_Data__,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_0333dbb0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<uint>_ToArray__);
      FUN_04d69bc4(uVar2,uVar4,
                   *(undefined8 *)Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                   0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_03337530();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<URPProfileId>_GetEnumerator__
                                );
      FUN_04d69ffc(uVar2,uVar4,
                   *(undefined8 *)
                    Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_03338868();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xc0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VisualElement>__ctor__);
      FUN_04d69de0(uVar2,uVar4,
                   *(undefined8 *)Method_Oculus_Platform_Message<AchievementProgressList>__ctor__,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_03337ecc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 200) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
      FUN_04d6a164(uVar2,uVar4,
                   *(undefined8 *)Method_Oculus_Platform_Message<AchievementProgressList>_get_Data__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_03338ed0();
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0638a0ec();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


