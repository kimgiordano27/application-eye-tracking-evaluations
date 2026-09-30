/*
FUNCTION_NAME: System.Array$$IndexOfImpl<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03aa8fe8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint System_Array__IndexOfImpl<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  long in_stack_000000f0;
  
  if (param_1 == 0) {
    FUN_02e3ca1c(PTR_DAT_06a6e340);
    if (*(long *)(unaff_x22 + 0x38) == 0) {
      FUN_02e756e8();
    }
  }
  lVar3 = in_stack_000000f0;
  if (*(long *)(param_2 + 0xa0) != 0) {
    FUN_04d95184(*(long *)(param_2 + 0xa0),unaff_w24,in_stack_000000f0,
                 *(undefined8 *)PTR_DAT_06a6e340);
    uVar6 = unaff_x28[1];
    uVar5 = *unaff_x28;
    uVar1 = *(undefined4 *)(unaff_x28 + 2);
    uVar8 = unaff_x27[1];
    uVar7 = *unaff_x27;
    uVar2 = *(undefined4 *)(unaff_x27 + 2);
    FUN_063d3ea4(param_2,0);
    if (lVar3 != 0) {
      in_stack_00000050 = uVar7;
      in_stack_00000058 = uVar8;
      in_stack_00000060 = uVar2;
      in_stack_00000070 = uVar5;
      in_stack_00000078 = uVar6;
      in_stack_00000080 = uVar1;
      uVar4 = FUN_049f9848(lVar3,param_3,unaff_w24,&stack0x00000070,&stack0x00000050,unaff_w23,
                           unaff_w21);
      FUN_03aab538(param_2,lVar3,*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x18));
      return uVar4 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


