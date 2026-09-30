/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceLoopHandling
ENTRY_POINT: 0170ade4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ReferenceLoopHandling(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  if (unaff_x22 != 0) {
    uVar1 = FUN_015fd038();
    FUN_01605f64(0,uVar1,*(undefined4 *)(unaff_x22 + 0x10),0);
    FUN_0170a734();
    return;
  }
  FUN_01605f64(0,0,0,0);
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


