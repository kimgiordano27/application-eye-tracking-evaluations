/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_set_participant_volume_for_me_t_base__set
ENTRY_POINT: 078db5f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_set_participant_volume_for_me_t_base__set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  undefined4 *unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  do {
    in_x9 = in_x9 + -1;
    piVar6 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_03ac43c4();
      goto LAB_078db664;
    }
    plVar2 = (long *)(in_x10 + 2);
    in_x10 = piVar6;
  } while (*plVar2 != param_3);
  puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
LAB_078db664:
  plVar2 = (long *)(*(code *)*puVar1)();
  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<CowatchViewerList>_TypeInfo);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar2;
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
  lVar4 = FUN_03ac43c4(plVar2,*(long *)
                               Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                       ,2);
LAB_078db6e4:
  FUN_0497096c(uVar3,plVar2,*(undefined8 *)(lVar4 + 8),0);
  lVar4 = FUN_0481ab18();
  if (lVar4 != 0) {
    in_stack_00000018 = FUN_058b71ec(lVar4,*(undefined8 *)PTR_DAT_084963d8);
    uVar5 = FUN_0587c6c4(&stack0x00000018,*(undefined8 *)PTR_DAT_084963d0);
    if ((uVar5 & 1) == 0) {
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
      lVar4 = *unaff_x24;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_0666d184(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


