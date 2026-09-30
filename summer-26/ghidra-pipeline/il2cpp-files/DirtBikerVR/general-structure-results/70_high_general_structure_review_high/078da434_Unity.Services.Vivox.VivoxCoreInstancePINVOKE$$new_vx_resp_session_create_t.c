/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_session_create_t
ENTRY_POINT: 078da434
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_session_create_t(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_ReliableProperty<bool>_TypeInfo);
  FUN_078da874(uVar3,param_1);
  plVar8 = *(long **)(unaff_x20 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_084963c0) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_078da4f8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)PTR_DAT_084963c0,0);
LAB_078da4f8:
  plVar8 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_ReliableProperty<int>_TypeInfo);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo) {
        lVar5 = lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138;
        goto LAB_078da578;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_03ac43c4(plVar8,*(long *)
                               Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                       ,1);
LAB_078da578:
  FUN_0497096c(uVar3,plVar8,*(undefined8 *)(lVar5 + 8),0);
  lVar5 = FUN_0481b1a8();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar5,*(undefined8 *)Normal_Realtime_ReliableProperty<string>_TypeInfo);
  uVar6 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)Normal_Realtime_ReliableProperty<float>_TypeInfo);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff6f50(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar5 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)Normal_Realtime_ReliableProperty<RealtimeRefData>_TypeInfo);
    puVar2 = PTR_DAT_084ada30;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x10);
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
  }
  return;
}


