/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 0397c6e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
    thunk_FUN_0333a630();
    *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
    thunk_FUN_0333a630();
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    uVar1 = thunk_FUN_032a56a0();
    FUN_055ca4d8();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


