/*
FUNCTION_NAME: UnityEngine.InputSystem.LowLevel.InputEventTrace.ReplayController$$OnFinished
ENTRY_POINT: 05d2b6f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController__OnFinished(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 uVar3;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined8 *puVar4;
  long unaff_x26;
  undefined8 *puVar5;
  long unaff_x28;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(unaff_x26 + 0x748);
  puVar4 = *(undefined8 **)(unaff_x24 + 0x728);
  puVar6 = *(undefined8 **)(unaff_x28 + 0x7c8);
                    /* try { // try from 05d2b708 to 05e2b747 has its CatchHandler @ 05d2b708
                       catch() { ... } // from try @ 05d2b708 with catch @ 05d2b708
                       catch() { ... } // from try @ 05d2b750 with catch @ 05d2b708
                       catch() { ... } // from try @ 05d2b7d4 with catch @ 05d2b708
                       catch() { ... } // from try @ 05d2b81c with catch @ 05d2b708 */
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *unaff_x21;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 9;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *puVar5;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 9;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *puVar4;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 9;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *puVar6;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 2;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)System_Net_Http_Headers_Parser_MD5_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 9;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)UnityEngine_Physics_ContactEventDelegate_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xf;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)System_Net_Http_Headers_Parser_DateTime_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PTR_DAT_06a0db58;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 7;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Assets_Scripts_Player_<Simulate>d__107_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 3;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)System_Net_PathList_PathListComparer_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 3;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 3;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PTR_DAT_069ff558;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 7;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 1;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Method_System_Collections_Generic_KeyValuePair<Type,_Dictionary<InstanceHandle,_Inspector>>_get_Value__
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 1;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Unity_Networking_QoS_UcgQosServer_var;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 7;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xd;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 3;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 2;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 1;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 5;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 9;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 5;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 9;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 1;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 1;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 3;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 2;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)System_ParameterizedStrings_LowLevelStack_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 1;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 3;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 1;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 7;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PTR_DAT_069fc980;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xd;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 5;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Mono_Security_PKCS7_EncryptedData_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 2;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 6;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0x17;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>__ctor__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 5;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_UnityEngine_InputSystem_InputControl<Vector2>_get_value__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0x13;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_UnityEngine_InputSystem_InputControl<Vector2>_FinishSetup__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0x27;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Mono_Security_PKCS7_SignedData_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 2;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PauseMenuController_<BuildSceneList>d__25_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 1;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 3;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xf;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_System_Collections_Generic_HashSet<Type>_Remove__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 1;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)System_IO_Path_<>c_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 5;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PTR_DAT_06a122e8;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xe;
  FUN_04e935f0();
  puVar1 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__;
  **(undefined8 **)
    (*(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__ + 0xb8) =
       unaff_x19;
  LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  return;
}


