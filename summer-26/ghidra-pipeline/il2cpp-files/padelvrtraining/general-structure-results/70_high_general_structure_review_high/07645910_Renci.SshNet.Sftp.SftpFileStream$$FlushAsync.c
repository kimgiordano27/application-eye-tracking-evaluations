/*
FUNCTION_NAME: Renci.SshNet.Sftp.SftpFileStream$$FlushAsync
ENTRY_POINT: 07645910
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_4;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076459a4) */

undefined8 Renci_SshNet_Sftp_SftpFileStream__FlushAsync(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  char cStack000000000000000c;
  
  uVar1 = Renci_SshNet_Session__Reset(param_1,param_2,0);
  if ((uVar1 & 1) != 0) {
    FUN_07620134();
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  cStack000000000000000c = '\0';
  FUN_071e78b0(uVar2,&stack0x0000000c,0);
  *(undefined4 *)(unaff_x20 + 0x1c) = 3;
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    FUN_07c205e8(*(long *)(unaff_x20 + 0x58),1,0);
  }
  *(undefined4 *)(unaff_x20 + 0x1c) = 0;
  if (cStack000000000000000c != '\0') {
    thunk_FUN_03d180a8(uVar2,0);
  }
  return 1;
}


