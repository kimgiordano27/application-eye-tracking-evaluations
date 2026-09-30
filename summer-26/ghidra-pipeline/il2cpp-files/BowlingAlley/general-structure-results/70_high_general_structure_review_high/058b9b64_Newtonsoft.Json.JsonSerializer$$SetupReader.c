/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SetupReader
ENTRY_POINT: 058b9b64
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


void Newtonsoft_Json_JsonSerializer__SetupReader(long param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar1 = FUN_058e8e08(unaff_w19,0);
  if (lVar1 != 0) {
    *unaff_x20 = *(undefined8 *)(lVar1 + 0x48);
    thunk_FUN_0333a630();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


