/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_is_focused_get
ENTRY_POINT: 084a8258
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_is_focused_get
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091ff708) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_084a82cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_084a82cc:
  plVar3 = (long *)(*(code *)*puVar2)();
  uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f758);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0927f760) {
        lVar5 = lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138;
        goto LAB_084a834c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_03d8f370(plVar3,*(long *)PTR_DAT_0927f760,1);
LAB_084a834c:
  FUN_054d4240(uVar4,plVar3,*(undefined8 *)(lVar5 + 8),0);
  uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f750);
  FUN_084bc100(uVar4,0,0,param_1,0);
  lVar5 = FUN_0516badc();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_stack_00000008 = FUN_0636bf40(lVar5,*(undefined8 *)PTR_DAT_0927f780);
  uVar6 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927f778);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04b8ea84(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    lVar5 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927f770);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x20);
    FUN_084a760c();
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_0927f748;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
  }
  return;
}


