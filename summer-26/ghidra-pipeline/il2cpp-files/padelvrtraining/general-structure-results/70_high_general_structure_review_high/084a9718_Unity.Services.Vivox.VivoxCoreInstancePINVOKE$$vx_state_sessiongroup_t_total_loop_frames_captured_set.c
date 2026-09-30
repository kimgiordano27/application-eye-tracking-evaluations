/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_total_loop_frames_captured_set
ENTRY_POINT: 084a9718
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_total_loop_frames_captured_set
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  uVar2 = FUN_06fd8bb8();
  if ((uVar2 & 1) != 0) {
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
    uVar4 = thunk_FUN_03d2ef40();
    uVar9 = thunk_FUN_03d1e194(PTR_DAT_0927f7e8);
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_0927f798);
    FUN_070ccd38(uVar4,uVar9,uVar5,0);
    uVar9 = thunk_FUN_03d1e194(PTR_DAT_0927f898);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar4,uVar9);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar8 = *(long **)(unaff_x20 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = *plVar8;
  uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091ff708) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_084a9798;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091ff708,0);
LAB_084a9798:
  plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
  uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f878);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = *plVar8;
  uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0927f760) {
        lVar6 = lVar6 + (long)(*piVar7 + 6) * 0x10 + 0x138;
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_last_loop_frame_played_set
        ;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  lVar6 = FUN_03d8f370(plVar8,*(long *)PTR_DAT_0927f760,6);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_last_loop_frame_played_set:
  FUN_054d4240(uVar4,plVar8,*(undefined8 *)(lVar6 + 8),0);
  uVar9 = *(undefined8 *)(unaff_x19 + 8);
  uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f880);
  FUN_084beb58(uVar4,uVar9,0,0,0,0);
  lVar6 = FUN_0516badc();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_stack_00000008 = FUN_0636bf40(lVar6,*(undefined8 *)PTR_DAT_0927f780);
  uVar2 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927f778);
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04b8f0c0(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    lVar6 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927f770);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_084a760c();
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_0927f748;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
  }
  return;
}


