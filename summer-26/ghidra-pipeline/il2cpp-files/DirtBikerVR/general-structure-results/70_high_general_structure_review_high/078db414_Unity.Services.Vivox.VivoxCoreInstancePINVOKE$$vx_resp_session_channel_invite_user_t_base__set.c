/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_channel_invite_user_t_base__set
ENTRY_POINT: 078db414
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_channel_invite_user_t_base__set
               (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int *unaff_x19;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718();
  FUN_03a8a718(
              Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
              );
                    /* try { // try from 078db42c to 079db42f has its CatchHandler @ 078db438 */
  FUN_03a8a718(Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo);
                    /* catch() { ... } // from try @ 078db42c with catch @ 078db438 */
  FUN_03a8a718(PTR_DAT_084963c8);
                    /* try { // try from 078db43c to 079db443 has its CatchHandler @ 078db44c */
                    /* try { // try from 078db444 to 079db44f has its CatchHandler @ 078dae1c */
  FUN_03a8a718(PTR_DAT_084963d0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 078db43c with catch @ 078db44c
                        */
  FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo);
  FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<IFailedDirectedTextMessage>_TypeInfo);
  FUN_03a8a718(PTR_DAT_084963d8);
  FUN_03a8a718(Oculus_Platform_Request<CowatchingState>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa81) = 1;
  puVar1 = PTR_DAT_08488b88;
  lVar7 = *(long *)(unaff_x19 + 8);
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*unaff_x19 == 1) {
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xe);
      unaff_x19[0xe] = 0;
      unaff_x19[0xf] = 0;
      *unaff_x19 = -1;
      goto LAB_078db744;
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar8 = *(long **)(lVar7 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)
             Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
           ) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_078db538;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_03ac43c4(plVar8,*(long *)
                                  Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
                          ,0);
LAB_078db538:
    lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 =
         FUN_058b71ec(lVar4,*(undefined8 *)
                             Unity_Services_Vivox_ReadWriteQueue<IFailedDirectedTextMessage>_TypeInfo
                     );
    uVar5 = FUN_0587c6c4(&stack0x00000028,
                         *(undefined8 *)
                          Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e3cfc(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  lVar4 = FUN_0587c704(&stack0x00000028,
                       *(undefined8 *)Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar4 + 0x10);
  thunk_FUN_03afed3c();
  uVar9 = *(undefined8 *)(unaff_x19 + 10);
  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<ChallengeList>_TypeInfo);
  FUN_078db908(uVar3,uVar9);
  plVar8 = *(long **)(lVar7 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_084963c0) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_078db664;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)PTR_DAT_084963c0,0);
LAB_078db664:
  plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
  uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<CowatchViewerList>_TypeInfo);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo) {
        lVar4 = lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138;
        goto LAB_078db6e4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = FUN_03ac43c4(plVar8,*(long *)
                               Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                       ,2);
LAB_078db6e4:
  FUN_0497096c(uVar9,plVar8,*(undefined8 *)(lVar4 + 8),0);
  lVar7 = FUN_0481ab18(lVar7,uVar9,uVar3,
                       *(undefined8 *)Oculus_Platform_Request<CowatchingState>_TypeInfo);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 = FUN_058b71ec(lVar7,*(undefined8 *)PTR_DAT_084963d8);
  uVar5 = FUN_0587c6c4(&stack0x00000018,*(undefined8 *)PTR_DAT_084963d0);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e3cfc(unaff_x19 + 2,&stack0x00000018);
    return;
  }
LAB_078db744:
  FUN_0587c704(&stack0x00000018,*(undefined8 *)PTR_DAT_084963c8);
  lVar7 = *(long *)puVar1;
  *unaff_x19 = -2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


