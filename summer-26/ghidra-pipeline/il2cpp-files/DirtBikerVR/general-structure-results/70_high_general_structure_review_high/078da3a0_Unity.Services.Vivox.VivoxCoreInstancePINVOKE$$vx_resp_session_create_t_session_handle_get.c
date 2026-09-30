/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_create_t_session_handle_get
ENTRY_POINT: 078da3a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_create_t_session_handle_get
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_x9;
  int *in_x10;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_078da3c4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_078da3c4:
  lVar4 = (*(code *)*puVar3)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000028 =
       FUN_058b71ec(lVar4,*(undefined8 *)
                           Unity_Services_Vivox_ReadWriteQueue<IFailedDirectedTextMessage>_TypeInfo)
  ;
                    /* try { // try from 078da3e8 to 079da54b has its CatchHandler @ 078da3e8
                       catch() { ... } // from try @ 078da3e8 with catch @ 078da3e8
                       catch() { ... } // from try @ 078da644 with catch @ 078da3e8
                       catch() { ... } // from try @ 078da70c with catch @ 078da3e8
                       catch() { ... } // from try @ 078da784 with catch @ 078da3e8 */
  uVar5 = FUN_0587c6c4(&stack0x00000028,
                       *(undefined8 *)
                        Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff6f50(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    lVar4 = FUN_0587c704(&stack0x00000028,
                         *(undefined8 *)Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(lVar4 + 0x10);
    thunk_FUN_03afed3c();
    uVar6 = FUN_078da7d4(*(undefined8 *)(unaff_x19 + 10));
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_ReliableProperty<bool>_TypeInfo);
    FUN_078da874(uVar7,uVar6);
    plVar9 = *(long **)(unaff_x20 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084963c0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_078da4f8;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084963c0,0);
LAB_078da4f8:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_ReliableProperty<int>_TypeInfo);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo) {
          lVar4 = lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138;
          goto LAB_078da578;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_03ac43c4(plVar9,*(long *)
                                 Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                         ,1);
LAB_078da578:
    FUN_0497096c(uVar6,plVar9,*(undefined8 *)(lVar4 + 8),0);
    lVar4 = FUN_0481b1a8();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar4,*(undefined8 *)Normal_Realtime_ReliableProperty<string>_TypeInfo);
    uVar5 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)Normal_Realtime_ReliableProperty<float>_TypeInfo);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff6f50(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      lVar4 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)Normal_Realtime_ReliableProperty<RealtimeRefData>_TypeInfo
                          );
      puVar2 = PTR_DAT_084ada30;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x10);
      iVar1 = *(int *)(*unaff_x24 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar1 == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
    }
  }
  return;
}


