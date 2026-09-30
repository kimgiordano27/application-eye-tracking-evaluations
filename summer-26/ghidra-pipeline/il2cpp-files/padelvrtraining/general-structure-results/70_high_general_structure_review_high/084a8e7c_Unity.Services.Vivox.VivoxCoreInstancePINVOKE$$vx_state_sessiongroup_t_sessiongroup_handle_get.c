/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_sessiongroup_handle_get
ENTRY_POINT: 084a8e7c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_sessiongroup_handle_get
               (void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  FUN_054d4240();
  uVar4 = *(undefined8 *)(unaff_x19 + 8);
  uVar1 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f800);
  FUN_084bd24c(uVar1,uVar4,0,0,0);
  lVar2 = FUN_0516b744();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_stack_00000008 = FUN_0636bf40(lVar2,*(undefined8 *)PTR_DAT_091ff720);
  uVar3 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_091ff718);
  if ((uVar3 & 1) == 0) {
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
    uVar3 = FUN_06b6dfd0(*(long *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x19 + 8),
                         *(undefined8 *)PTR_DAT_0927f518);
    if ((uVar3 & 1) != 0) {
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


