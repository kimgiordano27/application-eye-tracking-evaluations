/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Converters
ENTRY_POINT: 05e2a100
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Converters(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_05d97a28(param_2,0);
  if (param_1 != 0) {
    if (DAT_07ed8f51 == '\0') {
      FUN_03642964(PTR_DAT_079ffcf8);
      DAT_07ed8f51 = '\x01';
    }
    uVar2 = FUN_05c94ef4(param_1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_05d97594(0);
    FUN_05e2a19c(uVar2,uVar1,param_2,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(0x30);
}


