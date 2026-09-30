/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 055d3428
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(ulong param_1)

{
  long *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a83208);
    *(undefined1 *)(unaff_x20 + 0x5e7) = 1;
  }
  if (unaff_x19 != (long *)0x0) {
    if (*unaff_x19 != *(long *)PTR_DAT_06a83208) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3d044();
    }
    if (unaff_x19[0xb] != 0) {
      FUN_055d02d8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


