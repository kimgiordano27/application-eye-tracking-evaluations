/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParseValueAsync>d__8$$MoveNext
ENTRY_POINT: 066feda8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextReader_<ParseValueAsync>d__8__MoveNext(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  byte unaff_w23;
  byte unaff_w24;
  
  if (unaff_x22 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar3 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(PTR_DAT_08494058);
    uVar2 = thunk_FUN_03af1434(PTR_DAT_084a82b8);
    FUN_066b7574(uVar3,uVar4,uVar2,0);
  }
  else {
    if (unaff_w21 < 0) {
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar3 = thunk_FUN_03ac74bc();
      puVar1 = PTR_DAT_08486d40;
    }
    else {
      if (-1 < unaff_w20) {
        if (unaff_w20 <= *(int *)(unaff_x22 + 0x18) - unaff_w21) {
          *(long *)(unaff_x19 + 0x28) = unaff_x22;
          thunk_FUN_03afed3c((long *)(unaff_x19 + 0x28));
          *(int *)(unaff_x19 + 0x30) = unaff_w21;
          *(int *)(unaff_x19 + 0x34) = unaff_w21;
          *(int *)(unaff_x19 + 0x38) = unaff_w20 + unaff_w21;
          *(int *)(unaff_x19 + 0x3c) = unaff_w20 + unaff_w21;
          *(byte *)(unaff_x19 + 0x41) = unaff_w23 & 1;
          *(byte *)(unaff_x19 + 0x42) = unaff_w24 & 1;
          *(undefined1 *)(unaff_x19 + 0x40) = 0;
          *(undefined1 *)(unaff_x19 + 0x43) = 1;
          return;
        }
        thunk_FUN_03af1434(PTR_DAT_08488490);
        uVar3 = thunk_FUN_03ac74bc();
        uVar4 = thunk_FUN_03af1434(PTR_DAT_084914a8);
        FUN_066b6070(uVar3,uVar4,0);
        goto LAB_066feef4;
      }
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar3 = thunk_FUN_03ac74bc();
      puVar1 = PTR_DAT_084912a8;
    }
    uVar4 = thunk_FUN_03af1434(puVar1);
    uVar2 = thunk_FUN_03af1434(PTR_DAT_08491498);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar3,uVar4,uVar2,0);
  }
LAB_066feef4:
  uVar4 = thunk_FUN_03af1434(PTR_DAT_084a82c8);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,uVar4);
}


