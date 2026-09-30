/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_EqualityComparer
ENTRY_POINT: 050dcb18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__get_EqualityComparer(void)

{
  undefined2 uVar1;
  long unaff_x20;
  int iVar2;
  undefined2 *unaff_x22;
  int unaff_w25;
  int unaff_w26;
  
  iVar2 = *(int *)(unaff_x20 + 0x10) + -1;
  if (-1 < iVar2) {
    do {
      unaff_x22 = unaff_x22 + -1;
      uVar1 = FUN_04f69818();
      iVar2 = iVar2 + -1;
      *unaff_x22 = uVar1;
    } while (iVar2 != -1);
  }
  return unaff_w25 <= unaff_w26;
}


