/*
FUNCTION_NAME: FUN_03275bf0
ENTRY_POINT: 03275bf0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long FUN_03275bf0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  char local_34 [4];
  
  if ((DAT_04532bd6 & 1) == 0) {
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttPacket>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MqttChannelAdapter_<ReceivePacketAsync>d__32>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReceivedMqttPacket>_SetStateMachine__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReceivedMqttPacket>_get_Task__
                );
    FUN_01c5d288(
                UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<InvokeOnRenderObjectCallbackPass_PassData>_TypeInfo
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<SerializableProjectConfiguration>,_CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                );
    FUN_01c5d288(PTR_DAT_04230f48);
    FUN_01c5d288(ExitGames_Client_Photon_StructWrapping_StructWrapper<byte>_TypeInfo);
    FUN_01c5d288(PTR_DAT_04237850);
    FUN_01c5d288(PTR_DAT_04231458);
    FUN_01c5d288(PTR_DAT_04236818);
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                );
    FUN_01c5d288(PTR_DAT_04231d40);
    FUN_01c5d288(PTR_DAT_04230ad8);
    DAT_04532bd6 = 1;
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    return *(long *)(param_1 + 0x158);
  }
  lVar4 = FUN_01c5d2fc(*(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReceivedMqttPacket>_SetStateMachine__
                       ,199);
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
  ;
  if (*(int *)(*(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
              + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                      );
  }
  if (DAT_04532c1c == '\0') {
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                );
    DAT_04532c1c = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar5 = *(long *)puVar2;
  }
  if (**(char **)(lVar5 + 0xb8) == '\0') {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_03276408;
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
      *(long *)(param_1 + 0x20) = lVar5;
      if (lVar5 == 0) goto LAB_03276408;
    }
    FUN_0315243c(lVar5,*(undefined8 *)
                        ExitGames_Client_Photon_StructWrapping_StructWrapper<byte>_TypeInfo,0);
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_03276408;
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
    *(long *)(param_1 + 0x60) = lVar5;
    if (lVar5 == 0) goto LAB_03276408;
  }
  uVar6 = FUN_03156e1c(lVar5,0);
  puVar1 = PTR_DAT_04231d40;
  uVar7 = FUN_031529f8(*(undefined8 *)PTR_DAT_04231d40,uVar6,0);
  if ((uVar7 & 1) != 0) {
    FUN_032764cc(param_1,lVar4,*(undefined8 *)puVar1,0xf,0);
  }
  puVar1 = PTR_DAT_04230ad8;
  uVar7 = FUN_031529f8(*(undefined8 *)PTR_DAT_04230ad8,uVar6,0);
  if ((uVar7 & 1) != 0) {
    FUN_032764cc(param_1,lVar4,*(undefined8 *)puVar1,0xf,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04532c1c == '\0') {
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                );
    DAT_04532c1c = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar5 = *(long *)puVar2;
  }
  if ((((**(char **)(lVar5 + 0xb8) == '\0') &&
       (uVar7 = FUN_031529f8(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                             ,uVar6,0), (uVar7 & 1) != 0)) &&
      (uVar7 = FUN_031529f8(*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
                            ,uVar6,0), (uVar7 & 1) != 0)) &&
     (uVar7 = FUN_031529f8(*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReceivedMqttPacket>_get_Task__
                           ,uVar6,0), (uVar7 & 1) != 0)) {
    lVar5 = *(long *)(param_1 + 0x60);
    if (lVar5 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_03276408;
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
      *(long *)(param_1 + 0x60) = lVar5;
    }
    FUN_032764cc(param_1,lVar4,lVar5,0x700,0);
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_03276408;
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    *(long *)(param_1 + 0x38) = lVar5;
  }
  FUN_032764cc(param_1,lVar4,lVar5,0x403,0);
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_03276408;
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    *(long *)(param_1 + 0x40) = lVar5;
  }
  FUN_032764cc(param_1,lVar4,lVar5,0x504,1);
  local_34[0] = '\0';
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04532c1c == '\0') {
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                );
    DAT_04532c1c = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar5 = *(long *)puVar2;
  }
  if (**(char **)(lVar5 + 0xb8) == '\0') {
    FUN_032767c4(param_1,lVar4,local_34);
    lVar5 = *(long *)puVar2;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04532c1c == '\0') {
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientConnectResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<MqttClientConnectResult>,_MqttClient_<ConnectInternal>d__54>__
                );
    DAT_04532c1c = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar5 = *(long *)puVar2;
  }
  if (**(char **)(lVar5 + 0xb8) == '\0') {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_03276408;
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
      *(long *)(param_1 + 0x20) = lVar5;
      if (lVar5 == 0) goto LAB_03276408;
    }
    uVar7 = FUN_0315243c(lVar5,*(undefined8 *)
                                UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<InvokeOnRenderObjectCallbackPass_PassData>_TypeInfo
                         ,0);
    if ((uVar7 & 1) == 0) goto LAB_03276024;
    uVar6 = 0xf;
  }
  else {
LAB_03276024:
    uVar6 = 0xf00;
  }
  FUN_032764cc(param_1,lVar4,*(undefined8 *)PTR_DAT_04230f48,uVar6,0);
  if (local_34[0] == '\0') {
    uVar6 = FUN_03273738(param_1);
    FUN_032764cc(param_1,lVar4,uVar6,0x600,0);
  }
  FUN_032770b0(param_1,lVar4,0);
  iVar10 = 1;
  do {
    uVar6 = FUN_03274c20(param_1,iVar10);
    FUN_032764cc(param_1,lVar4,uVar6,5,iVar10);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0xe);
  if (*(uint *)(param_1 + 0x144) == 0xffffffff) {
    uVar7 = FUN_032754bc(param_1);
    if ((uVar7 & 1) != 0) goto LAB_032760d0;
  }
  else if ((*(uint *)(param_1 + 0x144) & 1) != 0) {
LAB_032760d0:
    iVar10 = 1;
    do {
      uVar6 = Newtonsoft_Json_Utilities_DateTimeUtils__ConvertDateTimeToJavaScriptTicks
                        (param_1,iVar10,1,0);
      FUN_032764cc(param_1,lVar4,uVar6,5,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0xe);
  }
  uVar3 = *(uint *)(param_1 + 0x144);
  if (uVar3 == 0xffffffff) {
    uVar3 = FUN_032754bc(param_1);
  }
  if ((uVar3 >> 1 & 1) != 0) {
    iVar10 = 1;
    do {
      uVar6 = Newtonsoft_Json_Utilities_DateTimeUtils__ConvertDateTimeToJavaScriptTicks
                        (param_1,iVar10,2,0);
      FUN_032764cc(param_1,lVar4,uVar6,5,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0xe);
  }
  iVar10 = 0;
  do {
    uVar6 = FUN_03274b24(param_1,iVar10);
    FUN_032764cc(param_1,lVar4,uVar6,7,iVar10);
    uVar6 = FUN_03274330(param_1,iVar10);
    FUN_032764cc(param_1,lVar4,uVar6,7,iVar10);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 7);
  plVar8 = *(long **)(param_1 + 0x78);
  if ((plVar8 != (long *)0x0) &&
     (lVar5 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240)), lVar5 != 0))
  {
    if (0 < *(int *)(lVar5 + 0x18)) {
      iVar10 = 1;
      do {
        uVar6 = FUN_032734d0(param_1,iVar10);
        FUN_032764cc(param_1,lVar4,uVar6,9,iVar10);
        uVar6 = FUN_032735fc(param_1,iVar10);
        FUN_032764cc(param_1,lVar4,uVar6,9,iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar10 <= *(int *)(lVar5 + 0x18));
    }
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttPacket>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MqttChannelAdapter_<ReceivePacketAsync>d__32>__
    ;
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttPacket>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MqttChannelAdapter_<ReceivePacketAsync>d__32>__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar5 = FUN_03272e40();
    if (lVar5 != 0) {
      lVar9 = *(long *)(lVar5 + 0x38);
      if (lVar9 == 0) {
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_03276408;
        lVar9 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
        *(long *)(lVar5 + 0x38) = lVar9;
      }
      FUN_032764cc(param_1,lVar4,lVar9,0x403,0);
      lVar5 = FUN_03272e40();
      if (lVar5 != 0) {
        lVar9 = *(long *)(lVar5 + 0x40);
        if (lVar9 == 0) {
          if (*(long *)(lVar5 + 0x10) == 0) goto LAB_03276408;
          lVar9 = *(long *)(*(long *)(lVar5 + 0x10) + 0x18);
          *(long *)(lVar5 + 0x40) = lVar9;
        }
        iVar10 = 1;
        FUN_032764cc(param_1,lVar4,lVar9,0x504,1);
        do {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar5 = FUN_03272e40();
          if (lVar5 == 0) goto LAB_03276408;
          uVar6 = FUN_03274d20(lVar5,iVar10);
          FUN_032764cc(param_1,lVar4,uVar6,5,iVar10);
          lVar5 = FUN_03272e40();
          if (lVar5 == 0) goto LAB_03276408;
          uVar6 = FUN_03274c20(lVar5,iVar10);
          FUN_032764cc(param_1,lVar4,uVar6,5,iVar10);
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0xd);
        iVar10 = 0;
        do {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar5 = FUN_03272e40();
          if (lVar5 == 0) goto LAB_03276408;
          uVar6 = FUN_03274b24(lVar5,iVar10);
          FUN_032764cc(param_1,lVar4,uVar6,7,iVar10);
          lVar5 = FUN_03272e40();
          if (lVar5 == 0) goto LAB_03276408;
          uVar6 = FUN_03274330(lVar5,iVar10);
          FUN_032764cc(param_1,lVar4,uVar6,7,iVar10);
          iVar10 = iVar10 + 1;
        } while (iVar10 != 7);
        lVar5 = FUN_032736e4(param_1);
        if (lVar5 != 0) {
          uVar7 = 0;
          do {
            if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar7) {
              FUN_032764cc(param_1,lVar4,*(undefined8 *)PTR_DAT_04237850,0xe00,0);
              FUN_032764cc(param_1,lVar4,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                           ,8,0);
              FUN_032764cc(param_1,lVar4,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<SerializableProjectConfiguration>,_CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
                           ,8,0);
              FUN_032764cc(param_1,lVar4,*(undefined8 *)PTR_DAT_04231458,0x600,0);
              FUN_032764cc(param_1,lVar4,*(undefined8 *)PTR_DAT_04236818,0x700,0);
              *(long *)(param_1 + 0x158) = lVar4;
              return lVar4;
            }
            lVar5 = FUN_032736e4(param_1);
            if (lVar5 == 0) break;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            lVar9 = uVar7 * 8;
            uVar7 = uVar7 + 1;
            FUN_032764cc(param_1,lVar4,*(undefined8 *)(lVar5 + lVar9 + 0x20),9,uVar7 & 0xffffffff);
            lVar5 = FUN_032736e4(param_1);
          } while (lVar5 != 0);
        }
      }
    }
  }
LAB_03276408:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


