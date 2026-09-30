/*
FUNCTION_NAME: FUN_078d99f8
ENTRY_POINT: 078d99f8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


void FUN_078d99f8(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_08987a7b & 1) == 0) {
    FUN_03a8a718(
                System_Collections_ObjectModel_ReadOnlyDictionary<string,_ReadOnlyCollection<VivoxParticipant>>_TypeInfo
                );
    FUN_03a8a718(
                Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>_TypeInfo
                );
    FUN_03a8a718(
                Unity_Services_Vivox_ReadWriteDictionary<AccountId,_IPresenceSubscription,_PresenceSubscription>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo);
    FUN_03a8a718(
                Unity_Services_Vivox_ReadWriteDictionary<ChannelId,_IChannelSession,_ChannelSession>_TypeInfo
                );
    FUN_03a8a718(
                Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_084963c0);
    FUN_03a8a718(
                Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
                );
    FUN_03a8a718(
                Unity_Services_Vivox_ReadWriteDictionary<string,_IPresenceLocation,_PresenceLocation>_TypeInfo
                );
    FUN_03a8a718(Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<AccountId>_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<IAccountArchiveMessage>_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<IDirectedTextMessage>_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<IFailedDirectedTextMessage>_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<ISessionArchiveMessage>_TypeInfo);
    DAT_08987a7b = 1;
  }
  puVar2 = System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo;
  lVar9 = *(long *)(param_1 + 8);
  local_38 = 0;
  local_48 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      goto LAB_078d9db0;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar10 = *(long **)(lVar9 + 0x18);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
           ) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_078d9ba8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar10,*(long *)
                                   Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
                          ,0);
LAB_078d9ba8:
    lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_058b71ec(lVar6,*(undefined8 *)
                                   Unity_Services_Vivox_ReadWriteQueue<IFailedDirectedTextMessage>_TypeInfo
                           );
    uVar7 = FUN_0587c6c4(&local_38,
                         *(undefined8 *)
                          Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      thunk_FUN_03afed3c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff6d08(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)
                    Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>_TypeInfo
                  );
      return;
    }
  }
  lVar6 = FUN_0587c704(&local_38,
                       *(undefined8 *)Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar6 + 0x10);
  thunk_FUN_03afed3c();
  uVar11 = *(undefined8 *)(param_1 + 10);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                              System_Collections_ObjectModel_ReadOnlyDictionary<string,_ReadOnlyCollection<VivoxParticipant>>_TypeInfo
                            );
  FUN_078d9fa4(uVar5,uVar11);
  plVar10 = *(long **)(lVar9 + 0x10);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084963c0) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_078d9cd4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)PTR_DAT_084963c0,0);
LAB_078d9cd4:
  plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                               Unity_Services_Vivox_ReadWriteDictionary<ChannelId,_IChannelSession,_ChannelSession>_TypeInfo
                             );
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo) {
        lVar6 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
        goto LAB_078d9d50;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_03ac43c4(plVar10,*(long *)
                                Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                       ,0);
LAB_078d9d50:
  FUN_0497096c(uVar11,plVar10,*(undefined8 *)(lVar6 + 8),0);
  lVar9 = FUN_0481b1a8(lVar9,uVar11,uVar5,
                       *(undefined8 *)
                        Unity_Services_Vivox_ReadWriteQueue<ISessionArchiveMessage>_TypeInfo);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  local_48 = FUN_058b71ec(lVar9,*(undefined8 *)
                                 Unity_Services_Vivox_ReadWriteQueue<IDirectedTextMessage>_TypeInfo)
  ;
  uVar7 = FUN_0587c6c4(&local_48,
                       *(undefined8 *)
                        Unity_Services_Vivox_ReadWriteQueue<IAccountArchiveMessage>_TypeInfo);
  if ((uVar7 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0xe) = local_48;
    thunk_FUN_03afed3c(param_1 + 0xe,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff6d08(param_1 + 2,&local_48,param_1,
                 *(undefined8 *)
                  Unity_Services_Vivox_ReadWriteDictionary<AccountId,_IPresenceSubscription,_PresenceSubscription>_TypeInfo
                );
    return;
  }
LAB_078d9db0:
  lVar9 = FUN_0587c704(&local_48,
                       *(undefined8 *)Unity_Services_Vivox_ReadWriteQueue<AccountId>_TypeInfo);
  if (lVar9 != 0) {
    uVar5 = FUN_078da064(*(undefined8 *)(lVar9 + 0x20));
    puVar3 = System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo;
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(param_1 + 2,uVar5,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


