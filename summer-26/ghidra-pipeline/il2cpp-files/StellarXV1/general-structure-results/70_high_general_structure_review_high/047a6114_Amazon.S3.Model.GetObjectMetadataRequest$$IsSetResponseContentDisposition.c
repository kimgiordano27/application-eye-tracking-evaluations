/*
FUNCTION_NAME: Amazon.S3.Model.GetObjectMetadataRequest$$IsSetResponseContentDisposition
ENTRY_POINT: 047a6114
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Amazon_S3_Model_GetObjectMetadataRequest__IsSetResponseContentDisposition(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000010;
    thunk_FUN_040ec700(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_049b72d0(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    uVar3 = FUN_06c9cdb4(&stack0x00000010,*(undefined8 *)PTR_DAT_092a94a8);
    puVar2 = PTR_DAT_092a9290;
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_067119b4(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
  }
  return;
}


