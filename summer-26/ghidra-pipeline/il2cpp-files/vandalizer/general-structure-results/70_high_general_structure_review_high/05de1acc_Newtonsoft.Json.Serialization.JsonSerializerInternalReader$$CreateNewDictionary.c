/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 05de1acc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(long param_1)

{
  int in_w9;
  uint in_w10;
  uint in_w11;
  int *unaff_x19;
  uint *unaff_x20;
  
  do {
    if (in_w9 < *(int *)(param_1 + (long)(int)in_w11 * 4 + 0x20)) {
      *unaff_x20 = in_w11;
      if (in_w11 - 1 < in_w10) {
        *unaff_x19 = (in_w9 - *(int *)(param_1 + (long)(int)(in_w11 - 1) * 4 + 0x20)) + 1;
        return;
      }
      break;
    }
    in_w11 = in_w11 + 1;
  } while (in_w11 < in_w10);
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


