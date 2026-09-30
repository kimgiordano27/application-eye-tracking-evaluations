/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$SplitSenderReliableAndIncoming
ENTRY_POINT: 06802680
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Normal_Realtime_SessionCaptureFileStream__SplitSenderReliableAndIncoming(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 in_w8;
  undefined4 *unaff_x19;
  long *unaff_x22;
  undefined8 uStack0000000000000020;
  
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *unaff_x19 = in_w8;
  uStack0000000000000020 = param_1;
  uVar3 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
  puVar2 = PTR_DAT_084adaf8;
  iVar1 = *(int *)(*unaff_x22 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
  return;
}


