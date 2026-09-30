/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_session_handle_get
ENTRY_POINT: 084a7be8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_session_handle_get
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  
  FUN_06b6d004(param_1,*unaff_x19);
  plVar8 = (long *)(unaff_x29 + 0x50);
  *plVar8 = param_1;
  thunk_FUN_03d1023c(plVar8,param_1);
  puVar4 = PTR_DAT_0927f6e0;
  puVar3 = PTR_DAT_0927f6d0;
  puVar2 = PTR_DAT_0927ee08;
  puVar1 = PTR_DAT_091a8410;
  if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_06b6e20c(&stack0x00000090,*(long *)(unaff_x28 + 0x50),*(undefined8 *)PTR_DAT_0927f6c8);
  while( true ) {
    uVar6 = FUN_06e6c258(&stack0x00000090,*(undefined8 *)puVar4);
    uVar5 = in_stack_000000a0;
    if ((uVar6 & 1) == 0) {
      FUN_06e6c378(&stack0x00000090,*(undefined8 *)puVar3);
      *(undefined8 *)(unaff_x29 + 0x20) = *(undefined8 *)(unaff_x28 + 0x20);
      thunk_FUN_03d1023c();
      *(undefined8 *)(unaff_x29 + 0x28) = *(undefined8 *)(unaff_x28 + 0x28);
      thunk_FUN_03d1023c();
      *(undefined8 *)(unaff_x29 + 0x58) = *(undefined8 *)(unaff_x28 + 0x58);
      thunk_FUN_03d1023c();
      *(undefined1 *)(unaff_x29 + 0x41) = *(undefined1 *)(unaff_x28 + 0x41);
      *(undefined1 *)(unaff_x29 + 0x40) = *(undefined1 *)(unaff_x28 + 0x40);
      *(undefined8 *)(unaff_x29 + 0x18) = *(undefined8 *)(unaff_x28 + 0x18);
      thunk_FUN_03d1023c((undefined8 *)(unaff_x29 + 0x18));
      *(undefined4 *)(unaff_x29 + 0x38) = *(undefined4 *)(unaff_x28 + 0x38);
      *(undefined8 *)(unaff_x29 + 0x60) = *(undefined8 *)(unaff_x28 + 0x60);
      *(undefined8 *)(unaff_x29 + 0x68) = *(undefined8 *)(unaff_x28 + 0x68);
      return;
    }
    if (in_stack_000000a8 == 0) break;
    lVar9 = *plVar8;
    uVar10 = *(undefined8 *)(in_stack_000000a8 + 0x10);
    uVar11 = *(undefined8 *)(in_stack_000000a8 + 0x18);
    lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
    FUN_071bc31c(lVar7,0);
    *(undefined8 *)(lVar7 + 0x10) = uVar10;
    thunk_FUN_03d1023c((undefined8 *)(lVar7 + 0x10),uVar10);
    *(undefined8 *)(lVar7 + 0x18) = uVar11;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6ddc8(lVar9,uVar5,lVar7,*(undefined8 *)puVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


