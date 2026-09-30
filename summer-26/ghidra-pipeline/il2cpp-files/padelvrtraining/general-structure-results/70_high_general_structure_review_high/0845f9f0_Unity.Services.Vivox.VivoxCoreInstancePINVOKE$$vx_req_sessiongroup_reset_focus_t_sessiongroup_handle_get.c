/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_reset_focus_t_sessiongroup_handle_get
ENTRY_POINT: 0845f9f0
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_reset_focus_t_sessiongroup_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  int *unaff_x19;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000008;
  
  FUN_03d2d2b0(PTR_DAT_091a6be8);
  FUN_03d2d2b0(PTR_DAT_0927d300);
  *(undefined1 *)(unaff_x20 + 0xe5c) = 1;
  puVar1 = PTR_StringLiteral_52134_0927d2c8;
  in_stack_00000008 = 0;
  lVar7 = *(long *)(unaff_x19 + 8);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar3 = FUN_0845fc90(*(undefined8 *)PTR_DAT_0927d300);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_00000008 = FUN_0636bf40(lVar3,*(undefined8 *)PTR_DAT_091a6be8);
    uVar4 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_091a6be0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04cc9ae8(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar5 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_091a6bd8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar8 = *(long **)(lVar7 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar7 = *plVar8;
  lVar3 = *(long *)PTR_DAT_0927d2f8;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar3 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar3 + 0x50)) * 0x10 + 0x138;
        goto LAB_0845fb44;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  lVar7 = FUN_03d8f370(plVar8);
LAB_0845fb44:
  lVar7 = thunk_FUN_03d6c7f0(*(undefined8 *)(lVar7 + 8),lVar3);
  auVar9 = (**(code **)(lVar7 + 8))(plVar8,uVar5,lVar7);
  *unaff_x19 = -2;
  puVar2 = PTR_DAT_0927d2f0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_06228d3c(unaff_x19 + 2,auVar9._0_8_,auVar9._8_8_,*(undefined8 *)puVar2);
  return;
}


