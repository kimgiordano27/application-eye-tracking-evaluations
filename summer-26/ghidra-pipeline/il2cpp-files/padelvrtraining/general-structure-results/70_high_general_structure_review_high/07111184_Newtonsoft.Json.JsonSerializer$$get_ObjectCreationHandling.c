/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ObjectCreationHandling
ENTRY_POINT: 07111184
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_ObjectCreationHandling(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x20 != 0) {
    puVar1 = (undefined8 *)(unaff_x19 + 0x128);
    uVar2 = FUN_0712dab4();
    *puVar1 = uVar2;
    thunk_FUN_03d1023c(puVar1,uVar2);
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


