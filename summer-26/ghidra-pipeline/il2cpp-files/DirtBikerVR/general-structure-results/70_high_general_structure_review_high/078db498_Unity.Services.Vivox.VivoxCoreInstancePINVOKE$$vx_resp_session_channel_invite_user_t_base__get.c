/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_channel_invite_user_t_base__get
ENTRY_POINT: 078db498
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_channel_invite_user_t_base__get
               (void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int in_w8;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x24;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  uStack0000000000000010 = 0;
  if (in_w8 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (in_w8 == 1) {
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xe);
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      *unaff_x19 = 0xffffffff;
      goto LAB_078db744;
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar6 = *(long **)(unaff_x20 + 0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)
             Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
           ) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_078db538;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_03ac43c4(plVar6,*(long *)
                                  Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
                          ,0);
LAB_078db538:
    lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             Unity_Services_Vivox_ReadWriteQueue<IFailedDirectedTextMessage>_TypeInfo
                     );
    uVar4 = FUN_0587c6c4(&stack0x00000028,
                         *(undefined8 *)
                          Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e3cfc(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
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
  uVar7 = *(undefined8 *)(unaff_x19 + 10);
  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<ChallengeList>_TypeInfo);
  FUN_078db908(uVar2,uVar7);
  plVar6 = *(long **)(unaff_x20 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_084963c0) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_078db664;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084963c0,0);
LAB_078db664:
  plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<CowatchViewerList>_TypeInfo);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)
           Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo) {
        lVar3 = lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138;
        goto LAB_078db6e4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_03ac43c4(plVar6,*(long *)
                               Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                       ,2);
LAB_078db6e4:
  FUN_0497096c(uVar2,plVar6,*(undefined8 *)(lVar3 + 8),0);
  lVar3 = FUN_0481ab18();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 = FUN_058b71ec(lVar3,*(undefined8 *)PTR_DAT_084963d8);
  uVar4 = FUN_0587c6c4(&stack0x00000018,*(undefined8 *)PTR_DAT_084963d0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e3cfc(unaff_x19 + 2,&stack0x00000018);
    return;
  }
LAB_078db744:
  FUN_0587c704(&stack0x00000018,*(undefined8 *)PTR_DAT_084963c8);
  lVar3 = *unaff_x24;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


