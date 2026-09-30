/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_transcribed_message_t_session_handle_set
ENTRY_POINT: 07890a08
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_session_handle_set
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long in_x9;
  int *piVar6;
  undefined4 *unaff_x19;
  undefined8 uVar7;
  long *unaff_x24;
  undefined8 in_stack_00000028;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_07890a4c;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_07890a4c:
  lVar4 = (*(code *)*puVar3)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000028 =
       FUN_058b71ec(lVar4,*(undefined8 *)System_Collections_Generic_List<BaseRaycaster>_TypeInfo);
  uVar5 = FUN_0587c6c4(&stack0x00000028,
                       *(undefined8 *)System_Collections_Generic_List<BaseInvokableCall>_TypeInfo);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff8ad8(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    lVar4 = FUN_0587c704(&stack0x00000028,
                         *(undefined8 *)System_Collections_Generic_List<BaseInputModule>_TypeInfo);
    puVar2 = PTR_DAT_084ada30;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x20);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar7 = *(undefined8 *)(lVar4 + 0x10);
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar2);
  }
  return;
}


