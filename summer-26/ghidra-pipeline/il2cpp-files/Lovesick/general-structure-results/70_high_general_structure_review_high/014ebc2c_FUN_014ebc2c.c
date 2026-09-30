/*
FUNCTION_NAME: FUN_014ebc2c
ENTRY_POINT: 014ebc2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3
*/


void FUN_014ebc2c(long param_1,long *param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  double dVar8;
  double __x;
  double local_38;
  
  puVar1 = PTR_DAT_033edf28;
  if ((DAT_03776ffd & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                      );
    thunk_FUN_00d48444(PTR_DAT_033edf28);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputAction_ReadValue<int>__);
    DAT_03776ffd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_014e745c(param_1);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  *(long **)(param_1 + 0xb0) = param_2;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__)
      {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_014ebd08;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_00d59724(param_2,*(long *)
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                        ,1);
LAB_014ebd08:
  iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  __x = (double)((float)iVar2 / 1000.0);
  dVar8 = modf(__x,&local_38);
  if (0.0 <= (float)iVar2 / 1000.0) {
    if (dVar8 != 0.5) {
      local_38 = (double)(long)(__x + 0.5);
      goto LAB_014ebdcc;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar8 != -0.5) {
      local_38 = (double)(long)(__x + -0.5);
      goto LAB_014ebdcc;
    }
    dVar8 = -1.0;
  }
  if (((long)local_38 & 1U) != 0) {
    local_38 = local_38 + dVar8;
  }
LAB_014ebdcc:
  iVar2 = -0x80000000;
  if (local_38 != INFINITY) {
    iVar2 = (int)local_38;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  uVar6 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0xa8),0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)Method_UnityEngine_InputSystem_InputAction_ReadValue<int>__ + 0xe0) == 0)
    {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_014e17a4();
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
  }
  *(byte *)(param_1 + 0xb8) = param_4 & 1;
  return;
}


