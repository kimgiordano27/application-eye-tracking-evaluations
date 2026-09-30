/*
FUNCTION_NAME: Renci.SshNet.Sftp.SftpFileStream$$set_Position
ENTRY_POINT: 07644c6c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Renci_SshNet_Sftp_SftpFileStream__set_Position(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x22 + 0x50),param_1);
  FUN_07c1da04();
  thunk_FUN_03d1e194(PTR_DAT_0922d770);
  uVar1 = FUN_071af138();
  if (7 < *(uint *)(unaff_x22 + 0x18)) {
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
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


