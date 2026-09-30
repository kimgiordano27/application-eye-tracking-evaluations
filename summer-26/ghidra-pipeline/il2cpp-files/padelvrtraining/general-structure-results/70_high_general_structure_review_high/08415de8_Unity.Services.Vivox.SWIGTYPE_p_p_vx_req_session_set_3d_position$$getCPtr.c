/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_session_set_3d_position$$getCPtr
ENTRY_POINT: 08415de8
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


undefined8 Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_session_set_3d_position__getCPtr(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  FUN_07175a38(&stack0x0000000c,0);
  uVar2 = FUN_06fd2488();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    uVar2 = FUN_06fd2488(uVar2,*(undefined8 *)PTR_DAT_0927c3b0,*(long *)(unaff_x19 + 0x28),
                         *unaff_x21,0);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar2 = FUN_06fd2488(uVar2,*(undefined8 *)PTR_DAT_0927c3a0,*(long *)(unaff_x19 + 0x30),
                         *unaff_x21,0);
  }
  puVar1 = PTR_DAT_0927c3e8;
  plVar3 = *(long **)(unaff_x19 + 0x38);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar2 = FUN_06fd2168(uVar2,*(undefined8 *)puVar1,uVar4,0);
  }
  return uVar2;
}


