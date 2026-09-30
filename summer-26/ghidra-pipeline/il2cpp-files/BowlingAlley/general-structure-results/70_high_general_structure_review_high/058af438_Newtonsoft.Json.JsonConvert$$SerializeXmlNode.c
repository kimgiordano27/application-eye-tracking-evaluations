/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 058af438
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeXmlNode(void)

{
  byte bVar1;
  long *in_x9;
  long *unaff_x19;
  
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *in_x9)) {
    if (unaff_x19[8] != 0) {
      FUN_058a04ec();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d618c();
}


