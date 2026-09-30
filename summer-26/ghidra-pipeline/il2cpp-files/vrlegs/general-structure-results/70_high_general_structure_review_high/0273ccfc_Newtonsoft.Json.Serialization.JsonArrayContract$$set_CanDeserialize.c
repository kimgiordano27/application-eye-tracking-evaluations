/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$set_CanDeserialize
ENTRY_POINT: 0273ccfc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonArrayContract__set_CanDeserialize(long param_1)

{
  uint unaff_w19;
  long unaff_x20;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x3b8));
  *(undefined1 *)(unaff_x20 + 0x948) = 1;
  if ((unaff_w19 >> 0xf & 1) == 0) {
    return unaff_w19;
  }
  FUN_01876390(*(undefined8 *)PTR_DAT_03cc03b8);
                    /* WARNING: Subroutine does not return */
  FUN_0273b708();
}


