/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_session_set_3d_position$$.ctor
ENTRY_POINT: 08415d9c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_session_set_3d_position___ctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined4 uStack000000000000000c;
  
  uVar2 = FUN_06fd2488();
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x20);
  uVar3 = FUN_07175a38(&stack0x0000000c,0);
  uVar2 = FUN_06fd2488(uVar2,*unaff_x23,uVar3,*unaff_x21,0);
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x24);
  uVar3 = FUN_07175a38(&stack0x0000000c,0);
  uVar2 = FUN_06fd2488(uVar2,*unaff_x22,uVar3,*unaff_x21,0);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    uVar2 = FUN_06fd2488(uVar2,*(undefined8 *)PTR_DAT_0927c3b0,*(long *)(unaff_x19 + 0x28),
                         *unaff_x21,0);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar2 = FUN_06fd2488(uVar2,*(undefined8 *)PTR_DAT_0927c3a0,*(long *)(unaff_x19 + 0x30),
                         *unaff_x21,0);
  }
  puVar1 = PTR_DAT_0927c3e8;
  plVar4 = *(long **)(unaff_x19 + 0x38);
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar2 = FUN_06fd2168(uVar2,*(undefined8 *)puVar1,uVar3,0);
  }
  return uVar2;
}


