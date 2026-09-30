/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Context
ENTRY_POINT: 07112ac8
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Context(void)

{
  char cVar1;
  undefined1 in_w8;
  int unaff_w23;
  ushort *unaff_x24;
  char *unaff_x25;
  long unaff_x26;
  
  *(undefined1 *)(unaff_x26 + 0x248) = in_w8;
  cVar1 = *unaff_x25;
  if (((0 < unaff_w23) && (cVar1 < '\0')) && ((*unaff_x24 | 0x20) == 0x78)) {
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_070fc9ac(cVar1);
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_070fcc4c((int)cVar1);
  return;
}


