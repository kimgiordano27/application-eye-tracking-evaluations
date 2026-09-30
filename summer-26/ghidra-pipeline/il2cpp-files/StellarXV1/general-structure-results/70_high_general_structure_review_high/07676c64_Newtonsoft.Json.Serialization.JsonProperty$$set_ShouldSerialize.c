/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$set_ShouldSerialize
ENTRY_POINT: 07676c64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonProperty__set_ShouldSerialize
               (undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_098921be & 1) == 0) {
    FUN_04077588(PTR_DAT_092d6630);
    DAT_098921be = 1;
  }
  uVar1 = *param_1;
  if (DAT_0988ae54 == '\0') {
    FUN_04077588(PTR_DAT_092b9c88);
    DAT_0988ae54 = '\x01';
  }
  puVar2 = PTR_DAT_092d6630;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_074e3264(param_2,0);
    uVar4 = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_07674d4c(uVar1,uVar3,uVar4,0);
  return;
}


