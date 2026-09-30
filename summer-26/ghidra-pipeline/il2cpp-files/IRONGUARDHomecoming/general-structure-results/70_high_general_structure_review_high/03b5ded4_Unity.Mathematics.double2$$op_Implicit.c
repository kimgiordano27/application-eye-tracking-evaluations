/*
FUNCTION_NAME: Unity.Mathematics.double2$$op_Implicit
ENTRY_POINT: 03b5ded4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Unity_Mathematics_double2__op_Implicit(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000038;
  
  uVar3 = FUN_03b41740(*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x28),0);
                    /* try { // try from 03b5dee8 to 03c5deeb has its CatchHandler @ 03b5def0 */
  if (1 < *(uint *)(unaff_x22 + -8)) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b5de30 with catch @ 03b5deec
                       try { // try from 03b5deec to 03c5df1b has its CatchHandler @ 03b5dd24 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b5dee8 with catch @ 03b5def0
                        */
    *(undefined8 *)(unaff_x21 + 0x28) = uVar3;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b5ddb8 with catch @ 03b5def4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b5ddd4 with catch @ 03b5def8
                        */
    thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x28),uVar3);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b5ddf0 with catch @ 03b5df04
                        */
    if (2 < *(uint *)(unaff_x21 + 0x18)) {
                    /* try { // try from 03b5df1c to 03c5df1f has its CatchHandler @ 03b5df30 */
      *(undefined8 *)(unaff_x21 + 0x30) = *(undefined8 *)StringLiteral_12462;
      thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x30));
      uVar3 = FUN_03b5cc20();
                    /* catch() { ... } // from try @ 03b5df1c with catch @ 03b5df30 */
      if (3 < *(uint *)(unaff_x21 + 0x18)) {
                    /* try { // try from 03b5df3c to 03c5df47 has its CatchHandler @ 03b5df5c */
        *(undefined8 *)(unaff_x21 + 0x38) = uVar3;
                    /* try { // try from 03b5df48 to 03c5df53 has its CatchHandler @ 03b5dd24 */
        thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x38),uVar3);
        if (4 < *(uint *)(unaff_x21 + 0x18)) {
          *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)StringLiteral_12463;
          thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x40));
          puVar1 = Method_System_Globalization_CompareInfo_IndexOfCore__;
          in_stack_00000038 = *(undefined4 *)(unaff_x19 + 0xd8);
          uVar3 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_System_Globalization_CompareInfo_IndexOfCore__,
                                     &stack0x00000038);
          uVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1);
          uVar3 = FUN_0340f2f0(*(undefined8 *)StringLiteral_12461,uVar3,uVar4,0);
          if (5 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined8 *)(unaff_x21 + 0x48) = uVar3;
            thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x48),uVar3);
            if (6 < *(uint *)(unaff_x21 + 0x18)) {
              *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)StringLiteral_12464;
              thunk_FUN_01f51358();
              uVar3 = FUN_0340efe8();
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) ==
                  0) {
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
                while (uVar5 = FUN_02c7bc78(&stack0x00000018,*(undefined8 *)puVar1),
                      (uVar5 & 1) != 0) {
                  FUN_02c7bca4(&stack0x00000018,*(undefined8 *)puVar2);
                }
                FUN_02c7bc74(&stack0x00000018,*(undefined8 *)Method_System_IO_FileInfo_get_Length__)
                ;
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


