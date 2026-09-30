/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_session_handle_get
ENTRY_POINT: 09004948
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_session_handle_get
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  FUN_07a4ce38(*(undefined8 *)PTR_DAT_09fbf410,0);
  FUN_0744298c();
  puVar2 = PTR_DAT_09fbea00;
  FUN_07a4ce38(*(undefined8 *)PTR_DAT_09fbea00,0);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)puVar2,0);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)PTR_DAT_09fbf550,0);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)puVar2,0);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)puVar2,0);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)puVar2,0);
  FUN_0744298c();
  *(undefined8 *)(unaff_x19 + 0xe) = unaff_x21;
  thunk_FUN_044bb4b4();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar9 = *(undefined8 *)(unaff_x19 + 8);
  uVar3 = FUN_0900415c();
  lVar4 = FUN_08fd8fcc(uVar9,uVar3,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar10 = *(long **)(unaff_x20 + 0x10);
  uVar3 = FUN_078a7764(*(undefined8 *)(lVar4 + 0x10),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x40),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar9 = FUN_08ff9b50(uVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x20));
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar5 = FUN_08ffa334(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar4);
  uVar1 = 10;
  if ((*(uint *)(lVar4 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0x1c);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(10);
  }
  lVar4 = *plVar10;
  uVar11 = *(undefined8 *)PTR_DAT_09f20c90;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09fbf408) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_09004b88;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09fbf408,0);
LAB_09004b88:
  lVar4 = (*(code *)*puVar6)(plVar10,uVar11,uVar3,uVar9,uVar5,uVar1,puVar6[1]);
  if (lVar4 != 0) {
    in_stack_00000008 = FUN_068a4fb0(lVar4,*(undefined8 *)PTR_DAT_09fbf080);
    uVar7 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf050);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_047b8b38(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar3 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf048);
      uVar9 = FUN_04f491a0(uVar3,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_09fbf560);
      uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fbf570);
      FUN_0666a738(uVar5,uVar3,uVar9,*(undefined8 *)PTR_DAT_09fbf568);
      puVar2 = PTR_DAT_09fbf548;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066f3a60(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


