/*
FUNCTION_NAME: FUN_05d2b128
ENTRY_POINT: 05d2b128
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 235
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_15;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_13;functionality_data_collection_or_telemetry_hits_6;functionality_possible_biometrics_hits_5
*/


void FUN_05d2b128(void)

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
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_DAT_06a1c780;
  if ((DAT_06dc2fa2 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_object>_get_Value__);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_OvrAvatarSocketDefinition>_Deconstruct__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_OvrAvatarSocketDefinition>_get_Value__
                );
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_PlayerDataObject>_get_Key__)
    ;
    FUN_02d965b8(PTR_DAT_06a1c780);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__);
    FUN_02d965b8(Mono_Security_PKCS7_ContentInfo_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_PlayerDataObject>_get_Value__
                );
    FUN_02d965b8(Mono_Security_PKCS7_EncryptedData_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_SignedData_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_SignerInfo_TypeInfo);
    FUN_02d965b8(Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_PlayerProperty>_get_Key__);
    FUN_02d965b8(Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_PlayerProperty>_get_Value__)
    ;
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl<Vector2>_FinishSetup__);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_SaveItem>_get_Key__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<Type>_Remove__);
    FUN_02d965b8(UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_SaveItem>_get_Value__);
    FUN_02d965b8(UnityEngine_UIElements_PanelEventHandler_PointerEvent_TypeInfo);
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_SessionProperty>_get_Key__);
    FUN_02d965b8(UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl<Vector2>_get_value__);
    FUN_02d965b8(Unity_Networking_QoS_UcgQosServer_var);
    FUN_02d965b8(System_ParameterizedStrings_LowLevelStack_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a122e8);
    FUN_02d965b8(System_Net_Http_Headers_Parser_DateTime_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_Parser_MD5_TypeInfo);
    FUN_02d965b8(System_IO_Path_<>c_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_43_0_TypeInfo);
    FUN_02d965b8(System_Net_PathList_PathListComparer_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_SessionProperty>_get_Value__
                );
    FUN_02d965b8(PauseMenuController_<BuildSceneList>d__25_TypeInfo);
    FUN_02d965b8(PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff558);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__);
    FUN_02d965b8(PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_02d965b8(UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_129_0_TypeInfo);
    FUN_02d965b8(UnityEngine_Physics_ContactEventDelegate_TypeInfo);
    FUN_02d965b8(UnityEngine_EventSystems_PhysicsRaycaster_RaycastHitComparer_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_StringBuilder>_get_Value__);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_SubscribeResult>_get_Key__);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_SubscribeResult>_get_Value__
                );
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_Subscription>_get_Key__);
    FUN_02d965b8(Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>__ctor__);
    FUN_02d965b8(Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo);
    FUN_02d965b8(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_Subscription>_get_Value__);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_Variant>_get_Key__);
    FUN_02d965b8(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0db58);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<string,_Variant>_get_Value__);
    FUN_02d965b8(Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_HttpHeaders_HeaderBucket>_get_Key__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Key__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Value__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Key__
                );
    FUN_02d965b8(Assets_Scripts_Player_<Simulate>d__107_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Value__
                );
    FUN_02d965b8(Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    FUN_02d965b8(
                Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_get_Key__
                );
    FUN_02d965b8(
                Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_get_Value__
                );
    FUN_02d965b8(Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_RenderGraph_DebugData>_get_Key__
                );
    FUN_02d965b8(Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<string,_ServicePointScheduler_ConnectionGroup>_get_Value__
                );
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<TeleportationProvider,_List<IXRInteractor>>_get_Key__
                );
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<TeleportationProvider,_List<IXRInteractor>>_get_Value__
                );
    FUN_02d965b8(PTR_DAT_069fc980);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_KeyValuePair<TerrainTileCoord,_Terrain>_get_Key__
                );
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo)
    ;
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Value__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<Type,_Dictionary<InstanceHandle,_Inspector>>_get_Value__
                );
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<uint>__ctor__);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Key__
                );
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Value__
                );
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo);
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
                );
    DAT_06dc2fa2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc26e4 == '\0') {
    FUN_02d965b8(PTR_DAT_06a1c780);
    DAT_06dc26e4 = '\x01';
  }
  puVar7 = Method_System_Collections_Generic_KeyValuePair<string,_PlayerDataObject>_get_Key__;
  puVar4 = 
  Method_System_Collections_Generic_KeyValuePair<string,_OvrAvatarSocketDefinition>_get_Value__;
  puVar3 = 
  Method_System_Collections_Generic_KeyValuePair<string,_OvrAvatarSocketDefinition>_Deconstruct__;
  puVar2 = Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo;
  lVar10 = *(long *)puVar1;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar10 = *(long *)puVar1;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_04e928a0(lVar10,uVar13,*(undefined8 *)puVar3);
  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
  uVar13 = *(undefined8 *)puVar2;
  FUN_0552aca4(lVar11,0);
  *(undefined8 *)(lVar11 + 0x10) = uVar13;
  LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
  *(undefined4 *)(lVar11 + 0x18) = 0xd;
  puVar9 = Method_System_Collections_Generic_KeyValuePair<string,_RenderGraph_DebugData>_get_Key__;
  puVar8 = Method_System_Collections_Generic_KeyValuePair<string,_PlayerProperty>_get_Key__;
  puVar6 = Method_System_Collections_Generic_KeyValuePair<string,_object>_get_Value__;
  puVar5 = UnityEngine_EventSystems_PhysicsRaycaster_RaycastHitComparer_TypeInfo;
  puVar4 = UnityEngine_UIElements_PanelEventHandler_PointerEvent_TypeInfo;
  puVar3 = Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo;
  puVar1 = Mono_Security_PKCS7_ContentInfo_TypeInfo;
  if (lVar10 != 0) {
    FUN_04e935f0(lVar10,*(undefined8 *)puVar2,lVar11,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<string,_object>_get_Value__);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)puVar4;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar9;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 9;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)puVar3;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar8;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 9;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)puVar1;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<string,_HttpHeaders_HeaderBucket>_get_Key__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 9;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
    ;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_get_Key__
    ;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 10;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)puVar5;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar5;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 2;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = System_Net_Http_Headers_Parser_MD5_TypeInfo;
    uVar13 = *(undefined8 *)System_Net_Http_Headers_Parser_MD5_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xb;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = 
    Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
    ;
    uVar13 = *(undefined8 *)
              Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
    ;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 9;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)UnityEngine_Physics_ContactEventDelegate_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_StringBuilder>_get_Value__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xb;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = OVRPlugin_OVRP_1_119_0_TypeInfo;
    uVar13 = *(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xf;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)System_Net_Http_Headers_Parser_DateTime_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_SessionProperty>_get_Value__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xb;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
    ;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_SubscribeResult>_get_Value__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xb;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)PTR_DAT_06a0db58;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Key__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 7;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)Assets_Scripts_Player_<Simulate>d__107_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<string,_ServicePointScheduler_ConnectionGroup>_get_Value__
    ;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 3;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)System_Net_PathList_PathListComparer_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_Subscription>_get_Value__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 3;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
    ;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_PlayerProperty>_get_Value__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 3;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)PTR_DAT_069ff558;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_Subscription>_get_Key__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 7;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__;
    uVar13 = *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
    ;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 1;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<Type,_Dictionary<InstanceHandle,_Inspector>>_get_Value__
    ;
    uVar13 = *(undefined8 *)
              Method_System_Collections_Generic_KeyValuePair<Type,_Dictionary<InstanceHandle,_Inspector>>_get_Value__
    ;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 1;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Unity_Networking_QoS_UcgQosServer_var;
    uVar13 = *(undefined8 *)Unity_Networking_QoS_UcgQosServer_var;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 7;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo;
    uVar13 = *(undefined8 *)
              Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xd;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo;
    uVar13 = *(undefined8 *)
              Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 3;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo;
    uVar13 = *(undefined8 *)UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 2;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo;
    uVar13 = *(undefined8 *)Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 1;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = OVRPlugin_OVRP_1_128_0_TypeInfo;
    uVar13 = *(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 5;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Value__
    ;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 9;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 5;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_get_Value__
    ;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 9;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_PlayerDataObject>_get_Value__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 1;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
    ;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_SaveItem>_get_Key__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 1;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar12 = *(undefined8 *)puVar6;
    uVar13 = *(undefined8 *)
              Method_System_Collections_Generic_KeyValuePair<string,_SubscribeResult>_get_Key__;
    *(undefined4 *)(lVar11 + 0x18) = 0xb;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Value__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 3;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Mono_Security_PKCS7_SignerInfo_TypeInfo;
    uVar13 = *(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 2;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)System_ParameterizedStrings_LowLevelStack_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Key__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 1;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo;
    uVar13 = *(undefined8 *)UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 3;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
    ;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 10;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<TerrainTileCoord,_Terrain>_get_Key__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 1;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
    ;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Value__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 7;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = PTR_DAT_069fc980;
    uVar13 = *(undefined8 *)PTR_DAT_069fc980;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 10;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo;
    uVar13 = *(undefined8 *)
              Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xd;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo;
    uVar13 = *(undefined8 *)Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 5;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)Mono_Security_PKCS7_EncryptedData_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_Variant>_get_Key__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 2;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 6;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
    ;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0x17;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>__ctor__;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 5;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)Method_UnityEngine_InputSystem_InputControl<Vector2>_get_value__;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_Variant>_get_Value__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0x13;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)Method_UnityEngine_InputSystem_InputControl<Vector2>_FinishSetup__;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Value__
    ;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0x27;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Mono_Security_PKCS7_SignedData_TypeInfo;
    uVar13 = *(undefined8 *)Mono_Security_PKCS7_SignedData_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 2;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Key__
    ;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 10;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_KeyValuePair<string,_SessionProperty>_get_Key__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 10;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)PauseMenuController_<BuildSceneList>d__25_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = Method_System_Collections_Generic_HashSet<uint>__ctor__;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 1;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo;
    uVar13 = *(undefined8 *)Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 3;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar12 = *(undefined8 *)puVar6;
    uVar13 = *(undefined8 *)
              Method_System_Collections_Generic_KeyValuePair<string,_SaveItem>_get_Value__;
    *(undefined4 *)(lVar11 + 0x18) = 0xf;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Method_System_Collections_Generic_HashSet<Type>_Remove__;
    uVar13 = *(undefined8 *)Method_System_Collections_Generic_HashSet<Type>_Remove__;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 1;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo;
    uVar13 = *(undefined8 *)
              Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xb;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)System_IO_Path_<>c_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<TeleportationProvider,_List<IXRInteractor>>_get_Key__
    ;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 5;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo;
    uVar13 = *(undefined8 *)PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 10;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo;
    uVar13 = *(undefined8 *)
              Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xb;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    puVar1 = PTR_DAT_06a122e8;
    uVar13 = *(undefined8 *)PTR_DAT_06a122e8;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    uVar13 = *(undefined8 *)puVar1;
    uVar12 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xb;
    FUN_04e935f0(lVar10,uVar13,lVar11,uVar12);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    uVar13 = *(undefined8 *)
              Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo;
    FUN_0552aca4(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar13;
    LeanTween__value((undefined8 *)(lVar11 + 0x10),uVar13);
    puVar1 = 
    Method_System_Collections_Generic_KeyValuePair<TeleportationProvider,_List<IXRInteractor>>_get_Value__
    ;
    uVar13 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar11 + 0x18) = 0xe;
    FUN_04e935f0(lVar10,*(undefined8 *)puVar1,lVar11,uVar13);
    puVar1 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__;
    **(long **)(*(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__ +
               0xb8) = lVar10;
    LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


