/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_set_tx_no_session_t_base__set
ENTRY_POINT: 078d9b3c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_set_tx_no_session_t_base__set
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 in_w9;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000028;
  
  *unaff_x19 = in_w9;
  uStack0000000000000028 = param_1;
  lVar3 = FUN_0587c704(&stack0x00000028,
                       *(undefined8 *)Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(lVar3 + 0x10);
  thunk_FUN_03afed3c();
  uVar8 = *(undefined8 *)(unaff_x19 + 10);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                              System_Collections_ObjectModel_ReadOnlyDictionary<string,_ReadOnlyCollection<VivoxParticipant>>_TypeInfo
                            );
  FUN_078d9fa4(uVar4,uVar8);
  plVar9 = *(long **)(unaff_x20 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_084963c0) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_078d9cd4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084963c0,0);
LAB_078d9cd4:
  plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                              Unity_Services_Vivox_ReadWriteDictionary<ChannelId,_IChannelSession,_ChannelSession>_TypeInfo
                            );
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo) {
        lVar3 = lVar3 + (long)*piVar7 * 0x10 + 0x138;
        goto LAB_078d9d50;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar3 = FUN_03ac43c4(plVar9,*(long *)
                               Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                       ,0);
LAB_078d9d50:
  FUN_0497096c(uVar4,plVar9,*(undefined8 *)(lVar3 + 8),0);
  lVar3 = FUN_0481b1a8();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar3,*(undefined8 *)
                           Unity_Services_Vivox_ReadWriteQueue<IDirectedTextMessage>_TypeInfo);
  uVar6 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)
                        Unity_Services_Vivox_ReadWriteQueue<IAccountArchiveMessage>_TypeInfo);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff6d08(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar3 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)Unity_Services_Vivox_ReadWriteQueue<AccountId>_TypeInfo);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar4 = FUN_078da064(*(undefined8 *)(lVar3 + 0x20));
    puVar2 = System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo;
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
  }
  return;
}


