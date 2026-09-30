/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$DoWriteIndentSpaceAsync
ENTRY_POINT: 06705de8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_4;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextWriter__DoWriteIndentSpaceAsync(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (DAT_0897a992 == '\0') {
    FUN_03a8a718(PTR_DAT_0848acd8);
    DAT_0897a992 = '\x01';
  }
  puVar2 = PTR_DAT_084a8558;
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar1 = *unaff_x24;
  }
  *(undefined8 *)(unaff_x21 + 0x68) = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x30);
  thunk_FUN_03afed3c();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0670aaf0();
  if (unaff_x22 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar3 = thunk_FUN_03ac74bc();
    puVar2 = PTR_DAT_0848fa20;
  }
  else {
    if (unaff_x20 != 0) {
      if (*(int *)(unaff_x22 + 0x10) == 0) {
        thunk_FUN_03af1434(PTR_DAT_08488490);
        uVar3 = thunk_FUN_03ac74bc();
        uVar4 = thunk_FUN_03af1434(PTR_DAT_084a8430);
        FUN_066b6070(uVar3,uVar4,0);
      }
      else {
        if (0 < unaff_w19) {
          thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08491ea0);
          FUN_06721cf0();
          FUN_06705b84();
          return;
        }
        thunk_FUN_03af1434(PTR_DAT_08491280);
        uVar3 = thunk_FUN_03ac74bc();
        uVar4 = thunk_FUN_03af1434(PTR_DAT_08494068);
        uVar5 = thunk_FUN_03af1434(PTR_DAT_084a50e0);
        System_Threading_CancellationToken__get_IsCancellationRequested(uVar3,uVar4,uVar5,0);
      }
      goto FUN_06705fb0;
    }
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar3 = thunk_FUN_03ac74bc();
    puVar2 = PTR_DAT_084a0238;
  }
  uVar4 = thunk_FUN_03af1434(puVar2);
  FUN_066af6a0(uVar3,uVar4,0);
FUN_06705fb0:
  uVar4 = thunk_FUN_03af1434(PTR_DAT_084a8568);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,uVar4);
}


