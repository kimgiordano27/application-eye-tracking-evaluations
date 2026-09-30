/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 04f2b1b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
               (long param_1,long param_2,int param_3)

{
  bool in_ZR;
  bool in_CY;
  undefined1 in_w8;
  
  *(undefined1 *)(param_2 + 0xd) = in_w8;
  if (in_CY && !in_ZR) {
    *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(param_1 + 0xe);
    if (param_3 != 0xf) {
      *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(param_1 + 0xf);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


