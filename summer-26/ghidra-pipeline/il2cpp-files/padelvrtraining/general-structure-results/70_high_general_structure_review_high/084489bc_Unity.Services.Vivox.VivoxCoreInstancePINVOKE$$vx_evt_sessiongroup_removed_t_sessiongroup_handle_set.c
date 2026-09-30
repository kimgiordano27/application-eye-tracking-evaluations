/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
ENTRY_POINT: 084489bc
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 unaff_x21;
  undefined8 uVar11;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  FUN_07186ef4();
  FUN_06b6dddc();
  *(undefined8 *)(unaff_x19 + 0xe) = unaff_x21;
  thunk_FUN_03d1023c();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar11 = *(undefined8 *)(unaff_x19 + 8);
  uVar3 = FUN_084474b4();
  lVar4 = FUN_083f2c3c(uVar11,uVar3,0);
  lVar7 = *(long *)(unaff_x19 + 0xc);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar10 = *(long **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(lVar7 + 0x10);
  uVar11 = *(undefined8 *)(lVar7 + 0x18);
  uVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a85a8);
  FUN_06b6d004(uVar5,*(undefined8 *)PTR_DAT_091a8590);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = 10;
  if ((*(uint *)(lVar4 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0x1c);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(10);
  }
  lVar4 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0927ce50) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_08448ac8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_0927ce50,0);
LAB_08448ac8:
  lVar4 = (*(code *)*puVar6)(plVar10,uVar11,uVar3,0,uVar5,uVar1,puVar6[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_stack_00000008 = FUN_0636bf40(lVar4,*(undefined8 *)PTR_DAT_0927ca30);
  uVar8 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
  if ((uVar8 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04a5a760(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    uVar3 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
    plVar10 = (long *)FUN_050d2b9c(uVar3,*(undefined8 *)(unaff_x19 + 0xe),
                                   *(undefined8 *)PTR_DAT_0927ce68);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar11 = (**(code **)(*plVar10 + 0x408))(plVar10,*(undefined8 *)(*plVar10 + 0x410));
    uVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927ce78);
    FUN_0626aa00(uVar5,uVar3,uVar11,*(undefined8 *)PTR_DAT_0927ce70);
    puVar2 = PTR_DAT_0927bfa0;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
  }
  return;
}


