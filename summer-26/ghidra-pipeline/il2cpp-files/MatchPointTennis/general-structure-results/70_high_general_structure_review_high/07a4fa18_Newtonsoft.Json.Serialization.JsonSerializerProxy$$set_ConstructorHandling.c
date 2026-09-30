/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ConstructorHandling
ENTRY_POINT: 07a4fa18
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ConstructorHandling
               (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               ushort *param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  
  if ((DAT_0a5251cd & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f40bf0);
    FUN_04447ba8(PTR_DAT_09f3aff0);
    DAT_0a5251cd = 1;
  }
  cVar1 = *param_1;
  if (((0 < (int)param_6) && (cVar1 < '\0')) && ((*param_5 | 0x20) == 0x78)) {
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07a3a364(cVar1,param_5,param_6,param_7,param_2,param_3,param_4,0);
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a3a604((int)cVar1,param_5,param_6,param_7,param_2,param_3,param_4,0);
  return;
}


