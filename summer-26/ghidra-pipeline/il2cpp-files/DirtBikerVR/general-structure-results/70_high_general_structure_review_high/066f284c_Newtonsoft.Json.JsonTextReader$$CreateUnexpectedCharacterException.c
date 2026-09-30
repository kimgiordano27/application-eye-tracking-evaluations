/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$CreateUnexpectedCharacterException
ENTRY_POINT: 066f284c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x740) = 1;
  FUN_0679343c();
  if (-1 < (int)unaff_w20) {
    if (unaff_w20 < 0xb) {
      unaff_w20 = 10;
    }
    uVar1 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x10),uVar1);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    return;
  }
  thunk_FUN_03af1434(PTR_DAT_08491280);
  uVar1 = thunk_FUN_03ac74bc();
  uVar2 = thunk_FUN_03af1434(PTR_DAT_084946f8);
  uVar3 = thunk_FUN_03af1434(PTR_DAT_08491498);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar1,uVar2,uVar3,0);
  uVar2 = thunk_FUN_03af1434(PTR_DAT_084a7e48);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1,uVar2);
}


