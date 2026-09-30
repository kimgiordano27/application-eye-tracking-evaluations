/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_remove_session_t_session_handle_get
ENTRY_POINT: 090181d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_remove_session_t_session_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined4 uStack000000000000000c;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f20710);
  FUN_04447ba8(PTR_DAT_09f702f8);
  FUN_04447ba8(PTR_DAT_09f358d8);
  FUN_04447ba8(PTR_DAT_09fba7d8);
  FUN_04447ba8(PTR_DAT_09f77958);
  FUN_04447ba8(PTR_DAT_09f2a820);
  FUN_04447ba8(PTR_DAT_09f265f0);
  FUN_04447ba8(PTR_DAT_09f29338);
  *(undefined1 *)(unaff_x22 + 0x60c) = 1;
  puVar1 = PTR_DAT_09f20720;
  uStack000000000000000c = 0;
  lVar3 = thunk_FUN_0448520c(*unaff_x21);
  FUN_07441bc0(lVar3,*unaff_x20);
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (lVar3 == 0) goto LAB_090183d0;
    FUN_0744298c(lVar3,*(undefined8 *)PTR_DAT_09f265f0,uVar5,*(undefined8 *)puVar1);
  }
  plVar4 = *(long **)(unaff_x19 + 0x18);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (lVar3 == 0) goto LAB_090183d0;
    FUN_0744298c(lVar3,*(undefined8 *)PTR_DAT_09f2a820,uVar5,*(undefined8 *)puVar1);
  }
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x20);
  uVar5 = FUN_07a3b850(&stack0x0000000c,0);
  puVar2 = PTR_DAT_09f702f8;
  if (lVar3 != 0) {
    FUN_0744298c(lVar3,*(undefined8 *)PTR_DAT_09f29338,uVar5,*(undefined8 *)puVar1);
    uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x24);
    uVar5 = FUN_07a3b850(&stack0x0000000c,0);
    FUN_0744298c(lVar3,*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_09fba7d8;
    plVar4 = *(long **)(unaff_x19 + 0x28);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      FUN_0744298c(lVar3,*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar1);
    }
    puVar2 = PTR_DAT_09f77958;
    plVar4 = *(long **)(unaff_x19 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      FUN_0744298c(lVar3,*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar1);
    }
    puVar2 = PTR_DAT_09f358d8;
    plVar4 = *(long **)(unaff_x19 + 0x38);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      FUN_0744298c(lVar3,*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar1);
    }
    return lVar3;
  }
LAB_090183d0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


