/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs$$get_face
ENTRY_POINT: 064e1d60
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void UnityEngine_XR_ARFoundation_ARFaceUpdatedEventArgs__get_face(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  FUN_05173a0c();
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar2 + 0x1a8) = param_1;
  thunk_FUN_02f411dc(lVar2 + 0x1a8,param_1);
  FUN_037de88c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WearableCosmetic>_TypeInfo);
    FUN_05173e44(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<WriteTitleEventRequest>_TypeInfo,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b0) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x1b0,uVar1);
  }
  FUN_037dfc3c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UserVariable>_TypeInfo
                              );
    FUN_05173c28(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AbortFileUploadsResponse>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b8) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x1b8,uVar1);
  }
  FUN_037df264();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ValueOutput>_TypeInfo)
    ;
    FUN_05173fac(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AcceptTradeResponse>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c0) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x1c0,uVar1);
  }
  FUN_037e02cc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TrafficWaypoint>_TypeInfo);
    FUN_05173cdc(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddFriendResult>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c8) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x1c8,uVar1);
  }
  FUN_037df5ac();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRPlaneSubsystemDescriptor>_TypeInfo
                              );
    FUN_05174060(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddGenericIDResult>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1d0) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x1d0,uVar1);
  }
  FUN_037e0614();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<uint>_TypeInfo);
    FUN_05173d90(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddInventoryItemsResponse>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1d8) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x1d8,uVar1);
  }
  FUN_037df8f4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VertexAttribute>_TypeInfo);
    FUN_05174114(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddOrUpdateContactEmailResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1e0) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x1e0,uVar1);
  }
  FUN_037e095c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TransformRecord>_TypeInfo);
    FUN_05173ef8(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AddUsernamePasswordResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1e8) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x1e8,uVar1);
  }
  FUN_037dff84();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1f0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo
                              );
    FUN_05173ac0(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AndroidDevicePushNotificationRegistrationResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1f0) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x1f0,uVar1);
  }
  FUN_037debd4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1f8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<X509ChainStatus>_TypeInfo);
    FUN_05173b74(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ApplyToGroupResponse>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1f8) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x1f8,uVar1);
  }
  FUN_037def1c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x200) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ushort>_TypeInfo);
    FUN_0516e378(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AttributeInstallResult>_TypeInfo,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x200) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x200,uVar1);
  }
  FUN_037d6204();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x208) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
    FUN_0516e7b0(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<AuthenticateCustomIdResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x208) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x208,uVar1);
  }
  FUN_037d75b4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x210) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlSchema>_TypeInfo);
    FUN_0516e594(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<BuildAliasDetailsResponse>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x210) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x210,uVar1);
  }
  FUN_037d6bdc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x218) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo);
    FUN_0516e918(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelAllMatchmakingTicketsForPlayerResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x218) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x218,uVar1);
  }
  FUN_037d7c44();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x220) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeStack>_TypeInfo)
    ;
    FUN_0516e648(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelAllServerBackfillTicketsForPlayerResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x220) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x220,uVar1);
  }
  FUN_037d6f24();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x228) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
    FUN_0516e9cc(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelMatchmakingTicketResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x228) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x228,uVar1);
  }
  FUN_037d7f8c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x230) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_TypeInfo
                              );
    FUN_0516e6fc(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CancelServerBackfillTicketResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x230) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x230,uVar1);
  }
  FUN_037d726c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x238) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo
                              );
    FUN_0516e864(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConfirmPurchaseResult>_TypeInfo,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x238) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x238,uVar1);
  }
  FUN_037d78fc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x240) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2Int>_TypeInfo);
    FUN_0516e42c(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumeItemResult>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x240) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x240,uVar1);
  }
  FUN_037d654c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x248) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ulong>_TypeInfo);
    FUN_0516e4e0(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumeMicrosoftStoreEntitlementsResponse>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x248) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x248,uVar1);
  }
  FUN_037d6894();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x250) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlNode>_TypeInfo);
    FUN_051741c8(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumePS5EntitlementsResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x250) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x250,uVar1);
  }
  FUN_037e0ca4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 600) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<UnityUIQuestTemplate>_TypeInfo);
    FUN_051746b4(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumePSNEntitlementsResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 600) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 600,uVar1);
  }
  FUN_037e239c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x260) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<Allocator2D_Area>_TypeInfo);
    FUN_05174768(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<ConsumeXboxEntitlementsResult>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x260) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x260,uVar1);
  }
  FUN_037e26e4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x268) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<WaypointSettings>_TypeInfo);
    FUN_0517481c(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateBuildWithCustomContainerResponse>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x268) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x268,uVar1);
  }
  FUN_037e2a2c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x270) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Uri>_TypeInfo);
    FUN_05174600(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateBuildWithManagedContainerResponse>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x270) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x270,uVar1);
  }
  FUN_037e2054();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x278) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRView>_TypeInfo);
    FUN_0517427c(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateBuildWithProcessBasedServerResponse>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x278) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x278,uVar1);
  }
  FUN_037e0fec();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x280) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Variable>_TypeInfo);
    FUN_05174330(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateDraftItemResponse>_TypeInfo,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x280) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x280,uVar1);
  }
  FUN_037e1334();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x288) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Usable>_TypeInfo);
    FUN_05172704(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateExperimentResult>_TypeInfo,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x288) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x288,uVar1);
  }
  FUN_037da3a4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x290) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlReflectionMember>_TypeInfo);
    FUN_05172a88(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateGroupResponse>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x290) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x290,uVar1);
  }
  FUN_037db40c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x298) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_TypeInfo
                              );
    FUN_0517286c(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateGroupRoleResponse>_TypeInfo,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x298) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x298,uVar1);
  }
  FUN_037daa34();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2a0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<BsonReader_ContainerContext>_TypeInfo
                              );
    FUN_05172d58(uVar1,uVar3,
                 *(undefined8 *)
                  PlayFab_Events_PlayFabEvents_PlayFabResultEvent<CreateLobbyResult>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2a0) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x2a0,uVar1);
  }
  FUN_037dba9c();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_06931a5c();
  return;
}


