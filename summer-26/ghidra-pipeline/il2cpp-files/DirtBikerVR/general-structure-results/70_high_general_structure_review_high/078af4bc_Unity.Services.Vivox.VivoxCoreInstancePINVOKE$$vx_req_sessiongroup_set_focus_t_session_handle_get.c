/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_focus_t_session_handle_get
ENTRY_POINT: 078af4bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_focus_t_session_handle_get
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x23 + 0x10) = param_2;
  thunk_FUN_03afed3c();
  if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined8 *)(unaff_x23 + 0x18) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x18);
  thunk_FUN_03afed3c();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
        goto LAB_078af554;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_078af554:
  lVar3 = (*(code *)*puVar1)();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000028 =
       FUN_058b71ec(lVar3,*(undefined8 *)System_Collections_Generic_List<ParticleSystem>_TypeInfo);
  uVar4 = FUN_0587c6c4(&stack0x00000028,
                       *(undefined8 *)System_Collections_Generic_List<ParameterExpression>_TypeInfo)
  ;
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03fe8168(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    uVar2 = FUN_0587c704(&stack0x00000028,*unaff_x27);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078ad680();
    lVar3 = *(long *)(unaff_x20 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar2,*(undefined8 *)(lVar3 + 0x28))
      ;
    }
    *(undefined8 *)(unaff_x19 + 10) = 0;
    *unaff_x19 = 0xfffffffe;
    thunk_FUN_03afed3c(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar2,*unaff_x25);
  }
  return;
}


