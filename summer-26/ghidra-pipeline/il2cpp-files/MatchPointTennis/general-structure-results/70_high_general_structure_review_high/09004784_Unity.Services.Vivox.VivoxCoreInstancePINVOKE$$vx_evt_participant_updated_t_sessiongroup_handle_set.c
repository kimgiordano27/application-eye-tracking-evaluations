/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_sessiongroup_handle_set
ENTRY_POINT: 09004784
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_set
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xa00));
  FUN_04447ba8(PTR_DAT_09f758a0);
  FUN_04447ba8(PTR_DAT_09f21ee0);
  FUN_04447ba8(PTR_DAT_09f21ed8);
  FUN_04447ba8(PTR_DAT_09fbf550);
  FUN_04447ba8(PTR_DAT_09fbf408);
  FUN_04447ba8(PTR_DAT_09fbf558);
  FUN_04447ba8(PTR_DAT_09fbf410);
  FUN_04447ba8(PTR_DAT_09f25a58);
  FUN_04447ba8(PTR_DAT_09f20de8);
  FUN_04447ba8(PTR_DAT_09fbf560);
  FUN_04447ba8(PTR_DAT_09fbf568);
  FUN_04447ba8(PTR_DAT_09fbf570);
  FUN_04447ba8(PTR_DAT_09fbf048);
  FUN_04447ba8(PTR_DAT_09fbf050);
  FUN_04447ba8(PTR_DAT_09fbf080);
  FUN_04447ba8(PTR_DAT_09f20c90);
  FUN_04447ba8(PTR_DAT_09fbae90);
  FUN_04447ba8(PTR_DAT_09fbcb50);
  FUN_04447ba8(PTR_DAT_09fbaea8);
  FUN_04447ba8(PTR_DAT_09fbaeb0);
  FUN_04447ba8(PTR_DAT_09fbcb58);
  FUN_04447ba8(PTR_DAT_09fbaeb8);
  FUN_04447ba8(PTR_DAT_09fbaec0);
  FUN_04447ba8(PTR_DAT_09fbaed0);
  *(undefined1 *)(unaff_x20 + 0x555) = 1;
  puVar4 = PTR_DAT_09fbf4d8;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 10);
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f21ed8);
    FUN_07441bc0(lVar5,*(undefined8 *)PTR_DAT_09f21ee0);
    uVar13 = *(undefined8 *)PTR_DAT_09fbf558;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar13 = FUN_07a4ce38(uVar13,0);
    puVar2 = PTR_DAT_09f758a0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaed0,uVar13,*(undefined8 *)PTR_DAT_09f758a0);
    uVar13 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09fbf410,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbae90,uVar13,*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_09fbea00;
    uVar13 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09fbea00,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbcb50,uVar13,*(undefined8 *)puVar2);
    uVar13 = FUN_07a4ce38(*(undefined8 *)puVar3,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaeb8,uVar13,*(undefined8 *)puVar2);
    uVar13 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09fbf550,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbcb58,uVar13,*(undefined8 *)puVar2);
    uVar13 = FUN_07a4ce38(*(undefined8 *)puVar3,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaec0,uVar13,*(undefined8 *)puVar2);
    uVar13 = FUN_07a4ce38(*(undefined8 *)puVar3,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaeb0,uVar13,*(undefined8 *)puVar2);
    uVar13 = FUN_07a4ce38(*(undefined8 *)puVar3,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaea8,uVar13,*(undefined8 *)puVar2);
    *(long *)(unaff_x19 + 0xe) = lVar5;
    thunk_FUN_044bb4b4(unaff_x19 + 0xe,lVar5);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 8);
    uVar13 = FUN_0900415c(lVar10);
    lVar5 = FUN_08fd8fcc(uVar11,uVar13,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar12 = *(long **)(lVar10 + 0x10);
    uVar13 = FUN_078a7764(*(undefined8 *)(lVar5 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x40),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar11 = FUN_08ff9b50(uVar13,*(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x20));
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar6 = FUN_08ffa334(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar10 + 0x18),lVar5);
    uVar1 = 10;
    if ((*(uint *)(lVar5 + 0x18) & 0xff) != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x1c);
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(10);
    }
    lVar5 = *plVar12;
    uVar14 = *(undefined8 *)PTR_DAT_09f20c90;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09fbf408) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_09004b88;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09fbf408,0);
LAB_09004b88:
    lVar5 = (*(code *)*puVar7)(plVar12,uVar14,uVar13,uVar11,uVar6,uVar1,puVar7[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000008 = FUN_068a4fb0(lVar5,*(undefined8 *)PTR_DAT_09fbf080);
    uVar8 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf050);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_047b8b38(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar13 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf048);
  uVar11 = FUN_04f491a0(uVar13,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_09fbf560);
  uVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fbf570);
  FUN_0666a738(uVar6,uVar13,uVar11,*(undefined8 *)PTR_DAT_09fbf568);
  puVar2 = PTR_DAT_09fbf548;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_066f3a60(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
  return;
}


