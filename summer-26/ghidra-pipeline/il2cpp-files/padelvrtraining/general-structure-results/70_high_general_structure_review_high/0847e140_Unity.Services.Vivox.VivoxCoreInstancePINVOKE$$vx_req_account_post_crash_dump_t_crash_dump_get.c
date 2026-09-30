/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_post_crash_dump_t_crash_dump_get
ENTRY_POINT: 0847e140
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_post_crash_dump_t_crash_dump_get
               (void)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  FUN_084776ec();
  plVar5 = *(long **)(unaff_x20 + 0x40);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar2 = *plVar5;
  uVar1 = unaff_x19[10];
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar7 = *(long *)PTR_DAT_0927e5a0;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)(lVar7 + 0x20)) {
        lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
        goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_account_post_crash_dump_t;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar2 = FUN_03d8f370(plVar5);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_account_post_crash_dump_t:
  lVar2 = thunk_FUN_03d6c7f0(*(undefined8 *)(lVar2 + 8),lVar7);
  lVar2 = (**(code **)(lVar2 + 8))(plVar5,uVar1,uVar6,lVar2);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_stack_00000008 = FUN_071f1150(lVar2,0);
  uVar3 = FUN_0708cd2c(&stack0x00000008,0);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04e5a274(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    FUN_0708cdf8(&stack0x00000008,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    *(undefined4 *)(unaff_x20 + 0x60) = unaff_x19[10];
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0708de18(unaff_x19 + 2,0);
  }
  return;
}


