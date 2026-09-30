/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_session_handle_get
ENTRY_POINT: 09066770
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_session_handle_get(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  int *unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000008;
  
  FUN_04447ba8(PTR_DAT_09fc1e90);
  FUN_04447ba8(PTR_DAT_09f758a0);
  FUN_04447ba8(PTR_DAT_09f21ee0);
  FUN_04447ba8(PTR_DAT_09f21ed8);
  FUN_04447ba8(PTR_DAT_09fc1f88);
  FUN_04447ba8(PTR_DAT_09fc1f90);
  FUN_04447ba8(PTR_DAT_09fc1f98);
  FUN_04447ba8(PTR_DAT_09f25a58);
  FUN_04447ba8(PTR_DAT_09f20de8);
  FUN_04447ba8(PTR_DAT_09fc1fa0);
  FUN_04447ba8(PTR_DAT_09fc1fa8);
  FUN_04447ba8(PTR_DAT_09fc1fb0);
  FUN_04447ba8(PTR_DAT_09fc1b88);
  FUN_04447ba8(PTR_DAT_09fc1b90);
  FUN_04447ba8(PTR_DAT_09fc1bc0);
  FUN_04447ba8(PTR_DAT_09f20c90);
  FUN_04447ba8(PTR_DAT_09fbae90);
  FUN_04447ba8(PTR_DAT_09fbcb50);
  FUN_04447ba8(PTR_DAT_09fbaea0);
  FUN_04447ba8(PTR_DAT_09fbaeb0);
  FUN_04447ba8(PTR_DAT_09fbcb58);
  FUN_04447ba8(PTR_DAT_09fc1fd0);
  FUN_04447ba8(PTR_DAT_09fbaeb8);
  FUN_04447ba8(PTR_DAT_09fbaed0);
  *(undefined1 *)(unaff_x20 + 0x865) = 1;
  puVar3 = PTR_DAT_09fc1e90;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar11 = *(long *)(unaff_x19 + 10);
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f21ed8);
    FUN_07441bc0(lVar5,*(undefined8 *)PTR_DAT_09f21ee0);
    puVar4 = PTR_DAT_09fc1f98;
    uVar14 = *(undefined8 *)PTR_DAT_09fc1f98;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar14 = FUN_07a4ce38(uVar14,0);
    puVar2 = PTR_DAT_09f758a0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaed0,uVar14,*(undefined8 *)PTR_DAT_09f758a0);
    uVar14 = FUN_07a4ce38(*(undefined8 *)puVar4,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fc1fd0,uVar14,*(undefined8 *)puVar2);
    puVar4 = PTR_DAT_09fc1f88;
    uVar14 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09fc1f88,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbae90,uVar14,*(undefined8 *)puVar2);
    uVar14 = FUN_07a4ce38(*(undefined8 *)puVar4,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbcb50,uVar14,*(undefined8 *)puVar2);
    uVar14 = FUN_07a4ce38(*(undefined8 *)puVar4,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaeb8,uVar14,*(undefined8 *)puVar2);
    uVar14 = FUN_07a4ce38(*(undefined8 *)puVar4,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbcb58,uVar14,*(undefined8 *)puVar2);
    uVar14 = FUN_07a4ce38(*(undefined8 *)puVar4,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaeb0,uVar14,*(undefined8 *)puVar2);
    uVar14 = FUN_07a4ce38(*(undefined8 *)puVar4,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaea0,uVar14,*(undefined8 *)puVar2);
    *(long *)(unaff_x19 + 0xe) = lVar5;
    thunk_FUN_044bb4b4(unaff_x19 + 0xe,lVar5);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar12 = *(undefined8 *)(unaff_x19 + 8);
    uVar14 = FUN_0906442c(lVar11);
    lVar5 = FUN_0903ee10(uVar12,uVar14,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar13 = *(long **)(lVar11 + 0x10);
    uVar14 = FUN_078a7764(*(undefined8 *)(lVar5 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x30),0);
    lVar6 = *(long *)(unaff_x19 + 0xc);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(lVar6 + 0x28) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = FUN_0905ad0c();
      lVar6 = *(long *)(unaff_x19 + 0xc);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
    }
    uVar7 = FUN_0905c418(lVar6,*(undefined8 *)(lVar11 + 0x18),lVar5);
    uVar1 = 10;
    if ((*(uint *)(lVar5 + 0x18) & 0xff) != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x1c);
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(10);
    }
    lVar5 = *plVar13;
    uVar15 = *(undefined8 *)PTR_DAT_09f20c90;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09fc1f90) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_09066b68;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09fc1f90,0);
LAB_09066b68:
    lVar5 = (*(code *)*puVar8)(plVar13,uVar15,uVar14,uVar12,uVar7,uVar1,puVar8[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000008 = FUN_068a4fb0(lVar5,*(undefined8 *)PTR_DAT_09fc1bc0);
    uVar9 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc1b90);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_047baea4(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar14 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc1b88);
  uVar12 = FUN_04f4a1c0(uVar14,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_09fc1fa0);
  uVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc1fb0);
  FUN_0666aa78(uVar7,uVar14,uVar12,*(undefined8 *)PTR_DAT_09fc1fa8);
  puVar4 = PTR_DAT_09fc1f80;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_066f3a60(unaff_x19 + 2,uVar7,*(undefined8 *)puVar4);
  return;
}


