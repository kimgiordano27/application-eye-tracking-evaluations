/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Culture
ENTRY_POINT: 07a4fd68
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Culture(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    if (DAT_0a51d028 == '\0') {
      FUN_04447ba8(PTR_DAT_09f28738);
      DAT_0a51d028 = '\x01';
    }
    uVar2 = FUN_078b1c78(param_1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_079b8cc0(param_2,0);
    FUN_07a4fbd0(uVar2,uVar1,7,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 07a4fddc to 07b4fde3 has its CatchHandler @ 07a50100 */
  FUN_07a4fbac(0x30);
}


