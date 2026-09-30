/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_total_recorded_frames_set
ENTRY_POINT: 09007b24
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_total_recorded_frames_set
               (undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  FUN_07441bc0(param_2,*param_1);
                    /* try { // try from 09007b44 to 09107c3f has its CatchHandler @ 09007b44
                       catch() { ... } // from try @ 09007b44 with catch @ 09007b44
                       catch() { ... } // from try @ 09007c48 with catch @ 09007b44
                       catch() { ... } // from try @ 09007c8c with catch @ 09007b44
                       catch() { ... } // from try @ 09007cd4 with catch @ 09007b44 */
  uVar10 = *(undefined8 *)PTR_DAT_09fbf710;
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar10 = FUN_07a4ce38(uVar10,0);
  puVar2 = PTR_DAT_09f758a0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0744298c(param_2,*(undefined8 *)PTR_DAT_09fbaed0,uVar10,*(undefined8 *)PTR_DAT_09f758a0);
  puVar3 = PTR_DAT_09fbea00;
  uVar10 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09fbea00,0);
  FUN_0744298c(param_2,*(undefined8 *)PTR_DAT_09fbcb50,uVar10,*(undefined8 *)puVar2);
  uVar10 = FUN_07a4ce38(*(undefined8 *)puVar3,0);
  FUN_0744298c(param_2,*(undefined8 *)PTR_DAT_09fbaeb8,uVar10,*(undefined8 *)puVar2);
  uVar10 = FUN_07a4ce38(*(undefined8 *)puVar3,0);
  FUN_0744298c(param_2,*(undefined8 *)PTR_DAT_09fbaeb0,uVar10,*(undefined8 *)puVar2);
  uVar10 = FUN_07a4ce38(*(undefined8 *)puVar3,0);
  FUN_0744298c(param_2,*(undefined8 *)PTR_DAT_09fbaea8,uVar10,*(undefined8 *)puVar2);
  *(long *)(unaff_x19 + 0xe) = param_2;
  thunk_FUN_044bb4b4(unaff_x19 + 0xe,param_2);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
  uVar10 = FUN_09006c68();
  lVar4 = FUN_08fd8fcc(uVar8,uVar10,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar9 = *(long **)(unaff_x20 + 0x10);
  uVar10 = FUN_078a7764(*(undefined8 *)(lVar4 + 0x10),
                        *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x48),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar8 = FUN_090008e8(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar4);
  uVar1 = 10;
  if ((*(uint *)(lVar4 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0x1c);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(10);
  }
  lVar4 = *plVar9;
  uVar11 = *(undefined8 *)PTR_DAT_09f20d70;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09fbf408) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_09007d2c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09fbf408,0);
LAB_09007d2c:
  lVar4 = (*(code *)*puVar5)(plVar9,uVar11,uVar10,0,uVar8,uVar1,puVar5[1]);
  if (lVar4 != 0) {
    in_stack_00000008 = FUN_068a4fb0(lVar4,*(undefined8 *)PTR_DAT_09fbf080);
    uVar6 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf050);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_04664624(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar10 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf048);
      uVar8 = FUN_04f491a0(uVar10,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_09fbf718);
      uVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fbf728);
      FUN_0666a738(uVar11,uVar10,uVar8,*(undefined8 *)PTR_DAT_09fbf720);
      puVar2 = PTR_DAT_09fbf708;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066f3a60(unaff_x19 + 2,uVar11,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


