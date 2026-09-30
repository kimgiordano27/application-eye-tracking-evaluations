/*
FUNCTION_NAME: FUN_063ac5a0
ENTRY_POINT: 063ac5a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
*/


void FUN_063ac5a0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = Method_UnityWebSocketSharp_WebSocket_messagec__;
  if ((DAT_06dcbc3a & 1) == 0) {
    FUN_02d965b8(Method_UnityWebSocketSharp_WebSocket_setClientStream__);
    FUN_02d965b8(Method_UnityWebSocketSharp_WebSocketFrame_processHeader__);
    FUN_02d965b8(Method_UnityWebSocketSharp_WebSocket_messagec__);
    FUN_02d965b8(Method_UnityWebSocketSharp_WebSocketFrame_readPayloadDataAsync__);
    FUN_02d965b8(Method_System_Collections_Generic_List<IDebugManager>__ctor__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<SelectExitEventArgs>_Get__
                );
    FUN_02d965b8(Method_UnityWebSocketSharp_WebSocketFrame_toDumpString__);
    FUN_02d965b8(Method_System_Net_WebUtility_HtmlEncode__);
    FUN_02d965b8(Method_System_Net_WebUtility_ValidateUrlEncodingParameters__);
    FUN_02d965b8(Method_System_Runtime_Remoting_WellKnownClientTypeEntry__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<Controller>_get_Item__);
    FUN_02d965b8(Method_System_Runtime_Remoting_WellKnownServiceTypeEntry__ctor__);
    FUN_02d965b8(Method_System_Net_Mail_WhitespaceReader_ReadCfwsReverse__);
    FUN_02d965b8(Method_System_Net_Mail_WhitespaceReader_ReadFwsReverse__);
    FUN_02d965b8(Method_System_ComponentModel_Win32Exception_GetObjectData__);
    FUN_02d965b8(Method_System_WindowsConsoleDriver_ReadKey__);
    FUN_02d965b8(Method_System_Security_Principal_WindowsIdentity_SetToken__);
    FUN_02d965b8(
                Method_System_Security_Principal_WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                );
    FUN_02d965b8(Method_System_Security_Principal_WindowsIdentity_get_User__);
    FUN_02d965b8(Method_System_Collections_Generic_List<ControllerInputMode>__ctor__);
    FUN_02d965b8(Method_System_Security_Principal_WindowsImpersonationContext__ctor__);
    FUN_02d965b8(Method_System_Security_Principal_WindowsImpersonationContext_Undo__);
    FUN_02d965b8(Method_System_Collections_Generic_List<INetworkHooks>__ctor__);
    FUN_02d965b8(Method_Oculus_Platform_WindowsPlatform_AsyncInitialize__);
    FUN_02d965b8(Method_Oculus_Platform_WindowsPlatform_Initialize__);
    FUN_02d965b8(Method_CodeMonkey_Utils_World_Mesh_ApplyUVToUVArray__);
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<DeleteLobbyRequest>__
                );
    FUN_02d965b8(UnityEngine_InputSystem_Processors_AxisDeadzoneProcessor_var);
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<HeartbeatRequest>__
                );
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<RemovePlayerRequest>__
                );
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<CreateLobbyRequest,_Lobby>__
                );
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<CreateOrJoinLobbyRequest,_Lobby>__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<IPanel>_get_Item__);
    FUN_02d965b8(UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo);
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<GetJoinedLobbiesRequest,_List<string>>__
                );
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<GetLobbyRequest,_Lobby>__
                );
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<JoinLobbyByCodeRequest,_Lobby>__
                );
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<JoinLobbyByIdRequest,_Lobby>__
                );
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<QueryLobbiesRequest,_QueryResponse>__
                );
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<QuickJoinLobbyRequest,_Lobby>__
                );
    FUN_02d965b8(
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<ReconnectRequest,_Lobby>__
                );
    DAT_06dcbc3a = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    return;
  }
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_UnityWebSocketSharp_WebSocketFrame_processHeader__);
  FUN_04e8b9a0(uVar3,*(undefined8 *)Method_UnityWebSocketSharp_WebSocket_setClientStream__);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
  LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar3);
  FUN_063ae678(*(undefined8 *)UnityEngine_InputSystem_Processors_AxisDeadzoneProcessor_var,0);
  FUN_063ae678(*(undefined8 *)UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo,1
              );
  FUN_063ae678(*(undefined8 *)Method_System_Collections_Generic_List<Controller>_get_Item__,2);
  FUN_063ae678(*(undefined8 *)Method_System_Collections_Generic_List<ControllerInputMode>__ctor__,3)
  ;
  FUN_063ae678(*(undefined8 *)Method_System_Collections_Generic_List<IDebugManager>__ctor__,0x12);
  FUN_063ae678(*(undefined8 *)Method_System_Collections_Generic_List<INetworkHooks>__ctor__,0x13);
  FUN_063ae678(*(undefined8 *)Method_System_ComponentModel_Win32Exception_GetObjectData__,0x13);
  iVar2 = FUN_06358fb4(0);
  puVar1 = Method_System_Net_Mail_WhitespaceReader_ReadCfwsReverse__;
  if (iVar2 == 1) {
    local_c4 = 10;
    FUN_063ae678(*(undefined8 *)Method_UnityWebSocketSharp_WebSocketFrame_readPayloadDataAsync__,10)
    ;
    local_c0 = 0xb;
    FUN_063ae678(*(undefined8 *)puVar1,0xb);
    FUN_063ae678(*(undefined8 *)Method_System_Runtime_Remoting_WellKnownServiceTypeEntry__ctor__,0xc
                );
    FUN_063ae678(*(undefined8 *)Method_Oculus_Platform_WindowsPlatform_Initialize__,0xd);
    local_90 = 0;
    uVar5 = 0x13;
    uVar6 = 0x12;
    local_68 = (undefined8 *)Method_CodeMonkey_Utils_World_Mesh_ApplyUVToUVArray__;
    uVar14 = 0x18;
    uVar15 = 0x17;
    uVar7 = 7;
    uVar8 = 6;
    uVar9 = 0xe;
    uVar3 = 0xf;
    local_70 = (undefined8 *)
               Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<HeartbeatRequest>__
    ;
    local_b0 = 0x16;
    local_78 = (undefined8 *)
               Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<RemovePlayerRequest>__
    ;
    local_bc = 0x14;
    local_88 = (undefined8 *)
               Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<DeleteLobbyRequest>__
    ;
    local_7c = 0x15;
    local_98 = (undefined8 *)Method_System_Security_Principal_WindowsIdentity_get_User__;
    local_8c = 5;
    local_a8 = (undefined8 *)
               Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<GetJoinedLobbiesRequest,_List<string>>__
    ;
    local_9c = 4;
    local_b8 = (undefined8 *)Method_System_WindowsConsoleDriver_ReadKey__;
    local_ac = 1;
    local_d0 = (undefined8 *)Method_System_Net_Mail_WhitespaceReader_ReadFwsReverse__;
    puVar4 = (undefined8 *)
             Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<JoinLobbyByIdRequest,_Lobby>__
    ;
    puVar10 = (undefined8 *)Method_System_Security_Principal_WindowsImpersonationContext__ctor__;
    puVar11 = (undefined8 *)Method_System_Net_WebUtility_ValidateUrlEncodingParameters__;
    puVar12 = (undefined8 *)
              Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<CreateLobbyRequest,_Lobby>__
    ;
    puVar13 = (undefined8 *)Method_UnityWebSocketSharp_WebSocketFrame_toDumpString__;
  }
  else {
    uVar14 = 0x10;
    uVar15 = 0x11;
    uVar7 = 0xe;
    uVar8 = 0xf;
    local_68 = (undefined8 *)
               Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<QueryLobbiesRequest,_QueryResponse>__
    ;
    uVar9 = 0xb;
    uVar3 = 10;
    uVar6 = 0xf;
    uVar5 = 0xe;
    local_70 = (undefined8 *)Method_System_Runtime_Remoting_WellKnownClientTypeEntry__ctor__;
    local_78 = (undefined8 *)
               Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<GetLobbyRequest,_Lobby>__
    ;
    local_7c = 0x18;
    local_88 = (undefined8 *)
               Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<ReconnectRequest,_Lobby>__
    ;
    local_8c = 0x17;
    local_98 = (undefined8 *)Method_CodeMonkey_Utils_World_Mesh_ApplyUVToUVArray__;
    local_9c = 0x16;
    local_a8 = (undefined8 *)Method_System_Net_WebUtility_HtmlEncode__;
    local_ac = 0x14;
    local_b8 = (undefined8 *)Method_System_Security_Principal_WindowsIdentity_SetToken__;
    local_90 = 0x15;
    local_d0 = (undefined8 *)
               Method_System_Security_Principal_WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
    ;
    local_c4 = 0xc;
    local_c0 = 0xd;
    local_bc = 0x17;
    local_b0 = 0x18;
    puVar4 = (undefined8 *)
             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<SelectExitEventArgs>_Get__
    ;
    puVar10 = (undefined8 *)Method_System_Net_Mail_WhitespaceReader_ReadCfwsReverse__;
    puVar11 = (undefined8 *)Method_UnityWebSocketSharp_WebSocketFrame_readPayloadDataAsync__;
    puVar12 = (undefined8 *)Method_System_Collections_Generic_List<IPanel>_get_Item__;
    puVar13 = (undefined8 *)
              Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<JoinLobbyByCodeRequest,_Lobby>__
    ;
  }
  FUN_063ae678(*puVar4,uVar3);
  FUN_063ae678(*puVar12,uVar9);
  FUN_063ae678(*(undefined8 *)
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<CreateOrJoinLobbyRequest,_Lobby>__
               ,local_c4);
  FUN_063ae678(*(undefined8 *)Method_System_Security_Principal_WindowsImpersonationContext_Undo__,
               local_c0);
  FUN_063ae678(*(undefined8 *)Method_Oculus_Platform_WindowsPlatform_AsyncInitialize__,uVar8);
  FUN_063ae678(*(undefined8 *)
                Method_Unity_Services_Lobbies_Internal_WrappedLobbyService_TryCatchRequest<QuickJoinLobbyRequest,_Lobby>__
               ,uVar7);
  FUN_063ae678(*puVar11,uVar15);
  FUN_063ae678(*puVar10,uVar14);
  FUN_063ae678(*puVar13,uVar6);
  FUN_063ae678(*local_d0,uVar5);
  FUN_063ae678(*local_b8,local_90);
  FUN_063ae678(*local_a8,local_ac);
  FUN_063ae678(*local_98,local_9c);
  FUN_063ae678(*local_88,local_8c);
  FUN_063ae678(*local_78,local_7c);
  FUN_063ae678(*local_70,local_bc);
  FUN_063ae678(*local_68,local_b0);
  return;
}


