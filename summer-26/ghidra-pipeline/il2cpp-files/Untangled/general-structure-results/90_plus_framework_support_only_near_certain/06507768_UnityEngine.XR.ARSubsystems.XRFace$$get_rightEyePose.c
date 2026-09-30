/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$get_rightEyePose
ENTRY_POINT: 06507768
PROGRAM: Untangled-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_21;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_21;functionality_possible_biometrics_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRFace__get_rightEyePose(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  thunk_FUN_02f12b58();
  lVar1 = *unaff_x22;
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x210) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlSchema>_TypeInfo);
    FUN_0516e594(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x210) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x210,uVar2);
  }
  FUN_037d6bdc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x218) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo);
    FUN_0516e918(uVar2,uVar3,
                 *(undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x218) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x218,uVar2);
  }
  FUN_037d7c44();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x220) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeStack>_TypeInfo)
    ;
    FUN_0516e648(uVar2,uVar3,
                 *(undefined8 *)Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x220) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x220,uVar2);
  }
  FUN_037d6f24();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x228) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
    FUN_0516e9cc(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x228) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x228,uVar2);
  }
  FUN_037d7f8c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x230) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_TypeInfo
                              );
    FUN_0516e6fc(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<BlockedUserList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x230) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x230,uVar2);
  }
  FUN_037d726c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x238) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo
                              );
    FUN_0516e864(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<Challenge>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x238) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x238,uVar2);
  }
  FUN_037d78fc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x240) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2Int>_TypeInfo);
    FUN_0516e42c(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<ChallengeEntryList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x240) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x240,uVar2);
  }
  FUN_037d654c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x248) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ulong>_TypeInfo);
    FUN_0516e4e0(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<ChallengeList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x248) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x248,uVar2);
  }
  FUN_037d6894();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x250) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlNode>_TypeInfo);
    FUN_051741c8(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<CowatchViewerList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x250) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x250,uVar2);
  }
  FUN_037e0ca4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 600) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UnityUIQuestTemplate>_TypeInfo);
    FUN_051746b4(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<CowatchingState>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 600) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 600,uVar2);
  }
  FUN_037e239c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x260) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<Allocator2D_Area>_TypeInfo);
    FUN_05174768(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<DestinationList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x260) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x260,uVar2);
  }
  FUN_037e26e4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x268) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WaypointSettings>_TypeInfo);
    FUN_0517481c(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<InvitePanelResultInfo>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x268) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x268,uVar2);
  }
  FUN_037e2a2c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x270) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Uri>_TypeInfo);
    FUN_05174600(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<LaunchBlockFlowResult>_TypeInfo,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x270) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x270,uVar2);
  }
  FUN_037e2054();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x278) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRView>_TypeInfo);
    FUN_0517427c(uVar2,uVar3,
                 *(undefined8 *)Oculus_Platform_Request<LaunchFriendRequestFlowResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x278) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x278,uVar2);
  }
  FUN_037e0fec();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x280) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Variable>_TypeInfo);
    FUN_05174330(uVar2,uVar3,
                 *(undefined8 *)Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x280) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x280,uVar2);
  }
  FUN_037e1334();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x288) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Usable>_TypeInfo);
    FUN_05172704(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<LeaderboardList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x288) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x288,uVar2);
  }
  FUN_037da3a4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x290) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlReflectionMember>_TypeInfo);
    FUN_05172a88(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<LinkedAccountList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x290) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x290,uVar2);
  }
  FUN_037db40c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x298) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_TypeInfo
                              );
    FUN_0517286c(uVar2,uVar3,
                 *(undefined8 *)Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x298) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x298,uVar2);
  }
  FUN_037daa34();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2a0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<BsonReader_ContainerContext>_TypeInfo
                              );
    FUN_05172d58(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<OrgScopedID>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2a0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2a0,uVar2);
  }
  FUN_037dba9c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2a8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRReferenceImage>_TypeInfo);
    FUN_05172920(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<PlatformInitialize>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2a8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2a8,uVar2);
  }
  FUN_037dad7c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2b0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Value>_TypeInfo);
    FUN_05172e0c(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<ProductList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2b0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2b0,uVar2);
  }
  FUN_037dbde4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2b8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo)
    ;
    FUN_051729d4(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<Purchase>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2b8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2b8,uVar2);
  }
  FUN_037db0c4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2c0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VolumeComponent>_TypeInfo);
    FUN_05172ec0(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<PurchaseList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2c0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2c0,uVar2);
  }
  FUN_037dc12c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2c8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VehicleBehaviour>_TypeInfo);
    FUN_05172bf0(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<PushNotificationResult>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2c8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2c8,uVar2);
  }
  FUN_037db754();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2d0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_TypeInfo
                              );
    FUN_051727b8(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<RejoinDialogResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2d0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2d0,uVar2);
  }
  FUN_037da6ec();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2d8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<fsVersionedType>_TypeInfo);
    FUN_0516c488(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<SendInvitesResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2d8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2d8,uVar2);
  }
  FUN_037ce20c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2e0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<fsMetaProperty>_TypeInfo);
    FUN_0516c80c(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<ShareMediaResult>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2e0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2e0,uVar2);
  }
  FUN_037cf274();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2e8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Volume>_TypeInfo);
    FUN_0516c5f0(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<string>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2e8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2e8,uVar2);
  }
  FUN_037ce89c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2f0) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UntangledEntity>_TypeInfo);
    FUN_0516c8c0(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<SystemVoipState>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2f0) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2f0,uVar2);
  }
  FUN_037cf5bc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2f8) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TypeIdentifier>_TypeInfo);
    FUN_0516c6a4(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<User>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2f8) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x2f8,uVar2);
  }
  FUN_037cebe4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x300) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRRaycastSubsystemDescriptor>_TypeInfo
                              );
    FUN_0516c974(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<UserAccountAgeCategory>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x300) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x300,uVar2);
  }
  FUN_037cf904();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x308) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VectorImageManager>_TypeInfo);
    FUN_0516c758(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<UserCapabilityList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x308) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x308,uVar2);
  }
  FUN_037cef2c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x310) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UxmlObjectAsset>_TypeInfo);
    FUN_0516ca28(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<UserList>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x310) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x310,uVar2);
  }
  FUN_037cfc4c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x318) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<User>_TypeInfo);
    FUN_0516c53c(uVar2,uVar3,*(undefined8 *)Oculus_Platform_Request<UserProof>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x318) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x318,uVar2);
  }
  FUN_037ce554();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 800) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlQualifiedName>_TypeInfo);
    FUN_0516cadc(uVar2,uVar3,*(undefined8 *)Fusion_RingBuffer<double>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 800) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 800,uVar2);
  }
  FUN_037cff94();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x328) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector4>_TypeInfo);
    FUN_0516ce60(uVar2,uVar3,
                 *(undefined8 *)System_Collections_Generic_Queue<WaypointSettings>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x328) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x328,uVar2);
  }
  FUN_037d0ffc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x330) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Transform>_TypeInfo);
    FUN_0516cc44(uVar2,uVar3,
                 *(undefined8 *)System_Collections_Generic_Queue<WaypointSettingsBase>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x330) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x330,uVar2);
  }
  FUN_037d0624();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x338) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<X509Extension>_TypeInfo);
    FUN_0516cfc8(uVar2,uVar3,
                 *(undefined8 *)System_Collections_Generic_Queue<fsVersionedType>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x338) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x338,uVar2);
  }
  FUN_037d168c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x340) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<YogaNode>_TypeInfo);
    FUN_0516ccf8(uVar2,uVar3,
                 *(undefined8 *)
                  System_Collections_Generic_Queue<BarkGroupManager_BarkRequest>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x340) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x340,uVar2);
  }
  FUN_037d096c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x348) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<int2>_TypeInfo);
    FUN_0516d07c(uVar2,uVar3,
                 *(undefined8 *)
                  System_Collections_Generic_Queue<EventDispatcher_EventRecord>_TypeInfo,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x348) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x348,uVar2);
  }
  FUN_037d19d4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x350) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo
                              );
    FUN_0516cdac(uVar2,uVar3,
                 *(undefined8 *)
                  System_Collections_Generic_Queue<LoadBalancingClient_CallbackTargetChange>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x350) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x350,uVar2);
  }
  FUN_037d0cb4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x358) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<float3>_TypeInfo);
    FUN_0516d130(uVar2,uVar3,
                 *(undefined8 *)
                  System_Collections_Generic_Queue<LoadBalancingClient_CallbackTargetChange>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x358) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x358,uVar2);
  }
  FUN_037d1d1c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x360) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlSchemaElement>_TypeInfo);
    FUN_0516cf14(uVar2,uVar3,
                 *(undefined8 *)System_Collections_Generic_Queue<NetworkRunner_SpawnArgs>_TypeInfo,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x360) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x360,uVar2);
  }
  FUN_037d1344();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x368) == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualElementAsset>_TypeInfo);
    FUN_0516cb90(uVar2,uVar3,
                 *(undefined8 *)
                  System_Collections_Generic_Queue<PedestrianDensityManager_PedestrianRequest>_TypeInfo
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x368) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x368,uVar2);
  }
  FUN_037d02dc();
  return;
}


