/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_sessiongroup_handle_set
ENTRY_POINT: 084a8de4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_sessiongroup_handle_set
               (undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  plVar1 = (long *)(*(code *)*param_1)();
  uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f808);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0927f760) {
        lVar3 = lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138;
        goto LAB_084a8e8c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_03d8f370(plVar1,*(long *)PTR_DAT_0927f760,3);
LAB_084a8e8c:
  FUN_054d4240(uVar2,plVar1,*(undefined8 *)(lVar3 + 8),0);
  uVar6 = *(undefined8 *)(unaff_x19 + 8);
  uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f800);
  FUN_084bd24c(uVar2,uVar6,0,0,0);
  lVar3 = FUN_0516b744();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_stack_00000008 = FUN_0636bf40(lVar3,*(undefined8 *)PTR_DAT_091ff720);
  uVar4 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_091ff718);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04e567d8(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_091ff710);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar4 = FUN_06b6dfd0(*(long *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x19 + 8),
                         *(undefined8 *)PTR_DAT_0927f518);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_06b6f2d8(*(long *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x19 + 8),
                   *(undefined8 *)PTR_DAT_0927f3c8);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0708de18(unaff_x19 + 2,0);
  }
  return;
}


