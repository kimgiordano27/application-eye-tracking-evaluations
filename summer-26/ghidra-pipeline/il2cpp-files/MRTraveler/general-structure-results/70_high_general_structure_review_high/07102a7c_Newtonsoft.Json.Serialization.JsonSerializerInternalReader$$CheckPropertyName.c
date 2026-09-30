/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 07102a7c
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


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(void)

{
  bool bVar1;
  int iVar2;
  int unaff_w19;
  int unaff_w21;
  long unaff_x23;
  
  FUN_03c8f898(PTR_DAT_08e9bbb8);
  *(undefined1 *)(unaff_x23 + 0x1c3) = 1;
  if (unaff_w21 == unaff_w19) {
    if (unaff_w21 == 0) {
      bVar1 = true;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_08e9bb60 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      iVar2 = FUN_070959cc();
      bVar1 = iVar2 == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


