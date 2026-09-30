/*
FUNCTION_NAME: Renci.SshNet.Sftp.SftpFileStream$$get_Position
ENTRY_POINT: 07644bf8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_2
*/


void Renci_SshNet_Sftp_SftpFileStream__get_Position(undefined8 param_1)

{
  bool in_ZR;
  bool in_CY;
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000038;
  
                    /* try { // try from 07644bf8 to 07744c3f has its CatchHandler @ 07644970 */
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x21 + 0x40) = param_1;
    thunk_FUN_03d1023c();
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_00000038._4_4_ = (**(code **)(*unaff_x20 + 0x1f8))();
    uVar1 = FUN_07175a38((long)&stack0x00000038 + 4,0);
    if (5 < *(uint *)(unaff_x21 + 0x18)) {
                    /* try { // try from 07644c40 to 07744c4f has its CatchHandler @ 07644c50 */
      *(undefined8 *)(unaff_x21 + 0x48) = uVar1;
      thunk_FUN_03d1023c((undefined8 *)(unaff_x21 + 0x48),uVar1);
                    /* catch() { ... } // from try @ 07644be0 with catch @ 07644c50
                       catch() { ... } // from try @ 07644c40 with catch @ 07644c50 */
                    /* try { // try from 07644c54 to 07744c57 has its CatchHandler @ 07644c60 */
                    /* try { // try from 07644c58 to 07744c63 has its CatchHandler @ 07644970 */
      uVar1 = thunk_FUN_03d1e194(PTR_DAT_0922d7d8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07644c54 with catch @ 07644c60
                        */
      if (6 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined8 *)(unaff_x21 + 0x50) = uVar1;
        thunk_FUN_03d1023c((undefined8 *)(unaff_x21 + 0x50),uVar1);
        FUN_07c1da04();
        thunk_FUN_03d1e194(PTR_DAT_0922d770);
        uVar1 = FUN_071af138();
        if (7 < *(uint *)(unaff_x21 + 0x18)) {
          *(undefined8 *)(unaff_x21 + 0x58) = uVar1;
          thunk_FUN_03d1023c((undefined8 *)(unaff_x21 + 0x58),uVar1);
          uVar1 = thunk_FUN_03d1e194(PTR_DAT_091d8e70);
          if (8 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined8 *)(unaff_x21 + 0x60) = uVar1;
            thunk_FUN_03d1023c((undefined8 *)(unaff_x21 + 0x60),uVar1);
            uVar1 = (**(code **)(*unaff_x20 + 0x188))();
            if (9 < *(uint *)(unaff_x21 + 0x18)) {
              *(undefined8 *)(unaff_x21 + 0x68) = uVar1;
              thunk_FUN_03d1023c((undefined8 *)(unaff_x21 + 0x68),uVar1);
              uVar1 = thunk_FUN_03d1e194(PTR_DAT_091a29d8);
              if (10 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined8 *)(unaff_x21 + 0x70) = uVar1;
                thunk_FUN_03d1023c((undefined8 *)(unaff_x21 + 0x70),uVar1);
                uVar1 = (**(code **)(*unaff_x20 + 0x168))();
                if (0xb < *(uint *)(unaff_x21 + 0x18)) {
                  *(undefined8 *)(unaff_x21 + 0x78) = uVar1;
                  thunk_FUN_03d1023c();
                  FUN_06fd2590();
                  FUN_07620134();
                  FUN_0762014c();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


