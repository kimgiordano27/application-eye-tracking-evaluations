/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$DoWriteRawAsync
ENTRY_POINT: 06705e6c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextWriter__DoWriteRawAsync(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  int unaff_w19;
  
  if (in_w8 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(PTR_DAT_084a8430);
    FUN_066b6070(uVar1,uVar2,0);
  }
  else {
    if (0 < unaff_w19) {
      thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08491ea0);
      FUN_06721cf0();
      FUN_06705b84();
      return;
    }
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(PTR_DAT_08494068);
    uVar3 = thunk_FUN_03af1434(PTR_DAT_084a50e0);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar1,uVar2,uVar3,0);
  }
  uVar2 = thunk_FUN_03af1434(PTR_DAT_084a8568);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1,uVar2);
}


