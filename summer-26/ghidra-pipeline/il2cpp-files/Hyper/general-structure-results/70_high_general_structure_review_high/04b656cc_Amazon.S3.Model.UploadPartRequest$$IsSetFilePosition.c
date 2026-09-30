/*
FUNCTION_NAME: Amazon.S3.Model.UploadPartRequest$$IsSetFilePosition
ENTRY_POINT: 04b656cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Amazon_S3_Model_UploadPartRequest__IsSetFilePosition(void)

{
  bool in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined4 in_stack_00000080;
  
  if (!in_ZR) {
    uVar1 = thunk_FUN_049ae08c(PTR_DAT_0ac131d8);
    uVar1 = thunk_FUN_04983b98(uVar1,&stack0x00000080);
    uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac13310);
    uVar1 = FUN_08bc9f74(uVar2,uVar1,0);
    thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
    uVar2 = thunk_FUN_04983f60();
    FUN_08cc420c(uVar2,uVar1,0);
    uVar1 = thunk_FUN_049ae08c(PTR_DAT_0ac13318);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar2,uVar1);
  }
  FUN_04b640a4();
  if (unaff_x19 != 0) {
    FUN_098af30c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


