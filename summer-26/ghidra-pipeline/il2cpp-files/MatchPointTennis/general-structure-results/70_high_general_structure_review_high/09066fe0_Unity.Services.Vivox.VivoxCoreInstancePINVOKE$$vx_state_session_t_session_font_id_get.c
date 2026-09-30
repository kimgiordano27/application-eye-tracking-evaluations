/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_session_font_id_get
ENTRY_POINT: 09066fe0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_session_font_id_get
               (undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  FUN_07441bc0(param_2,*param_1);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0744298c();
  puVar2 = PTR_DAT_09fc1f88;
  uVar9 = *(undefined8 *)PTR_DAT_09fc1f88;
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a4ce38(uVar9,0);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)puVar2,0);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)puVar2,0);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)puVar2,0);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)puVar2,0);
  FUN_0744298c();
  *(long *)(unaff_x19 + 0xe) = unaff_x21;
  thunk_FUN_044bb4b4();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 8);
  uVar9 = FUN_0906442c();
  lVar3 = FUN_0903ee10(uVar7,uVar9,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar8 = *(long **)(unaff_x20 + 0x10);
  uVar9 = FUN_078a7764(*(undefined8 *)(lVar3 + 0x10),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x28),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar7 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_base_t_cookie_set
                    (*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar3);
  uVar1 = 10;
  if ((*(uint *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x1c);
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(10);
  }
  lVar3 = *plVar8;
  uVar10 = *(undefined8 *)PTR_DAT_09f20d80;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09fc1f90) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_090671f8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09fc1f90,0);
LAB_090671f8:
  lVar3 = (*(code *)*puVar4)(plVar8,uVar10,uVar9,0,uVar7,uVar1,puVar4[1]);
  if (lVar3 != 0) {
    in_stack_00000008 = FUN_068a4fb0(lVar3,*(undefined8 *)PTR_DAT_09fc1bc0);
    uVar5 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc1b90);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_047bb0b8(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar9 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc1b88);
      FUN_09058794(uVar9,*(undefined8 *)(unaff_x19 + 0xe));
      uVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc1fe8);
      FUN_0903f534(uVar7,uVar9,0);
      puVar2 = PTR_DAT_09f2bc28;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066f3a60(unaff_x19 + 2,uVar7,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


