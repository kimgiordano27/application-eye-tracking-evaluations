/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_transcribed_message_t_sessiongroup_handle_set
ENTRY_POINT: 078908dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_sessiongroup_handle_set
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x21;
  long *plVar10;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  
  if (in_x9 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_07890938;
      }
      in_x9 = in_x9 + -1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_07890938:
  plVar4 = (long *)(*(code *)*puVar3)();
  uVar6 = *(undefined8 *)(unaff_x19 + 10);
  uVar7 = *(undefined8 *)(unaff_x19 + 0xc);
  lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<AudioListener>_TypeInfo)
  ;
  FUN_0679343c(lVar5,0);
  puVar2 = System_Collections_Generic_List<AudioClip>_TypeInfo;
  *(undefined8 *)(lVar5 + 0x10) = uVar6;
  *(undefined8 *)(lVar5 + 0x18) = uVar7;
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_07890f58(uVar6,lVar5);
  plVar10 = *(long **)(unaff_x21 + 0x10);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_078909e0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar10,*unaff_x25,2);
LAB_078909e0:
  uVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)System_Collections_Generic_List<BaseUnits[]>_TypeInfo)
      {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_07890a4c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_03ac43c4(plVar4,*(long *)System_Collections_Generic_List<BaseUnits[]>_TypeInfo,1);
LAB_07890a4c:
  lVar5 = (*(code *)*puVar3)(plVar4,uVar6,uVar7,puVar3[1]);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000028 =
       FUN_058b71ec(lVar5,*(undefined8 *)System_Collections_Generic_List<BaseRaycaster>_TypeInfo);
  uVar8 = FUN_0587c6c4(&stack0x00000028,
                       *(undefined8 *)System_Collections_Generic_List<BaseInvokableCall>_TypeInfo);
  if ((uVar8 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff8ad8(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    lVar5 = FUN_0587c704(&stack0x00000028,
                         *(undefined8 *)System_Collections_Generic_List<BaseInputModule>_TypeInfo);
    puVar2 = PTR_DAT_084ada30;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x20);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar6 = *(undefined8 *)(lVar5 + 0x10);
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
  }
  return;
}


