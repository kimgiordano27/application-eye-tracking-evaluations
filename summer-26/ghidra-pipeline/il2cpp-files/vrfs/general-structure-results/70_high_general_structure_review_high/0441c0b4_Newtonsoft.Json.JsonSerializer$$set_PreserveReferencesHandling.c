/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_PreserveReferencesHandling
ENTRY_POINT: 0441c0b4
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__set_PreserveReferencesHandling(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e406b0);
  if (lVar1 != 0) {
    FUN_02d76b34(lVar1,0);
    FUN_01600498();
    return *unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


