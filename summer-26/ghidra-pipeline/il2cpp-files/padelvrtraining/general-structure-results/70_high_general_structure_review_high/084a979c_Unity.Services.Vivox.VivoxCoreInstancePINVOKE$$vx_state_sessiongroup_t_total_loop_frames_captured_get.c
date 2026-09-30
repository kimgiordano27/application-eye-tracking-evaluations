/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_total_loop_frames_captured_get
ENTRY_POINT: 084a979c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_total_loop_frames_captured_get
               (code *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  plVar2 = (long *)(*param_1)();
  uVar3 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f878);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0927f760) {
        lVar4 = lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138;
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_last_loop_frame_played_set
        ;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = FUN_03d8f370(plVar2,*(long *)PTR_DAT_0927f760,6);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_last_loop_frame_played_set:
  FUN_054d4240(uVar3,plVar2,*(undefined8 *)(lVar4 + 8),0);
  uVar7 = *(undefined8 *)(unaff_x19 + 8);
  uVar3 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f880);
  FUN_084beb58(uVar3,uVar7,0,0,0,0);
  lVar4 = FUN_0516badc();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_stack_00000008 = FUN_0636bf40(lVar4,*(undefined8 *)PTR_DAT_0927f780);
  uVar5 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927f778);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04b8f0c0(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    lVar4 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927f770);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_084a760c();
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_0927f748;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar3,*(undefined8 *)puVar1);
  }
  return;
}


