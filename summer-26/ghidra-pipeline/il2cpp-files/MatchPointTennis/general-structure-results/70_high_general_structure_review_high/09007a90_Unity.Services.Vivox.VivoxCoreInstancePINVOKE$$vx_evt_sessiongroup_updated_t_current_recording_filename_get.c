/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_current_recording_filename_get
ENTRY_POINT: 09007a90
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_current_recording_filename_get
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x50));
  FUN_04447ba8(PTR_DAT_09fbf080);
  FUN_04447ba8(PTR_DAT_09f20d70);
  FUN_04447ba8(PTR_DAT_09fbcb50);
  FUN_04447ba8(PTR_DAT_09fbaea8);
  FUN_04447ba8(PTR_DAT_09fbaeb0);
  FUN_04447ba8(PTR_DAT_09fbaeb8);
  FUN_04447ba8(PTR_DAT_09fbaed0);
  *(undefined1 *)(unaff_x20 + 0x568) = 1;
  puVar4 = PTR_DAT_09fbf688;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 10);
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f21ed8);
    FUN_07441bc0(lVar5,*(undefined8 *)PTR_DAT_09f21ee0);
    uVar12 = *(undefined8 *)PTR_DAT_09fbf710;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar12 = FUN_07a4ce38(uVar12,0);
    puVar2 = PTR_DAT_09f758a0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaed0,uVar12,*(undefined8 *)PTR_DAT_09f758a0);
    puVar3 = PTR_DAT_09fbea00;
    uVar12 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09fbea00,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbcb50,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_07a4ce38(*(undefined8 *)puVar3,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaeb8,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_07a4ce38(*(undefined8 *)puVar3,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaeb0,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_07a4ce38(*(undefined8 *)puVar3,0);
    FUN_0744298c(lVar5,*(undefined8 *)PTR_DAT_09fbaea8,uVar12,*(undefined8 *)puVar2);
    *(long *)(unaff_x19 + 0xe) = lVar5;
    thunk_FUN_044bb4b4(unaff_x19 + 0xe,lVar5);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar12 = FUN_09006c68(lVar9);
    lVar5 = FUN_08fd8fcc(uVar10,uVar12,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar11 = *(long **)(lVar9 + 0x10);
    uVar12 = FUN_078a7764(*(undefined8 *)(lVar5 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x48),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar10 = FUN_090008e8(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar9 + 0x18),lVar5);
    uVar1 = 10;
    if ((*(uint *)(lVar5 + 0x18) & 0xff) != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x1c);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(10);
    }
    lVar5 = *plVar11;
    uVar13 = *(undefined8 *)PTR_DAT_09f20d70;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09fbf408) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_09007d2c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09fbf408,0);
LAB_09007d2c:
    lVar5 = (*(code *)*puVar6)(plVar11,uVar13,uVar12,0,uVar10,uVar1,puVar6[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000008 = FUN_068a4fb0(lVar5,*(undefined8 *)PTR_DAT_09fbf080);
    uVar7 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf050);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_04664624(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar12 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf048);
  uVar10 = FUN_04f491a0(uVar12,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_09fbf718);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fbf728);
  FUN_0666a738(uVar13,uVar12,uVar10,*(undefined8 *)PTR_DAT_09fbf720);
  puVar2 = PTR_DAT_09fbf708;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_066f3a60(unaff_x19 + 2,uVar13,*(undefined8 *)puVar2);
  return;
}


