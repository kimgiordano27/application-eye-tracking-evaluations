/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Binder
ENTRY_POINT: 07a4fa3c
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Binder(ulong param_1,char *param_2)

{
  char cVar1;
  int unaff_w23;
  ushort *unaff_x24;
  long unaff_x26;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f40bf0);
    FUN_04447ba8(PTR_DAT_09f3aff0);
    *(undefined1 *)(unaff_x26 + 0x1cd) = 1;
  }
  cVar1 = *param_2;
  if (((0 < unaff_w23) && (cVar1 < '\0')) && ((*unaff_x24 | 0x20) == 0x78)) {
    if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07a3a364(cVar1);
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a3a604((int)cVar1);
  return;
}


