/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_session_channel_invite_user_t
ENTRY_POINT: 078db578
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_session_channel_invite_user_t
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  lVar1 = FUN_0587c704(&stack0x00000028,**(undefined8 **)(param_1 + 0xd40));
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(lVar1 + 0x10);
  thunk_FUN_03afed3c();
  uVar6 = *(undefined8 *)(unaff_x19 + 10);
  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<ChallengeList>_TypeInfo);
  FUN_078db908(uVar2,uVar6);
  plVar7 = *(long **)(unaff_x20 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar1 = *plVar7;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_084963c0) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_078db664;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)PTR_DAT_084963c0,0);
LAB_078db664:
  plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<CowatchViewerList>_TypeInfo);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar1 = *plVar7;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)
           Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo) {
        lVar1 = lVar1 + (long)(*piVar5 + 2) * 0x10 + 0x138;
        goto LAB_078db6e4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar1 = FUN_03ac43c4(plVar7,*(long *)
                               Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                       ,2);
LAB_078db6e4:
  FUN_0497096c(uVar2,plVar7,*(undefined8 *)(lVar1 + 8),0);
  lVar1 = FUN_0481ab18();
  if (lVar1 != 0) {
    in_stack_00000018 = FUN_058b71ec(lVar1,*(undefined8 *)PTR_DAT_084963d8);
    uVar4 = FUN_0587c6c4(&stack0x00000018,*(undefined8 *)PTR_DAT_084963d0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e3cfc(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_0587c704(&stack0x00000018,*(undefined8 *)PTR_DAT_084963c8);
      lVar1 = *unaff_x24;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_0666d184(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


