/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_EqualityComparer
ENTRY_POINT: 058b7f14
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


long Newtonsoft_Json_JsonSerializer__set_EqualityComparer(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  
  FUN_0557d004();
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x30) = unaff_x21;
  thunk_FUN_0333a630();
  lVar1 = thunk_FUN_032a56a0(*unaff_x27);
  FUN_0557991c();
  uVar2 = thunk_FUN_032a56a0(*unaff_x25);
  FUN_0557ce7c();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    thunk_FUN_0333a630((undefined8 *)(lVar1 + 0x30),uVar2);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


