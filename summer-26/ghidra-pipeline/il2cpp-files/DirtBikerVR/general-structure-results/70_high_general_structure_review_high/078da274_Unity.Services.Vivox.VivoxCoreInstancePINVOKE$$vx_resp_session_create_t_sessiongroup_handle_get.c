/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_create_t_sessiongroup_handle_get
ENTRY_POINT: 078da274
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_create_t_sessiongroup_handle_get
               (void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718(Normal_Realtime_ReliableProperty<int>_TypeInfo);
  FUN_03a8a718(Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo)
  ;
  FUN_03a8a718(PTR_DAT_084963c0);
  FUN_03a8a718(
              Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
              );
  FUN_03a8a718(Normal_Realtime_ReliableProperty<Quaternion>_TypeInfo);
  FUN_03a8a718(Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo);
  FUN_03a8a718(Normal_Realtime_ReliableProperty<RealtimeRefData>_TypeInfo);
  FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo);
  FUN_03a8a718(Normal_Realtime_ReliableProperty<float>_TypeInfo);
  FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<IFailedDirectedTextMessage>_TypeInfo);
  FUN_03a8a718(Normal_Realtime_ReliableProperty<string>_TypeInfo);
  FUN_03a8a718(Normal_Realtime_ReliableProperty<uint>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa7d) = 1;
  puVar2 = PTR_DAT_084ad6a0;
  lVar9 = *(long *)(unaff_x19 + 8);
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
      goto LAB_078da5d8;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar11 = *(long **)(lVar9 + 0x18);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
           ) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_078da3c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
                          ,0);
LAB_078da3c4:
    lVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 =
         FUN_058b71ec(lVar6,*(undefined8 *)
                             Unity_Services_Vivox_ReadWriteQueue<IFailedDirectedTextMessage>_TypeInfo
                     );
    uVar7 = FUN_0587c6c4(&stack0x00000028,
                         *(undefined8 *)
                          Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff6f50(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  lVar6 = FUN_0587c704(&stack0x00000028,
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
  uVar10 = FUN_078da7d4(*(undefined8 *)(unaff_x19 + 10));
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_ReliableProperty<bool>_TypeInfo);
  FUN_078da874(uVar5,uVar10);
  plVar11 = *(long **)(lVar9 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084963c0) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_078da4f8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)PTR_DAT_084963c0,0);
LAB_078da4f8:
  plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_ReliableProperty<int>_TypeInfo);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo) {
        lVar6 = lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138;
        goto LAB_078da578;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_03ac43c4(plVar11,*(long *)
                                Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                       ,1);
LAB_078da578:
  FUN_0497096c(uVar10,plVar11,*(undefined8 *)(lVar6 + 8),0);
  lVar9 = FUN_0481b1a8(lVar9,uVar10,uVar5,
                       *(undefined8 *)Normal_Realtime_ReliableProperty<uint>_TypeInfo);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar9,*(undefined8 *)Normal_Realtime_ReliableProperty<string>_TypeInfo);
  uVar7 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)Normal_Realtime_ReliableProperty<float>_TypeInfo);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff6f50(unaff_x19 + 2,&stack0x00000018);
    return;
  }
LAB_078da5d8:
  lVar9 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)Normal_Realtime_ReliableProperty<RealtimeRefData>_TypeInfo);
  puVar3 = PTR_DAT_084ada30;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(lVar9 + 0x20) != 0) {
    uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x10);
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *unaff_x19 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar10,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


