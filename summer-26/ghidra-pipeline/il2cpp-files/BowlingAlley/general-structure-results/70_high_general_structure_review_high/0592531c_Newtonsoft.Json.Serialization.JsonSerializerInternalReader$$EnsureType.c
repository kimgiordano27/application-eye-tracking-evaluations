/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 0592531c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(void)

{
  int iVar1;
  bool bVar2;
  undefined1 in_w8;
  int iVar3;
  int unaff_w19;
  short unaff_w20;
  short *unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x39b) = in_w8;
  if (unaff_w19 < 1) {
    bVar2 = false;
  }
  else if (*unaff_x21 == unaff_w20) {
    bVar2 = true;
  }
  else {
    iVar1 = 1;
    do {
      iVar3 = iVar1;
      if (unaff_w19 == iVar3) break;
      iVar1 = iVar3 + 1;
    } while (unaff_x21[iVar3] != unaff_w20);
    bVar2 = iVar3 < unaff_w19;
  }
  return bVar2;
}


