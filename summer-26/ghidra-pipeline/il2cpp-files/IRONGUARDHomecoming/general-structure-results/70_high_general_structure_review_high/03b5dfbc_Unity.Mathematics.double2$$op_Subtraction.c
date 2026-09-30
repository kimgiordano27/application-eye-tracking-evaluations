/*
FUNCTION_NAME: Unity.Mathematics.double2$$op_Subtraction
ENTRY_POINT: 03b5dfbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Unity_Mathematics_double2__op_Subtraction(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar3 = FUN_0340f2f0(*param_1);
  if (5 < *(uint *)(unaff_x22 + -0x28)) {
    *(undefined8 *)(unaff_x21 + 0x48) = uVar3;
    thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x48),uVar3);
    if (6 < *(uint *)(unaff_x21 + 0x18)) {
      *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)StringLiteral_12464;
      thunk_FUN_01f51358();
      uVar3 = FUN_0340efe8();
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
      }
      FUN_0403ed64(uVar3,0);
      *(undefined4 *)(unaff_x19 + 0xd8) = unaff_w20;
      if (0 < *(int *)(unaff_x19 + 0x98)) {
        _in_stack_00000008 = FUN_03b5cd90();
        FUN_02617978(&stack0x00000018,&stack0x00000008,
                     *(undefined8 *)Method_System_IO_FileStream__ctor__);
        puVar2 = Method_System_IO_FileStream__ctor__;
        puVar1 = Method_System_IO_FileStatus_EnsureStatInitialized__;
        while (uVar4 = FUN_02c7bc78(&stack0x00000018,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
          FUN_02c7bca4(&stack0x00000018,*(undefined8 *)puVar2);
        }
        FUN_02c7bc74(&stack0x00000018,*(undefined8 *)Method_System_IO_FileInfo_get_Length__);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


