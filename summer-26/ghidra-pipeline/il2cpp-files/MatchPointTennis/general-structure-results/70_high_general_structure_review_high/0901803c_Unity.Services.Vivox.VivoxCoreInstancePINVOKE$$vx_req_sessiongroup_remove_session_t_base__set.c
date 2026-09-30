/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_remove_session_t_base__set
ENTRY_POINT: 0901803c
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


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_remove_session_t_base__set
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uStack000000000000000c;
  
  if (param_3 != 0) {
    unaff_x20 = FUN_078b56f4();
  }
  puVar2 = PTR_DAT_09fba7c0;
  puVar1 = PTR_DAT_09fba7a0;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    unaff_x20 = FUN_078b56f4(unaff_x20,*(undefined8 *)PTR_DAT_09fba7b0,*(long *)(unaff_x19 + 0x18),
                             *unaff_x21,0);
  }
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x20);
  uVar3 = FUN_07a3b850(&stack0x0000000c,0);
  uVar3 = FUN_078b56f4(unaff_x20,*(undefined8 *)puVar1,uVar3,*unaff_x21,0);
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x24);
  uVar4 = FUN_07a3b850(&stack0x0000000c,0);
  uVar3 = FUN_078b56f4(uVar3,*(undefined8 *)puVar2,uVar4,*unaff_x21,0);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    uVar3 = FUN_078b56f4(uVar3,*(undefined8 *)PTR_DAT_09fba7b8,*(long *)(unaff_x19 + 0x28),
                         *unaff_x21,0);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar3 = FUN_078b56f4(uVar3,*(undefined8 *)PTR_DAT_09fba7a8,*(long *)(unaff_x19 + 0x30),
                         *unaff_x21,0);
  }
  puVar1 = PTR_DAT_09fba7d0;
  plVar5 = *(long **)(unaff_x19 + 0x38);
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    uVar3 = FUN_078b4f58(uVar3,*(undefined8 *)puVar1,uVar4,0);
  }
  return uVar3;
}


