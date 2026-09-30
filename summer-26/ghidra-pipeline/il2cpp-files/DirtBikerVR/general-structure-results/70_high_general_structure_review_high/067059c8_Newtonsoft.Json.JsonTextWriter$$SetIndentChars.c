/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$SetIndentChars
ENTRY_POINT: 067059c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_4;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextWriter__SetIndentChars(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  
  thunk_FUN_03ae8be4();
  if (DAT_0897a992 == '\0') {
    FUN_03a8a718(PTR_DAT_0848acd8);
    DAT_0897a992 = '\x01';
  }
  puVar1 = PTR_DAT_084a8558;
  lVar2 = *unaff_x24;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar2 = *unaff_x24;
  }
  *(undefined8 *)(unaff_x23 + 0x68) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
  thunk_FUN_03afed3c();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0670ab88();
  if ((unaff_x20 != (long *)0x0) && (unaff_x21 != 0)) {
    uVar3 = (**(code **)(*unaff_x20 + 0x1e8))();
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar4 = thunk_FUN_03ac74bc();
      uVar5 = thunk_FUN_03af1434(PTR_DAT_084a04f8);
      FUN_066b6070(uVar4,uVar5,0);
    }
    else {
      if (0 < unaff_w19) {
        FUN_06705b84();
        return;
      }
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar4 = thunk_FUN_03ac74bc();
      uVar5 = thunk_FUN_03af1434(PTR_DAT_08494068);
      uVar6 = thunk_FUN_03af1434(PTR_DAT_084a50e0);
      System_Threading_CancellationToken__get_IsCancellationRequested(uVar4,uVar5,uVar6,0);
    }
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084a8560);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,uVar5);
  }
  puVar1 = PTR_DAT_084939e0;
  if (unaff_x20 != (long *)0x0) {
    puVar1 = PTR_DAT_084a0238;
  }
  uVar5 = thunk_FUN_03af1434(puVar1);
  thunk_FUN_03af1434(PTR_DAT_08491298);
  uVar4 = thunk_FUN_03ac74bc();
  FUN_066af6a0(uVar4,uVar5,0);
  uVar5 = thunk_FUN_03af1434(PTR_DAT_084a8560);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar4,uVar5);
}


