/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_state_sessions_count_set
ENTRY_POINT: 084a8f10
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_state_sessions_count_set
               (undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_2;
  uVar1 = FUN_062f9900(&stack0x00000008,*param_1);
  if ((uVar1 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = uStack0000000000000008;
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
    uVar1 = FUN_06b6dfd0(*(long *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x19 + 8),
                         *(undefined8 *)PTR_DAT_0927f518);
    if ((uVar1 & 1) != 0) {
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


