/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_SerializationBinder
ENTRY_POINT: 07112a88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_SerializationBinder
               (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               ushort *param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  long unaff_x26;
  
  if ((*(byte *)(unaff_x26 + 0x248) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ea1b30);
    FUN_03c8f898(PTR_DAT_08e9bbb8);
    *(undefined1 *)(unaff_x26 + 0x248) = 1;
  }
  cVar1 = *param_1;
  if (((0 < (int)param_6) && (cVar1 < '\0')) && ((*param_5 | 0x20) == 0x78)) {
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_070fc9ac(cVar1,param_5,param_6,param_7,param_2,param_3,param_4,0);
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_070fcc4c((int)cVar1,param_5,param_6,param_7,param_2,param_3,param_4,0);
  return;
}


