/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_state_sessions_get
ENTRY_POINT: 09067e1c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_state_sessions_get(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long unaff_x23;
  undefined8 uVar10;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar9 = *(long **)(unaff_x20 + 0x10);
  uVar3 = FUN_078a7764(*(undefined8 *)(unaff_x23 + 0x10),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x20),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar4 = FUN_0905dd20(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = 10;
  if ((*(uint *)(unaff_x23 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(unaff_x23 + 0x1c);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(10);
  }
  lVar6 = *plVar9;
  uVar10 = *(undefined8 *)PTR_DAT_09f20d70;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09fc1f90) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_09067ee0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09fc1f90,0);
LAB_09067ee0:
  lVar6 = (*(code *)*puVar5)(plVar9,uVar10,uVar3,0,uVar4,uVar1,puVar5[1]);
  if (lVar6 != 0) {
    in_stack_00000008 = FUN_068a4fb0(lVar6,*(undefined8 *)PTR_DAT_09fc1bc0);
    uVar7 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc1b90);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_047bb4e0(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar3 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc1b88);
      uVar4 = FUN_04f4a1c0(uVar3,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_09fc2008);
      uVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc2018);
      FUN_0666aa78(uVar10,uVar3,uVar4,*(undefined8 *)PTR_DAT_09fc2010);
      puVar2 = PTR_DAT_09fc1ff8;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066f3a60(unaff_x19 + 2,uVar10,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


