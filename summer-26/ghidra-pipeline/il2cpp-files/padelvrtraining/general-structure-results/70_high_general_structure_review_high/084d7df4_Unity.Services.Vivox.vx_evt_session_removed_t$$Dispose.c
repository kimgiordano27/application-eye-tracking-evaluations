/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_removed_t$$Dispose
ENTRY_POINT: 084d7df4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Vivox_vx_evt_session_removed_t__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined4 uStack000000000000000c;
  
                    /* try { // try from 084d7df4 to 085d7e7b has its CatchHandler @ 084d7e7c */
  uVar3 = FUN_06fd2488();
  puVar2 = PTR_DAT_0927c3b8;
  puVar1 = PTR_DAT_0927c398;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    uVar3 = FUN_06fd2488(uVar3,*(undefined8 *)PTR_DAT_0927c3a8,*(long *)(unaff_x19 + 0x18),
                         *unaff_x21,0);
  }
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x20);
  uVar4 = FUN_07175a38(&stack0x0000000c,0);
  uVar3 = FUN_06fd2488(uVar3,*(undefined8 *)puVar1,uVar4,*unaff_x21,0);
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x24);
  uVar4 = FUN_07175a38(&stack0x0000000c,0);
  uVar3 = FUN_06fd2488(uVar3,*(undefined8 *)puVar2,uVar4,*unaff_x21,0);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    uVar3 = FUN_06fd2488(uVar3,*(undefined8 *)PTR_DAT_0927c3b0,*(long *)(unaff_x19 + 0x28),
                         *unaff_x21,0);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar3 = FUN_06fd2488(uVar3,*(undefined8 *)PTR_DAT_0927c3a0,*(long *)(unaff_x19 + 0x30),
                         *unaff_x21,0);
  }
  puVar1 = PTR_DAT_0927c3c8;
  plVar5 = *(long **)(unaff_x19 + 0x38);
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    uVar3 = FUN_06fd2168(uVar3,*(undefined8 *)puVar1,uVar4,0);
  }
  return uVar3;
}


