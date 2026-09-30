/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_session_create_t
ENTRY_POINT: 078da498
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_session_create_t
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  puVar3 = (undefined8 *)FUN_03ac43c4(param_1,param_2,0);
  plVar4 = (long *)(*(code *)*puVar3)();
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_ReliableProperty<int>_TypeInfo);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar4;
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
  lVar6 = FUN_03ac43c4(plVar4,*(long *)
                               Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                       ,1);
LAB_078da578:
  FUN_0497096c(uVar5,plVar4,*(undefined8 *)(lVar6 + 8),0);
  lVar6 = FUN_0481b1a8();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar6,*(undefined8 *)Normal_Realtime_ReliableProperty<string>_TypeInfo);
  uVar7 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)Normal_Realtime_ReliableProperty<float>_TypeInfo);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff6f50(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar6 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)Normal_Realtime_ReliableProperty<RealtimeRefData>_TypeInfo);
    puVar2 = PTR_DAT_084ada30;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x10);
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
  }
  return;
}


